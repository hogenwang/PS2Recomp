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

// Function: sub_00312930
// Address: 0x312930 - 0x312a10
void sub_00312930_0x312930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00312930_0x312930");
#endif

    switch (ctx->pc) {
        case 0x312944u: goto label_312944;
        case 0x312958u: goto label_312958;
        case 0x312980u: goto label_312980;
        case 0x312988u: goto label_312988;
        case 0x312998u: goto label_312998;
        case 0x3129a4u: goto label_3129a4;
        case 0x3129ccu: goto label_3129cc;
        case 0x3129d4u: goto label_3129d4;
        case 0x3129e8u: goto label_3129e8;
        case 0x3129f4u: goto label_3129f4;
        case 0x3129fcu: goto label_3129fc;
        default: break;
    }

    ctx->pc = 0x312930u;

    // 0x312930: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x312930u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x312934: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x312934u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x312938: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x312938u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x31293c: 0xc0692e0  jal         func_1A4B80
    ctx->pc = 0x31293Cu;
    SET_GPR_U32(ctx, 31, 0x312944u);
    ctx->pc = 0x312940u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31293Cu;
    // 0x312940: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4B80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4B80u, 0x31293Cu, 0x312944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x312944u;
label_312944:
    // 0x312944: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x312944u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x312948: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x312948u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x31294c: 0x24843d78  addiu       $a0, $a0, 0x3D78
    ctx->pc = 0x31294cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15736));
    // 0x312950: 0xc068f6c  jal         func_1A3DB0
    ctx->pc = 0x312950u;
    SET_GPR_U32(ctx, 31, 0x312958u);
    ctx->pc = 0x312954u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x312950u;
    // 0x312954: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A3DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A3DB0u, 0x312950u, 0x312958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x312958u;
label_312958:
    // 0x312958: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0x312958u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    // 0x31295c: 0x240a0100  addiu       $t2, $zero, 0x100
    ctx->pc = 0x31295cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x312960: 0x24840060  addiu       $a0, $a0, 0x60
    ctx->pc = 0x312960u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 96));
    // 0x312964: 0x24053ea0  addiu       $a1, $zero, 0x3EA0
    ctx->pc = 0x312964u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16032));
    // 0x312968: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x312968u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x31296c: 0x24070014  addiu       $a3, $zero, 0x14
    ctx->pc = 0x31296cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x312970: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x312970u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x312974: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x312974u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x312978: 0xc040532  jal         func_1014C8
    ctx->pc = 0x312978u;
    SET_GPR_U32(ctx, 31, 0x312980u);
    ctx->pc = 0x31297Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x312978u;
    // 0x31297c: 0x140582d  daddu       $t3, $t2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1014C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1014C8u, 0x312978u, 0x312980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x312980u;
label_312980:
    // 0x312980: 0xc0433b8  jal         func_10CEE0
    ctx->pc = 0x312980u;
    SET_GPR_U32(ctx, 31, 0x312988u);
    ctx->pc = 0x312984u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x312980u;
    // 0x312984: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CEE0u, 0x312980u, 0x312988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x312988u;
label_312988:
    // 0x312988: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0x312988u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    // 0x31298c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x31298cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x312990: 0xc0405fc  jal         func_1017F0
    ctx->pc = 0x312990u;
    SET_GPR_U32(ctx, 31, 0x312998u);
    ctx->pc = 0x312994u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x312990u;
    // 0x312994: 0x24840060  addiu       $a0, $a0, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1017F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1017F0u, 0x312990u, 0x312998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x312998u;
label_312998:
    // 0x312998: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x312998u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31299c: 0xc040454  jal         func_101150
    ctx->pc = 0x31299Cu;
    SET_GPR_U32(ctx, 31, 0x3129A4u);
    ctx->pc = 0x3129A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31299Cu;
    // 0x3129a0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101150u, 0x31299Cu, 0x3129A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3129A4u;
label_3129a4:
    // 0x3129a4: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0x3129a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    // 0x3129a8: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x3129a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3129ac: 0x24840000  addiu       $a0, $a0, 0x0
    ctx->pc = 0x3129acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 0));
    // 0x3129b0: 0x24053f20  addiu       $a1, $zero, 0x3F20
    ctx->pc = 0x3129b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16160));
    // 0x3129b4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x3129b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3129b8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3129b8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3129bc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3129bcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3129c0: 0x240a0008  addiu       $t2, $zero, 0x8
    ctx->pc = 0x3129c0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x3129c4: 0xc040532  jal         func_1014C8
    ctx->pc = 0x3129C4u;
    SET_GPR_U32(ctx, 31, 0x3129CCu);
    ctx->pc = 0x3129C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3129C4u;
    // 0x3129c8: 0xe0582d  daddu       $t3, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1014C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1014C8u, 0x3129C4u, 0x3129CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3129CCu;
label_3129cc:
    // 0x3129cc: 0xc0433b8  jal         func_10CEE0
    ctx->pc = 0x3129CCu;
    SET_GPR_U32(ctx, 31, 0x3129D4u);
    ctx->pc = 0x3129D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3129CCu;
    // 0x3129d0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CEE0u, 0x3129CCu, 0x3129D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3129D4u;
label_3129d4:
    // 0x3129d4: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0x3129d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    // 0x3129d8: 0x34018000  ori         $at, $zero, 0x8000
    ctx->pc = 0x3129d8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x3129dc: 0x24840000  addiu       $a0, $a0, 0x0
    ctx->pc = 0x3129dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 0));
    // 0x3129e0: 0xc0405fc  jal         func_1017F0
    ctx->pc = 0x3129E0u;
    SET_GPR_U32(ctx, 31, 0x3129E8u);
    ctx->pc = 0x3129E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3129E0u;
    // 0x3129e4: 0x2012821  addu        $a1, $s0, $at (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1017F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1017F0u, 0x3129E0u, 0x3129E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3129E8u;
label_3129e8:
    // 0x3129e8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3129e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3129ec: 0xc040454  jal         func_101150
    ctx->pc = 0x3129ECu;
    SET_GPR_U32(ctx, 31, 0x3129F4u);
    ctx->pc = 0x3129F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3129ECu;
    // 0x3129f0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101150u, 0x3129ECu, 0x3129F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3129F4u;
label_3129f4:
    // 0x3129f4: 0xc06936c  jal         func_1A4DB0
    ctx->pc = 0x3129F4u;
    SET_GPR_U32(ctx, 31, 0x3129FCu);
    ctx->pc = 0x3129F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3129F4u;
    // 0x3129f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4DB0u, 0x3129F4u, 0x3129FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3129FCu;
label_3129fc:
    // 0x3129fc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3129fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x312a00: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x312a00u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x312a04: 0x3e00008  jr          $ra
    ctx->pc = 0x312A04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x312A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312A04u;
        // 0x312a08: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x312A04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x312A0Cu;
    // 0x312a0c: 0x0  nop
    ctx->pc = 0x312a0cu;
    // NOP
}
