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

// Function: sub_0031F660
// Address: 0x31f660 - 0x31f9f0
void sub_0031F660_0x31f660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031F660_0x31f660");
#endif

    switch (ctx->pc) {
        case 0x31f6b0u: goto label_31f6b0;
        case 0x31f6bcu: goto label_31f6bc;
        default: break;
    }

    ctx->pc = 0x31f660u;

    // 0x31f660: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x31f660u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x31f664: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x31f664u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x31f668: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x31f668u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x31f66c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x31f66cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x31f670: 0x641e00ff  daddiu      $fp, $zero, 0xFF
    ctx->pc = 0x31f670u;
    SET_GPR_S64(ctx, 30, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)255);
    // 0x31f674: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x31f674u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x31f678: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x31f678u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31f67c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x31f67cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x31f680: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x31f680u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31f684: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x31f684u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x31f688: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x31f688u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x31f68c: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x31f68cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31f690: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x31f690u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x31f694: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x31f694u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31f698: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x31f698u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x31f69c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x31f69cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31f6a0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x31f6a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x31f6a4: 0x24110280  addiu       $s1, $zero, 0x280
    ctx->pc = 0x31f6a4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
    // 0x31f6a8: 0x2410fd80  addiu       $s0, $zero, -0x280
    ctx->pc = 0x31f6a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966656));
    // 0x31f6ac: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x31f6acu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_31f6b0:
    // 0x31f6b0: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x31f6b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31f6b4: 0xc062828  jal         func_18A0A0
    ctx->pc = 0x31F6B4u;
    SET_GPR_U32(ctx, 31, 0x31F6BCu);
    ctx->pc = 0x31F6B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31F6B4u;
    // 0x31f6b8: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A0A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A0A0u, 0x31F6B4u, 0x31F6BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31F6BCu;
label_31f6bc:
    // 0x31f6bc: 0x1040006a  beqz        $v0, . + 4 + (0x6A << 2)
    ctx->pc = 0x31F6BCu;
    {
        const bool branch_taken_0x31f6bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x31f6bc) {
            ctx->pc = 0x31F868u;
            goto label_31f868;
        }
    }
    ctx->pc = 0x31F6C4u;
    // 0x31f6c4: 0x9043008c  lbu         $v1, 0x8C($v0)
    ctx->pc = 0x31f6c4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 140)));
    // 0x31f6c8: 0x30630008  andi        $v1, $v1, 0x8
    ctx->pc = 0x31f6c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x31f6cc: 0x14600066  bnez        $v1, . + 4 + (0x66 << 2)
    ctx->pc = 0x31F6CCu;
    {
        const bool branch_taken_0x31f6cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x31f6cc) {
            ctx->pc = 0x31F868u;
            goto label_31f868;
        }
    }
    ctx->pc = 0x31F6D4u;
    // 0x31f6d4: 0x84440012  lh          $a0, 0x12($v0)
    ctx->pc = 0x31f6d4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 18)));
    // 0x31f6d8: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x31f6d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x31f6dc: 0x8446db30  lh          $a2, -0x24D0($v0)
    ctx->pc = 0x31f6dcu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294957872)));
    // 0x31f6e0: 0x24c50020  addiu       $a1, $a2, 0x20
    ctx->pc = 0x31f6e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x31f6e4: 0x85082a  slt         $at, $a0, $a1
    ctx->pc = 0x31f6e4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x31f6e8: 0x1020000d  beqz        $at, . + 4 + (0xD << 2)
    ctx->pc = 0x31F6E8u;
    {
        const bool branch_taken_0x31f6e8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x31f6e8) {
            ctx->pc = 0x31F720u;
            goto label_31f720;
        }
    }
    ctx->pc = 0x31F6F0u;
    // 0x31f6f0: 0x36830001  ori         $v1, $s4, 0x1
    ctx->pc = 0x31f6f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 20) | (uint64_t)(uint16_t)1);
    // 0x31f6f4: 0x851023  subu        $v0, $a0, $a1
    ctx->pc = 0x31f6f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x31f6f8: 0x307400ff  andi        $s4, $v1, 0xFF
    ctx->pc = 0x31f6f8u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x31f6fc: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x31f6fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x31f700: 0x13143c  dsll32      $v0, $s3, 16
    ctx->pc = 0x31f700u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) << (32 + 16));
    // 0x31f704: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x31f704u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x31f708: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x31f708u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x31f70c: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x31f70cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x31f710: 0x10200013  beqz        $at, . + 4 + (0x13 << 2)
    ctx->pc = 0x31F710u;
    {
        const bool branch_taken_0x31f710 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x31f710) {
            ctx->pc = 0x31F760u;
            goto label_31f760;
        }
    }
    ctx->pc = 0x31F718u;
    // 0x31f718: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x31F718u;
    {
        const bool branch_taken_0x31f718 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31F71Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F718u;
        // 0x31f71c: 0x60982d  daddu       $s3, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31f718) {
            ctx->pc = 0x31F760u;
            goto label_31f760;
        }
    }
    ctx->pc = 0x31F720u;
label_31f720:
    // 0x31f720: 0x24c200a0  addiu       $v0, $a2, 0xA0
    ctx->pc = 0x31f720u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 160));
    // 0x31f724: 0x44082a  slt         $at, $v0, $a0
    ctx->pc = 0x31f724u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x31f728: 0x1420000d  bnez        $at, . + 4 + (0xD << 2)
    ctx->pc = 0x31F728u;
    {
        const bool branch_taken_0x31f728 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x31f728) {
            ctx->pc = 0x31F760u;
            goto label_31f760;
        }
    }
    ctx->pc = 0x31F730u;
    // 0x31f730: 0x36830004  ori         $v1, $s4, 0x4
    ctx->pc = 0x31f730u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 20) | (uint64_t)(uint16_t)4);
    // 0x31f734: 0x821023  subu        $v0, $a0, $v0
    ctx->pc = 0x31f734u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x31f738: 0x307400ff  andi        $s4, $v1, 0xFF
    ctx->pc = 0x31f738u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x31f73c: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x31f73cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x31f740: 0x13143c  dsll32      $v0, $s3, 16
    ctx->pc = 0x31f740u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) << (32 + 16));
    // 0x31f744: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x31f744u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x31f748: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x31f748u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x31f74c: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x31f74cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x31f750: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x31F750u;
    {
        const bool branch_taken_0x31f750 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x31f750) {
            ctx->pc = 0x31F760u;
            goto label_31f760;
        }
    }
    ctx->pc = 0x31F758u;
    // 0x31f758: 0x60982d  daddu       $s3, $v1, $zero
    ctx->pc = 0x31f758u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31f75c: 0x0  nop
    ctx->pc = 0x31f75cu;
    // NOP
label_31f760:
    // 0x31f760: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x31f760u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x31f764: 0x8443db32  lh          $v1, -0x24CE($v0)
    ctx->pc = 0x31f764u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294957874)));
    // 0x31f768: 0x2462ffe0  addiu       $v0, $v1, -0x20
    ctx->pc = 0x31f768u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967264));
    // 0x31f76c: 0x44082a  slt         $at, $v0, $a0
    ctx->pc = 0x31f76cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x31f770: 0x1020000d  beqz        $at, . + 4 + (0xD << 2)
    ctx->pc = 0x31F770u;
    {
        const bool branch_taken_0x31f770 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x31f770) {
            ctx->pc = 0x31F7A8u;
            goto label_31f7a8;
        }
    }
    ctx->pc = 0x31F778u;
    // 0x31f778: 0x36880002  ori         $t0, $s4, 0x2
    ctx->pc = 0x31f778u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 20) | (uint64_t)(uint16_t)2);
    // 0x31f77c: 0x823823  subu        $a3, $a0, $v0
    ctx->pc = 0x31f77cu;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x31f780: 0x311400ff  andi        $s4, $t0, 0xFF
    ctx->pc = 0x31f780u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
    // 0x31f784: 0x7443c  dsll32      $t0, $a3, 16
    ctx->pc = 0x31f784u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 7) << (32 + 16));
    // 0x31f788: 0x123c3c  dsll32      $a3, $s2, 16
    ctx->pc = 0x31f788u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 18) << (32 + 16));
    // 0x31f78c: 0x8443f  dsra32      $t0, $t0, 16
    ctx->pc = 0x31f78cu;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 16));
    // 0x31f790: 0x73c3f  dsra32      $a3, $a3, 16
    ctx->pc = 0x31f790u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 16));
    // 0x31f794: 0xe8082a  slt         $at, $a3, $t0
    ctx->pc = 0x31f794u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x31f798: 0x10200013  beqz        $at, . + 4 + (0x13 << 2)
    ctx->pc = 0x31F798u;
    {
        const bool branch_taken_0x31f798 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x31f798) {
            ctx->pc = 0x31F7E8u;
            goto label_31f7e8;
        }
    }
    ctx->pc = 0x31F7A0u;
    // 0x31f7a0: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x31F7A0u;
    {
        const bool branch_taken_0x31f7a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31F7A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F7A0u;
        // 0x31f7a4: 0x100902d  daddu       $s2, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31f7a0) {
            ctx->pc = 0x31F7E8u;
            goto label_31f7e8;
        }
    }
    ctx->pc = 0x31F7A8u;
label_31f7a8:
    // 0x31f7a8: 0x2468ff60  addiu       $t0, $v1, -0xA0
    ctx->pc = 0x31f7a8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967136));
    // 0x31f7ac: 0x88382a  slt         $a3, $a0, $t0
    ctx->pc = 0x31f7acu;
    SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x31f7b0: 0x14e0000d  bnez        $a3, . + 4 + (0xD << 2)
    ctx->pc = 0x31F7B0u;
    {
        const bool branch_taken_0x31f7b0 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x31f7b0) {
            ctx->pc = 0x31F7E8u;
            goto label_31f7e8;
        }
    }
    ctx->pc = 0x31F7B8u;
    // 0x31f7b8: 0x883823  subu        $a3, $a0, $t0
    ctx->pc = 0x31f7b8u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
    // 0x31f7bc: 0x36880008  ori         $t0, $s4, 0x8
    ctx->pc = 0x31f7bcu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 20) | (uint64_t)(uint16_t)8);
    // 0x31f7c0: 0x311400ff  andi        $s4, $t0, 0xFF
    ctx->pc = 0x31f7c0u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
    // 0x31f7c4: 0x7443c  dsll32      $t0, $a3, 16
    ctx->pc = 0x31f7c4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 7) << (32 + 16));
    // 0x31f7c8: 0x123c3c  dsll32      $a3, $s2, 16
    ctx->pc = 0x31f7c8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 18) << (32 + 16));
    // 0x31f7cc: 0x8443f  dsra32      $t0, $t0, 16
    ctx->pc = 0x31f7ccu;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 16));
    // 0x31f7d0: 0x73c3f  dsra32      $a3, $a3, 16
    ctx->pc = 0x31f7d0u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 16));
    // 0x31f7d4: 0xe8082a  slt         $at, $a3, $t0
    ctx->pc = 0x31f7d4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x31f7d8: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x31F7D8u;
    {
        const bool branch_taken_0x31f7d8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x31f7d8) {
            ctx->pc = 0x31F7E8u;
            goto label_31f7e8;
        }
    }
    ctx->pc = 0x31F7E0u;
    // 0x31f7e0: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x31f7e0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31f7e4: 0x0  nop
    ctx->pc = 0x31f7e4u;
    // NOP
label_31f7e8:
    // 0x31f7e8: 0x24c600a0  addiu       $a2, $a2, 0xA0
    ctx->pc = 0x31f7e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 160));
    // 0x31f7ec: 0xc4082a  slt         $at, $a2, $a0
    ctx->pc = 0x31f7ecu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x31f7f0: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x31F7F0u;
    {
        const bool branch_taken_0x31f7f0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x31f7f0) {
            ctx->pc = 0x31F800u;
            goto label_31f800;
        }
    }
    ctx->pc = 0x31F7F8u;
    // 0x31f7f8: 0x36860010  ori         $a2, $s4, 0x10
    ctx->pc = 0x31f7f8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 20) | (uint64_t)(uint16_t)16);
    // 0x31f7fc: 0x30d400ff  andi        $s4, $a2, 0xFF
    ctx->pc = 0x31f7fcu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
label_31f800:
    // 0x31f800: 0x2463ff60  addiu       $v1, $v1, -0xA0
    ctx->pc = 0x31f800u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967136));
    // 0x31f804: 0x83182a  slt         $v1, $a0, $v1
    ctx->pc = 0x31f804u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x31f808: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x31F808u;
    {
        const bool branch_taken_0x31f808 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x31f808) {
            ctx->pc = 0x31F818u;
            goto label_31f818;
        }
    }
    ctx->pc = 0x31F810u;
    // 0x31f810: 0x36830020  ori         $v1, $s4, 0x20
    ctx->pc = 0x31f810u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 20) | (uint64_t)(uint16_t)32);
    // 0x31f814: 0x307400ff  andi        $s4, $v1, 0xFF
    ctx->pc = 0x31f814u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_31f818:
    // 0x31f818: 0x851823  subu        $v1, $a0, $a1
    ctx->pc = 0x31f818u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x31f81c: 0x32c3c  dsll32      $a1, $v1, 16
    ctx->pc = 0x31f81cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 16));
    // 0x31f820: 0x111c3c  dsll32      $v1, $s1, 16
    ctx->pc = 0x31f820u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) << (32 + 16));
    // 0x31f824: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x31f824u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    // 0x31f828: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x31f828u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x31f82c: 0xa3082a  slt         $at, $a1, $v1
    ctx->pc = 0x31f82cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x31f830: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x31F830u;
    {
        const bool branch_taken_0x31f830 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x31f830) {
            ctx->pc = 0x31F840u;
            goto label_31f840;
        }
    }
    ctx->pc = 0x31F838u;
    // 0x31f838: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x31f838u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31f83c: 0x0  nop
    ctx->pc = 0x31f83cu;
    // NOP
label_31f840:
    // 0x31f840: 0x821023  subu        $v0, $a0, $v0
    ctx->pc = 0x31f840u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x31f844: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x31f844u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x31f848: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x31f848u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
    // 0x31f84c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x31f84cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x31f850: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x31f850u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x31f854: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x31f854u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x31f858: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x31F858u;
    {
        const bool branch_taken_0x31f858 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x31f858) {
            ctx->pc = 0x31F868u;
            goto label_31f868;
        }
    }
    ctx->pc = 0x31F860u;
    // 0x31f860: 0x60802d  daddu       $s0, $v1, $zero
    ctx->pc = 0x31f860u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31f864: 0x0  nop
    ctx->pc = 0x31f864u;
    // NOP
label_31f868:
    // 0x31f868: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x31f868u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x31f86c: 0x2aa20003  slti        $v0, $s5, 0x3
    ctx->pc = 0x31f86cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x31f870: 0x1440ff8f  bnez        $v0, . + 4 + (-0x71 << 2)
    ctx->pc = 0x31F870u;
    {
        const bool branch_taken_0x31f870 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x31f870) {
            ctx->pc = 0x31F6B0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_31f6b0;
        }
    }
    ctx->pc = 0x31F878u;
    // 0x31f878: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x31f878u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x31f87c: 0x2ac20004  slti        $v0, $s6, 0x4
    ctx->pc = 0x31f87cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x31f880: 0x5440ff8b  bnel        $v0, $zero, . + 4 + (-0x75 << 2)
    ctx->pc = 0x31F880u;
    {
        const bool branch_taken_0x31f880 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x31f880) {
            ctx->pc = 0x31F884u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31F880u;
            // 0x31f884: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31F6B0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_31f6b0;
        }
    }
    ctx->pc = 0x31F888u;
    // 0x31f888: 0x328300ff  andi        $v1, $s4, 0xFF
    ctx->pc = 0x31f888u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)255);
    // 0x31f88c: 0x3062000f  andi        $v0, $v1, 0xF
    ctx->pc = 0x31f88cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x31f890: 0x50400041  beql        $v0, $zero, . + 4 + (0x41 << 2)
    ctx->pc = 0x31F890u;
    {
        const bool branch_taken_0x31f890 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x31f890) {
            ctx->pc = 0x31F894u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31F890u;
            // 0x31f894: 0x2ae1fff1  slti        $at, $s7, -0xF (Delay Slot)
            SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 23) < (int64_t)(int32_t)4294967281) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x31F998u;
            goto label_31f998;
        }
    }
    ctx->pc = 0x31F898u;
    // 0x31f898: 0x11243c  dsll32      $a0, $s1, 16
    ctx->pc = 0x31f898u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) << (32 + 16));
    // 0x31f89c: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x31f89cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x31f8a0: 0x5c800004  bgtzl       $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x31F8A0u;
    {
        const bool branch_taken_0x31f8a0 = (GPR_S32(ctx, 4) > 0);
        if (branch_taken_0x31f8a0) {
            ctx->pc = 0x31F8A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31F8A0u;
            // 0x31f8a4: 0x102c3c  dsll32      $a1, $s0, 16 (Delay Slot)
            SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) << (32 + 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31F8B4u;
            goto label_31f8b4;
        }
    }
    ctx->pc = 0x31F8A8u;
    // 0x31f8a8: 0x33c200f5  andi        $v0, $fp, 0xF5
    ctx->pc = 0x31f8a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)245);
    // 0x31f8ac: 0x305e00ff  andi        $fp, $v0, 0xFF
    ctx->pc = 0x31f8acu;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x31f8b0: 0x102c3c  dsll32      $a1, $s0, 16
    ctx->pc = 0x31f8b0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) << (32 + 16));
label_31f8b4:
    // 0x31f8b4: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x31f8b4u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    // 0x31f8b8: 0x4a20004  bltzl       $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x31F8B8u;
    {
        const bool branch_taken_0x31f8b8 = (GPR_S32(ctx, 5) < 0);
        if (branch_taken_0x31f8b8) {
            ctx->pc = 0x31F8BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31F8B8u;
            // 0x31f8bc: 0x30630030  andi        $v1, $v1, 0x30 (Delay Slot)
            SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)48);
            ctx->in_delay_slot = false;
            ctx->pc = 0x31F8CCu;
            goto label_31f8cc;
        }
    }
    ctx->pc = 0x31F8C0u;
    // 0x31f8c0: 0x33c200fa  andi        $v0, $fp, 0xFA
    ctx->pc = 0x31f8c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)250);
    // 0x31f8c4: 0x305e00ff  andi        $fp, $v0, 0xFF
    ctx->pc = 0x31f8c4u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x31f8c8: 0x30630030  andi        $v1, $v1, 0x30
    ctx->pc = 0x31f8c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)48);
label_31f8cc:
    // 0x31f8cc: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x31f8ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x31f8d0: 0x50620029  beql        $v1, $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x31F8D0u;
    {
        const bool branch_taken_0x31f8d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x31f8d0) {
            ctx->pc = 0x31F8D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31F8D0u;
            // 0x31f8d4: 0x12bc3c  dsll32      $s7, $s2, 16 (Delay Slot)
            SET_GPR_U64(ctx, 23, GPR_U64(ctx, 18) << (32 + 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31F978u;
            goto label_31f978;
        }
    }
    ctx->pc = 0x31F8D8u;
    // 0x31f8d8: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x31f8d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x31f8dc: 0x5062001f  beql        $v1, $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x31F8DCu;
    {
        const bool branch_taken_0x31f8dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x31f8dc) {
            ctx->pc = 0x31F8E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31F8DCu;
            // 0x31f8e0: 0x13bc3c  dsll32      $s7, $s3, 16 (Delay Slot)
            SET_GPR_U64(ctx, 23, GPR_U64(ctx, 19) << (32 + 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31F95Cu;
            goto label_31f95c;
        }
    }
    ctx->pc = 0x31F8E4u;
    // 0x31f8e4: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x31f8e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x31f8e8: 0x50620004  beql        $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x31F8E8u;
    {
        const bool branch_taken_0x31f8e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x31f8e8) {
            ctx->pc = 0x31F8ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31F8E8u;
            // 0x31f8ec: 0xa41823  subu        $v1, $a1, $a0 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31F8FCu;
            goto label_31f8fc;
        }
    }
    ctx->pc = 0x31F8F0u;
    // 0x31f8f0: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x31F8F0u;
    {
        const bool branch_taken_0x31f8f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31F8F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F8F0u;
        // 0x31f8f4: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31f8f0) {
            ctx->pc = 0x31F994u;
            goto label_31f994;
        }
    }
    ctx->pc = 0x31F8F8u;
    // 0x31f8f8: 0xa41823  subu        $v1, $a1, $a0
    ctx->pc = 0x31f8f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_31f8fc:
    // 0x31f8fc: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x31F8FCu;
    {
        const bool branch_taken_0x31f8fc = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x31F900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F8FCu;
        // 0x31f900: 0x31043  sra         $v0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31f8fc) {
            ctx->pc = 0x31F90Cu;
            goto label_31f90c;
        }
    }
    ctx->pc = 0x31F904u;
    // 0x31f904: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x31f904u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x31f908: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x31f908u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
label_31f90c:
    // 0x31f90c: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x31f90cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x31f910: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x31f910u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x31f914: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x31f914u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x31f918: 0x4610007  bgez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x31F918u;
    {
        const bool branch_taken_0x31f918 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x31f918) {
            ctx->pc = 0x31F938u;
            goto label_31f938;
        }
    }
    ctx->pc = 0x31F920u;
    // 0x31f920: 0x33c200ff  andi        $v0, $fp, 0xFF
    ctx->pc = 0x31f920u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)255);
    // 0x31f924: 0x30420005  andi        $v0, $v0, 0x5
    ctx->pc = 0x31f924u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)5);
    // 0x31f928: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x31F928u;
    {
        const bool branch_taken_0x31f928 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x31f928) {
            ctx->pc = 0x31F938u;
            goto label_31f938;
        }
    }
    ctx->pc = 0x31F930u;
    // 0x31f930: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x31F930u;
    {
        const bool branch_taken_0x31f930 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31F934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F930u;
        // 0x31f934: 0x60b82d  daddu       $s7, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31f930) {
            ctx->pc = 0x31F994u;
            goto label_31f994;
        }
    }
    ctx->pc = 0x31F938u;
label_31f938:
    // 0x31f938: 0x18600016  blez        $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x31F938u;
    {
        const bool branch_taken_0x31f938 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x31f938) {
            ctx->pc = 0x31F994u;
            goto label_31f994;
        }
    }
    ctx->pc = 0x31F940u;
    // 0x31f940: 0x33c200ff  andi        $v0, $fp, 0xFF
    ctx->pc = 0x31f940u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)255);
    // 0x31f944: 0x3042000a  andi        $v0, $v0, 0xA
    ctx->pc = 0x31f944u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)10);
    // 0x31f948: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x31F948u;
    {
        const bool branch_taken_0x31f948 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x31f948) {
            ctx->pc = 0x31F994u;
            goto label_31f994;
        }
    }
    ctx->pc = 0x31F950u;
    // 0x31f950: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x31F950u;
    {
        const bool branch_taken_0x31f950 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31F954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F950u;
        // 0x31f954: 0x60b82d  daddu       $s7, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31f950) {
            ctx->pc = 0x31F994u;
            goto label_31f994;
        }
    }
    ctx->pc = 0x31F958u;
    // 0x31f958: 0x13bc3c  dsll32      $s7, $s3, 16
    ctx->pc = 0x31f958u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 19) << (32 + 16));
label_31f95c:
    // 0x31f95c: 0x17bc3f  dsra32      $s7, $s7, 16
    ctx->pc = 0x31f95cu;
    SET_GPR_S64(ctx, 23, GPR_S64(ctx, 23) >> (32 + 16));
    // 0x31f960: 0x2e5082a  slt         $at, $s7, $a1
    ctx->pc = 0x31f960u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 23) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x31f964: 0x1020000b  beqz        $at, . + 4 + (0xB << 2)
    ctx->pc = 0x31F964u;
    {
        const bool branch_taken_0x31f964 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x31f964) {
            ctx->pc = 0x31F994u;
            goto label_31f994;
        }
    }
    ctx->pc = 0x31F96Cu;
    // 0x31f96c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x31F96Cu;
    {
        const bool branch_taken_0x31f96c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31F970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F96Cu;
        // 0x31f970: 0xa0b82d  daddu       $s7, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31f96c) {
            ctx->pc = 0x31F994u;
            goto label_31f994;
        }
    }
    ctx->pc = 0x31F974u;
    // 0x31f974: 0x12bc3c  dsll32      $s7, $s2, 16
    ctx->pc = 0x31f974u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 18) << (32 + 16));
label_31f978:
    // 0x31f978: 0x17bc3f  dsra32      $s7, $s7, 16
    ctx->pc = 0x31f978u;
    SET_GPR_S64(ctx, 23, GPR_S64(ctx, 23) >> (32 + 16));
    // 0x31f97c: 0x97082a  slt         $at, $a0, $s7
    ctx->pc = 0x31f97cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 23)) ? 1 : 0);
    // 0x31f980: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x31F980u;
    {
        const bool branch_taken_0x31f980 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x31f980) {
            ctx->pc = 0x31F994u;
            goto label_31f994;
        }
    }
    ctx->pc = 0x31F988u;
    // 0x31f988: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x31F988u;
    {
        const bool branch_taken_0x31f988 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31F98Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F988u;
        // 0x31f98c: 0x80b82d  daddu       $s7, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31f988) {
            ctx->pc = 0x31F994u;
            goto label_31f994;
        }
    }
    ctx->pc = 0x31F990u;
    // 0x31f990: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x31f990u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_31f994:
    // 0x31f994: 0x2ae1fff1  slti        $at, $s7, -0xF
    ctx->pc = 0x31f994u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 23) < (int64_t)(int32_t)4294967281) ? 1 : 0);
label_31f998:
    // 0x31f998: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x31F998u;
    {
        const bool branch_taken_0x31f998 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x31f998) {
            ctx->pc = 0x31F99Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31F998u;
            // 0x31f99c: 0x2ae20010  slti        $v0, $s7, 0x10 (Delay Slot)
            SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 23) < (int64_t)(int32_t)16) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x31F9ACu;
            goto label_31f9ac;
        }
    }
    ctx->pc = 0x31F9A0u;
    // 0x31f9a0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x31F9A0u;
    {
        const bool branch_taken_0x31f9a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31F9A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F9A0u;
        // 0x31f9a4: 0x2417fff0  addiu       $s7, $zero, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31f9a0) {
            ctx->pc = 0x31F9B8u;
            goto label_31f9b8;
        }
    }
    ctx->pc = 0x31F9A8u;
    // 0x31f9a8: 0x2ae20010  slti        $v0, $s7, 0x10
    ctx->pc = 0x31f9a8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 23) < (int64_t)(int32_t)16) ? 1 : 0);
label_31f9ac:
    // 0x31f9ac: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x31F9ACu;
    {
        const bool branch_taken_0x31f9ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x31f9ac) {
            ctx->pc = 0x31F9B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31F9ACu;
            // 0x31f9b0: 0x2e0102d  daddu       $v0, $s7, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31F9BCu;
            goto label_31f9bc;
        }
    }
    ctx->pc = 0x31F9B4u;
    // 0x31f9b4: 0x24170010  addiu       $s7, $zero, 0x10
    ctx->pc = 0x31f9b4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_31f9b8:
    // 0x31f9b8: 0x2e0102d  daddu       $v0, $s7, $zero
    ctx->pc = 0x31f9b8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_31f9bc:
    // 0x31f9bc: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x31f9bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x31f9c0: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x31f9c0u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x31f9c4: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x31f9c4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x31f9c8: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x31f9c8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x31f9cc: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x31f9ccu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x31f9d0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x31f9d0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x31f9d4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x31f9d4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x31f9d8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x31f9d8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x31f9dc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x31f9dcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x31f9e0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x31f9e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31f9e4: 0x3e00008  jr          $ra
    ctx->pc = 0x31F9E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31F9E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F9E4u;
        // 0x31f9e8: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31F9E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31F9ECu;
    // 0x31f9ec: 0x0  nop
    ctx->pc = 0x31f9ecu;
    // NOP
}
