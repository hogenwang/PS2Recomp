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

// Function: sub_00301890
// Address: 0x301890 - 0x3019d0
void sub_00301890_0x301890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00301890_0x301890");
#endif

    switch (ctx->pc) {
        case 0x301900u: goto label_301900;
        case 0x301928u: goto label_301928;
        case 0x301950u: goto label_301950;
        case 0x30199cu: goto label_30199c;
        case 0x3019a4u: goto label_3019a4;
        default: break;
    }

    ctx->pc = 0x301890u;

    // 0x301890: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x301890u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x301894: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x301894u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x301898: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x301898u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x30189c: 0x3c0201cb  lui         $v0, 0x1CB
    ctx->pc = 0x30189cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)459 << 16));
    // 0x3018a0: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x3018a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x3018a4: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x3018a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x3018a8: 0x3c1701cb  lui         $s7, 0x1CB
    ctx->pc = 0x3018a8u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)459 << 16));
    // 0x3018ac: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x3018acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x3018b0: 0x3c1601cb  lui         $s6, 0x1CB
    ctx->pc = 0x3018b0u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)459 << 16));
    // 0x3018b4: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x3018b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x3018b8: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x3018b8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3018bc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3018bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x3018c0: 0x3c1401cd  lui         $s4, 0x1CD
    ctx->pc = 0x3018c0u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)461 << 16));
    // 0x3018c4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3018c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3018c8: 0x2694f500  addiu       $s4, $s4, -0xB00
    ctx->pc = 0x3018c8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294964480));
    // 0x3018cc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3018ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3018d0: 0x3c1201cc  lui         $s2, 0x1CC
    ctx->pc = 0x3018d0u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)460 << 16));
    // 0x3018d4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3018d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3018d8: 0x24133480  addiu       $s3, $zero, 0x3480
    ctx->pc = 0x3018d8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 13440));
    // 0x3018dc: 0xac430c58  sw          $v1, 0xC58($v0)
    ctx->pc = 0x3018dcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 3160), GPR_U32(ctx, 3));
    // 0x3018e0: 0x3c1001cc  lui         $s0, 0x1CC
    ctx->pc = 0x3018e0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)460 << 16));
    // 0x3018e4: 0x3c0201cb  lui         $v0, 0x1CB
    ctx->pc = 0x3018e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)459 << 16));
    // 0x3018e8: 0x26522180  addiu       $s2, $s2, 0x2180
    ctx->pc = 0x3018e8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8576));
    // 0x3018ec: 0xac540c80  sw          $s4, 0xC80($v0)
    ctx->pc = 0x3018ecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 3200), GPR_U32(ctx, 20));
    // 0x3018f0: 0x24113e80  addiu       $s1, $zero, 0x3E80
    ctx->pc = 0x3018f0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 16000));
    // 0x3018f4: 0x26101e80  addiu       $s0, $s0, 0x1E80
    ctx->pc = 0x3018f4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 7808));
    // 0x3018f8: 0x26d60ce0  addiu       $s6, $s6, 0xCE0
    ctx->pc = 0x3018f8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 3296));
    // 0x3018fc: 0x26f70cb0  addiu       $s7, $s7, 0xCB0
    ctx->pc = 0x3018fcu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 3248));
label_301900:
    // 0x301900: 0x132c3c  dsll32      $a1, $s3, 16
    ctx->pc = 0x301900u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 19) << (32 + 16));
    // 0x301904: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x301904u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x301908: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x301908u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    // 0x30190c: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x30190cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x301910: 0x24070013  addiu       $a3, $zero, 0x13
    ctx->pc = 0x301910u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x301914: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x301914u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x301918: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x301918u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30191c: 0x240a0100  addiu       $t2, $zero, 0x100
    ctx->pc = 0x30191cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x301920: 0xc040532  jal         func_1014C8
    ctx->pc = 0x301920u;
    SET_GPR_U32(ctx, 31, 0x301928u);
    ctx->pc = 0x301924u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x301920u;
    // 0x301924: 0x240b0200  addiu       $t3, $zero, 0x200 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1014C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1014C8u, 0x301920u, 0x301928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x301928u;
label_301928:
    // 0x301928: 0x112c3c  dsll32      $a1, $s1, 16
    ctx->pc = 0x301928u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) << (32 + 16));
    // 0x30192c: 0x240a0010  addiu       $t2, $zero, 0x10
    ctx->pc = 0x30192cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x301930: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x301930u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    // 0x301934: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x301934u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x301938: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x301938u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30193c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x30193cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x301940: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x301940u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x301944: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x301944u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x301948: 0xc040532  jal         func_1014C8
    ctx->pc = 0x301948u;
    SET_GPR_U32(ctx, 31, 0x301950u);
    ctx->pc = 0x30194Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x301948u;
    // 0x30194c: 0x140582d  daddu       $t3, $t2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1014C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1014C8u, 0x301948u, 0x301950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x301950u;
label_301950:
    // 0x301950: 0x26820400  addiu       $v0, $s4, 0x400
    ctx->pc = 0x301950u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 1024));
    // 0x301954: 0xaed40000  sw          $s4, 0x0($s6)
    ctx->pc = 0x301954u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 20));
    // 0x301958: 0xaee20000  sw          $v0, 0x0($s7)
    ctx->pc = 0x301958u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 2));
    // 0x30195c: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x30195cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x301960: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x301960u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x301964: 0x26730200  addiu       $s3, $s3, 0x200
    ctx->pc = 0x301964u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 512));
    // 0x301968: 0x34420400  ori         $v0, $v0, 0x400
    ctx->pc = 0x301968u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1024);
    // 0x30196c: 0x26520060  addiu       $s2, $s2, 0x60
    ctx->pc = 0x30196cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 96));
    // 0x301970: 0x282a021  addu        $s4, $s4, $v0
    ctx->pc = 0x301970u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x301974: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x301974u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x301978: 0x3c0201cb  lui         $v0, 0x1CB
    ctx->pc = 0x301978u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)459 << 16));
    // 0x30197c: 0x26100060  addiu       $s0, $s0, 0x60
    ctx->pc = 0x30197cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
    // 0x301980: 0x8c420c58  lw          $v0, 0xC58($v0)
    ctx->pc = 0x301980u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3160)));
    // 0x301984: 0x26d60004  addiu       $s6, $s6, 0x4
    ctx->pc = 0x301984u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4));
    // 0x301988: 0x2a2102b  sltu        $v0, $s5, $v0
    ctx->pc = 0x301988u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x30198c: 0x1440ffdc  bnez        $v0, . + 4 + (-0x24 << 2)
    ctx->pc = 0x30198Cu;
    {
        const bool branch_taken_0x30198c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x301990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30198Cu;
        // 0x301990: 0x26f70004  addiu       $s7, $s7, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30198c) {
            ctx->pc = 0x301900u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_301900;
        }
    }
    ctx->pc = 0x301994u;
    // 0x301994: 0xc0c06b0  jal         func_301AC0
    ctx->pc = 0x301994u;
    SET_GPR_U32(ctx, 31, 0x30199Cu);
    ctx->pc = 0x301AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x301AC0u, 0x301994u, 0x30199Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30199Cu;
label_30199c:
    // 0x30199c: 0xc0c0808  jal         func_302020
    ctx->pc = 0x30199Cu;
    SET_GPR_U32(ctx, 31, 0x3019A4u);
    ctx->pc = 0x302020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302020u, 0x30199Cu, 0x3019A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3019A4u;
label_3019a4:
    // 0x3019a4: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x3019a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x3019a8: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x3019a8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3019ac: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x3019acu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3019b0: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x3019b0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3019b4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x3019b4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3019b8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3019b8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3019bc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3019bcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3019c0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3019c0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3019c4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3019c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3019c8: 0x3e00008  jr          $ra
    ctx->pc = 0x3019C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3019CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3019C8u;
        // 0x3019cc: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3019C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3019D0u;
}
