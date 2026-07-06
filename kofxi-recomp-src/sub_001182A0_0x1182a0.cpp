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

// Function: sub_001182A0
// Address: 0x1182a0 - 0x118350
void sub_001182A0_0x1182a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001182A0_0x1182a0");
#endif

    switch (ctx->pc) {
        case 0x118310u: goto label_118310;
        case 0x118320u: goto label_118320;
        case 0x118330u: goto label_118330;
        default: break;
    }

    ctx->pc = 0x1182a0u;

label_1182a0:
    // 0x1182a0: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x1182a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x1182a4: 0x24439d48  addiu       $v1, $v0, -0x62B8
    ctx->pc = 0x1182a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942024));
    // 0x1182a8: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x1182a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1182ac: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1182ACu;
    {
        const bool branch_taken_0x1182ac = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1182ac) {
            ctx->pc = 0x1182C0u;
            goto label_1182c0;
        }
    }
    ctx->pc = 0x1182B4u;
    // 0x1182b4: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1182b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x1182b8: 0x3e00008  jr          $ra
    ctx->pc = 0x1182B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1182BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1182B8u;
        // 0x1182bc: 0x34428001  ori         $v0, $v0, 0x8001 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32769);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1182B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1182C0u;
label_1182c0:
    // 0x1182c0: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1182C0u;
    {
        const bool branch_taken_0x1182c0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1182c0) {
            ctx->pc = 0x1182D0u;
            goto label_1182d0;
        }
    }
    ctx->pc = 0x1182C8u;
    // 0x1182c8: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x1182c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x1182cc: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x1182ccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_1182d0:
    // 0x1182d0: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1182D0u;
    {
        const bool branch_taken_0x1182d0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1182d0) {
            ctx->pc = 0x1182E8u;
            goto label_1182e8;
        }
    }
    ctx->pc = 0x1182D8u;
    // 0x1182d8: 0x8c630010  lw          $v1, 0x10($v1)
    ctx->pc = 0x1182d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x1182dc: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x1182dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1182e0: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1182e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1182e4: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x1182e4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
label_1182e8:
    // 0x1182e8: 0x3e00008  jr          $ra
    ctx->pc = 0x1182E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1182ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1182E8u;
        // 0x1182ec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1182E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1182F0u;
    // 0x1182f0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1182f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1182f4: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1182f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1182f8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1182f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1182fc: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1182fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118300: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x118300u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x118304: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x118304u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x118308: 0xc045ba8  jal         func_116EA0
    ctx->pc = 0x118308u;
    SET_GPR_U32(ctx, 31, 0x118310u);
    ctx->pc = 0x11830Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x118308u;
    // 0x11830c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x116EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116EA0u, 0x118308u, 0x118310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118310u;
label_118310:
    // 0x118310: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x118310u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118314: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x118314u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118318: 0xc0460a8  jal         func_1182A0
    ctx->pc = 0x118318u;
    SET_GPR_U32(ctx, 31, 0x118320u);
    ctx->pc = 0x11831Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x118318u;
    // 0x11831c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1182A0u;
    goto label_1182a0;
    ctx->pc = 0x118320u;
label_118320:
    // 0x118320: 0x12400003  beqz        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x118320u;
    {
        const bool branch_taken_0x118320 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x118324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118320u;
        // 0x118324: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118320) {
            ctx->pc = 0x118330u;
            goto label_118330;
        }
    }
    ctx->pc = 0x118328u;
    // 0x118328: 0xc045bbc  jal         func_116EF0
    ctx->pc = 0x118328u;
    SET_GPR_U32(ctx, 31, 0x118330u);
    ctx->pc = 0x116EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116EF0u, 0x118328u, 0x118330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118330u;
label_118330:
    // 0x118330: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x118330u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118334: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x118334u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x118338: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x118338u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11833c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x11833cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x118340: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x118340u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x118344: 0x3e00008  jr          $ra
    ctx->pc = 0x118344u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x118348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118344u;
        // 0x118348: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x118344u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11834Cu;
    // 0x11834c: 0x0  nop
    ctx->pc = 0x11834cu;
    // NOP
}
