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

// Function: sub_00169ED0
// Address: 0x169ed0 - 0x169f60
void sub_00169ED0_0x169ed0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00169ED0_0x169ed0");
#endif

    switch (ctx->pc) {
        case 0x169f0cu: goto label_169f0c;
        case 0x169f48u: goto label_169f48;
        default: break;
    }

    ctx->pc = 0x169ed0u;

    // 0x169ed0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x169ed0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x169ed4: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x169ed4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x169ed8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x169ed8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x169edc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x169edcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x169ee0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x169ee0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x169ee4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x169ee4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169ee8: 0x8c820490  lw          $v0, 0x490($a0)
    ctx->pc = 0x169ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1168)));
    // 0x169eec: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x169eecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x169ef0: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x169EF0u;
    {
        const bool branch_taken_0x169ef0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x169EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169EF0u;
        // 0x169ef4: 0x3070ffff  andi        $s0, $v1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x169ef0) {
            ctx->pc = 0x169F48u;
            goto label_169f48;
        }
    }
    ctx->pc = 0x169EF8u;
    // 0x169ef8: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x169ef8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x169efc: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x169efcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x169f00: 0x24a52bc0  addiu       $a1, $a1, 0x2BC0
    ctx->pc = 0x169f00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11200));
    // 0x169f04: 0xc05a138  jal         func_1684E0
    ctx->pc = 0x169F04u;
    SET_GPR_U32(ctx, 31, 0x169F0Cu);
    ctx->pc = 0x169F08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169F04u;
    // 0x169f08: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1684E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1684E0u, 0x169F04u, 0x169F0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169F0Cu;
label_169f0c:
    // 0x169f0c: 0x3050ffff  andi        $s0, $v0, 0xFFFF
    ctx->pc = 0x169f0cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x169f10: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x169f10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x169f14: 0x5203000d  beql        $s0, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x169F14u;
    {
        const bool branch_taken_0x169f14 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x169f14) {
            ctx->pc = 0x169F18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x169F14u;
            // 0x169f18: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x169F4Cu;
            goto label_169f4c;
        }
    }
    ctx->pc = 0x169F1Cu;
    // 0x169f1c: 0x21c02  srl         $v1, $v0, 16
    ctx->pc = 0x169f1cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x169f20: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x169f20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x169f24: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x169f24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x169f28: 0x34427ffd  ori         $v0, $v0, 0x7FFD
    ctx->pc = 0x169f28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32765);
    // 0x169f2c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x169f2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x169f30: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x169F30u;
    {
        const bool branch_taken_0x169f30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x169f30) {
            ctx->pc = 0x169F48u;
            goto label_169f48;
        }
    }
    ctx->pc = 0x169F38u;
    // 0x169f38: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x169f38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169f3c: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x169f3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x169f40: 0xc06266c  jal         func_1899B0
    ctx->pc = 0x169F40u;
    SET_GPR_U32(ctx, 31, 0x169F48u);
    ctx->pc = 0x169F44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169F40u;
    // 0x169f44: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1899B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1899B0u, 0x169F40u, 0x169F48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169F48u;
label_169f48:
    // 0x169f48: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x169f48u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_169f4c:
    // 0x169f4c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x169f4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x169f50: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x169f50u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x169f54: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x169f54u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x169f58: 0x3e00008  jr          $ra
    ctx->pc = 0x169F58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x169F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169F58u;
        // 0x169f5c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x169F58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x169F60u;
}
