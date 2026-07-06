#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00286C70
// Address: 0x286c70 - 0x286d18
void sub_00286C70_0x286c70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00286C70_0x286c70");
#endif

    switch (ctx->pc) {
        case 0x286cb0u: goto label_286cb0;
        case 0x286ce0u: goto label_286ce0;
        default: break;
    }

    ctx->pc = 0x286c70u;

    // 0x286c70: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x286c70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x286c74: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x286c74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x286c78: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x286c78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x286c7c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x286c7cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286c80: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x286c80u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286c84: 0x16110003  bne         $s0, $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x286C84u;
    {
        const bool branch_taken_0x286c84 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 17));
        ctx->pc = 0x286C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286C84u;
        // 0x286c88: 0xffbf0020  sd          $ra, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286c84) {
            ctx->pc = 0x286C94u;
            goto label_286c94;
        }
    }
    ctx->pc = 0x286C8Cu;
    // 0x286c8c: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x286C8Cu;
    {
        const bool branch_taken_0x286c8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x286C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286C8Cu;
        // 0x286c90: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286c8c) {
            ctx->pc = 0x286D04u;
            goto label_286d04;
        }
    }
    ctx->pc = 0x286C94u;
label_286c94:
    // 0x286c94: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x286c94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x286c98: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x286c98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x286c9c: 0x45102a  slt         $v0, $v0, $a1
    ctx->pc = 0x286c9cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x286ca0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x286CA0u;
    {
        const bool branch_taken_0x286ca0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x286ca0) {
            ctx->pc = 0x286CC0u;
            goto label_286cc0;
        }
    }
    ctx->pc = 0x286CA8u;
    // 0x286ca8: 0xc0a1ada  jal         func_286B68
    ctx->pc = 0x286CA8u;
    SET_GPR_U32(ctx, 31, 0x286CB0u);
    ctx->pc = 0x286CACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x286CA8u;
    // 0x286cac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x286B68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x286B68u, 0x286CA8u, 0x286CB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x286CB0u;
label_286cb0:
    // 0x286cb0: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x286CB0u;
    {
        const bool branch_taken_0x286cb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x286cb0) {
            ctx->pc = 0x286CB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x286CB0u;
            // 0x286cb4: 0x8e250004  lw          $a1, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x286CD0u;
            goto label_286cd0;
        }
    }
    ctx->pc = 0x286CB8u;
    // 0x286cb8: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x286CB8u;
    {
        const bool branch_taken_0x286cb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x286CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286CB8u;
        // 0x286cbc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286cb8) {
            ctx->pc = 0x286D04u;
            goto label_286d04;
        }
    }
    ctx->pc = 0x286CC0u;
label_286cc0:
    // 0x286cc0: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x286CC0u;
    {
        const bool branch_taken_0x286cc0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x286CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286CC0u;
        // 0x286cc4: 0x530c0  sll         $a2, $a1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286cc0) {
            ctx->pc = 0x286CD4u;
            goto label_286cd4;
        }
    }
    ctx->pc = 0x286CC8u;
    // 0x286cc8: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x286CC8u;
    {
        const bool branch_taken_0x286cc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x286CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286CC8u;
        // 0x286ccc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286cc8) {
            ctx->pc = 0x286D04u;
            goto label_286d04;
        }
    }
    ctx->pc = 0x286CD0u;
label_286cd0:
    // 0x286cd0: 0x530c0  sll         $a2, $a1, 3
    ctx->pc = 0x286cd0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_286cd4:
    // 0x286cd4: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x286cd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x286cd8: 0xc049c48  jal         func_127120
    ctx->pc = 0x286CD8u;
    SET_GPR_U32(ctx, 31, 0x286CE0u);
    ctx->pc = 0x286CDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x286CD8u;
    // 0x286cdc: 0x8e250000  lw          $a1, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127120u, 0x286CD8u, 0x286CE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x286CE0u;
label_286ce0:
    // 0x286ce0: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x286ce0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x286ce4: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x286CE4u;
    {
        const bool branch_taken_0x286ce4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x286CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286CE4u;
        // 0x286ce8: 0xae030004  sw          $v1, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286ce4) {
            ctx->pc = 0x286CF8u;
            goto label_286cf8;
        }
    }
    ctx->pc = 0x286CECu;
    // 0x286cec: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x286cecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x286cf0: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x286CF0u;
    {
        const bool branch_taken_0x286cf0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x286cf0) {
            ctx->pc = 0x286CF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x286CF0u;
            // 0x286cf4: 0xfc400000  sd          $zero, 0x0($v0) (Delay Slot)
            WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x286CF8u;
            goto label_286cf8;
        }
    }
    ctx->pc = 0x286CF8u;
label_286cf8:
    // 0x286cf8: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x286cf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x286cfc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x286cfcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286d00: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x286d00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
label_286d04:
    // 0x286d04: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x286d04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x286d08: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x286d08u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x286d0c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x286d0cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x286d10: 0x3e00008  jr          $ra
    ctx->pc = 0x286D10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x286D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286D10u;
        // 0x286d14: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x286D10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x286D18u;
}
