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

// Function: sub_00286D18
// Address: 0x286d18 - 0x286da8
void sub_00286D18_0x286d18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00286D18_0x286d18");
#endif

    switch (ctx->pc) {
        case 0x286d30u: goto label_286d30;
        case 0x286d54u: goto label_286d54;
        case 0x286d70u: goto label_286d70;
        default: break;
    }

    ctx->pc = 0x286d18u;

    // 0x286d18: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x286d18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x286d1c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x286d1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x286d20: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x286d20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x286d24: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x286d24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x286d28: 0xc0a1a02  jal         func_286808
    ctx->pc = 0x286D28u;
    SET_GPR_U32(ctx, 31, 0x286D30u);
    ctx->pc = 0x286D2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x286D28u;
    // 0x286d2c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x286808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x286808u, 0x286D28u, 0x286D30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x286D30u;
label_286d30:
    // 0x286d30: 0x24440007  addiu       $a0, $v0, 0x7
    ctx->pc = 0x286d30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 7));
    // 0x286d34: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x286d34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x286d38: 0x2442000e  addiu       $v0, $v0, 0xE
    ctx->pc = 0x286d38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14));
    // 0x286d3c: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x286d3cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x286d40: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x286d40u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x286d44: 0x210c3  sra         $v0, $v0, 3
    ctx->pc = 0x286d44u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
    // 0x286d48: 0x28420009  slti        $v0, $v0, 0x9
    ctx->pc = 0x286d48u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x286d4c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x286D4Cu;
    {
        const bool branch_taken_0x286d4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x286D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286D4Cu;
        // 0x286d50: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286d4c) {
            ctx->pc = 0x286D5Cu;
            goto label_286d5c;
        }
    }
    ctx->pc = 0x286D54u;
label_286d54:
    // 0x286d54: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x286D54u;
    {
        const bool branch_taken_0x286d54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x286D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286D54u;
        // 0x286d58: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286d54) {
            ctx->pc = 0x286D90u;
            goto label_286d90;
        }
    }
    ctx->pc = 0x286D5Cu;
label_286d5c:
    // 0x286d5c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x286d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x286d60: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x286d60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x286d64: 0x460000a  bltz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x286D64u;
    {
        const bool branch_taken_0x286d64 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x286D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286D64u;
        // 0x286d68: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286d64) {
            ctx->pc = 0x286D90u;
            goto label_286d90;
        }
    }
    ctx->pc = 0x286D6Cu;
    // 0x286d6c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x286d6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_286d70:
    // 0x286d70: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x286d70u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x286d74: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x286d74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x286d78: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x286d78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x286d7c: 0xdc510000  ld          $s1, 0x0($v0)
    ctx->pc = 0x286d7cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x286d80: 0x0  nop
    ctx->pc = 0x286d80u;
    // NOP
    // 0x286d84: 0x461fffa  bgez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x286D84u;
    {
        const bool branch_taken_0x286d84 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x286d84) {
            ctx->pc = 0x286D70u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_286d70;
        }
    }
    ctx->pc = 0x286D8Cu;
    // 0x286d8c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x286d8cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_286d90:
    // 0x286d90: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x286d90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x286d94: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x286d94u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x286d98: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x286d98u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x286d9c: 0x3e00008  jr          $ra
    ctx->pc = 0x286D9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x286DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286D9Cu;
        // 0x286da0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x286D9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x286DA4u;
    // 0x286da4: 0x0  nop
    ctx->pc = 0x286da4u;
    // NOP
}
