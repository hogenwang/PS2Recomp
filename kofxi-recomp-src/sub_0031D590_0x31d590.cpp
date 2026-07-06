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

// Function: sub_0031D590
// Address: 0x31d590 - 0x31df90
void sub_0031D590_0x31d590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031D590_0x31d590");
#endif

    switch (ctx->pc) {
        case 0x31d604u: goto label_31d604;
        case 0x31d63cu: goto label_31d63c;
        case 0x31d64cu: goto label_31d64c;
        case 0x31d658u: goto label_31d658;
        case 0x31d660u: goto label_31d660;
        case 0x31d674u: goto label_31d674;
        case 0x31d6acu: goto label_31d6ac;
        case 0x31d6bcu: goto label_31d6bc;
        case 0x31d6c8u: goto label_31d6c8;
        case 0x31d6d0u: goto label_31d6d0;
        case 0x31df30u: goto label_31df30;
        case 0x31df44u: goto label_31df44;
        case 0x31df48u: goto label_31df48;
        default: break;
    }

    ctx->pc = 0x31d590u;

    // 0x31d590: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x31d590u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x31d594: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x31d594u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x31d598: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x31d598u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31d59c: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x31d59cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
    // 0x31d5a0: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x31d5a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
    // 0x31d5a4: 0x140f02d  daddu       $fp, $t2, $zero
    ctx->pc = 0x31d5a4u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31d5a8: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x31d5a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x31d5ac: 0xe0b82d  daddu       $s7, $a3, $zero
    ctx->pc = 0x31d5acu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31d5b0: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x31d5b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x31d5b4: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x31d5b4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31d5b8: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x31d5b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x31d5bc: 0x120a82d  daddu       $s5, $t1, $zero
    ctx->pc = 0x31d5bcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31d5c0: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x31d5c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x31d5c4: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x31d5c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x31d5c8: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x31d5c8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31d5cc: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x31d5ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x31d5d0: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x31d5d0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31d5d4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x31d5d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x31d5d8: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x31d5d8u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x31d5dc: 0x8fb100c8  lw          $s1, 0xC8($sp)
    ctx->pc = 0x31d5dcu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x31d5e0: 0x46006586  mov.s       $f22, $f12
    ctx->pc = 0x31d5e0u;
    ctx->f[22] = FPU_MOV_S(ctx->f[12]);
    // 0x31d5e4: 0x8fb000d0  lw          $s0, 0xD0($sp)
    ctx->pc = 0x31d5e4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x31d5e8: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x31d5e8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x31d5ec: 0xafab00bc  sw          $t3, 0xBC($sp)
    ctx->pc = 0x31d5ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 11));
    // 0x31d5f0: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x31d5f0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x31d5f4: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x31d5f4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x31d5f8: 0x46006d46  mov.s       $f21, $f13
    ctx->pc = 0x31d5f8u;
    ctx->f[21] = FPU_MOV_S(ctx->f[13]);
    // 0x31d5fc: 0xc048930  jal         func_1224C0
    ctx->pc = 0x31D5FCu;
    SET_GPR_U32(ctx, 31, 0x31D604u);
    ctx->pc = 0x31D600u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31D5FCu;
    // 0x31d600: 0x46007506  mov.s       $f20, $f14 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[14]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1224C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1224C0u, 0x31D5FCu, 0x31D604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31D604u;
label_31d604:
    // 0x31d604: 0x6200004  bltz        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x31D604u;
    {
        const bool branch_taken_0x31d604 = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x31D608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D604u;
        // 0x31d608: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d604) {
            ctx->pc = 0x31D618u;
            goto label_31d618;
        }
    }
    ctx->pc = 0x31D60Cu;
    // 0x31d60c: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x31d60cu;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31d610: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x31D610u;
    {
        const bool branch_taken_0x31d610 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31D614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D610u;
        // 0x31d614: 0x46800320  cvt.s.w     $f12, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d610) {
            ctx->pc = 0x31D634u;
            goto label_31d634;
        }
    }
    ctx->pc = 0x31D618u;
label_31d618:
    // 0x31d618: 0x111842  srl         $v1, $s1, 1
    ctx->pc = 0x31d618u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
    // 0x31d61c: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x31d61cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x31d620: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x31d620u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x31d624: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x31d624u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31d628: 0x0  nop
    ctx->pc = 0x31d628u;
    // NOP
    // 0x31d62c: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x31d62cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x31d630: 0x460c6300  add.s       $f12, $f12, $f12
    ctx->pc = 0x31d630u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[12]);
label_31d634:
    // 0x31d634: 0xc048930  jal         func_1224C0
    ctx->pc = 0x31D634u;
    SET_GPR_U32(ctx, 31, 0x31D63Cu);
    ctx->pc = 0x1224C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1224C0u, 0x31D634u, 0x31D63Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31D63Cu;
label_31d63c:
    // 0x31d63c: 0x3c033fe0  lui         $v1, 0x3FE0
    ctx->pc = 0x31d63cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16352 << 16));
    // 0x31d640: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x31d640u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31d644: 0xc048a76  jal         func_1229D8
    ctx->pc = 0x31D644u;
    SET_GPR_U32(ctx, 31, 0x31D64Cu);
    ctx->pc = 0x31D648u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31D644u;
    // 0x31d648: 0x3203c  dsll32      $a0, $v1, 0 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1229D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1229D8u, 0x31D644u, 0x31D64Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31D64Cu;
label_31d64c:
    // 0x31d64c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x31d64cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31d650: 0xc048a46  jal         func_122918
    ctx->pc = 0x31D650u;
    SET_GPR_U32(ctx, 31, 0x31D658u);
    ctx->pc = 0x31D654u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31D650u;
    // 0x31d654: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122918u, 0x31D650u, 0x31D658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31D658u;
label_31d658:
    // 0x31d658: 0xc048bde  jal         func_122F78
    ctx->pc = 0x31D658u;
    SET_GPR_U32(ctx, 31, 0x31D660u);
    ctx->pc = 0x31D65Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31D658u;
    // 0x31d65c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122F78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122F78u, 0x31D658u, 0x31D660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31D660u;
label_31d660:
    // 0x31d660: 0x44950000  mtc1        $s5, $f0
    ctx->pc = 0x31d660u;
    { uint32_t bits = GPR_U32(ctx, 21); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31d664: 0x0  nop
    ctx->pc = 0x31d664u;
    // NOP
    // 0x31d668: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x31d668u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x31d66c: 0xc048930  jal         func_1224C0
    ctx->pc = 0x31D66Cu;
    SET_GPR_U32(ctx, 31, 0x31D674u);
    ctx->pc = 0x31D670u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31D66Cu;
    // 0x31d670: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1224C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1224C0u, 0x31D66Cu, 0x31D674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31D674u;
label_31d674:
    // 0x31d674: 0x6000004  bltz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x31D674u;
    {
        const bool branch_taken_0x31d674 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x31D678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D674u;
        // 0x31d678: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d674) {
            ctx->pc = 0x31D688u;
            goto label_31d688;
        }
    }
    ctx->pc = 0x31D67Cu;
    // 0x31d67c: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x31d67cu;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31d680: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x31D680u;
    {
        const bool branch_taken_0x31d680 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31D684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D680u;
        // 0x31d684: 0x46800320  cvt.s.w     $f12, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d680) {
            ctx->pc = 0x31D6A4u;
            goto label_31d6a4;
        }
    }
    ctx->pc = 0x31D688u;
label_31d688:
    // 0x31d688: 0x101842  srl         $v1, $s0, 1
    ctx->pc = 0x31d688u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
    // 0x31d68c: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x31d68cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x31d690: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x31d690u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x31d694: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x31d694u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31d698: 0x0  nop
    ctx->pc = 0x31d698u;
    // NOP
    // 0x31d69c: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x31d69cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x31d6a0: 0x460c6300  add.s       $f12, $f12, $f12
    ctx->pc = 0x31d6a0u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[12]);
label_31d6a4:
    // 0x31d6a4: 0xc048930  jal         func_1224C0
    ctx->pc = 0x31D6A4u;
    SET_GPR_U32(ctx, 31, 0x31D6ACu);
    ctx->pc = 0x1224C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1224C0u, 0x31D6A4u, 0x31D6ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31D6ACu;
label_31d6ac:
    // 0x31d6ac: 0x3c033fe0  lui         $v1, 0x3FE0
    ctx->pc = 0x31d6acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16352 << 16));
    // 0x31d6b0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x31d6b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31d6b4: 0xc048a76  jal         func_1229D8
    ctx->pc = 0x31D6B4u;
    SET_GPR_U32(ctx, 31, 0x31D6BCu);
    ctx->pc = 0x31D6B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31D6B4u;
    // 0x31d6b8: 0x3203c  dsll32      $a0, $v1, 0 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1229D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1229D8u, 0x31D6B4u, 0x31D6BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31D6BCu;
label_31d6bc:
    // 0x31d6bc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x31d6bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31d6c0: 0xc048a46  jal         func_122918
    ctx->pc = 0x31D6C0u;
    SET_GPR_U32(ctx, 31, 0x31D6C8u);
    ctx->pc = 0x31D6C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31D6C0u;
    // 0x31d6c4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122918u, 0x31D6C0u, 0x31D6C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31D6C8u;
label_31d6c8:
    // 0x31d6c8: 0xc048bde  jal         func_122F78
    ctx->pc = 0x31D6C8u;
    SET_GPR_U32(ctx, 31, 0x31D6D0u);
    ctx->pc = 0x31D6CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31D6C8u;
    // 0x31d6cc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122F78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122F78u, 0x31D6C8u, 0x31D6D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31D6D0u;
label_31d6d0:
    // 0x31d6d0: 0x6220005  bltzl       $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x31D6D0u;
    {
        const bool branch_taken_0x31d6d0 = (GPR_S32(ctx, 17) < 0);
        if (branch_taken_0x31d6d0) {
            ctx->pc = 0x31D6D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31D6D0u;
            // 0x31d6d4: 0x112042  srl         $a0, $s1, 1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31D6E8u;
            goto label_31d6e8;
        }
    }
    ctx->pc = 0x31D6D8u;
    // 0x31d6d8: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x31d6d8u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31d6dc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x31D6DCu;
    {
        const bool branch_taken_0x31d6dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31D6E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D6DCu;
        // 0x31d6e0: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d6dc) {
            ctx->pc = 0x31D700u;
            goto label_31d700;
        }
    }
    ctx->pc = 0x31D6E4u;
    // 0x31d6e4: 0x112042  srl         $a0, $s1, 1
    ctx->pc = 0x31d6e4u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
label_31d6e8:
    // 0x31d6e8: 0x32230001  andi        $v1, $s1, 0x1
    ctx->pc = 0x31d6e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x31d6ec: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x31d6ecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x31d6f0: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x31d6f0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31d6f4: 0x0  nop
    ctx->pc = 0x31d6f4u;
    // NOP
    // 0x31d6f8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x31d6f8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x31d6fc: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x31d6fcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_31d700:
    // 0x31d700: 0x46150042  mul.s       $f1, $f0, $f21
    ctx->pc = 0x31d700u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x31d704: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x31d704u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x31d708: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x31d708u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31d70c: 0x0  nop
    ctx->pc = 0x31d70cu;
    // NOP
    // 0x31d710: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x31d710u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
    // 0x31d714: 0x0  nop
    ctx->pc = 0x31d714u;
    // NOP
    // 0x31d718: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x31d718u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x31d71c: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x31d71cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x31d720: 0x6020005  bltzl       $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x31D720u;
    {
        const bool branch_taken_0x31d720 = (GPR_S32(ctx, 16) < 0);
        if (branch_taken_0x31d720) {
            ctx->pc = 0x31D724u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31D720u;
            // 0x31d724: 0x102042  srl         $a0, $s0, 1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31D738u;
            goto label_31d738;
        }
    }
    ctx->pc = 0x31D728u;
    // 0x31d728: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x31d728u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31d72c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x31D72Cu;
    {
        const bool branch_taken_0x31d72c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31D730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D72Cu;
        // 0x31d730: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d72c) {
            ctx->pc = 0x31D750u;
            goto label_31d750;
        }
    }
    ctx->pc = 0x31D734u;
    // 0x31d734: 0x102042  srl         $a0, $s0, 1
    ctx->pc = 0x31d734u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
label_31d738:
    // 0x31d738: 0x32030001  andi        $v1, $s0, 0x1
    ctx->pc = 0x31d738u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x31d73c: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x31d73cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x31d740: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x31d740u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31d744: 0x0  nop
    ctx->pc = 0x31d744u;
    // NOP
    // 0x31d748: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x31d748u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x31d74c: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x31d74cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_31d750:
    // 0x31d750: 0x46140042  mul.s       $f1, $f0, $f20
    ctx->pc = 0x31d750u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x31d754: 0x3c044000  lui         $a0, 0x4000
    ctx->pc = 0x31d754u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16384 << 16));
    // 0x31d758: 0x2a51823  subu        $v1, $s5, $a1
    ctx->pc = 0x31d758u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 5)));
    // 0x31d75c: 0x2a53021  addu        $a2, $s5, $a1
    ctx->pc = 0x31d75cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 5)));
    // 0x31d760: 0x28610281  slti        $at, $v1, 0x281
    ctx->pc = 0x31d760u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)641) ? 1 : 0);
    // 0x31d764: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x31d764u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31d768: 0x0  nop
    ctx->pc = 0x31d768u;
    // NOP
    // 0x31d76c: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x31d76cu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
    // 0x31d770: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x31d770u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x31d774: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x31d774u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x31d778: 0x0  nop
    ctx->pc = 0x31d778u;
    // NOP
    // 0x31d77c: 0x442823  subu        $a1, $v0, $a0
    ctx->pc = 0x31d77cu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x31d780: 0x1020004c  beqz        $at, . + 4 + (0x4C << 2)
    ctx->pc = 0x31D780u;
    {
        const bool branch_taken_0x31d780 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x31D784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D780u;
        // 0x31d784: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d780) {
            ctx->pc = 0x31D8B4u;
            goto label_31d8b4;
        }
    }
    ctx->pc = 0x31D788u;
    // 0x31d788: 0x4c30004  bgezl       $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x31D788u;
    {
        const bool branch_taken_0x31d788 = (GPR_S32(ctx, 6) >= 0);
        if (branch_taken_0x31d788) {
            ctx->pc = 0x31D78Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31D788u;
            // 0x31d78c: 0x28a101e1  slti        $at, $a1, 0x1E1 (Delay Slot)
            SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)481) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x31D79Cu;
            goto label_31d79c;
        }
    }
    ctx->pc = 0x31D790u;
    // 0x31d790: 0x10000049  b           . + 4 + (0x49 << 2)
    ctx->pc = 0x31D790u;
    {
        const bool branch_taken_0x31d790 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31D794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D790u;
        // 0x31d794: 0xdfbf00a0  ld          $ra, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d790) {
            ctx->pc = 0x31D8B8u;
            goto label_31d8b8;
        }
    }
    ctx->pc = 0x31D798u;
    // 0x31d798: 0x28a101e1  slti        $at, $a1, 0x1E1
    ctx->pc = 0x31d798u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)481) ? 1 : 0);
label_31d79c:
    // 0x31d79c: 0x10200045  beqz        $at, . + 4 + (0x45 << 2)
    ctx->pc = 0x31D79Cu;
    {
        const bool branch_taken_0x31d79c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x31d79c) {
            ctx->pc = 0x31D8B4u;
            goto label_31d8b4;
        }
    }
    ctx->pc = 0x31D7A4u;
    // 0x31d7a4: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x31D7A4u;
    {
        const bool branch_taken_0x31d7a4 = (GPR_S32(ctx, 4) >= 0);
        if (branch_taken_0x31d7a4) {
            ctx->pc = 0x31D7B4u;
            goto label_31d7b4;
        }
    }
    ctx->pc = 0x31D7ACu;
    // 0x31d7ac: 0x10000041  b           . + 4 + (0x41 << 2)
    ctx->pc = 0x31D7ACu;
    {
        const bool branch_taken_0x31d7ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31d7ac) {
            ctx->pc = 0x31D8B4u;
            goto label_31d8b4;
        }
    }
    ctx->pc = 0x31D7B4u;
label_31d7b4:
    // 0x31d7b4: 0x3c0301da  lui         $v1, 0x1DA
    ctx->pc = 0x31d7b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)474 << 16));
    // 0x31d7b8: 0x8c6329e0  lw          $v1, 0x29E0($v1)
    ctx->pc = 0x31d7b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 10720)));
    // 0x31d7bc: 0x28630190  slti        $v1, $v1, 0x190
    ctx->pc = 0x31d7bcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)400) ? 1 : 0);
    // 0x31d7c0: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x31D7C0u;
    {
        const bool branch_taken_0x31d7c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x31d7c0) {
            ctx->pc = 0x31D7D4u;
            goto label_31d7d4;
        }
    }
    ctx->pc = 0x31D7C8u;
    // 0x31d7c8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x31d7c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31d7cc: 0xb8030001  swr         $v1, 0x1($zero)
    ctx->pc = 0x31d7ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 1); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x31d7d0: 0xa8030004  swl         $v1, 0x4($zero)
    ctx->pc = 0x31d7d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 4); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
label_31d7d4:
    // 0x31d7d4: 0x3c0301da  lui         $v1, 0x1DA
    ctx->pc = 0x31d7d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)474 << 16));
    // 0x31d7d8: 0x3c05447a  lui         $a1, 0x447A
    ctx->pc = 0x31d7d8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17530 << 16));
    // 0x31d7dc: 0x8c6829e0  lw          $t0, 0x29E0($v1)
    ctx->pc = 0x31d7dcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 10720)));
    // 0x31d7e0: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x31d7e0u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31d7e4: 0x3c0601da  lui         $a2, 0x1DA
    ctx->pc = 0x31d7e4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)474 << 16));
    // 0x31d7e8: 0x3c044f00  lui         $a0, 0x4F00
    ctx->pc = 0x31d7e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)20224 << 16));
    // 0x31d7ec: 0x46160042  mul.s       $f1, $f0, $f22
    ctx->pc = 0x31d7ecu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[22]);
    // 0x31d7f0: 0x24c64df0  addiu       $a2, $a2, 0x4DF0
    ctx->pc = 0x31d7f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 19952));
    // 0x31d7f4: 0x828c0  sll         $a1, $t0, 3
    ctx->pc = 0x31d7f4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x31d7f8: 0x3c0301da  lui         $v1, 0x1DA
    ctx->pc = 0x31d7f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)474 << 16));
    // 0x31d7fc: 0xa83823  subu        $a3, $a1, $t0
    ctx->pc = 0x31d7fcu;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
    // 0x31d800: 0x25050001  addiu       $a1, $t0, 0x1
    ctx->pc = 0x31d800u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x31d804: 0xac6529e0  sw          $a1, 0x29E0($v1)
    ctx->pc = 0x31d804u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 10720), GPR_U32(ctx, 5));
    // 0x31d808: 0x71880  sll         $v1, $a3, 2
    ctx->pc = 0x31d808u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x31d80c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x31d80cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31d810: 0xe31821  addu        $v1, $a3, $v1
    ctx->pc = 0x31d810u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x31d814: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x31d814u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x31d818: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x31d818u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x31d81c: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x31D81Cu;
    {
        const bool branch_taken_0x31d81c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x31D820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D81Cu;
        // 0x31d820: 0xc33021  addu        $a2, $a2, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d81c) {
            ctx->pc = 0x31D834u;
            goto label_31d834;
        }
    }
    ctx->pc = 0x31D824u;
    // 0x31d824: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x31d824u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x31d828: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x31d828u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x31d82c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x31D82Cu;
    {
        const bool branch_taken_0x31d82c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31D830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D82Cu;
        // 0x31d830: 0x3c038000  lui         $v1, 0x8000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d82c) {
            ctx->pc = 0x31D850u;
            goto label_31d850;
        }
    }
    ctx->pc = 0x31D834u;
label_31d834:
    // 0x31d834: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x31d834u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x31d838: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x31d838u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x31d83c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x31d83cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x31d840: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x31d840u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x31d844: 0x0  nop
    ctx->pc = 0x31d844u;
    // NOP
    // 0x31d848: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x31d848u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x31d84c: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x31d84cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_31d850:
    // 0x31d850: 0x112842  srl         $a1, $s1, 1
    ctx->pc = 0x31d850u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
    // 0x31d854: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x31d854u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x31d858: 0xacc40110  sw          $a0, 0x110($a2)
    ctx->pc = 0x31d858u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 272), GPR_U32(ctx, 4));
    // 0x31d85c: 0x101842  srl         $v1, $s0, 1
    ctx->pc = 0x31d85cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
    // 0x31d860: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x31d860u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
    // 0x31d864: 0x3c040032  lui         $a0, 0x32
    ctx->pc = 0x31d864u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)50 << 16));
    // 0x31d868: 0xacd30004  sw          $s3, 0x4($a2)
    ctx->pc = 0x31d868u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 19));
    // 0x31d86c: 0x2484d8f0  addiu       $a0, $a0, -0x2710
    ctx->pc = 0x31d86cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957296));
    // 0x31d870: 0xacd20008  sw          $s2, 0x8($a2)
    ctx->pc = 0x31d870u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 18));
    // 0x31d874: 0xacd50014  sw          $s5, 0x14($a2)
    ctx->pc = 0x31d874u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 21));
    // 0x31d878: 0xacc20018  sw          $v0, 0x18($a2)
    ctx->pc = 0x31d878u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 24), GPR_U32(ctx, 2));
    // 0x31d87c: 0xacc5001c  sw          $a1, 0x1C($a2)
    ctx->pc = 0x31d87cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 28), GPR_U32(ctx, 5));
    // 0x31d880: 0xacc30020  sw          $v1, 0x20($a2)
    ctx->pc = 0x31d880u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 32), GPR_U32(ctx, 3));
    // 0x31d884: 0x8fa300bc  lw          $v1, 0xBC($sp)
    ctx->pc = 0x31d884u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
    // 0x31d888: 0xacde0024  sw          $fp, 0x24($a2)
    ctx->pc = 0x31d888u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 36), GPR_U32(ctx, 30));
    // 0x31d88c: 0xacc30028  sw          $v1, 0x28($a2)
    ctx->pc = 0x31d88cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 40), GPR_U32(ctx, 3));
    // 0x31d890: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x31d890u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x31d894: 0xacc3002c  sw          $v1, 0x2C($a2)
    ctx->pc = 0x31d894u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 44), GPR_U32(ctx, 3));
    // 0x31d898: 0xacd10030  sw          $s1, 0x30($a2)
    ctx->pc = 0x31d898u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 48), GPR_U32(ctx, 17));
    // 0x31d89c: 0xacd00034  sw          $s0, 0x34($a2)
    ctx->pc = 0x31d89cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 52), GPR_U32(ctx, 16));
    // 0x31d8a0: 0xacd6000c  sw          $s6, 0xC($a2)
    ctx->pc = 0x31d8a0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 22));
    // 0x31d8a4: 0xacd70010  sw          $s7, 0x10($a2)
    ctx->pc = 0x31d8a4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 23));
    // 0x31d8a8: 0xe4d50038  swc1        $f21, 0x38($a2)
    ctx->pc = 0x31d8a8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 56), bits); }
    // 0x31d8ac: 0xe4d4003c  swc1        $f20, 0x3C($a2)
    ctx->pc = 0x31d8acu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 60), bits); }
    // 0x31d8b0: 0xacc40114  sw          $a0, 0x114($a2)
    ctx->pc = 0x31d8b0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 276), GPR_U32(ctx, 4));
label_31d8b4:
    // 0x31d8b4: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x31d8b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_31d8b8:
    // 0x31d8b8: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x31d8b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x31d8bc: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x31d8bcu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x31d8c0: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x31d8c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x31d8c4: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x31d8c4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x31d8c8: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x31d8c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x31d8cc: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x31d8ccu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x31d8d0: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x31d8d0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x31d8d4: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x31d8d4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x31d8d8: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x31d8d8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x31d8dc: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x31d8dcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x31d8e0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x31d8e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x31d8e4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x31d8e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x31d8e8: 0x3e00008  jr          $ra
    ctx->pc = 0x31D8E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31D8ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D8E8u;
        // 0x31d8ec: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31D8E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31D8F0u;
    // 0x31d8f0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x31d8f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x31d8f4: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x31d8f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x31d8f8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x31d8f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x31d8fc: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x31d8fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x31d900: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x31d900u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x31d904: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x31d904u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x31d908: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x31d908u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x31d90c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x31d90cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x31d910: 0xc4810014  lwc1        $f1, 0x14($a0)
    ctx->pc = 0x31d910u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31d914: 0x8c870024  lw          $a3, 0x24($a0)
    ctx->pc = 0x31d914u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x31d918: 0xc4800018  lwc1        $f0, 0x18($a0)
    ctx->pc = 0x31d918u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31d91c: 0x46800960  cvt.s.w     $f5, $f1
    ctx->pc = 0x31d91cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[5] = FPU_CVT_S_W(tmp); }
    // 0x31d920: 0x30e20001  andi        $v0, $a3, 0x1
    ctx->pc = 0x31d920u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)1);
    // 0x31d924: 0x14400025  bnez        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x31D924u;
    {
        const bool branch_taken_0x31d924 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31D928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D924u;
        // 0x31d928: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d924) {
            ctx->pc = 0x31D9BCu;
            goto label_31d9bc;
        }
    }
    ctx->pc = 0x31D92Cu;
    // 0x31d92c: 0x8c82001c  lw          $v0, 0x1C($a0)
    ctx->pc = 0x31d92cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x31d930: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x31d930u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x31d934: 0x0  nop
    ctx->pc = 0x31d934u;
    // NOP
    // 0x31d938: 0x46050818  adda.s      $f1, $f5
    ctx->pc = 0x31d938u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[1], ctx->f[5]));
    // 0x31d93c: 0x8c860030  lw          $a2, 0x30($a0)
    ctx->pc = 0x31d93cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x31d940: 0xc4830038  lwc1        $f3, 0x38($a0)
    ctx->pc = 0x31d940u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x31d944: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x31d944u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x31d948: 0x0  nop
    ctx->pc = 0x31d948u;
    // NOP
    // 0x31d94c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x31d94cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x31d950: 0xc21023  subu        $v0, $a2, $v0
    ctx->pc = 0x31d950u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x31d954: 0x4603085d  msub.s      $f1, $f1, $f3
    ctx->pc = 0x31d954u;
    ctx->f[1] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[1], ctx->f[3]));
    // 0x31d958: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x31d958u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x31d95c: 0x44190800  mfc1        $t9, $f1
    ctx->pc = 0x31d95cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 25, bits); }
    // 0x31d960: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x31D960u;
    {
        const bool branch_taken_0x31d960 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x31d960) {
            ctx->pc = 0x31D964u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31D960u;
            // 0x31d964: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31D974u;
            goto label_31d974;
        }
    }
    ctx->pc = 0x31D968u;
    // 0x31d968: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x31d968u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x31d96c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x31D96Cu;
    {
        const bool branch_taken_0x31d96c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31D970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D96Cu;
        // 0x31d970: 0x468008a0  cvt.s.w     $f2, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d96c) {
            ctx->pc = 0x31D98Cu;
            goto label_31d98c;
        }
    }
    ctx->pc = 0x31D974u;
label_31d974:
    // 0x31d974: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x31d974u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x31d978: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x31d978u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x31d97c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x31d97cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x31d980: 0x0  nop
    ctx->pc = 0x31d980u;
    // NOP
    // 0x31d984: 0x468008a0  cvt.s.w     $f2, $f1
    ctx->pc = 0x31d984u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x31d988: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x31d988u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_31d98c:
    // 0x31d98c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x31d98cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x31d990: 0x0  nop
    ctx->pc = 0x31d990u;
    // NOP
    // 0x31d994: 0x46050818  adda.s      $f1, $f5
    ctx->pc = 0x31d994u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[1], ctx->f[5]));
    // 0x31d998: 0x4602189c  madd.s      $f2, $f3, $f2
    ctx->pc = 0x31d998u;
    ctx->f[2] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x31d99c: 0x46001064  .word       0x46001064                   # cvt.w.s     $f1, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x31d99cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x31d9a0: 0x44180800  mfc1        $t8, $f1
    ctx->pc = 0x31d9a0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 24, bits); }
    // 0x31d9a4: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x31d9a4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x31d9a8: 0x46020832  c.eq.s      $f1, $f2
    ctx->pc = 0x31d9a8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x31d9ac: 0x45030025  bc1tl       . + 4 + (0x25 << 2)
    ctx->pc = 0x31D9ACu;
    {
        const bool branch_taken_0x31d9ac = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x31d9ac) {
            ctx->pc = 0x31D9B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31D9ACu;
            // 0x31d9b0: 0x30e20002  andi        $v0, $a3, 0x2 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)2);
            ctx->in_delay_slot = false;
            ctx->pc = 0x31DA44u;
            goto label_31da44;
        }
    }
    ctx->pc = 0x31D9B4u;
    // 0x31d9b4: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x31D9B4u;
    {
        const bool branch_taken_0x31d9b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31D9B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D9B4u;
        // 0x31d9b8: 0x27180001  addiu       $t8, $t8, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d9b4) {
            ctx->pc = 0x31DA40u;
            goto label_31da40;
        }
    }
    ctx->pc = 0x31D9BCu;
label_31d9bc:
    // 0x31d9bc: 0x8c85001c  lw          $a1, 0x1C($a0)
    ctx->pc = 0x31d9bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x31d9c0: 0x8c860030  lw          $a2, 0x30($a0)
    ctx->pc = 0x31d9c0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x31d9c4: 0xc51023  subu        $v0, $a2, $a1
    ctx->pc = 0x31d9c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x31d9c8: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x31D9C8u;
    {
        const bool branch_taken_0x31d9c8 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x31D9CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D9C8u;
        // 0x31d9cc: 0xc4840038  lwc1        $f4, 0x38($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d9c8) {
            ctx->pc = 0x31D9DCu;
            goto label_31d9dc;
        }
    }
    ctx->pc = 0x31D9D0u;
    // 0x31d9d0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x31d9d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x31d9d4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x31D9D4u;
    {
        const bool branch_taken_0x31d9d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31D9D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D9D4u;
        // 0x31d9d8: 0x468008e0  cvt.s.w     $f3, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d9d4) {
            ctx->pc = 0x31D9F8u;
            goto label_31d9f8;
        }
    }
    ctx->pc = 0x31D9DCu;
label_31d9dc:
    // 0x31d9dc: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x31d9dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x31d9e0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x31d9e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x31d9e4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x31d9e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x31d9e8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x31d9e8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x31d9ec: 0x0  nop
    ctx->pc = 0x31d9ecu;
    // NOP
    // 0x31d9f0: 0x468008e0  cvt.s.w     $f3, $f1
    ctx->pc = 0x31d9f0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x31d9f4: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x31d9f4u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
label_31d9f8:
    // 0x31d9f8: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x31d9f8u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x31d9fc: 0x0  nop
    ctx->pc = 0x31d9fcu;
    // NOP
    // 0x31da00: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x31da00u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x31da04: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x31da04u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x31da08: 0x0  nop
    ctx->pc = 0x31da08u;
    // NOP
    // 0x31da0c: 0x46051018  adda.s      $f2, $f5
    ctx->pc = 0x31da0cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[2], ctx->f[5]));
    // 0x31da10: 0x460320dd  msub.s      $f3, $f4, $f3
    ctx->pc = 0x31da10u;
    ctx->f[3] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[3]));
    // 0x31da14: 0x46051018  adda.s      $f2, $f5
    ctx->pc = 0x31da14u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[2], ctx->f[5]));
    // 0x31da18: 0x4604089c  madd.s      $f2, $f1, $f4
    ctx->pc = 0x31da18u;
    ctx->f[2] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[1], ctx->f[4]));
    // 0x31da1c: 0x46001864  .word       0x46001864                   # cvt.w.s     $f1, $f3 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x31da1cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[3]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x31da20: 0x44180800  mfc1        $t8, $f1
    ctx->pc = 0x31da20u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 24, bits); }
    // 0x31da24: 0x46001064  .word       0x46001064                   # cvt.w.s     $f1, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x31da24u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x31da28: 0x44190800  mfc1        $t9, $f1
    ctx->pc = 0x31da28u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 25, bits); }
    // 0x31da2c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x31da2cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x31da30: 0x46020832  c.eq.s      $f1, $f2
    ctx->pc = 0x31da30u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x31da34: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x31DA34u;
    {
        const bool branch_taken_0x31da34 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x31da34) {
            ctx->pc = 0x31DA40u;
            goto label_31da40;
        }
    }
    ctx->pc = 0x31DA3Cu;
    // 0x31da3c: 0x27390001  addiu       $t9, $t9, 0x1
    ctx->pc = 0x31da3cu;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), 1));
label_31da40:
    // 0x31da40: 0x30e20002  andi        $v0, $a3, 0x2
    ctx->pc = 0x31da40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)2);
label_31da44:
    // 0x31da44: 0x54400025  bnel        $v0, $zero, . + 4 + (0x25 << 2)
    ctx->pc = 0x31DA44u;
    {
        const bool branch_taken_0x31da44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x31da44) {
            ctx->pc = 0x31DA48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31DA44u;
            // 0x31da48: 0x8c870020  lw          $a3, 0x20($a0) (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31DADCu;
            goto label_31dadc;
        }
    }
    ctx->pc = 0x31DA4Cu;
    // 0x31da4c: 0x8c820020  lw          $v0, 0x20($a0)
    ctx->pc = 0x31da4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x31da50: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x31da50u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x31da54: 0x0  nop
    ctx->pc = 0x31da54u;
    // NOP
    // 0x31da58: 0x46000818  adda.s      $f1, $f0
    ctx->pc = 0x31da58u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[1], ctx->f[0]));
    // 0x31da5c: 0x8c850034  lw          $a1, 0x34($a0)
    ctx->pc = 0x31da5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x31da60: 0xc483003c  lwc1        $f3, 0x3C($a0)
    ctx->pc = 0x31da60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x31da64: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x31da64u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x31da68: 0x0  nop
    ctx->pc = 0x31da68u;
    // NOP
    // 0x31da6c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x31da6cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x31da70: 0xa21023  subu        $v0, $a1, $v0
    ctx->pc = 0x31da70u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x31da74: 0x4603085d  msub.s      $f1, $f1, $f3
    ctx->pc = 0x31da74u;
    ctx->f[1] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[1], ctx->f[3]));
    // 0x31da78: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x31da78u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x31da7c: 0x440f0800  mfc1        $t7, $f1
    ctx->pc = 0x31da7cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 15, bits); }
    // 0x31da80: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x31DA80u;
    {
        const bool branch_taken_0x31da80 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x31da80) {
            ctx->pc = 0x31DA84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31DA80u;
            // 0x31da84: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31DA94u;
            goto label_31da94;
        }
    }
    ctx->pc = 0x31DA88u;
    // 0x31da88: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x31da88u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x31da8c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x31DA8Cu;
    {
        const bool branch_taken_0x31da8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31DA90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31DA8Cu;
        // 0x31da90: 0x468008a0  cvt.s.w     $f2, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x31da8c) {
            ctx->pc = 0x31DAACu;
            goto label_31daac;
        }
    }
    ctx->pc = 0x31DA94u;
label_31da94:
    // 0x31da94: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x31da94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x31da98: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x31da98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x31da9c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x31da9cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x31daa0: 0x0  nop
    ctx->pc = 0x31daa0u;
    // NOP
    // 0x31daa4: 0x468008a0  cvt.s.w     $f2, $f1
    ctx->pc = 0x31daa4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x31daa8: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x31daa8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_31daac:
    // 0x31daac: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x31daacu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x31dab0: 0x0  nop
    ctx->pc = 0x31dab0u;
    // NOP
    // 0x31dab4: 0x46000818  adda.s      $f1, $f0
    ctx->pc = 0x31dab4u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[1], ctx->f[0]));
    // 0x31dab8: 0x4602185c  madd.s      $f1, $f3, $f2
    ctx->pc = 0x31dab8u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x31dabc: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x31dabcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x31dac0: 0x440e0000  mfc1        $t6, $f0
    ctx->pc = 0x31dac0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 14, bits); }
    // 0x31dac4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x31dac4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x31dac8: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x31dac8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x31dacc: 0x45030024  bc1tl       . + 4 + (0x24 << 2)
    ctx->pc = 0x31DACCu;
    {
        const bool branch_taken_0x31dacc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x31dacc) {
            ctx->pc = 0x31DAD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31DACCu;
            // 0x31dad0: 0x8c870028  lw          $a3, 0x28($a0) (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31DB60u;
            goto label_31db60;
        }
    }
    ctx->pc = 0x31DAD4u;
    // 0x31dad4: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x31DAD4u;
    {
        const bool branch_taken_0x31dad4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31DAD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31DAD4u;
        // 0x31dad8: 0x25ce0001  addiu       $t6, $t6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31dad4) {
            ctx->pc = 0x31DB5Cu;
            goto label_31db5c;
        }
    }
    ctx->pc = 0x31DADCu;
label_31dadc:
    // 0x31dadc: 0x8c850034  lw          $a1, 0x34($a0)
    ctx->pc = 0x31dadcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x31dae0: 0xa71023  subu        $v0, $a1, $a3
    ctx->pc = 0x31dae0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x31dae4: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x31DAE4u;
    {
        const bool branch_taken_0x31dae4 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x31DAE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31DAE4u;
        // 0x31dae8: 0xc484003c  lwc1        $f4, 0x3C($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x31dae4) {
            ctx->pc = 0x31DAF8u;
            goto label_31daf8;
        }
    }
    ctx->pc = 0x31DAECu;
    // 0x31daec: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x31daecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x31daf0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x31DAF0u;
    {
        const bool branch_taken_0x31daf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31DAF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31DAF0u;
        // 0x31daf4: 0x468008e0  cvt.s.w     $f3, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x31daf0) {
            ctx->pc = 0x31DB14u;
            goto label_31db14;
        }
    }
    ctx->pc = 0x31DAF8u;
label_31daf8:
    // 0x31daf8: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x31daf8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x31dafc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x31dafcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x31db00: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x31db00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x31db04: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x31db04u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x31db08: 0x0  nop
    ctx->pc = 0x31db08u;
    // NOP
    // 0x31db0c: 0x468008e0  cvt.s.w     $f3, $f1
    ctx->pc = 0x31db0cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x31db10: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x31db10u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
label_31db14:
    // 0x31db14: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x31db14u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x31db18: 0x0  nop
    ctx->pc = 0x31db18u;
    // NOP
    // 0x31db1c: 0x46001018  adda.s      $f2, $f0
    ctx->pc = 0x31db1cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[2], ctx->f[0]));
    // 0x31db20: 0x460320dd  msub.s      $f3, $f4, $f3
    ctx->pc = 0x31db20u;
    ctx->f[3] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[3]));
    // 0x31db24: 0x44870800  mtc1        $a3, $f1
    ctx->pc = 0x31db24u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x31db28: 0x0  nop
    ctx->pc = 0x31db28u;
    // NOP
    // 0x31db2c: 0x46001018  adda.s      $f2, $f0
    ctx->pc = 0x31db2cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[2], ctx->f[0]));
    // 0x31db30: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x31db30u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x31db34: 0x46001824  .word       0x46001824                   # cvt.w.s     $f0, $f3 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x31db34u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[3]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x31db38: 0x4604085c  madd.s      $f1, $f1, $f4
    ctx->pc = 0x31db38u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[1], ctx->f[4]));
    // 0x31db3c: 0x440e0000  mfc1        $t6, $f0
    ctx->pc = 0x31db3cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 14, bits); }
    // 0x31db40: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x31db40u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x31db44: 0x440f0000  mfc1        $t7, $f0
    ctx->pc = 0x31db44u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 15, bits); }
    // 0x31db48: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x31db48u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x31db4c: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x31db4cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x31db50: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x31DB50u;
    {
        const bool branch_taken_0x31db50 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x31db50) {
            ctx->pc = 0x31DB5Cu;
            goto label_31db5c;
        }
    }
    ctx->pc = 0x31DB58u;
    // 0x31db58: 0x25ef0001  addiu       $t7, $t7, 0x1
    ctx->pc = 0x31db58u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
label_31db5c:
    // 0x31db5c: 0x8c870028  lw          $a3, 0x28($a0)
    ctx->pc = 0x31db5cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_31db60:
    // 0x31db60: 0x3c09ff00  lui         $t1, 0xFF00
    ctx->pc = 0x31db60u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65280 << 16));
    // 0x31db64: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x31db64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x31db68: 0x3c0200ff  lui         $v0, 0xFF
    ctx->pc = 0x31db68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
    // 0x31db6c: 0x8c8a002c  lw          $t2, 0x2C($a0)
    ctx->pc = 0x31db6cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x31db70: 0x682d  daddu       $t5, $zero, $zero
    ctx->pc = 0x31db70u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31db74: 0xe63021  addu        $a2, $a3, $a2
    ctx->pc = 0x31db74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x31db78: 0x73900  sll         $a3, $a3, 4
    ctx->pc = 0x31db78u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x31db7c: 0x694824  and         $t1, $v1, $t1
    ctx->pc = 0x31db7cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 3) & GPR_U64(ctx, 9));
    // 0x31db80: 0x24e80008  addiu       $t0, $a3, 0x8
    ctx->pc = 0x31db80u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
    // 0x31db84: 0x95e02  srl         $t3, $t1, 24
    ctx->pc = 0x31db84u;
    SET_GPR_S32(ctx, 11, (int32_t)SRL32(GPR_U32(ctx, 9), 24));
    // 0x31db88: 0x63900  sll         $a3, $a2, 4
    ctx->pc = 0x31db88u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x31db8c: 0x1452821  addu        $a1, $t2, $a1
    ctx->pc = 0x31db8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 5)));
    // 0x31db90: 0xa3100  sll         $a2, $t2, 4
    ctx->pc = 0x31db90u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 10), 4));
    // 0x31db94: 0x624824  and         $t1, $v1, $v0
    ctx->pc = 0x31db94u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x31db98: 0x95403  sra         $t2, $t1, 16
    ctx->pc = 0x31db98u;
    SET_GPR_S32(ctx, 10, SRA32(GPR_S32(ctx, 9), 16));
    // 0x31db9c: 0x8c840010  lw          $a0, 0x10($a0)
    ctx->pc = 0x31db9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x31dba0: 0x25690001  addiu       $t1, $t3, 0x1
    ctx->pc = 0x31dba0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x31dba4: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x31dba4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x31dba8: 0x96043  sra         $t4, $t1, 1
    ctx->pc = 0x31dba8u;
    SET_GPR_S32(ctx, 12, SRA32(GPR_S32(ctx, 9), 1));
    // 0x31dbac: 0x25490001  addiu       $t1, $t2, 0x1
    ctx->pc = 0x31dbacu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x31dbb0: 0x95843  sra         $t3, $t1, 1
    ctx->pc = 0x31dbb0u;
    SET_GPR_S32(ctx, 11, SRA32(GPR_S32(ctx, 9), 1));
    // 0x31dbb4: 0x3069ff00  andi        $t1, $v1, 0xFF00
    ctx->pc = 0x31dbb4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65280);
    // 0x31dbb8: 0x94a03  sra         $t1, $t1, 8
    ctx->pc = 0x31dbb8u;
    SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 9), 8));
    // 0x31dbbc: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x31dbbcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x31dbc0: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x31dbc0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x31dbc4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x31dbc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x31dbc8: 0x95043  sra         $t2, $t1, 1
    ctx->pc = 0x31dbc8u;
    SET_GPR_S32(ctx, 10, SRA32(GPR_S32(ctx, 9), 1));
    // 0x31dbcc: 0x34843  sra         $t1, $v1, 1
    ctx->pc = 0x31dbccu;
    SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 3), 1));
    // 0x31dbd0: 0x41a3c  dsll32      $v1, $a0, 8
    ctx->pc = 0x31dbd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 8));
    // 0x31dbd4: 0x31a3e  dsrl32      $v1, $v1, 8
    ctx->pc = 0x31dbd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 8));
    // 0x31dbd8: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x31DBD8u;
    {
        const bool branch_taken_0x31dbd8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x31DBDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31DBD8u;
        // 0x31dbdc: 0x52900  sll         $a1, $a1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31dbd8) {
            ctx->pc = 0x31DBF4u;
            goto label_31dbf4;
        }
    }
    ctx->pc = 0x31DBE0u;
    // 0x31dbe0: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x31dbe0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x31dbe4: 0x240d0003  addiu       $t5, $zero, 0x3
    ctx->pc = 0x31dbe4u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x31dbe8: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x31dbe8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x31dbec: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x31dbecu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x31dbf0: 0x1826021  addu        $t4, $t4, $v0
    ctx->pc = 0x31dbf0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
label_31dbf4:
    // 0x31dbf4: 0xd183c  dsll32      $v1, $t5, 0
    ctx->pc = 0x31dbf4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 13) << (32 + 0));
    // 0x31dbf8: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0x31dbf8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    // 0x31dbfc: 0x248400d0  addiu       $a0, $a0, 0xD0
    ctx->pc = 0x31dbfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 208));
    // 0x31dc00: 0x3c0d01dc  lui         $t5, 0x1DC
    ctx->pc = 0x31dc00u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)476 << 16));
    // 0x31dc04: 0xada40370  sw          $a0, 0x370($t5)
    ctx->pc = 0x31dc04u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 880), GPR_U32(ctx, 4));
    // 0x31dc08: 0x191100  sll         $v0, $t9, 4
    ctx->pc = 0x31dc08u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 25), 4));
    // 0x31dc0c: 0x3c0d1000  lui         $t5, 0x1000
    ctx->pc = 0x31dc0cu;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)4096 << 16));
    // 0x31dc10: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x31dc10u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x31dc14: 0xd803c  dsll32      $s0, $t5, 0
    ctx->pc = 0x31dc14u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 13) << (32 + 0));
    // 0x31dc18: 0x318fc  dsll32      $v1, $v1, 3
    ctx->pc = 0x31dc18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 3));
    // 0x31dc1c: 0x240d0004  addiu       $t5, $zero, 0x4
    ctx->pc = 0x31dc1cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x31dc20: 0x24120014  addiu       $s2, $zero, 0x14
    ctx->pc = 0x31dc20u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x31dc24: 0x1b08025  or          $s0, $t5, $s0
    ctx->pc = 0x31dc24u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 13) | GPR_U64(ctx, 16));
    // 0x31dc28: 0x3c1401dc  lui         $s4, 0x1DC
    ctx->pc = 0x31dc28u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)476 << 16));
    // 0x31dc2c: 0xfc900000  sd          $s0, 0x0($a0)
    ctx->pc = 0x31dc2cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 16));
    // 0x31dc30: 0x240d000e  addiu       $t5, $zero, 0xE
    ctx->pc = 0x31dc30u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x31dc34: 0xfc8d0008  sd          $t5, 0x8($a0)
    ctx->pc = 0x31dc34u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 13));
    // 0x31dc38: 0x2410003f  addiu       $s0, $zero, 0x3F
    ctx->pc = 0x31dc38u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x31dc3c: 0xfc800010  sd          $zero, 0x10($a0)
    ctx->pc = 0x31dc3cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 0));
    // 0x31dc40: 0x3c0d2017  lui         $t5, 0x2017
    ctx->pc = 0x31dc40u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)8215 << 16));
    // 0x31dc44: 0xfc900018  sd          $s0, 0x18($a0)
    ctx->pc = 0x31dc44u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 24), GPR_U64(ctx, 16));
    // 0x31dc48: 0x35ade406  ori         $t5, $t5, 0xE406
    ctx->pc = 0x31dc48u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) | (uint64_t)(uint16_t)58374);
    // 0x31dc4c: 0x3c102142  lui         $s0, 0x2142
    ctx->pc = 0x31dc4cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)8514 << 16));
    // 0x31dc50: 0xd883c  dsll32      $s1, $t5, 0
    ctx->pc = 0x31dc50u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 13) << (32 + 0));
    // 0x31dc54: 0x36103ea0  ori         $s0, $s0, 0x3EA0
    ctx->pc = 0x31dc54u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)16032);
    // 0x31dc58: 0x240d0006  addiu       $t5, $zero, 0x6
    ctx->pc = 0x31dc58u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x31dc5c: 0x2118025  or          $s0, $s0, $s1
    ctx->pc = 0x31dc5cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 17));
    // 0x31dc60: 0x3c1901dc  lui         $t9, 0x1DC
    ctx->pc = 0x31dc60u;
    SET_GPR_S32(ctx, 25, (int32_t)((uint32_t)476 << 16));
    // 0x31dc64: 0x701825  or          $v1, $v1, $s0
    ctx->pc = 0x31dc64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 16));
    // 0x31dc68: 0x24110005  addiu       $s1, $zero, 0x5
    ctx->pc = 0x31dc68u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x31dc6c: 0xfc830020  sd          $v1, 0x20($a0)
    ctx->pc = 0x31dc6cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 32), GPR_U64(ctx, 3));
    // 0x31dc70: 0x24100008  addiu       $s0, $zero, 0x8
    ctx->pc = 0x31dc70u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x31dc74: 0x3c0360ab  lui         $v1, 0x60AB
    ctx->pc = 0x31dc74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)24747 << 16));
    // 0x31dc78: 0xfc8d0028  sd          $t5, 0x28($a0)
    ctx->pc = 0x31dc78u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 40), GPR_U64(ctx, 13));
    // 0x31dc7c: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x31dc7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x31dc80: 0xfc800030  sd          $zero, 0x30($a0)
    ctx->pc = 0x31dc80u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 48), GPR_U64(ctx, 0));
    // 0x31dc84: 0x3683c  dsll32      $t5, $v1, 0
    ctx->pc = 0x31dc84u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 3) << (32 + 0));
    // 0x31dc88: 0xfc920038  sd          $s2, 0x38($a0)
    ctx->pc = 0x31dc88u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 56), GPR_U64(ctx, 18));
    // 0x31dc8c: 0x34038001  ori         $v1, $zero, 0x8001
    ctx->pc = 0x31dc8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32769);
    // 0x31dc90: 0xfc910040  sd          $s1, 0x40($a0)
    ctx->pc = 0x31dc90u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 64), GPR_U64(ctx, 17));
    // 0x31dc94: 0x6d6825  or          $t5, $v1, $t5
    ctx->pc = 0x31dc94u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 3) | GPR_U64(ctx, 13));
    // 0x31dc98: 0xfc900048  sd          $s0, 0x48($a0)
    ctx->pc = 0x31dc98u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 72), GPR_U64(ctx, 16));
    // 0x31dc9c: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x31dc9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x31dca0: 0xfc8d0050  sd          $t5, 0x50($a0)
    ctx->pc = 0x31dca0u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 80), GPR_U64(ctx, 13));
    // 0x31dca4: 0x34633513  ori         $v1, $v1, 0x3513
    ctx->pc = 0x31dca4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)13587);
    // 0x31dca8: 0x3c1301dc  lui         $s3, 0x1DC
    ctx->pc = 0x31dca8u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)476 << 16));
    // 0x31dcac: 0xfc830058  sd          $v1, 0x58($a0)
    ctx->pc = 0x31dcacu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 88), GPR_U64(ctx, 3));
    // 0x31dcb0: 0x3c1201dc  lui         $s2, 0x1DC
    ctx->pc = 0x31dcb0u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)476 << 16));
    // 0x31dcb4: 0x3c0301dc  lui         $v1, 0x1DC
    ctx->pc = 0x31dcb4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)476 << 16));
    // 0x31dcb8: 0x3c0401dc  lui         $a0, 0x1DC
    ctx->pc = 0x31dcb8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)476 << 16));
    // 0x31dcbc: 0x8c700370  lw          $s0, 0x370($v1)
    ctx->pc = 0x31dcbcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 880)));
    // 0x31dcc0: 0x3c1101dc  lui         $s1, 0x1DC
    ctx->pc = 0x31dcc0u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)476 << 16));
    // 0x31dcc4: 0x24426c00  addiu       $v0, $v0, 0x6C00
    ctx->pc = 0x31dcc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 27648));
    // 0x31dcc8: 0x260d0060  addiu       $t5, $s0, 0x60
    ctx->pc = 0x31dcc8u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
    // 0x31dccc: 0x3c0301dc  lui         $v1, 0x1DC
    ctx->pc = 0x31dcccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)476 << 16));
    // 0x31dcd0: 0xac8d0370  sw          $t5, 0x370($a0)
    ctx->pc = 0x31dcd0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 880), GPR_U32(ctx, 13));
    // 0x31dcd4: 0xae080060  sw          $t0, 0x60($s0)
    ctx->pc = 0x31dcd4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 8));
    // 0x31dcd8: 0x3c0d01dc  lui         $t5, 0x1DC
    ctx->pc = 0x31dcd8u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)476 << 16));
    // 0x31dcdc: 0x8c750370  lw          $s5, 0x370($v1)
    ctx->pc = 0x31dcdcu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 880)));
    // 0x31dce0: 0x3c1001dc  lui         $s0, 0x1DC
    ctx->pc = 0x31dce0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)476 << 16));
    // 0x31dce4: 0x3c0801dc  lui         $t0, 0x1DC
    ctx->pc = 0x31dce4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)476 << 16));
    // 0x31dce8: 0x3c0401dc  lui         $a0, 0x1DC
    ctx->pc = 0x31dce8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)476 << 16));
    // 0x31dcec: 0xaea60004  sw          $a2, 0x4($s5)
    ctx->pc = 0x31dcecu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 6));
    // 0x31dcf0: 0x3c03009d  lui         $v1, 0x9D
    ctx->pc = 0x31dcf0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)157 << 16));
    // 0x31dcf4: 0x8e860370  lw          $a2, 0x370($s4)
    ctx->pc = 0x31dcf4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 880)));
    // 0x31dcf8: 0xacc00008  sw          $zero, 0x8($a2)
    ctx->pc = 0x31dcf8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 0));
    // 0x31dcfc: 0x8f260370  lw          $a2, 0x370($t9)
    ctx->pc = 0x31dcfcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 880)));
    // 0x31dd00: 0xacc0000c  sw          $zero, 0xC($a2)
    ctx->pc = 0x31dd00u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 0));
    // 0x31dd04: 0x8e730370  lw          $s3, 0x370($s3)
    ctx->pc = 0x31dd04u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 880)));
    // 0x31dd08: 0x26660010  addiu       $a2, $s3, 0x10
    ctx->pc = 0x31dd08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    // 0x31dd0c: 0xae460370  sw          $a2, 0x370($s2)
    ctx->pc = 0x31dd0cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 880), GPR_U32(ctx, 6));
    // 0x31dd10: 0xae6b0010  sw          $t3, 0x10($s3)
    ctx->pc = 0x31dd10u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 11));
    // 0x31dd14: 0x8e260370  lw          $a2, 0x370($s1)
    ctx->pc = 0x31dd14u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 880)));
    // 0x31dd18: 0xacca0004  sw          $t2, 0x4($a2)
    ctx->pc = 0x31dd18u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 10));
    // 0x31dd1c: 0x8e060370  lw          $a2, 0x370($s0)
    ctx->pc = 0x31dd1cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 880)));
    // 0x31dd20: 0xacc90008  sw          $t1, 0x8($a2)
    ctx->pc = 0x31dd20u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 9));
    // 0x31dd24: 0x8da60370  lw          $a2, 0x370($t5)
    ctx->pc = 0x31dd24u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 880)));
    // 0x31dd28: 0xaccc000c  sw          $t4, 0xC($a2)
    ctx->pc = 0x31dd28u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 12));
    // 0x31dd2c: 0x8d080370  lw          $t0, 0x370($t0)
    ctx->pc = 0x31dd2cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 880)));
    // 0x31dd30: 0x25060010  addiu       $a2, $t0, 0x10
    ctx->pc = 0x31dd30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
    // 0x31dd34: 0xac860370  sw          $a2, 0x370($a0)
    ctx->pc = 0x31dd34u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 880), GPR_U32(ctx, 6));
    // 0x31dd38: 0xad020010  sw          $v0, 0x10($t0)
    ctx->pc = 0x31dd38u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 16), GPR_U32(ctx, 2));
    // 0x31dd3c: 0x9062b280  lbu         $v0, -0x4D80($v1)
    ctx->pc = 0x31dd3cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294947456)));
    // 0x31dd40: 0x50400015  beql        $v0, $zero, . + 4 + (0x15 << 2)
    ctx->pc = 0x31DD40u;
    {
        const bool branch_taken_0x31dd40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x31dd40) {
            ctx->pc = 0x31DD44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31DD40u;
            // 0x31dd44: 0xf1100  sll         $v0, $t7, 4 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 15), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31DD98u;
            goto label_31dd98;
        }
    }
    ctx->pc = 0x31DD48u;
    // 0x31dd48: 0xf1900  sll         $v1, $t7, 4
    ctx->pc = 0x31dd48u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 15), 4));
    // 0x31dd4c: 0x3c028888  lui         $v0, 0x8888
    ctx->pc = 0x31dd4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34952 << 16));
    // 0x31dd50: 0x24647100  addiu       $a0, $v1, 0x7100
    ctx->pc = 0x31dd50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 28928));
    // 0x31dd54: 0x24868000  addiu       $a2, $a0, -0x8000
    ctx->pc = 0x31dd54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 4294934528));
    // 0x31dd58: 0x34438889  ori         $v1, $v0, 0x8889
    ctx->pc = 0x31dd58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34953);
    // 0x31dd5c: 0x620c0  sll         $a0, $a2, 3
    ctx->pc = 0x31dd5cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x31dd60: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x31dd60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x31dd64: 0x862023  subu        $a0, $a0, $a2
    ctx->pc = 0x31dd64u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x31dd68: 0x43180  sll         $a2, $a0, 6
    ctx->pc = 0x31dd68u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
    // 0x31dd6c: 0x660018  mult        $zero, $v1, $a2
    ctx->pc = 0x31dd6cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x31dd70: 0x627c2  srl         $a0, $a2, 31
    ctx->pc = 0x31dd70u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 6), 31));
    // 0x31dd74: 0x0  nop
    ctx->pc = 0x31dd74u;
    // NOP
    // 0x31dd78: 0x1810  mfhi        $v1
    ctx->pc = 0x31dd78u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x31dd7c: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x31dd7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x31dd80: 0x31a03  sra         $v1, $v1, 8
    ctx->pc = 0x31dd80u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 8));
    // 0x31dd84: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x31dd84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x31dd88: 0x24637fff  addiu       $v1, $v1, 0x7FFF
    ctx->pc = 0x31dd88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32767));
    // 0x31dd8c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x31dd8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x31dd90: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x31DD90u;
    {
        const bool branch_taken_0x31dd90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31DD94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31DD90u;
        // 0x31dd94: 0x624024  and         $t0, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31dd90) {
            ctx->pc = 0x31DD9Cu;
            goto label_31dd9c;
        }
    }
    ctx->pc = 0x31DD98u;
label_31dd98:
    // 0x31dd98: 0x24487100  addiu       $t0, $v0, 0x7100
    ctx->pc = 0x31dd98u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 28928));
label_31dd9c:
    // 0x31dd9c: 0x3c0201dc  lui         $v0, 0x1DC
    ctx->pc = 0x31dd9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)476 << 16));
    // 0x31dda0: 0x181900  sll         $v1, $t8, 4
    ctx->pc = 0x31dda0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 24), 4));
    // 0x31dda4: 0x8c460370  lw          $a2, 0x370($v0)
    ctx->pc = 0x31dda4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 880)));
    // 0x31dda8: 0x24746c00  addiu       $s4, $v1, 0x6C00
    ctx->pc = 0x31dda8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 27648));
    // 0x31ddac: 0x3c0301dc  lui         $v1, 0x1DC
    ctx->pc = 0x31ddacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)476 << 16));
    // 0x31ddb0: 0x2404a833  addiu       $a0, $zero, -0x57CD
    ctx->pc = 0x31ddb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294944819));
    // 0x31ddb4: 0x3c1301dc  lui         $s3, 0x1DC
    ctx->pc = 0x31ddb4u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)476 << 16));
    // 0x31ddb8: 0x3c1201dc  lui         $s2, 0x1DC
    ctx->pc = 0x31ddb8u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)476 << 16));
    // 0x31ddbc: 0xacc80004  sw          $t0, 0x4($a2)
    ctx->pc = 0x31ddbcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 8));
    // 0x31ddc0: 0x3c0201dc  lui         $v0, 0x1DC
    ctx->pc = 0x31ddc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)476 << 16));
    // 0x31ddc4: 0x8c630370  lw          $v1, 0x370($v1)
    ctx->pc = 0x31ddc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 880)));
    // 0x31ddc8: 0x3c1101dc  lui         $s1, 0x1DC
    ctx->pc = 0x31ddc8u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)476 << 16));
    // 0x31ddcc: 0x3c1001dc  lui         $s0, 0x1DC
    ctx->pc = 0x31ddccu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)476 << 16));
    // 0x31ddd0: 0x3c1901dc  lui         $t9, 0x1DC
    ctx->pc = 0x31ddd0u;
    SET_GPR_S32(ctx, 25, (int32_t)((uint32_t)476 << 16));
    // 0x31ddd4: 0x3c1801dc  lui         $t8, 0x1DC
    ctx->pc = 0x31ddd4u;
    SET_GPR_S32(ctx, 24, (int32_t)((uint32_t)476 << 16));
    // 0x31ddd8: 0x3c0f01dc  lui         $t7, 0x1DC
    ctx->pc = 0x31ddd8u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)476 << 16));
    // 0x31dddc: 0xac640008  sw          $a0, 0x8($v1)
    ctx->pc = 0x31dddcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 4));
    // 0x31dde0: 0x3c0d01dc  lui         $t5, 0x1DC
    ctx->pc = 0x31dde0u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)476 << 16));
    // 0x31dde4: 0x8c550370  lw          $s5, 0x370($v0)
    ctx->pc = 0x31dde4u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 880)));
    // 0x31dde8: 0x3c0801dc  lui         $t0, 0x1DC
    ctx->pc = 0x31dde8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)476 << 16));
    // 0x31ddec: 0x3c0601dc  lui         $a2, 0x1DC
    ctx->pc = 0x31ddecu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)476 << 16));
    // 0x31ddf0: 0x3c0401dc  lui         $a0, 0x1DC
    ctx->pc = 0x31ddf0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)476 << 16));
    // 0x31ddf4: 0x3c0301dc  lui         $v1, 0x1DC
    ctx->pc = 0x31ddf4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)476 << 16));
    // 0x31ddf8: 0xaea0000c  sw          $zero, 0xC($s5)
    ctx->pc = 0x31ddf8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 12), GPR_U32(ctx, 0));
    // 0x31ddfc: 0x3c02009d  lui         $v0, 0x9D
    ctx->pc = 0x31ddfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)157 << 16));
    // 0x31de00: 0x8e750370  lw          $s5, 0x370($s3)
    ctx->pc = 0x31de00u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 880)));
    // 0x31de04: 0x26b30010  addiu       $s3, $s5, 0x10
    ctx->pc = 0x31de04u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
    // 0x31de08: 0xae530370  sw          $s3, 0x370($s2)
    ctx->pc = 0x31de08u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 880), GPR_U32(ctx, 19));
    // 0x31de0c: 0xaea70010  sw          $a3, 0x10($s5)
    ctx->pc = 0x31de0cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 16), GPR_U32(ctx, 7));
    // 0x31de10: 0x8e270370  lw          $a3, 0x370($s1)
    ctx->pc = 0x31de10u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 880)));
    // 0x31de14: 0xace50004  sw          $a1, 0x4($a3)
    ctx->pc = 0x31de14u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 5));
    // 0x31de18: 0x8e050370  lw          $a1, 0x370($s0)
    ctx->pc = 0x31de18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 880)));
    // 0x31de1c: 0xaca00008  sw          $zero, 0x8($a1)
    ctx->pc = 0x31de1cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 0));
    // 0x31de20: 0x8f250370  lw          $a1, 0x370($t9)
    ctx->pc = 0x31de20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 880)));
    // 0x31de24: 0xaca0000c  sw          $zero, 0xC($a1)
    ctx->pc = 0x31de24u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 0));
    // 0x31de28: 0x8f070370  lw          $a3, 0x370($t8)
    ctx->pc = 0x31de28u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 880)));
    // 0x31de2c: 0x24e50010  addiu       $a1, $a3, 0x10
    ctx->pc = 0x31de2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x31de30: 0xade50370  sw          $a1, 0x370($t7)
    ctx->pc = 0x31de30u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 880), GPR_U32(ctx, 5));
    // 0x31de34: 0xaceb0010  sw          $t3, 0x10($a3)
    ctx->pc = 0x31de34u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 16), GPR_U32(ctx, 11));
    // 0x31de38: 0x8da50370  lw          $a1, 0x370($t5)
    ctx->pc = 0x31de38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 880)));
    // 0x31de3c: 0xacaa0004  sw          $t2, 0x4($a1)
    ctx->pc = 0x31de3cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 10));
    // 0x31de40: 0x8d050370  lw          $a1, 0x370($t0)
    ctx->pc = 0x31de40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 880)));
    // 0x31de44: 0xaca90008  sw          $t1, 0x8($a1)
    ctx->pc = 0x31de44u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 9));
    // 0x31de48: 0x8cc50370  lw          $a1, 0x370($a2)
    ctx->pc = 0x31de48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 880)));
    // 0x31de4c: 0xacac000c  sw          $t4, 0xC($a1)
    ctx->pc = 0x31de4cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 12));
    // 0x31de50: 0x8c850370  lw          $a1, 0x370($a0)
    ctx->pc = 0x31de50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 880)));
    // 0x31de54: 0x24a40010  addiu       $a0, $a1, 0x10
    ctx->pc = 0x31de54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x31de58: 0xac640370  sw          $a0, 0x370($v1)
    ctx->pc = 0x31de58u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 880), GPR_U32(ctx, 4));
    // 0x31de5c: 0xacb40010  sw          $s4, 0x10($a1)
    ctx->pc = 0x31de5cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 20));
    // 0x31de60: 0x9042b280  lbu         $v0, -0x4D80($v0)
    ctx->pc = 0x31de60u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294947456)));
    // 0x31de64: 0x50400015  beql        $v0, $zero, . + 4 + (0x15 << 2)
    ctx->pc = 0x31DE64u;
    {
        const bool branch_taken_0x31de64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x31de64) {
            ctx->pc = 0x31DE68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31DE64u;
            // 0x31de68: 0xe1100  sll         $v0, $t6, 4 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 14), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31DEBCu;
            goto label_31debc;
        }
    }
    ctx->pc = 0x31DE6Cu;
    // 0x31de6c: 0xe1900  sll         $v1, $t6, 4
    ctx->pc = 0x31de6cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 14), 4));
    // 0x31de70: 0x3c028888  lui         $v0, 0x8888
    ctx->pc = 0x31de70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34952 << 16));
    // 0x31de74: 0x24647100  addiu       $a0, $v1, 0x7100
    ctx->pc = 0x31de74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 28928));
    // 0x31de78: 0x24858000  addiu       $a1, $a0, -0x8000
    ctx->pc = 0x31de78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4294934528));
    // 0x31de7c: 0x34438889  ori         $v1, $v0, 0x8889
    ctx->pc = 0x31de7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34953);
    // 0x31de80: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x31de80u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x31de84: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x31de84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x31de88: 0x852023  subu        $a0, $a0, $a1
    ctx->pc = 0x31de88u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x31de8c: 0x42980  sll         $a1, $a0, 6
    ctx->pc = 0x31de8cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
    // 0x31de90: 0x650018  mult        $zero, $v1, $a1
    ctx->pc = 0x31de90u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x31de94: 0x527c2  srl         $a0, $a1, 31
    ctx->pc = 0x31de94u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 5), 31));
    // 0x31de98: 0x0  nop
    ctx->pc = 0x31de98u;
    // NOP
    // 0x31de9c: 0x1810  mfhi        $v1
    ctx->pc = 0x31de9cu;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x31dea0: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x31dea0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x31dea4: 0x31a03  sra         $v1, $v1, 8
    ctx->pc = 0x31dea4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 8));
    // 0x31dea8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x31dea8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x31deac: 0x24637fff  addiu       $v1, $v1, 0x7FFF
    ctx->pc = 0x31deacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32767));
    // 0x31deb0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x31deb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x31deb4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x31DEB4u;
    {
        const bool branch_taken_0x31deb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31DEB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31DEB4u;
        // 0x31deb8: 0x622024  and         $a0, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31deb4) {
            ctx->pc = 0x31DEC0u;
            goto label_31dec0;
        }
    }
    ctx->pc = 0x31DEBCu;
label_31debc:
    // 0x31debc: 0x24447100  addiu       $a0, $v0, 0x7100
    ctx->pc = 0x31debcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 28928));
label_31dec0:
    // 0x31dec0: 0x3c0201dc  lui         $v0, 0x1DC
    ctx->pc = 0x31dec0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)476 << 16));
    // 0x31dec4: 0x240ca833  addiu       $t4, $zero, -0x57CD
    ctx->pc = 0x31dec4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 4294944819));
    // 0x31dec8: 0x8c430370  lw          $v1, 0x370($v0)
    ctx->pc = 0x31dec8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 880)));
    // 0x31decc: 0x3c0901dc  lui         $t1, 0x1DC
    ctx->pc = 0x31deccu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)476 << 16));
    // 0x31ded0: 0x3c0a7000  lui         $t2, 0x7000
    ctx->pc = 0x31ded0u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)28672 << 16));
    // 0x31ded4: 0x3c0801dc  lui         $t0, 0x1DC
    ctx->pc = 0x31ded4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)476 << 16));
    // 0x31ded8: 0x3c067000  lui         $a2, 0x7000
    ctx->pc = 0x31ded8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)28672 << 16));
    // 0x31dedc: 0x3c0701dc  lui         $a3, 0x1DC
    ctx->pc = 0x31dedcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)476 << 16));
    // 0x31dee0: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x31dee0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x31dee4: 0x3c0201dc  lui         $v0, 0x1DC
    ctx->pc = 0x31dee4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)476 << 16));
    // 0x31dee8: 0x8c440370  lw          $a0, 0x370($v0)
    ctx->pc = 0x31dee8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 880)));
    // 0x31deec: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x31deecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x31def0: 0x346b000c  ori         $t3, $v1, 0xC
    ctx->pc = 0x31def0u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)12);
    // 0x31def4: 0x3c057000  lui         $a1, 0x7000
    ctx->pc = 0x31def4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)28672 << 16));
    // 0x31def8: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x31def8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x31defc: 0xac8c0008  sw          $t4, 0x8($a0)
    ctx->pc = 0x31defcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 12));
    // 0x31df00: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x31df00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x31df04: 0x8d290370  lw          $t1, 0x370($t1)
    ctx->pc = 0x31df04u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 880)));
    // 0x31df08: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x31df08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31df0c: 0xad20000c  sw          $zero, 0xC($t1)
    ctx->pc = 0x31df0cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 12), GPR_U32(ctx, 0));
    // 0x31df10: 0x7c600190  sq          $zero, 0x190($v1)
    ctx->pc = 0x31df10u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 400), GPR_VEC(ctx, 0));
    // 0x31df14: 0xac4a0190  sw          $t2, 0x190($v0)
    ctx->pc = 0x31df14u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 400), GPR_U32(ctx, 10)); // MMIO: 0x70000190
    // 0x31df18: 0x8d020370  lw          $v0, 0x370($t0)
    ctx->pc = 0x31df18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 880)));
    // 0x31df1c: 0x7cc000c0  sq          $zero, 0xC0($a2)
    ctx->pc = 0x31df1cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 192), GPR_VEC(ctx, 0));
    // 0x31df20: 0xacab00c0  sw          $t3, 0xC0($a1)
    ctx->pc = 0x31df20u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 192), GPR_U32(ctx, 11));
    // 0x31df24: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x31df24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x31df28: 0xc0433b8  jal         func_10CEE0
    ctx->pc = 0x31DF28u;
    SET_GPR_U32(ctx, 31, 0x31DF30u);
    ctx->pc = 0x31DF2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31DF28u;
    // 0x31df2c: 0xace20370  sw          $v0, 0x370($a3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 7), 880), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CEE0u, 0x31DF28u, 0x31DF30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31DF30u;
label_31df30:
    // 0x31df30: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x31df30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x31df34: 0x3c057000  lui         $a1, 0x7000
    ctx->pc = 0x31df34u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)28672 << 16));
    // 0x31df38: 0x8c44e688  lw          $a0, -0x1978($v0)
    ctx->pc = 0x31df38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960776)));
    // 0x31df3c: 0xc040a04  jal         func_102810
    ctx->pc = 0x31DF3Cu;
    SET_GPR_U32(ctx, 31, 0x31DF44u);
    ctx->pc = 0x31DF40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31DF3Cu;
    // 0x31df40: 0x24a500c0  addiu       $a1, $a1, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x102810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102810u, 0x31DF3Cu, 0x31DF44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31DF44u;
label_31df44:
    // 0x31df44: 0x3c031001  lui         $v1, 0x1001
    ctx->pc = 0x31df44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4097 << 16));
label_31df48:
    // 0x31df48: 0x8c64a000  lw          $a0, -0x6000($v1)
    ctx->pc = 0x31df48u;
    SET_GPR_S32(ctx, 4, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 4294942720))); // MMIO: 0x1000a000
    // 0x31df4c: 0x30840100  andi        $a0, $a0, 0x100
    ctx->pc = 0x31df4cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)256);
    // 0x31df50: 0x0  nop
    ctx->pc = 0x31df50u;
    // NOP
    // 0x31df54: 0x0  nop
    ctx->pc = 0x31df54u;
    // NOP
    // 0x31df58: 0x0  nop
    ctx->pc = 0x31df58u;
    // NOP
    // 0x31df5c: 0x1480fffa  bnez        $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x31DF5Cu;
    {
        const bool branch_taken_0x31df5c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x31df5c) {
            ctx->pc = 0x31DF48u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_31df48;
        }
    }
    ctx->pc = 0x31DF64u;
    // 0x31df64: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x31df64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x31df68: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x31df68u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x31df6c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x31df6cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x31df70: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x31df70u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x31df74: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x31df74u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x31df78: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x31df78u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x31df7c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x31df7cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31df80: 0x3e00008  jr          $ra
    ctx->pc = 0x31DF80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31DF84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31DF80u;
        // 0x31df84: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31DF80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31DF88u;
    // 0x31df88: 0x0  nop
    ctx->pc = 0x31df88u;
    // NOP
    // 0x31df8c: 0x0  nop
    ctx->pc = 0x31df8cu;
    // NOP
}
