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

// Function: sub_003034B0
// Address: 0x3034b0 - 0x303600
void sub_003034B0_0x3034b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003034B0_0x3034b0");
#endif

    switch (ctx->pc) {
        case 0x3034fcu: goto label_3034fc;
        case 0x303508u: goto label_303508;
        case 0x303510u: goto label_303510;
        case 0x30353cu: goto label_30353c;
        case 0x303548u: goto label_303548;
        case 0x303550u: goto label_303550;
        case 0x303578u: goto label_303578;
        case 0x303584u: goto label_303584;
        case 0x30358cu: goto label_30358c;
        case 0x303594u: goto label_303594;
        case 0x3035b4u: goto label_3035b4;
        case 0x3035c8u: goto label_3035c8;
        case 0x3035d8u: goto label_3035d8;
        case 0x3035e0u: goto label_3035e0;
        default: break;
    }

    ctx->pc = 0x3034b0u;

    // 0x3034b0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3034b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x3034b4: 0x3c03401f  lui         $v1, 0x401F
    ctx->pc = 0x3034b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16415 << 16));
    // 0x3034b8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x3034b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x3034bc: 0x3402e8d1  ori         $v0, $zero, 0xE8D1
    ctx->pc = 0x3034bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)59601);
    // 0x3034c0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3034c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x3034c4: 0x3463c20e  ori         $v1, $v1, 0xC20E
    ctx->pc = 0x3034c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)49678);
    // 0x3034c8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3034c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3034cc: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x3034ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x3034d0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3034d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3034d4: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x3034d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x3034d8: 0x34420f52  ori         $v0, $v0, 0xF52
    ctx->pc = 0x3034d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3922);
    // 0x3034dc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3034dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3034e0: 0x439825  or          $s3, $v0, $v1
    ctx->pc = 0x3034e0u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x3034e4: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x3034e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3034e8: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x3034e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x3034ec: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3034ecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3034f0: 0xc44c9790  lwc1        $f12, -0x6870($v0)
    ctx->pc = 0x3034f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294940560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3034f4: 0xc048930  jal         func_1224C0
    ctx->pc = 0x3034F4u;
    SET_GPR_U32(ctx, 31, 0x3034FCu);
    ctx->pc = 0x3034F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3034F4u;
    // 0x3034f8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1224C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1224C0u, 0x3034F4u, 0x3034FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3034FCu;
label_3034fc:
    // 0x3034fc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3034fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x303500: 0xc048a46  jal         func_122918
    ctx->pc = 0x303500u;
    SET_GPR_U32(ctx, 31, 0x303508u);
    ctx->pc = 0x303504u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x303500u;
    // 0x303504: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122918u, 0x303500u, 0x303508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x303508u;
label_303508:
    // 0x303508: 0xc048c12  jal         func_123048
    ctx->pc = 0x303508u;
    SET_GPR_U32(ctx, 31, 0x303510u);
    ctx->pc = 0x30350Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x303508u;
    // 0x30350c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x123048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123048u, 0x303508u, 0x303510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x303510u;
label_303510:
    // 0x303510: 0x3c024061  lui         $v0, 0x4061
    ctx->pc = 0x303510u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16481 << 16));
    // 0x303514: 0x34437d47  ori         $v1, $v0, 0x7D47
    ctx->pc = 0x303514u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32071);
    // 0x303518: 0x3402ae14  ori         $v0, $zero, 0xAE14
    ctx->pc = 0x303518u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)44564);
    // 0x30351c: 0x3303c  dsll32      $a2, $v1, 0
    ctx->pc = 0x30351cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 0));
    // 0x303520: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x303520u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x303524: 0x34437ae1  ori         $v1, $v0, 0x7AE1
    ctx->pc = 0x303524u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)31457);
    // 0x303528: 0xe6400000  swc1        $f0, 0x0($s2)
    ctx->pc = 0x303528u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
    // 0x30352c: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x30352cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x303530: 0xc44c9794  lwc1        $f12, -0x686C($v0)
    ctx->pc = 0x303530u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294940564)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x303534: 0xc048930  jal         func_1224C0
    ctx->pc = 0x303534u;
    SET_GPR_U32(ctx, 31, 0x30353Cu);
    ctx->pc = 0x303538u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x303534u;
    // 0x303538: 0x669025  or          $s2, $v1, $a2 (Delay Slot)
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1224C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1224C0u, 0x303534u, 0x30353Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30353Cu;
label_30353c:
    // 0x30353c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x30353cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x303540: 0xc048a46  jal         func_122918
    ctx->pc = 0x303540u;
    SET_GPR_U32(ctx, 31, 0x303548u);
    ctx->pc = 0x303544u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x303540u;
    // 0x303544: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122918u, 0x303540u, 0x303548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x303548u;
label_303548:
    // 0x303548: 0xc048c12  jal         func_123048
    ctx->pc = 0x303548u;
    SET_GPR_U32(ctx, 31, 0x303550u);
    ctx->pc = 0x30354Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x303548u;
    // 0x30354c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x123048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123048u, 0x303548u, 0x303550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x303550u;
label_303550:
    // 0x303550: 0x3c024099  lui         $v0, 0x4099
    ctx->pc = 0x303550u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16537 << 16));
    // 0x303554: 0x3443d7b0  ori         $v1, $v0, 0xD7B0
    ctx->pc = 0x303554u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55216);
    // 0x303558: 0x3c0220c4  lui         $v0, 0x20C4
    ctx->pc = 0x303558u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8388 << 16));
    // 0x30355c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x30355cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x303560: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x303560u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x303564: 0x34429ba6  ori         $v0, $v0, 0x9BA6
    ctx->pc = 0x303564u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39846);
    // 0x303568: 0x438825  or          $s1, $v0, $v1
    ctx->pc = 0x303568u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x30356c: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x30356cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x303570: 0xc048930  jal         func_1224C0
    ctx->pc = 0x303570u;
    SET_GPR_U32(ctx, 31, 0x303578u);
    ctx->pc = 0x303574u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x303570u;
    // 0x303574: 0xc44c9798  lwc1        $f12, -0x6868($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294940568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1224C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1224C0u, 0x303570u, 0x303578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x303578u;
label_303578:
    // 0x303578: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x303578u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30357c: 0xc048a46  jal         func_122918
    ctx->pc = 0x30357Cu;
    SET_GPR_U32(ctx, 31, 0x303584u);
    ctx->pc = 0x303580u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30357Cu;
    // 0x303580: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122918u, 0x30357Cu, 0x303584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x303584u;
label_303584:
    // 0x303584: 0xc048c12  jal         func_123048
    ctx->pc = 0x303584u;
    SET_GPR_U32(ctx, 31, 0x30358Cu);
    ctx->pc = 0x303588u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x303584u;
    // 0x303588: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x123048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123048u, 0x303584u, 0x30358Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30358Cu;
label_30358c:
    // 0x30358c: 0xc048930  jal         func_1224C0
    ctx->pc = 0x30358Cu;
    SET_GPR_U32(ctx, 31, 0x303594u);
    ctx->pc = 0x303590u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30358Cu;
    // 0x303590: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1224C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1224C0u, 0x30358Cu, 0x303594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x303594u;
label_303594:
    // 0x303594: 0x3c043fc3  lui         $a0, 0x3FC3
    ctx->pc = 0x303594u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16323 << 16));
    // 0x303598: 0x3c033333  lui         $v1, 0x3333
    ctx->pc = 0x303598u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)13107 << 16));
    // 0x30359c: 0x34843333  ori         $a0, $a0, 0x3333
    ctx->pc = 0x30359cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)13107);
    // 0x3035a0: 0x34633333  ori         $v1, $v1, 0x3333
    ctx->pc = 0x3035a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)13107);
    // 0x3035a4: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x3035a4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x3035a8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3035a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3035ac: 0xc048a76  jal         func_1229D8
    ctx->pc = 0x3035ACu;
    SET_GPR_U32(ctx, 31, 0x3035B4u);
    ctx->pc = 0x3035B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3035ACu;
    // 0x3035b0: 0x642025  or          $a0, $v1, $a0 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1229D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1229D8u, 0x3035ACu, 0x3035B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3035B4u;
label_3035b4:
    // 0x3035b4: 0x3c034066  lui         $v1, 0x4066
    ctx->pc = 0x3035b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16486 << 16));
    // 0x3035b8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3035b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3035bc: 0x3462c000  ori         $v0, $v1, 0xC000
    ctx->pc = 0x3035bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)49152);
    // 0x3035c0: 0xc048b0a  jal         func_122C28
    ctx->pc = 0x3035C0u;
    SET_GPR_U32(ctx, 31, 0x3035C8u);
    ctx->pc = 0x3035C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3035C0u;
    // 0x3035c4: 0x2283c  dsll32      $a1, $v0, 0 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122C28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122C28u, 0x3035C0u, 0x3035C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3035C8u;
label_3035c8:
    // 0x3035c8: 0x3c033ff0  lui         $v1, 0x3FF0
    ctx->pc = 0x3035c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16368 << 16));
    // 0x3035cc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3035ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3035d0: 0xc048a46  jal         func_122918
    ctx->pc = 0x3035D0u;
    SET_GPR_U32(ctx, 31, 0x3035D8u);
    ctx->pc = 0x3035D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3035D0u;
    // 0x3035d4: 0x3203c  dsll32      $a0, $v1, 0 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122918u, 0x3035D0u, 0x3035D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3035D8u;
label_3035d8:
    // 0x3035d8: 0xc048c12  jal         func_123048
    ctx->pc = 0x3035D8u;
    SET_GPR_U32(ctx, 31, 0x3035E0u);
    ctx->pc = 0x3035DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3035D8u;
    // 0x3035dc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x123048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123048u, 0x3035D8u, 0x3035E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3035E0u;
label_3035e0:
    // 0x3035e0: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x3035e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x3035e4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x3035e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3035e8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3035e8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3035ec: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3035ecu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3035f0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3035f0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3035f4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3035f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3035f8: 0x3e00008  jr          $ra
    ctx->pc = 0x3035F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3035FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3035F8u;
        // 0x3035fc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3035F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x303600u;
}
