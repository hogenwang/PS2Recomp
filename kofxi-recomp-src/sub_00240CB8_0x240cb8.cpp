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

// Function: sub_00240CB8
// Address: 0x240cb8 - 0x240d78
void sub_00240CB8_0x240cb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00240CB8_0x240cb8");
#endif

    switch (ctx->pc) {
        case 0x240d60u: goto label_240d60;
        default: break;
    }

    ctx->pc = 0x240cb8u;

    // 0x240cb8: 0x308700ff  andi        $a3, $a0, 0xFF
    ctx->pc = 0x240cb8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x240cbc: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x240cbcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x240cc0: 0x24e3ffff  addiu       $v1, $a3, -0x1
    ctx->pc = 0x240cc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x240cc4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x240cc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x240cc8: 0x2c620008  sltiu       $v0, $v1, 0x8
    ctx->pc = 0x240cc8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x240ccc: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x240CCCu;
    {
        const bool branch_taken_0x240ccc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x240CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240CCCu;
        // 0x240cd0: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240ccc) {
            ctx->pc = 0x240D44u;
            goto label_240d44;
        }
    }
    ctx->pc = 0x240CD4u;
    // 0x240cd4: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x240cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x240cd8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x240cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x240cdc: 0x24426320  addiu       $v0, $v0, 0x6320
    ctx->pc = 0x240cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25376));
    // 0x240ce0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x240ce0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x240ce4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x240ce4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x240ce8: 0x800008  jr          $a0
    ctx->pc = 0x240CE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x240CF0u: goto label_240cf0;
            case 0x240CFCu: goto label_240cfc;
            case 0x240D08u: goto label_240d08;
            case 0x240D14u: goto label_240d14;
            case 0x240D20u: goto label_240d20;
            case 0x240D2Cu: goto label_240d2c;
            case 0x240D38u: goto label_240d38;
            case 0x240D44u: goto label_240d44;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x240CE8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x240CF0u;
label_240cf0:
    // 0x240cf0: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x240cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x240cf4: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x240CF4u;
    {
        const bool branch_taken_0x240cf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x240CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240CF4u;
        // 0x240cf8: 0x244262b8  addiu       $v0, $v0, 0x62B8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25272));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240cf4) {
            ctx->pc = 0x240D64u;
            goto label_240d64;
        }
    }
    ctx->pc = 0x240CFCu;
label_240cfc:
    // 0x240cfc: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x240cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x240d00: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x240D00u;
    {
        const bool branch_taken_0x240d00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x240D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240D00u;
        // 0x240d04: 0x244262c0  addiu       $v0, $v0, 0x62C0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240d00) {
            ctx->pc = 0x240D64u;
            goto label_240d64;
        }
    }
    ctx->pc = 0x240D08u;
label_240d08:
    // 0x240d08: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x240d08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x240d0c: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x240D0Cu;
    {
        const bool branch_taken_0x240d0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x240D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240D0Cu;
        // 0x240d10: 0x244262d0  addiu       $v0, $v0, 0x62D0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25296));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240d0c) {
            ctx->pc = 0x240D64u;
            goto label_240d64;
        }
    }
    ctx->pc = 0x240D14u;
label_240d14:
    // 0x240d14: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x240d14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x240d18: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x240D18u;
    {
        const bool branch_taken_0x240d18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x240D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240D18u;
        // 0x240d1c: 0x244262e0  addiu       $v0, $v0, 0x62E0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25312));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240d18) {
            ctx->pc = 0x240D64u;
            goto label_240d64;
        }
    }
    ctx->pc = 0x240D20u;
label_240d20:
    // 0x240d20: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x240d20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x240d24: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x240D24u;
    {
        const bool branch_taken_0x240d24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x240D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240D24u;
        // 0x240d28: 0x244262f0  addiu       $v0, $v0, 0x62F0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25328));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240d24) {
            ctx->pc = 0x240D64u;
            goto label_240d64;
        }
    }
    ctx->pc = 0x240D2Cu;
label_240d2c:
    // 0x240d2c: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x240d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x240d30: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x240D30u;
    {
        const bool branch_taken_0x240d30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x240D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240D30u;
        // 0x240d34: 0x244262f8  addiu       $v0, $v0, 0x62F8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25336));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240d30) {
            ctx->pc = 0x240D64u;
            goto label_240d64;
        }
    }
    ctx->pc = 0x240D38u;
label_240d38:
    // 0x240d38: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x240d38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x240d3c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x240D3Cu;
    {
        const bool branch_taken_0x240d3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x240D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240D3Cu;
        // 0x240d40: 0x24426308  addiu       $v0, $v0, 0x6308 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25352));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240d3c) {
            ctx->pc = 0x240D64u;
            goto label_240d64;
        }
    }
    ctx->pc = 0x240D44u;
label_240d44:
    // 0x240d44: 0x3c1001c1  lui         $s0, 0x1C1
    ctx->pc = 0x240d44u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)449 << 16));
    // 0x240d48: 0x3c06003f  lui         $a2, 0x3F
    ctx->pc = 0x240d48u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)63 << 16));
    // 0x240d4c: 0x2610ad80  addiu       $s0, $s0, -0x5280
    ctx->pc = 0x240d4cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294946176));
    // 0x240d50: 0x24c66230  addiu       $a2, $a2, 0x6230
    ctx->pc = 0x240d50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 25136));
    // 0x240d54: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x240d54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x240d58: 0xc043e24  jal         func_10F890
    ctx->pc = 0x240D58u;
    SET_GPR_U32(ctx, 31, 0x240D60u);
    ctx->pc = 0x240D5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x240D58u;
    // 0x240d5c: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F890u, 0x240D58u, 0x240D60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240D60u;
label_240d60:
    // 0x240d60: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x240d60u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_240d64:
    // 0x240d64: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x240d64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x240d68: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x240d68u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x240d6c: 0x3e00008  jr          $ra
    ctx->pc = 0x240D6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x240D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240D6Cu;
        // 0x240d70: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x240D6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x240D74u;
    // 0x240d74: 0x0  nop
    ctx->pc = 0x240d74u;
    // NOP
    if (ctx->pc == 0x240d74u) { ctx->pc = 0x240d78u; }
}
