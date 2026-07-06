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

// Function: sub_0022C3C8
// Address: 0x22c3c8 - 0x22d3e0
void sub_0022C3C8_0x22c3c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022C3C8_0x22c3c8");
#endif

    switch (ctx->pc) {
        case 0x22c41cu: goto label_22c41c;
        case 0x22d3a8u: goto label_22d3a8;
        default: break;
    }

    ctx->pc = 0x22c3c8u;

    // 0x22c3c8: 0x27bdfe50  addiu       $sp, $sp, -0x1B0
    ctx->pc = 0x22c3c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966864));
    // 0x22c3cc: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x22c3ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x22c3d0: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x22c3d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
    // 0x22c3d4: 0xffb50160  sd          $s5, 0x160($sp)
    ctx->pc = 0x22c3d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 352), GPR_U64(ctx, 21));
    // 0x22c3d8: 0xffb40150  sd          $s4, 0x150($sp)
    ctx->pc = 0x22c3d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 336), GPR_U64(ctx, 20));
    // 0x22c3dc: 0xffb30140  sd          $s3, 0x140($sp)
    ctx->pc = 0x22c3dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 320), GPR_U64(ctx, 19));
    // 0x22c3e0: 0xffb20130  sd          $s2, 0x130($sp)
    ctx->pc = 0x22c3e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 304), GPR_U64(ctx, 18));
    // 0x22c3e4: 0xffb10120  sd          $s1, 0x120($sp)
    ctx->pc = 0x22c3e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 17));
    // 0x22c3e8: 0xffb00110  sd          $s0, 0x110($sp)
    ctx->pc = 0x22c3e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 16));
    // 0x22c3ec: 0xffbf01a0  sd          $ra, 0x1A0($sp)
    ctx->pc = 0x22c3ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 416), GPR_U64(ctx, 31));
    // 0x22c3f0: 0xffbe0190  sd          $fp, 0x190($sp)
    ctx->pc = 0x22c3f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 400), GPR_U64(ctx, 30));
    // 0x22c3f4: 0xffb70180  sd          $s7, 0x180($sp)
    ctx->pc = 0x22c3f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 384), GPR_U64(ctx, 23));
    // 0x22c3f8: 0xffb60170  sd          $s6, 0x170($sp)
    ctx->pc = 0x22c3f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 368), GPR_U64(ctx, 22));
    // 0x22c3fc: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x22c3fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x22c400: 0x8c970004  lw          $s7, 0x4($a0)
    ctx->pc = 0x22c400u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x22c404: 0x8c59000c  lw          $t9, 0xC($v0)
    ctx->pc = 0x22c404u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x22c408: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x22c408u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22c40c: 0x8c560008  lw          $s6, 0x8($v0)
    ctx->pc = 0x22c40cu;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x22c410: 0x8c5e0000  lw          $fp, 0x0($v0)
    ctx->pc = 0x22c410u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x22c414: 0xc08b066  jal         func_22C198
    ctx->pc = 0x22C414u;
    SET_GPR_U32(ctx, 31, 0x22C41Cu);
    ctx->pc = 0x22C418u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C414u;
    // 0x22c418: 0x7fb90100  sq          $t9, 0x100($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 25));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22C198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22C198u, 0x22C414u, 0x22C41Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C41Cu;
label_22c41c:
    // 0x22c41c: 0x7bb90100  lq          $t9, 0x100($sp)
    ctx->pc = 0x22c41cu;
    SET_GPR_VEC(ctx, 25, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x22c420: 0x172027  nor         $a0, $zero, $s7
    ctx->pc = 0x22c420u;
    SET_GPR_U64(ctx, 4, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 23)));
    // 0x22c424: 0x2f61824  and         $v1, $s7, $s6
    ctx->pc = 0x22c424u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 23) & GPR_U64(ctx, 22));
    // 0x22c428: 0x3c02d76a  lui         $v0, 0xD76A
    ctx->pc = 0x22c428u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55146 << 16));
    // 0x22c42c: 0x992024  and         $a0, $a0, $t9
    ctx->pc = 0x22c42cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 25));
    // 0x22c430: 0x3442a478  ori         $v0, $v0, 0xA478
    ctx->pc = 0x22c430u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)42104);
    // 0x22c434: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x22c434u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x22c438: 0x3c21021  addu        $v0, $fp, $v0
    ctx->pc = 0x22c438u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 2)));
    // 0x22c43c: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x22c43cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22c440: 0x3c09fd98  lui         $t1, 0xFD98
    ctx->pc = 0x22c440u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)64920 << 16));
    // 0x22c444: 0x8fa60004  lw          $a2, 0x4($sp)
    ctx->pc = 0x22c444u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x22c448: 0x35297193  ori         $t1, $t1, 0x7193
    ctx->pc = 0x22c448u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)29075);
    // 0x22c44c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x22c44cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x22c450: 0x8fa50008  lw          $a1, 0x8($sp)
    ctx->pc = 0x22c450u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x22c454: 0x43f021  addu        $fp, $v0, $v1
    ctx->pc = 0x22c454u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x22c458: 0x3c04e8c7  lui         $a0, 0xE8C7
    ctx->pc = 0x22c458u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59591 << 16));
    // 0x22c45c: 0x1e1e42  srl         $v1, $fp, 25
    ctx->pc = 0x22c45cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 30), 25));
    // 0x22c460: 0x1e11c0  sll         $v0, $fp, 7
    ctx->pc = 0x22c460u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 30), 7));
    // 0x22c464: 0x43f025  or          $fp, $v0, $v1
    ctx->pc = 0x22c464u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x22c468: 0x3484b756  ori         $a0, $a0, 0xB756
    ctx->pc = 0x22c468u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)46934);
    // 0x22c46c: 0x3d7f021  addu        $fp, $fp, $s7
    ctx->pc = 0x22c46cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 23)));
    // 0x22c470: 0x3242021  addu        $a0, $t9, $a0
    ctx->pc = 0x22c470u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 4)));
    // 0x22c474: 0x1e1027  nor         $v0, $zero, $fp
    ctx->pc = 0x22c474u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 30)));
    // 0x22c478: 0x3d71824  and         $v1, $fp, $s7
    ctx->pc = 0x22c478u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 30) & GPR_U64(ctx, 23));
    // 0x22c47c: 0x561024  and         $v0, $v0, $s6
    ctx->pc = 0x22c47cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 22));
    // 0x22c480: 0xafa50044  sw          $a1, 0x44($sp)
    ctx->pc = 0x22c480u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 5));
    // 0x22c484: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x22c484u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x22c488: 0x3c052420  lui         $a1, 0x2420
    ctx->pc = 0x22c488u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)9248 << 16));
    // 0x22c48c: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x22c48cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x22c490: 0x8fa70044  lw          $a3, 0x44($sp)
    ctx->pc = 0x22c490u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x22c494: 0x83c821  addu        $t9, $a0, $v1
    ctx->pc = 0x22c494u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x22c498: 0x34a570db  ori         $a1, $a1, 0x70DB
    ctx->pc = 0x22c498u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)28891);
    // 0x22c49c: 0x191d02  srl         $v1, $t9, 20
    ctx->pc = 0x22c49cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 25), 20));
    // 0x22c4a0: 0x191300  sll         $v0, $t9, 12
    ctx->pc = 0x22c4a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 25), 12));
    // 0x22c4a4: 0x43c825  or          $t9, $v0, $v1
    ctx->pc = 0x22c4a4u;
    SET_GPR_U64(ctx, 25, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x22c4a8: 0x2c52821  addu        $a1, $s6, $a1
    ctx->pc = 0x22c4a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 5)));
    // 0x22c4ac: 0x33ec821  addu        $t9, $t9, $fp
    ctx->pc = 0x22c4acu;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 30)));
    // 0x22c4b0: 0x8fa8000c  lw          $t0, 0xC($sp)
    ctx->pc = 0x22c4b0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x22c4b4: 0x191027  nor         $v0, $zero, $t9
    ctx->pc = 0x22c4b4u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 25)));
    // 0x22c4b8: 0x33e1824  and         $v1, $t9, $fp
    ctx->pc = 0x22c4b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 25) & GPR_U64(ctx, 30));
    // 0x22c4bc: 0x571024  and         $v0, $v0, $s7
    ctx->pc = 0x22c4bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 23));
    // 0x22c4c0: 0x3c04c1bd  lui         $a0, 0xC1BD
    ctx->pc = 0x22c4c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49597 << 16));
    // 0x22c4c4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x22c4c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x22c4c8: 0x3484ceee  ori         $a0, $a0, 0xCEEE
    ctx->pc = 0x22c4c8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)52974);
    // 0x22c4cc: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x22c4ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x22c4d0: 0x2e42021  addu        $a0, $s7, $a0
    ctx->pc = 0x22c4d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 4)));
    // 0x22c4d4: 0xa3b021  addu        $s6, $a1, $v1
    ctx->pc = 0x22c4d4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x22c4d8: 0x3c06f57c  lui         $a2, 0xF57C
    ctx->pc = 0x22c4d8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)62844 << 16));
    // 0x22c4dc: 0x161bc2  srl         $v1, $s6, 15
    ctx->pc = 0x22c4dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 22), 15));
    // 0x22c4e0: 0x161440  sll         $v0, $s6, 17
    ctx->pc = 0x22c4e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 22), 17));
    // 0x22c4e4: 0x43b025  or          $s6, $v0, $v1
    ctx->pc = 0x22c4e4u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x22c4e8: 0x34c60faf  ori         $a2, $a2, 0xFAF
    ctx->pc = 0x22c4e8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)4015);
    // 0x22c4ec: 0x2d9b021  addu        $s6, $s6, $t9
    ctx->pc = 0x22c4ecu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 25)));
    // 0x22c4f0: 0x3c63021  addu        $a2, $fp, $a2
    ctx->pc = 0x22c4f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 6)));
    // 0x22c4f4: 0x161027  nor         $v0, $zero, $s6
    ctx->pc = 0x22c4f4u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 22)));
    // 0x22c4f8: 0x2d91824  and         $v1, $s6, $t9
    ctx->pc = 0x22c4f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 22) & GPR_U64(ctx, 25));
    // 0x22c4fc: 0x5e1024  and         $v0, $v0, $fp
    ctx->pc = 0x22c4fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 30));
    // 0x22c500: 0x3c054787  lui         $a1, 0x4787
    ctx->pc = 0x22c500u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)18311 << 16));
    // 0x22c504: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x22c504u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x22c508: 0x34a5c62a  ori         $a1, $a1, 0xC62A
    ctx->pc = 0x22c508u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)50730);
    // 0x22c50c: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x22c50cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x22c510: 0x3252821  addu        $a1, $t9, $a1
    ctx->pc = 0x22c510u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 5)));
    // 0x22c514: 0x83b821  addu        $s7, $a0, $v1
    ctx->pc = 0x22c514u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x22c518: 0x8fa80014  lw          $t0, 0x14($sp)
    ctx->pc = 0x22c518u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x22c51c: 0x171a82  srl         $v1, $s7, 10
    ctx->pc = 0x22c51cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 23), 10));
    // 0x22c520: 0x171580  sll         $v0, $s7, 22
    ctx->pc = 0x22c520u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 23), 22));
    // 0x22c524: 0x43b825  or          $s7, $v0, $v1
    ctx->pc = 0x22c524u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x22c528: 0x3c04a830  lui         $a0, 0xA830
    ctx->pc = 0x22c528u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)43056 << 16));
    // 0x22c52c: 0x2f6b821  addu        $s7, $s7, $s6
    ctx->pc = 0x22c52cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 22)));
    // 0x22c530: 0x34844613  ori         $a0, $a0, 0x4613
    ctx->pc = 0x22c530u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)17939);
    // 0x22c534: 0x171027  nor         $v0, $zero, $s7
    ctx->pc = 0x22c534u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 23)));
    // 0x22c538: 0x2f61824  and         $v1, $s7, $s6
    ctx->pc = 0x22c538u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 23) & GPR_U64(ctx, 22));
    // 0x22c53c: 0x591024  and         $v0, $v0, $t9
    ctx->pc = 0x22c53cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 25));
    // 0x22c540: 0x2c42021  addu        $a0, $s6, $a0
    ctx->pc = 0x22c540u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 4)));
    // 0x22c544: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x22c544u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x22c548: 0x3c07fd46  lui         $a3, 0xFD46
    ctx->pc = 0x22c548u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)64838 << 16));
    // 0x22c54c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x22c54cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22c550: 0x34e79501  ori         $a3, $a3, 0x9501
    ctx->pc = 0x22c550u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)38145);
    // 0x22c554: 0x2e73821  addu        $a3, $s7, $a3
    ctx->pc = 0x22c554u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 7)));
    // 0x22c558: 0x3c0aa679  lui         $t2, 0xA679
    ctx->pc = 0x22c558u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)42617 << 16));
    // 0x22c55c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x22c55cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x22c560: 0x354a438e  ori         $t2, $t2, 0x438E
    ctx->pc = 0x22c560u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)17294);
    // 0x22c564: 0xc3f021  addu        $fp, $a2, $v1
    ctx->pc = 0x22c564u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x22c568: 0x3c0b49b4  lui         $t3, 0x49B4
    ctx->pc = 0x22c568u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)18868 << 16));
    // 0x22c56c: 0x1e1e42  srl         $v1, $fp, 25
    ctx->pc = 0x22c56cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 30), 25));
    // 0x22c570: 0x1e11c0  sll         $v0, $fp, 7
    ctx->pc = 0x22c570u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 30), 7));
    // 0x22c574: 0x43f025  or          $fp, $v0, $v1
    ctx->pc = 0x22c574u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x22c578: 0x3c066980  lui         $a2, 0x6980
    ctx->pc = 0x22c578u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)27008 << 16));
    // 0x22c57c: 0x3d7f021  addu        $fp, $fp, $s7
    ctx->pc = 0x22c57cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 23)));
    // 0x22c580: 0x34c698d8  ori         $a2, $a2, 0x98D8
    ctx->pc = 0x22c580u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)39128);
    // 0x22c584: 0x1e1027  nor         $v0, $zero, $fp
    ctx->pc = 0x22c584u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 30)));
    // 0x22c588: 0x3d71824  and         $v1, $fp, $s7
    ctx->pc = 0x22c588u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 30) & GPR_U64(ctx, 23));
    // 0x22c58c: 0x561024  and         $v0, $v0, $s6
    ctx->pc = 0x22c58cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 22));
    // 0x22c590: 0x3c63021  addu        $a2, $fp, $a2
    ctx->pc = 0x22c590u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 6)));
    // 0x22c594: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x22c594u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x22c598: 0x356b0821  ori         $t3, $t3, 0x821
    ctx->pc = 0x22c598u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)2081);
    // 0x22c59c: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x22c59cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x22c5a0: 0x3c0cf61e  lui         $t4, 0xF61E
    ctx->pc = 0x22c5a0u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)63006 << 16));
    // 0x22c5a4: 0xa3c821  addu        $t9, $a1, $v1
    ctx->pc = 0x22c5a4u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x22c5a8: 0x8fa80018  lw          $t0, 0x18($sp)
    ctx->pc = 0x22c5a8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x22c5ac: 0x191d02  srl         $v1, $t9, 20
    ctx->pc = 0x22c5acu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 25), 20));
    // 0x22c5b0: 0x191300  sll         $v0, $t9, 12
    ctx->pc = 0x22c5b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 25), 12));
    // 0x22c5b4: 0x43c825  or          $t9, $v0, $v1
    ctx->pc = 0x22c5b4u;
    SET_GPR_U64(ctx, 25, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x22c5b8: 0x3c058b44  lui         $a1, 0x8B44
    ctx->pc = 0x22c5b8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)35652 << 16));
    // 0x22c5bc: 0x8fa20024  lw          $v0, 0x24($sp)
    ctx->pc = 0x22c5bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x22c5c0: 0x33ec821  addu        $t9, $t9, $fp
    ctx->pc = 0x22c5c0u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 30)));
    // 0x22c5c4: 0x33e1824  and         $v1, $t9, $fp
    ctx->pc = 0x22c5c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 25) & GPR_U64(ctx, 30));
    // 0x22c5c8: 0x34a5f7af  ori         $a1, $a1, 0xF7AF
    ctx->pc = 0x22c5c8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)63407);
    // 0x22c5cc: 0xafa20048  sw          $v0, 0x48($sp)
    ctx->pc = 0x22c5ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 2));
    // 0x22c5d0: 0x3252821  addu        $a1, $t9, $a1
    ctx->pc = 0x22c5d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 5)));
    // 0x22c5d4: 0x191027  nor         $v0, $zero, $t9
    ctx->pc = 0x22c5d4u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 25)));
    // 0x22c5d8: 0x358c2562  ori         $t4, $t4, 0x2562
    ctx->pc = 0x22c5d8u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | (uint64_t)(uint16_t)9570);
    // 0x22c5dc: 0x571024  and         $v0, $v0, $s7
    ctx->pc = 0x22c5dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 23));
    // 0x22c5e0: 0x3c0ee9b6  lui         $t6, 0xE9B6
    ctx->pc = 0x22c5e0u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)59830 << 16));
    // 0x22c5e4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x22c5e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x22c5e8: 0x35cec7aa  ori         $t6, $t6, 0xC7AA
    ctx->pc = 0x22c5e8u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | (uint64_t)(uint16_t)51114);
    // 0x22c5ec: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x22c5ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x22c5f0: 0x3c0fd62f  lui         $t7, 0xD62F
    ctx->pc = 0x22c5f0u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)54831 << 16));
    // 0x22c5f4: 0x83b021  addu        $s6, $a0, $v1
    ctx->pc = 0x22c5f4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x22c5f8: 0x3c08ffff  lui         $t0, 0xFFFF
    ctx->pc = 0x22c5f8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)65535 << 16));
    // 0x22c5fc: 0x161bc2  srl         $v1, $s6, 15
    ctx->pc = 0x22c5fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 22), 15));
    // 0x22c600: 0x161440  sll         $v0, $s6, 17
    ctx->pc = 0x22c600u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 22), 17));
    // 0x22c604: 0x43b025  or          $s6, $v0, $v1
    ctx->pc = 0x22c604u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x22c608: 0x35085bb1  ori         $t0, $t0, 0x5BB1
    ctx->pc = 0x22c608u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)23473);
    // 0x22c60c: 0x2d9b021  addu        $s6, $s6, $t9
    ctx->pc = 0x22c60cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 25)));
    // 0x22c610: 0x3c04895c  lui         $a0, 0x895C
    ctx->pc = 0x22c610u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)35164 << 16));
    // 0x22c614: 0x161027  nor         $v0, $zero, $s6
    ctx->pc = 0x22c614u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 22)));
    // 0x22c618: 0x2d91824  and         $v1, $s6, $t9
    ctx->pc = 0x22c618u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 22) & GPR_U64(ctx, 25));
    // 0x22c61c: 0x5e1024  and         $v0, $v0, $fp
    ctx->pc = 0x22c61cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 30));
    // 0x22c620: 0x2c84021  addu        $t0, $s6, $t0
    ctx->pc = 0x22c620u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 8)));
    // 0x22c624: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x22c624u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x22c628: 0x3484d7be  ori         $a0, $a0, 0xD7BE
    ctx->pc = 0x22c628u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)55230);
    // 0x22c62c: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x22c62cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x22c630: 0x35ef105d  ori         $t7, $t7, 0x105D
    ctx->pc = 0x22c630u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)4189);
    // 0x22c634: 0x3c11d8a1  lui         $s1, 0xD8A1
    ctx->pc = 0x22c634u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)55457 << 16));
    // 0x22c638: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x22c638u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x22c63c: 0x3631e681  ori         $s1, $s1, 0xE681
    ctx->pc = 0x22c63cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)59009);
    // 0x22c640: 0xe3b821  addu        $s7, $a3, $v1
    ctx->pc = 0x22c640u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x22c644: 0x171a82  srl         $v1, $s7, 10
    ctx->pc = 0x22c644u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 23), 10));
    // 0x22c648: 0x171580  sll         $v0, $s7, 22
    ctx->pc = 0x22c648u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 23), 22));
    // 0x22c64c: 0x43b825  or          $s7, $v0, $v1
    ctx->pc = 0x22c64cu;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x22c650: 0x3c076b90  lui         $a3, 0x6B90
    ctx->pc = 0x22c650u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)27536 << 16));
    // 0x22c654: 0x2f6b821  addu        $s7, $s7, $s6
    ctx->pc = 0x22c654u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 22)));
    // 0x22c658: 0x34e71122  ori         $a3, $a3, 0x1122
    ctx->pc = 0x22c658u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)4386);
    // 0x22c65c: 0x171027  nor         $v0, $zero, $s7
    ctx->pc = 0x22c65cu;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 23)));
    // 0x22c660: 0x2f61824  and         $v1, $s7, $s6
    ctx->pc = 0x22c660u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 23) & GPR_U64(ctx, 22));
    // 0x22c664: 0x591024  and         $v0, $v0, $t9
    ctx->pc = 0x22c664u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 25));
    // 0x22c668: 0x2e42021  addu        $a0, $s7, $a0
    ctx->pc = 0x22c668u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 4)));
    // 0x22c66c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x22c66cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x22c670: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x22c670u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22c674: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x22c674u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x22c678: 0xc3f021  addu        $fp, $a2, $v1
    ctx->pc = 0x22c678u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x22c67c: 0x1e1e42  srl         $v1, $fp, 25
    ctx->pc = 0x22c67cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 30), 25));
    // 0x22c680: 0x1e11c0  sll         $v0, $fp, 7
    ctx->pc = 0x22c680u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 30), 7));
    // 0x22c684: 0x43f025  or          $fp, $v0, $v1
    ctx->pc = 0x22c684u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x22c688: 0x8fa60048  lw          $a2, 0x48($sp)
    ctx->pc = 0x22c688u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22c68c: 0x3d7f021  addu        $fp, $fp, $s7
    ctx->pc = 0x22c68cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 23)));
    // 0x22c690: 0x1e1027  nor         $v0, $zero, $fp
    ctx->pc = 0x22c690u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 30)));
    // 0x22c694: 0x3d71824  and         $v1, $fp, $s7
    ctx->pc = 0x22c694u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 30) & GPR_U64(ctx, 23));
    // 0x22c698: 0x561024  and         $v0, $v0, $s6
    ctx->pc = 0x22c698u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 22));
    // 0x22c69c: 0x3c73821  addu        $a3, $fp, $a3
    ctx->pc = 0x22c69cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 7)));
    // 0x22c6a0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x22c6a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x22c6a4: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x22c6a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x22c6a8: 0xa3c821  addu        $t9, $a1, $v1
    ctx->pc = 0x22c6a8u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x22c6ac: 0x8fa6002c  lw          $a2, 0x2C($sp)
    ctx->pc = 0x22c6acu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x22c6b0: 0x191d02  srl         $v1, $t9, 20
    ctx->pc = 0x22c6b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 25), 20));
    // 0x22c6b4: 0x191300  sll         $v0, $t9, 12
    ctx->pc = 0x22c6b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 25), 12));
    // 0x22c6b8: 0x43c825  or          $t9, $v0, $v1
    ctx->pc = 0x22c6b8u;
    SET_GPR_U64(ctx, 25, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x22c6bc: 0x3c05c040  lui         $a1, 0xC040
    ctx->pc = 0x22c6bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)49216 << 16));
    // 0x22c6c0: 0x33ec821  addu        $t9, $t9, $fp
    ctx->pc = 0x22c6c0u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 30)));
    // 0x22c6c4: 0xafa5004c  sw          $a1, 0x4C($sp)
    ctx->pc = 0x22c6c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 5));
    // 0x22c6c8: 0x191027  nor         $v0, $zero, $t9
    ctx->pc = 0x22c6c8u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 25)));
    // 0x22c6cc: 0x33e1824  and         $v1, $t9, $fp
    ctx->pc = 0x22c6ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 25) & GPR_U64(ctx, 30));
    // 0x22c6d0: 0x571024  and         $v0, $v0, $s7
    ctx->pc = 0x22c6d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 23));
    // 0x22c6d4: 0x34a5b340  ori         $a1, $a1, 0xB340
    ctx->pc = 0x22c6d4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)45888);
    // 0x22c6d8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x22c6d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x22c6dc: 0xafa5004c  sw          $a1, 0x4C($sp)
    ctx->pc = 0x22c6dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 5));
    // 0x22c6e0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x22c6e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x22c6e4: 0x3294821  addu        $t1, $t9, $t1
    ctx->pc = 0x22c6e4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 9)));
    // 0x22c6e8: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x22c6e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x22c6ec: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x22c6ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x22c6f0: 0x103b021  addu        $s6, $t0, $v1
    ctx->pc = 0x22c6f0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x22c6f4: 0x161bc2  srl         $v1, $s6, 15
    ctx->pc = 0x22c6f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 22), 15));
    // 0x22c6f8: 0x161440  sll         $v0, $s6, 17
    ctx->pc = 0x22c6f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 22), 17));
    // 0x22c6fc: 0x43b025  or          $s6, $v0, $v1
    ctx->pc = 0x22c6fcu;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x22c700: 0x3c08265e  lui         $t0, 0x265E
    ctx->pc = 0x22c700u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)9822 << 16));
    // 0x22c704: 0x2d9b021  addu        $s6, $s6, $t9
    ctx->pc = 0x22c704u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 25)));
    // 0x22c708: 0x35085a51  ori         $t0, $t0, 0x5A51
    ctx->pc = 0x22c708u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)23121);
    // 0x22c70c: 0x161027  nor         $v0, $zero, $s6
    ctx->pc = 0x22c70cu;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 22)));
    // 0x22c710: 0x2d91824  and         $v1, $s6, $t9
    ctx->pc = 0x22c710u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 22) & GPR_U64(ctx, 25));
    // 0x22c714: 0x5e1024  and         $v0, $v0, $fp
    ctx->pc = 0x22c714u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 30));
    // 0x22c718: 0x2ca5021  addu        $t2, $s6, $t2
    ctx->pc = 0x22c718u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 10)));
    // 0x22c71c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x22c71cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x22c720: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x22c720u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x22c724: 0x83b821  addu        $s7, $a0, $v1
    ctx->pc = 0x22c724u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x22c728: 0x3c0621e1  lui         $a2, 0x21E1
    ctx->pc = 0x22c728u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8673 << 16));
    // 0x22c72c: 0x171a82  srl         $v1, $s7, 10
    ctx->pc = 0x22c72cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 23), 10));
    // 0x22c730: 0x171580  sll         $v0, $s7, 22
    ctx->pc = 0x22c730u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 23), 22));
    // 0x22c734: 0x43b825  or          $s7, $v0, $v1
    ctx->pc = 0x22c734u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x22c738: 0xafa6005c  sw          $a2, 0x5C($sp)
    ctx->pc = 0x22c738u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 6));
    // 0x22c73c: 0x3c020244  lui         $v0, 0x244
    ctx->pc = 0x22c73cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)580 << 16));
    // 0x22c740: 0x2f6b821  addu        $s7, $s7, $s6
    ctx->pc = 0x22c740u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 22)));
    // 0x22c744: 0xafa20054  sw          $v0, 0x54($sp)
    ctx->pc = 0x22c744u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 2));
    // 0x22c748: 0x2f61824  and         $v1, $s7, $s6
    ctx->pc = 0x22c748u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 23) & GPR_U64(ctx, 22));
    // 0x22c74c: 0x171027  nor         $v0, $zero, $s7
    ctx->pc = 0x22c74cu;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 23)));
    // 0x22c750: 0x34c6cde6  ori         $a2, $a2, 0xCDE6
    ctx->pc = 0x22c750u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)52710);
    // 0x22c754: 0x591024  and         $v0, $v0, $t9
    ctx->pc = 0x22c754u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 25));
    // 0x22c758: 0x8fa40054  lw          $a0, 0x54($sp)
    ctx->pc = 0x22c758u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
    // 0x22c75c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x22c75cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x22c760: 0xafa6005c  sw          $a2, 0x5C($sp)
    ctx->pc = 0x22c760u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 6));
    // 0x22c764: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x22c764u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x22c768: 0x34841453  ori         $a0, $a0, 0x1453
    ctx->pc = 0x22c768u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)5203);
    // 0x22c76c: 0xe3f021  addu        $fp, $a3, $v1
    ctx->pc = 0x22c76cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x22c770: 0xafa40054  sw          $a0, 0x54($sp)
    ctx->pc = 0x22c770u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 4));
    // 0x22c774: 0x1e1e42  srl         $v1, $fp, 25
    ctx->pc = 0x22c774u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 30), 25));
    // 0x22c778: 0x1e11c0  sll         $v0, $fp, 7
    ctx->pc = 0x22c778u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 30), 7));
    // 0x22c77c: 0x43f025  or          $fp, $v0, $v1
    ctx->pc = 0x22c77cu;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x22c780: 0x8fa5004c  lw          $a1, 0x4C($sp)
    ctx->pc = 0x22c780u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x22c784: 0x3d7f021  addu        $fp, $fp, $s7
    ctx->pc = 0x22c784u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 23)));
    // 0x22c788: 0x2eb5821  addu        $t3, $s7, $t3
    ctx->pc = 0x22c788u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 11)));
    // 0x22c78c: 0x1e1027  nor         $v0, $zero, $fp
    ctx->pc = 0x22c78cu;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 30)));
    // 0x22c790: 0x3d71824  and         $v1, $fp, $s7
    ctx->pc = 0x22c790u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 30) & GPR_U64(ctx, 23));
    // 0x22c794: 0x561024  and         $v0, $v0, $s6
    ctx->pc = 0x22c794u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 22));
    // 0x22c798: 0x3cc6021  addu        $t4, $fp, $t4
    ctx->pc = 0x22c798u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 12)));
    // 0x22c79c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x22c79cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x22c7a0: 0x3c07e7d3  lui         $a3, 0xE7D3
    ctx->pc = 0x22c7a0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)59347 << 16));
    // 0x22c7a4: 0x8fa20034  lw          $v0, 0x34($sp)
    ctx->pc = 0x22c7a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x22c7a8: 0x34e7fbc8  ori         $a3, $a3, 0xFBC8
    ctx->pc = 0x22c7a8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)64456);
    // 0x22c7ac: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x22c7acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x22c7b0: 0x123c821  addu        $t9, $t1, $v1
    ctx->pc = 0x22c7b0u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
    // 0x22c7b4: 0x3c03c337  lui         $v1, 0xC337
    ctx->pc = 0x22c7b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49975 << 16));
    // 0x22c7b8: 0x191300  sll         $v0, $t9, 12
    ctx->pc = 0x22c7b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 25), 12));
    // 0x22c7bc: 0xafa30060  sw          $v1, 0x60($sp)
    ctx->pc = 0x22c7bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 3));
    // 0x22c7c0: 0x3c09f4d5  lui         $t1, 0xF4D5
    ctx->pc = 0x22c7c0u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)62677 << 16));
    // 0x22c7c4: 0x191d02  srl         $v1, $t9, 20
    ctx->pc = 0x22c7c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 25), 20));
    // 0x22c7c8: 0x35290d87  ori         $t1, $t1, 0xD87
    ctx->pc = 0x22c7c8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)3463);
    // 0x22c7cc: 0x43c825  or          $t9, $v0, $v1
    ctx->pc = 0x22c7ccu;
    SET_GPR_U64(ctx, 25, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x22c7d0: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x22c7d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x22c7d4: 0x33ec821  addu        $t9, $t9, $fp
    ctx->pc = 0x22c7d4u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 30)));
    // 0x22c7d8: 0x193027  nor         $a2, $zero, $t9
    ctx->pc = 0x22c7d8u;
    SET_GPR_U64(ctx, 6, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 25)));
    // 0x22c7dc: 0x33e1024  and         $v0, $t9, $fp
    ctx->pc = 0x22c7dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 25) & GPR_U64(ctx, 30));
    // 0x22c7e0: 0xd71824  and         $v1, $a2, $s7
    ctx->pc = 0x22c7e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & GPR_U64(ctx, 23));
    // 0x22c7e4: 0x348407d6  ori         $a0, $a0, 0x7D6
    ctx->pc = 0x22c7e4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)2006);
    // 0x22c7e8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x22c7e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x22c7ec: 0xafa40060  sw          $a0, 0x60($sp)
    ctx->pc = 0x22c7ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 4));
    // 0x22c7f0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x22c7f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x22c7f4: 0x3c04455a  lui         $a0, 0x455A
    ctx->pc = 0x22c7f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17754 << 16));
    // 0x22c7f8: 0xafa40064  sw          $a0, 0x64($sp)
    ctx->pc = 0x22c7f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 4));
    // 0x22c7fc: 0x325c021  addu        $t8, $t9, $a1
    ctx->pc = 0x22c7fcu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 5)));
    // 0x22c800: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x22c800u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x22c804: 0x348414ed  ori         $a0, $a0, 0x14ED
    ctx->pc = 0x22c804u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)5357);
    // 0x22c808: 0x142b021  addu        $s6, $t2, $v0
    ctx->pc = 0x22c808u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
    // 0x22c80c: 0xafa40064  sw          $a0, 0x64($sp)
    ctx->pc = 0x22c80cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 4));
    // 0x22c810: 0x161bc2  srl         $v1, $s6, 15
    ctx->pc = 0x22c810u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 22), 15));
    // 0x22c814: 0x161440  sll         $v0, $s6, 17
    ctx->pc = 0x22c814u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 22), 17));
    // 0x22c818: 0x43b025  or          $s6, $v0, $v1
    ctx->pc = 0x22c818u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x22c81c: 0x8fa5003c  lw          $a1, 0x3C($sp)
    ctx->pc = 0x22c81cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x22c820: 0x2d9b021  addu        $s6, $s6, $t9
    ctx->pc = 0x22c820u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 25)));
    // 0x22c824: 0x3c0aa9e3  lui         $t2, 0xA9E3
    ctx->pc = 0x22c824u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)43491 << 16));
    // 0x22c828: 0x162027  nor         $a0, $zero, $s6
    ctx->pc = 0x22c828u;
    SET_GPR_U64(ctx, 4, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 22)));
    // 0x22c82c: 0x2d91024  and         $v0, $s6, $t9
    ctx->pc = 0x22c82cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) & GPR_U64(ctx, 25));
    // 0x22c830: 0x9e1824  and         $v1, $a0, $fp
    ctx->pc = 0x22c830u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 30));
    // 0x22c834: 0x2c63024  and         $a2, $s6, $a2
    ctx->pc = 0x22c834u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 22) & GPR_U64(ctx, 6));
    // 0x22c838: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x22c838u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x22c83c: 0x2c84021  addu        $t0, $s6, $t0
    ctx->pc = 0x22c83cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 8)));
    // 0x22c840: 0x3c03fcef  lui         $v1, 0xFCEF
    ctx->pc = 0x22c840u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64751 << 16));
    // 0x22c844: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x22c844u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x22c848: 0xafa30068  sw          $v1, 0x68($sp)
    ctx->pc = 0x22c848u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 3));
    // 0x22c84c: 0x162b821  addu        $s7, $t3, $v0
    ctx->pc = 0x22c84cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
    // 0x22c850: 0x3463a3f8  ori         $v1, $v1, 0xA3F8
    ctx->pc = 0x22c850u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)41976);
    // 0x22c854: 0x171580  sll         $v0, $s7, 22
    ctx->pc = 0x22c854u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 23), 22));
    // 0x22c858: 0xafa30068  sw          $v1, 0x68($sp)
    ctx->pc = 0x22c858u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 3));
    // 0x22c85c: 0x354ae905  ori         $t2, $t2, 0xE905
    ctx->pc = 0x22c85cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)59653);
    // 0x22c860: 0x171a82  srl         $v1, $s7, 10
    ctx->pc = 0x22c860u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 23), 10));
    // 0x22c864: 0x3c0b676f  lui         $t3, 0x676F
    ctx->pc = 0x22c864u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)26479 << 16));
    // 0x22c868: 0x43b825  or          $s7, $v0, $v1
    ctx->pc = 0x22c868u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x22c86c: 0x356b02d9  ori         $t3, $t3, 0x2D9
    ctx->pc = 0x22c86cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)729);
    // 0x22c870: 0x2f6b821  addu        $s7, $s7, $s6
    ctx->pc = 0x22c870u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 22)));
    // 0x22c874: 0x2f91024  and         $v0, $s7, $t9
    ctx->pc = 0x22c874u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) & GPR_U64(ctx, 25));
    // 0x22c878: 0x2e42024  and         $a0, $s7, $a0
    ctx->pc = 0x22c878u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 23) & GPR_U64(ctx, 4));
    // 0x22c87c: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x22c87cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x22c880: 0x172827  nor         $a1, $zero, $s7
    ctx->pc = 0x22c880u;
    SET_GPR_U64(ctx, 5, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 23)));
    // 0x22c884: 0x8fa60004  lw          $a2, 0x4($sp)
    ctx->pc = 0x22c884u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x22c888: 0x2ee7021  addu        $t6, $s7, $t6
    ctx->pc = 0x22c888u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 14)));
    // 0x22c88c: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x22c88cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x22c890: 0x182f021  addu        $fp, $t4, $v0
    ctx->pc = 0x22c890u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
    // 0x22c894: 0x3c028d2a  lui         $v0, 0x8D2A
    ctx->pc = 0x22c894u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)36138 << 16));
    // 0x22c898: 0x1e1ec2  srl         $v1, $fp, 27
    ctx->pc = 0x22c898u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 30), 27));
    // 0x22c89c: 0xafa2006c  sw          $v0, 0x6C($sp)
    ctx->pc = 0x22c89cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 2));
    // 0x22c8a0: 0x3c0cfffa  lui         $t4, 0xFFFA
    ctx->pc = 0x22c8a0u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)65530 << 16));
    // 0x22c8a4: 0x1e1140  sll         $v0, $fp, 5
    ctx->pc = 0x22c8a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 30), 5));
    // 0x22c8a8: 0x358c3942  ori         $t4, $t4, 0x3942
    ctx->pc = 0x22c8a8u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | (uint64_t)(uint16_t)14658);
    // 0x22c8ac: 0x43f025  or          $fp, $v0, $v1
    ctx->pc = 0x22c8acu;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x22c8b0: 0x3d7f021  addu        $fp, $fp, $s7
    ctx->pc = 0x22c8b0u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 23)));
    // 0x22c8b4: 0x8fa3006c  lw          $v1, 0x6C($sp)
    ctx->pc = 0x22c8b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x22c8b8: 0x3d61024  and         $v0, $fp, $s6
    ctx->pc = 0x22c8b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) & GPR_U64(ctx, 22));
    // 0x22c8bc: 0x3c52824  and         $a1, $fp, $a1
    ctx->pc = 0x22c8bcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 30) & GPR_U64(ctx, 5));
    // 0x22c8c0: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x22c8c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x22c8c4: 0x34634c8a  ori         $v1, $v1, 0x4C8A
    ctx->pc = 0x22c8c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)19594);
    // 0x22c8c8: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x22c8c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x22c8cc: 0x1e3027  nor         $a2, $zero, $fp
    ctx->pc = 0x22c8ccu;
    SET_GPR_U64(ctx, 6, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 30)));
    // 0x22c8d0: 0xafa3006c  sw          $v1, 0x6C($sp)
    ctx->pc = 0x22c8d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 3));
    // 0x22c8d4: 0x3cf7821  addu        $t7, $fp, $t7
    ctx->pc = 0x22c8d4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 15)));
    // 0x22c8d8: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x22c8d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x22c8dc: 0x302c821  addu        $t9, $t8, $v0
    ctx->pc = 0x22c8dcu;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 24), GPR_U32(ctx, 2)));
    // 0x22c8e0: 0x191dc2  srl         $v1, $t9, 23
    ctx->pc = 0x22c8e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 25), 23));
    // 0x22c8e4: 0x191240  sll         $v0, $t9, 9
    ctx->pc = 0x22c8e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 25), 9));
    // 0x22c8e8: 0x43c825  or          $t9, $v0, $v1
    ctx->pc = 0x22c8e8u;
    SET_GPR_U64(ctx, 25, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x22c8ec: 0x3c028771  lui         $v0, 0x8771
    ctx->pc = 0x22c8ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34673 << 16));
    // 0x22c8f0: 0x33ec821  addu        $t9, $t9, $fp
    ctx->pc = 0x22c8f0u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 30)));
    // 0x22c8f4: 0xafa20074  sw          $v0, 0x74($sp)
    ctx->pc = 0x22c8f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 2));
    // 0x22c8f8: 0x3263024  and         $a2, $t9, $a2
    ctx->pc = 0x22c8f8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 25) & GPR_U64(ctx, 6));
    // 0x22c8fc: 0x3442f681  ori         $v0, $v0, 0xF681
    ctx->pc = 0x22c8fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)63105);
    // 0x22c900: 0x8fa3002c  lw          $v1, 0x2C($sp)
    ctx->pc = 0x22c900u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x22c904: 0xafa20074  sw          $v0, 0x74($sp)
    ctx->pc = 0x22c904u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 2));
    // 0x22c908: 0x192027  nor         $a0, $zero, $t9
    ctx->pc = 0x22c908u;
    SET_GPR_U64(ctx, 4, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 25)));
    // 0x22c90c: 0x3371024  and         $v0, $t9, $s7
    ctx->pc = 0x22c90cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 25) & GPR_U64(ctx, 23));
    // 0x22c910: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x22c910u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x22c914: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x22c914u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x22c918: 0x8fa50054  lw          $a1, 0x54($sp)
    ctx->pc = 0x22c918u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
    // 0x22c91c: 0x102b021  addu        $s6, $t0, $v0
    ctx->pc = 0x22c91cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x22c920: 0x161c82  srl         $v1, $s6, 18
    ctx->pc = 0x22c920u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 22), 18));
    // 0x22c924: 0x161380  sll         $v0, $s6, 14
    ctx->pc = 0x22c924u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 22), 14));
    // 0x22c928: 0x43b025  or          $s6, $v0, $v1
    ctx->pc = 0x22c928u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x22c92c: 0x3c086d9d  lui         $t0, 0x6D9D
    ctx->pc = 0x22c92cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)28061 << 16));
    // 0x22c930: 0x3c02fde5  lui         $v0, 0xFDE5
    ctx->pc = 0x22c930u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64997 << 16));
    // 0x22c934: 0x2d9b021  addu        $s6, $s6, $t9
    ctx->pc = 0x22c934u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 25)));
    // 0x22c938: 0xafa2007c  sw          $v0, 0x7C($sp)
    ctx->pc = 0x22c938u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 2));
    // 0x22c93c: 0x2c42024  and         $a0, $s6, $a0
    ctx->pc = 0x22c93cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 22) & GPR_U64(ctx, 4));
    // 0x22c940: 0x2de1024  and         $v0, $s6, $fp
    ctx->pc = 0x22c940u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) & GPR_U64(ctx, 30));
    // 0x22c944: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x22c944u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22c948: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x22c948u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x22c94c: 0xafa80078  sw          $t0, 0x78($sp)
    ctx->pc = 0x22c94cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 8));
    // 0x22c950: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x22c950u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x22c954: 0x35086122  ori         $t0, $t0, 0x6122
    ctx->pc = 0x22c954u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)24866);
    // 0x22c958: 0x1c2b821  addu        $s7, $t6, $v0
    ctx->pc = 0x22c958u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 2)));
    // 0x22c95c: 0xafa80078  sw          $t0, 0x78($sp)
    ctx->pc = 0x22c95cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 8));
    // 0x22c960: 0x171b02  srl         $v1, $s7, 12
    ctx->pc = 0x22c960u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 23), 12));
    // 0x22c964: 0x171500  sll         $v0, $s7, 20
    ctx->pc = 0x22c964u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 23), 20));
    // 0x22c968: 0x43b825  or          $s7, $v0, $v1
    ctx->pc = 0x22c968u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x22c96c: 0x3c08a4be  lui         $t0, 0xA4BE
    ctx->pc = 0x22c96cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)42174 << 16));
    // 0x22c970: 0x2f6b821  addu        $s7, $s7, $s6
    ctx->pc = 0x22c970u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 22)));
    // 0x22c974: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x22c974u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x22c978: 0x2f91024  and         $v0, $s7, $t9
    ctx->pc = 0x22c978u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) & GPR_U64(ctx, 25));
    // 0x22c97c: 0xafa80080  sw          $t0, 0x80($sp)
    ctx->pc = 0x22c97cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 8));
    // 0x22c980: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x22c980u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x22c984: 0x3252821  addu        $a1, $t9, $a1
    ctx->pc = 0x22c984u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 5)));
    // 0x22c988: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x22c988u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x22c98c: 0x3508ea44  ori         $t0, $t0, 0xEA44
    ctx->pc = 0x22c98cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)59972);
    // 0x22c990: 0x1e2f021  addu        $fp, $t7, $v0
    ctx->pc = 0x22c990u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 2)));
    // 0x22c994: 0xafa50050  sw          $a1, 0x50($sp)
    ctx->pc = 0x22c994u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 5));
    // 0x22c998: 0x1e1ec2  srl         $v1, $fp, 27
    ctx->pc = 0x22c998u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 30), 27));
    // 0x22c99c: 0x1e1140  sll         $v0, $fp, 5
    ctx->pc = 0x22c99cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 30), 5));
    // 0x22c9a0: 0x43f025  or          $fp, $v0, $v1
    ctx->pc = 0x22c9a0u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x22c9a4: 0xafa80080  sw          $t0, 0x80($sp)
    ctx->pc = 0x22c9a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 8));
    // 0x22c9a8: 0x3d7f021  addu        $fp, $fp, $s7
    ctx->pc = 0x22c9a8u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 23)));
    // 0x22c9ac: 0x3c08f6bb  lui         $t0, 0xF6BB
    ctx->pc = 0x22c9acu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)63163 << 16));
    // 0x22c9b0: 0x162827  nor         $a1, $zero, $s6
    ctx->pc = 0x22c9b0u;
    SET_GPR_U64(ctx, 5, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 22)));
    // 0x22c9b4: 0xafa80088  sw          $t0, 0x88($sp)
    ctx->pc = 0x22c9b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 8));
    // 0x22c9b8: 0x2e52824  and         $a1, $s7, $a1
    ctx->pc = 0x22c9b8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 23) & GPR_U64(ctx, 5));
    // 0x22c9bc: 0x3d61024  and         $v0, $fp, $s6
    ctx->pc = 0x22c9bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) & GPR_U64(ctx, 22));
    // 0x22c9c0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x22c9c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x22c9c4: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x22c9c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x22c9c8: 0x8fa80050  lw          $t0, 0x50($sp)
    ctx->pc = 0x22c9c8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x22c9cc: 0x2d18821  addu        $s1, $s6, $s1
    ctx->pc = 0x22c9ccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 17)));
    // 0x22c9d0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x22c9d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x22c9d4: 0x8fa6007c  lw          $a2, 0x7C($sp)
    ctx->pc = 0x22c9d4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
    // 0x22c9d8: 0x102c821  addu        $t9, $t0, $v0
    ctx->pc = 0x22c9d8u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x22c9dc: 0x3c044bde  lui         $a0, 0x4BDE
    ctx->pc = 0x22c9dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)19422 << 16));
    // 0x22c9e0: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x22c9e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x22c9e4: 0x34c6380c  ori         $a2, $a2, 0x380C
    ctx->pc = 0x22c9e4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)14348);
    // 0x22c9e8: 0x191dc2  srl         $v1, $t9, 23
    ctx->pc = 0x22c9e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 25), 23));
    // 0x22c9ec: 0xafa6007c  sw          $a2, 0x7C($sp)
    ctx->pc = 0x22c9ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 6));
    // 0x22c9f0: 0x34424b60  ori         $v0, $v0, 0x4B60
    ctx->pc = 0x22c9f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)19296);
    // 0x22c9f4: 0x173027  nor         $a2, $zero, $s7
    ctx->pc = 0x22c9f4u;
    SET_GPR_U64(ctx, 6, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 23)));
    // 0x22c9f8: 0xafa20088  sw          $v0, 0x88($sp)
    ctx->pc = 0x22c9f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 2));
    // 0x22c9fc: 0x3c63024  and         $a2, $fp, $a2
    ctx->pc = 0x22c9fcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 30) & GPR_U64(ctx, 6));
    // 0x22ca00: 0x191240  sll         $v0, $t9, 9
    ctx->pc = 0x22ca00u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 25), 9));
    // 0x22ca04: 0x8fa5005c  lw          $a1, 0x5C($sp)
    ctx->pc = 0x22ca04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x22ca08: 0x43c825  or          $t9, $v0, $v1
    ctx->pc = 0x22ca08u;
    SET_GPR_U64(ctx, 25, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x22ca0c: 0xafa40084  sw          $a0, 0x84($sp)
    ctx->pc = 0x22ca0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 4));
    // 0x22ca10: 0x33ec821  addu        $t9, $t9, $fp
    ctx->pc = 0x22ca10u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 30)));
    // 0x22ca14: 0x3c03bebf  lui         $v1, 0xBEBF
    ctx->pc = 0x22ca14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48831 << 16));
    // 0x22ca18: 0xafa3008c  sw          $v1, 0x8C($sp)
    ctx->pc = 0x22ca18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 3));
    // 0x22ca1c: 0x3371024  and         $v0, $t9, $s7
    ctx->pc = 0x22ca1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 25) & GPR_U64(ctx, 23));
    // 0x22ca20: 0x3463bc70  ori         $v1, $v1, 0xBC70
    ctx->pc = 0x22ca20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)48240);
    // 0x22ca24: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x22ca24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x22ca28: 0x8fa6003c  lw          $a2, 0x3C($sp)
    ctx->pc = 0x22ca28u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x22ca2c: 0x3484cfa9  ori         $a0, $a0, 0xCFA9
    ctx->pc = 0x22ca2cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)53161);
    // 0x22ca30: 0xafa3008c  sw          $v1, 0x8C($sp)
    ctx->pc = 0x22ca30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 3));
    // 0x22ca34: 0x3c52821  addu        $a1, $fp, $a1
    ctx->pc = 0x22ca34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 5)));
    // 0x22ca38: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x22ca38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x22ca3c: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x22ca3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x22ca40: 0x222b021  addu        $s6, $s1, $v0
    ctx->pc = 0x22ca40u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x22ca44: 0x3c06eaa1  lui         $a2, 0xEAA1
    ctx->pc = 0x22ca44u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)60065 << 16));
    // 0x22ca48: 0x3234021  addu        $t0, $t9, $v1
    ctx->pc = 0x22ca48u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 3)));
    // 0x22ca4c: 0x161380  sll         $v0, $s6, 14
    ctx->pc = 0x22ca4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 22), 14));
    // 0x22ca50: 0x161c82  srl         $v1, $s6, 18
    ctx->pc = 0x22ca50u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 22), 18));
    // 0x22ca54: 0xafa40084  sw          $a0, 0x84($sp)
    ctx->pc = 0x22ca54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 4));
    // 0x22ca58: 0x43b025  or          $s6, $v0, $v1
    ctx->pc = 0x22ca58u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x22ca5c: 0xafa50058  sw          $a1, 0x58($sp)
    ctx->pc = 0x22ca5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 5));
    // 0x22ca60: 0xafa60090  sw          $a2, 0x90($sp)
    ctx->pc = 0x22ca60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 6));
    // 0x22ca64: 0x2d9b021  addu        $s6, $s6, $t9
    ctx->pc = 0x22ca64u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 25)));
    // 0x22ca68: 0x1e2027  nor         $a0, $zero, $fp
    ctx->pc = 0x22ca68u;
    SET_GPR_U64(ctx, 4, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 30)));
    // 0x22ca6c: 0x2de1024  and         $v0, $s6, $fp
    ctx->pc = 0x22ca6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) & GPR_U64(ctx, 30));
    // 0x22ca70: 0x3242024  and         $a0, $t9, $a0
    ctx->pc = 0x22ca70u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 25) & GPR_U64(ctx, 4));
    // 0x22ca74: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x22ca74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22ca78: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x22ca78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x22ca7c: 0x2e73821  addu        $a3, $s7, $a3
    ctx->pc = 0x22ca7cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 7)));
    // 0x22ca80: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x22ca80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x22ca84: 0x192827  nor         $a1, $zero, $t9
    ctx->pc = 0x22ca84u;
    SET_GPR_U64(ctx, 5, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 25)));
    // 0x22ca88: 0xe2b821  addu        $s7, $a3, $v0
    ctx->pc = 0x22ca88u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x22ca8c: 0x2c52824  and         $a1, $s6, $a1
    ctx->pc = 0x22ca8cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 22) & GPR_U64(ctx, 5));
    // 0x22ca90: 0x171b02  srl         $v1, $s7, 12
    ctx->pc = 0x22ca90u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 23), 12));
    // 0x22ca94: 0x171500  sll         $v0, $s7, 20
    ctx->pc = 0x22ca94u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 23), 20));
    // 0x22ca98: 0x3c07d4ef  lui         $a3, 0xD4EF
    ctx->pc = 0x22ca98u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)54511 << 16));
    // 0x22ca9c: 0x43b825  or          $s7, $v0, $v1
    ctx->pc = 0x22ca9cu;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x22caa0: 0xafa70098  sw          $a3, 0x98($sp)
    ctx->pc = 0x22caa0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 7));
    // 0x22caa4: 0x2f6b821  addu        $s7, $s7, $s6
    ctx->pc = 0x22caa4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 22)));
    // 0x22caa8: 0x34e73085  ori         $a3, $a3, 0x3085
    ctx->pc = 0x22caa8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)12421);
    // 0x22caac: 0x2f91024  and         $v0, $s7, $t9
    ctx->pc = 0x22caacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) & GPR_U64(ctx, 25));
    // 0x22cab0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x22cab0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22cab4: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x22cab4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x22cab8: 0xafa70098  sw          $a3, 0x98($sp)
    ctx->pc = 0x22cab8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 7));
    // 0x22cabc: 0x163027  nor         $a2, $zero, $s6
    ctx->pc = 0x22cabcu;
    SET_GPR_U64(ctx, 6, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 22)));
    // 0x22cac0: 0x8fa70058  lw          $a3, 0x58($sp)
    ctx->pc = 0x22cac0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x22cac4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x22cac4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x22cac8: 0x2e63024  and         $a2, $s7, $a2
    ctx->pc = 0x22cac8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 23) & GPR_U64(ctx, 6));
    // 0x22cacc: 0x8fa40090  lw          $a0, 0x90($sp)
    ctx->pc = 0x22caccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x22cad0: 0xe2f021  addu        $fp, $a3, $v0
    ctx->pc = 0x22cad0u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x22cad4: 0x2c94821  addu        $t1, $s6, $t1
    ctx->pc = 0x22cad4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 9)));
    // 0x22cad8: 0x1e1ec2  srl         $v1, $fp, 27
    ctx->pc = 0x22cad8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 30), 27));
    // 0x22cadc: 0x1e1140  sll         $v0, $fp, 5
    ctx->pc = 0x22cadcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 30), 5));
    // 0x22cae0: 0x43f025  or          $fp, $v0, $v1
    ctx->pc = 0x22cae0u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x22cae4: 0x348427fa  ori         $a0, $a0, 0x27FA
    ctx->pc = 0x22cae4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)10234);
    // 0x22cae8: 0x3c02d9d4  lui         $v0, 0xD9D4
    ctx->pc = 0x22cae8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55764 << 16));
    // 0x22caec: 0x3d7f021  addu        $fp, $fp, $s7
    ctx->pc = 0x22caecu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 23)));
    // 0x22caf0: 0xafa2009c  sw          $v0, 0x9C($sp)
    ctx->pc = 0x22caf0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 156), GPR_U32(ctx, 2));
    // 0x22caf4: 0x3ca5021  addu        $t2, $fp, $t2
    ctx->pc = 0x22caf4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 10)));
    // 0x22caf8: 0x3d61024  and         $v0, $fp, $s6
    ctx->pc = 0x22caf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) & GPR_U64(ctx, 22));
    // 0x22cafc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x22cafcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x22cb00: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x22cb00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x22cb04: 0xafa40090  sw          $a0, 0x90($sp)
    ctx->pc = 0x22cb04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 4));
    // 0x22cb08: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x22cb08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x22cb0c: 0x172027  nor         $a0, $zero, $s7
    ctx->pc = 0x22cb0cu;
    SET_GPR_U64(ctx, 4, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 23)));
    // 0x22cb10: 0x102c821  addu        $t9, $t0, $v0
    ctx->pc = 0x22cb10u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x22cb14: 0x3c42024  and         $a0, $fp, $a0
    ctx->pc = 0x22cb14u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 30) & GPR_U64(ctx, 4));
    // 0x22cb18: 0x191dc2  srl         $v1, $t9, 23
    ctx->pc = 0x22cb18u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 25), 23));
    // 0x22cb1c: 0x191240  sll         $v0, $t9, 9
    ctx->pc = 0x22cb1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 25), 9));
    // 0x22cb20: 0x43c825  or          $t9, $v0, $v1
    ctx->pc = 0x22cb20u;
    SET_GPR_U64(ctx, 25, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x22cb24: 0x8fa50064  lw          $a1, 0x64($sp)
    ctx->pc = 0x22cb24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
    // 0x22cb28: 0x33ec821  addu        $t9, $t9, $fp
    ctx->pc = 0x22cb28u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 30)));
    // 0x22cb2c: 0x8fa3000c  lw          $v1, 0xC($sp)
    ctx->pc = 0x22cb2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x22cb30: 0x3371024  and         $v0, $t9, $s7
    ctx->pc = 0x22cb30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 25) & GPR_U64(ctx, 23));
    // 0x22cb34: 0x2e58821  addu        $s1, $s7, $a1
    ctx->pc = 0x22cb34u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 5)));
    // 0x22cb38: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x22cb38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x22cb3c: 0x1e2827  nor         $a1, $zero, $fp
    ctx->pc = 0x22cb3cu;
    SET_GPR_U64(ctx, 5, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 30)));
    // 0x22cb40: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x22cb40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x22cb44: 0x3252824  and         $a1, $t9, $a1
    ctx->pc = 0x22cb44u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 25) & GPR_U64(ctx, 5));
    // 0x22cb48: 0x122b021  addu        $s6, $t1, $v0
    ctx->pc = 0x22cb48u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x22cb4c: 0x8fa6009c  lw          $a2, 0x9C($sp)
    ctx->pc = 0x22cb4cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 156)));
    // 0x22cb50: 0x161c82  srl         $v1, $s6, 18
    ctx->pc = 0x22cb50u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 22), 18));
    // 0x22cb54: 0x161380  sll         $v0, $s6, 14
    ctx->pc = 0x22cb54u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 22), 14));
    // 0x22cb58: 0x43b025  or          $s6, $v0, $v1
    ctx->pc = 0x22cb58u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x22cb5c: 0x34c6d039  ori         $a2, $a2, 0xD039
    ctx->pc = 0x22cb5cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)53305);
    // 0x22cb60: 0x2d9b021  addu        $s6, $s6, $t9
    ctx->pc = 0x22cb60u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 25)));
    // 0x22cb64: 0xafa6009c  sw          $a2, 0x9C($sp)
    ctx->pc = 0x22cb64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 156), GPR_U32(ctx, 6));
    // 0x22cb68: 0x2de1024  and         $v0, $s6, $fp
    ctx->pc = 0x22cb68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) & GPR_U64(ctx, 30));
    // 0x22cb6c: 0x193027  nor         $a2, $zero, $t9
    ctx->pc = 0x22cb6cu;
    SET_GPR_U64(ctx, 6, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 25)));
    // 0x22cb70: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x22cb70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x22cb74: 0x2c63024  and         $a2, $s6, $a2
    ctx->pc = 0x22cb74u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 22) & GPR_U64(ctx, 6));
    // 0x22cb78: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x22cb78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22cb7c: 0x2cb5821  addu        $t3, $s6, $t3
    ctx->pc = 0x22cb7cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 11)));
    // 0x22cb80: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x22cb80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x22cb84: 0x3c0f289b  lui         $t7, 0x289B
    ctx->pc = 0x22cb84u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)10395 << 16));
    // 0x22cb88: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x22cb88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x22cb8c: 0x35ef7ec6  ori         $t7, $t7, 0x7EC6
    ctx->pc = 0x22cb8cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)32454);
    // 0x22cb90: 0x222b821  addu        $s7, $s1, $v0
    ctx->pc = 0x22cb90u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x22cb94: 0x3249021  addu        $s2, $t9, $a0
    ctx->pc = 0x22cb94u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 4)));
    // 0x22cb98: 0x171b02  srl         $v1, $s7, 12
    ctx->pc = 0x22cb98u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 23), 12));
    // 0x22cb9c: 0x171500  sll         $v0, $s7, 20
    ctx->pc = 0x22cb9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 23), 20));
    // 0x22cba0: 0x43b825  or          $s7, $v0, $v1
    ctx->pc = 0x22cba0u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x22cba4: 0x162027  nor         $a0, $zero, $s6
    ctx->pc = 0x22cba4u;
    SET_GPR_U64(ctx, 4, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 22)));
    // 0x22cba8: 0x2f6b821  addu        $s7, $s7, $s6
    ctx->pc = 0x22cba8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 22)));
    // 0x22cbac: 0x8fa3006c  lw          $v1, 0x6C($sp)
    ctx->pc = 0x22cbacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x22cbb0: 0x2f91024  and         $v0, $s7, $t9
    ctx->pc = 0x22cbb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) & GPR_U64(ctx, 25));
    // 0x22cbb4: 0x2e42024  and         $a0, $s7, $a0
    ctx->pc = 0x22cbb4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 23) & GPR_U64(ctx, 4));
    // 0x22cbb8: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x22cbb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x22cbbc: 0x2e38021  addu        $s0, $s7, $v1
    ctx->pc = 0x22cbbcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 3)));
    // 0x22cbc0: 0x8fa60034  lw          $a2, 0x34($sp)
    ctx->pc = 0x22cbc0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x22cbc4: 0x172827  nor         $a1, $zero, $s7
    ctx->pc = 0x22cbc4u;
    SET_GPR_U64(ctx, 5, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 23)));
    // 0x22cbc8: 0x3c070488  lui         $a3, 0x488
    ctx->pc = 0x22cbc8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)1160 << 16));
    // 0x22cbcc: 0x3c08e6db  lui         $t0, 0xE6DB
    ctx->pc = 0x22cbccu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)59099 << 16));
    // 0x22cbd0: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x22cbd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x22cbd4: 0x34e71d05  ori         $a3, $a3, 0x1D05
    ctx->pc = 0x22cbd4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)7429);
    // 0x22cbd8: 0x142f021  addu        $fp, $t2, $v0
    ctx->pc = 0x22cbd8u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
    // 0x22cbdc: 0x3c06432a  lui         $a2, 0x432A
    ctx->pc = 0x22cbdcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)17194 << 16));
    // 0x22cbe0: 0x1e1ec2  srl         $v1, $fp, 27
    ctx->pc = 0x22cbe0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 30), 27));
    // 0x22cbe4: 0x1e1140  sll         $v0, $fp, 5
    ctx->pc = 0x22cbe4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 30), 5));
    // 0x22cbe8: 0x43f025  or          $fp, $v0, $v1
    ctx->pc = 0x22cbe8u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x22cbec: 0xafa600a4  sw          $a2, 0xA4($sp)
    ctx->pc = 0x22cbecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 6));
    // 0x22cbf0: 0x3c02ab94  lui         $v0, 0xAB94
    ctx->pc = 0x22cbf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)43924 << 16));
    // 0x22cbf4: 0x3d7f021  addu        $fp, $fp, $s7
    ctx->pc = 0x22cbf4u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 23)));
    // 0x22cbf8: 0xafa200ac  sw          $v0, 0xAC($sp)
    ctx->pc = 0x22cbf8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 2));
    // 0x22cbfc: 0x3c52824  and         $a1, $fp, $a1
    ctx->pc = 0x22cbfcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 30) & GPR_U64(ctx, 5));
    // 0x22cc00: 0x3d61024  and         $v0, $fp, $s6
    ctx->pc = 0x22cc00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) & GPR_U64(ctx, 22));
    // 0x22cc04: 0x8fa30044  lw          $v1, 0x44($sp)
    ctx->pc = 0x22cc04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x22cc08: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x22cc08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x22cc0c: 0x34c6ff97  ori         $a2, $a2, 0xFF97
    ctx->pc = 0x22cc0cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65431);
    // 0x22cc10: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x22cc10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x22cc14: 0x8fa400ac  lw          $a0, 0xAC($sp)
    ctx->pc = 0x22cc14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x22cc18: 0x242c821  addu        $t9, $s2, $v0
    ctx->pc = 0x22cc18u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x22cc1c: 0xafa600a4  sw          $a2, 0xA4($sp)
    ctx->pc = 0x22cc1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 6));
    // 0x22cc20: 0x191dc2  srl         $v1, $t9, 23
    ctx->pc = 0x22cc20u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 25), 23));
    // 0x22cc24: 0x191240  sll         $v0, $t9, 9
    ctx->pc = 0x22cc24u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 25), 9));
    // 0x22cc28: 0x43c825  or          $t9, $v0, $v1
    ctx->pc = 0x22cc28u;
    SET_GPR_U64(ctx, 25, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x22cc2c: 0x348423a7  ori         $a0, $a0, 0x23A7
    ctx->pc = 0x22cc2cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)9127);
    // 0x22cc30: 0x33ec821  addu        $t9, $t9, $fp
    ctx->pc = 0x22cc30u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 30)));
    // 0x22cc34: 0x8fa3001c  lw          $v1, 0x1C($sp)
    ctx->pc = 0x22cc34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x22cc38: 0x3371024  and         $v0, $t9, $s7
    ctx->pc = 0x22cc38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 25) & GPR_U64(ctx, 23));
    // 0x22cc3c: 0xafa400ac  sw          $a0, 0xAC($sp)
    ctx->pc = 0x22cc3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 4));
    // 0x22cc40: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x22cc40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x22cc44: 0x3c04655b  lui         $a0, 0x655B
    ctx->pc = 0x22cc44u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)25947 << 16));
    // 0x22cc48: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x22cc48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x22cc4c: 0x8fa50074  lw          $a1, 0x74($sp)
    ctx->pc = 0x22cc4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 116)));
    // 0x22cc50: 0x162b021  addu        $s6, $t3, $v0
    ctx->pc = 0x22cc50u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
    // 0x22cc54: 0xafa400b4  sw          $a0, 0xB4($sp)
    ctx->pc = 0x22cc54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 4));
    // 0x22cc58: 0x161c82  srl         $v1, $s6, 18
    ctx->pc = 0x22cc58u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 22), 18));
    // 0x22cc5c: 0x161380  sll         $v0, $s6, 14
    ctx->pc = 0x22cc5cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 22), 14));
    // 0x22cc60: 0x3252821  addu        $a1, $t9, $a1
    ctx->pc = 0x22cc60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 5)));
    // 0x22cc64: 0x43b025  or          $s6, $v0, $v1
    ctx->pc = 0x22cc64u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x22cc68: 0x2d9b021  addu        $s6, $s6, $t9
    ctx->pc = 0x22cc68u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 25)));
    // 0x22cc6c: 0x1e3027  nor         $a2, $zero, $fp
    ctx->pc = 0x22cc6cu;
    SET_GPR_U64(ctx, 6, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 30)));
    // 0x22cc70: 0xafa50070  sw          $a1, 0x70($sp)
    ctx->pc = 0x22cc70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 5));
    // 0x22cc74: 0x3263024  and         $a2, $t9, $a2
    ctx->pc = 0x22cc74u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 25) & GPR_U64(ctx, 6));
    // 0x22cc78: 0x348459c3  ori         $a0, $a0, 0x59C3
    ctx->pc = 0x22cc78u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)22979);
    // 0x22cc7c: 0x2de1024  and         $v0, $s6, $fp
    ctx->pc = 0x22cc7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) & GPR_U64(ctx, 30));
    // 0x22cc80: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x22cc80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22cc84: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x22cc84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x22cc88: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x22cc88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x22cc8c: 0x3c06ffef  lui         $a2, 0xFFEF
    ctx->pc = 0x22cc8cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65519 << 16));
    // 0x22cc90: 0xafa400b4  sw          $a0, 0xB4($sp)
    ctx->pc = 0x22cc90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 4));
    // 0x22cc94: 0x3cc6021  addu        $t4, $fp, $t4
    ctx->pc = 0x22cc94u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 12)));
    // 0x22cc98: 0x2c52021  addu        $a0, $s6, $a1
    ctx->pc = 0x22cc98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 5)));
    // 0x22cc9c: 0xafa600b8  sw          $a2, 0xB8($sp)
    ctx->pc = 0x22cc9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 6));
    // 0x22cca0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x22cca0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x22cca4: 0x3c058584  lui         $a1, 0x8584
    ctx->pc = 0x22cca4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34180 << 16));
    // 0x22cca8: 0x202b821  addu        $s7, $s0, $v0
    ctx->pc = 0x22cca8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x22ccac: 0x34c6f47d  ori         $a2, $a2, 0xF47D
    ctx->pc = 0x22ccacu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)62589);
    // 0x22ccb0: 0xafa500bc  sw          $a1, 0xBC($sp)
    ctx->pc = 0x22ccb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 5));
    // 0x22ccb4: 0x171b02  srl         $v1, $s7, 12
    ctx->pc = 0x22ccb4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 23), 12));
    // 0x22ccb8: 0x34a55dd1  ori         $a1, $a1, 0x5DD1
    ctx->pc = 0x22ccb8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)24017);
    // 0x22ccbc: 0xafa600b8  sw          $a2, 0xB8($sp)
    ctx->pc = 0x22ccbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 6));
    // 0x22ccc0: 0x171500  sll         $v0, $s7, 20
    ctx->pc = 0x22ccc0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 23), 20));
    // 0x22ccc4: 0xafa500bc  sw          $a1, 0xBC($sp)
    ctx->pc = 0x22ccc4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 5));
    // 0x22ccc8: 0x43b825  or          $s7, $v0, $v1
    ctx->pc = 0x22ccc8u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x22cccc: 0x3c066fa8  lui         $a2, 0x6FA8
    ctx->pc = 0x22ccccu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)28584 << 16));
    // 0x22ccd0: 0xafa600c0  sw          $a2, 0xC0($sp)
    ctx->pc = 0x22ccd0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 6));
    // 0x22ccd4: 0x2f6b821  addu        $s7, $s7, $s6
    ctx->pc = 0x22ccd4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 22)));
    // 0x22ccd8: 0x8fa3007c  lw          $v1, 0x7C($sp)
    ctx->pc = 0x22ccd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
    // 0x22ccdc: 0x34c67e4f  ori         $a2, $a2, 0x7E4F
    ctx->pc = 0x22ccdcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)32335);
    // 0x22cce0: 0xafa600c0  sw          $a2, 0xC0($sp)
    ctx->pc = 0x22cce0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 6));
    // 0x22cce4: 0x2f61026  xor         $v0, $s7, $s6
    ctx->pc = 0x22cce4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) ^ GPR_U64(ctx, 22));
    // 0x22cce8: 0x2e32821  addu        $a1, $s7, $v1
    ctx->pc = 0x22cce8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 3)));
    // 0x22ccec: 0x8fa60014  lw          $a2, 0x14($sp)
    ctx->pc = 0x22ccecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x22ccf0: 0x3c03fe2c  lui         $v1, 0xFE2C
    ctx->pc = 0x22ccf0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65068 << 16));
    // 0x22ccf4: 0x591026  xor         $v0, $v0, $t9
    ctx->pc = 0x22ccf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 25));
    // 0x22ccf8: 0xafa300c4  sw          $v1, 0xC4($sp)
    ctx->pc = 0x22ccf8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 3));
    // 0x22ccfc: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x22ccfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x22cd00: 0x3463e6e0  ori         $v1, $v1, 0xE6E0
    ctx->pc = 0x22cd00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)59104);
    // 0x22cd04: 0x182f021  addu        $fp, $t4, $v0
    ctx->pc = 0x22cd04u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
    // 0x22cd08: 0xafa300c4  sw          $v1, 0xC4($sp)
    ctx->pc = 0x22cd08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 3));
    // 0x22cd0c: 0x1e1100  sll         $v0, $fp, 4
    ctx->pc = 0x22cd0cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 30), 4));
    // 0x22cd10: 0x1e1f02  srl         $v1, $fp, 28
    ctx->pc = 0x22cd10u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 30), 28));
    // 0x22cd14: 0x8fa60080  lw          $a2, 0x80($sp)
    ctx->pc = 0x22cd14u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x22cd18: 0x43f025  or          $fp, $v0, $v1
    ctx->pc = 0x22cd18u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x22cd1c: 0x350899e5  ori         $t0, $t0, 0x99E5
    ctx->pc = 0x22cd1cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)39397);
    // 0x22cd20: 0x3c034e08  lui         $v1, 0x4E08
    ctx->pc = 0x22cd20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)19976 << 16));
    // 0x22cd24: 0x3d7f021  addu        $fp, $fp, $s7
    ctx->pc = 0x22cd24u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 23)));
    // 0x22cd28: 0xafa300c8  sw          $v1, 0xC8($sp)
    ctx->pc = 0x22cd28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 3));
    // 0x22cd2c: 0x3c66821  addu        $t5, $fp, $a2
    ctx->pc = 0x22cd2cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 6)));
    // 0x22cd30: 0x346311a1  ori         $v1, $v1, 0x11A1
    ctx->pc = 0x22cd30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4513);
    // 0x22cd34: 0x3d71026  xor         $v0, $fp, $s7
    ctx->pc = 0x22cd34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) ^ GPR_U64(ctx, 23));
    // 0x22cd38: 0xafa300c8  sw          $v1, 0xC8($sp)
    ctx->pc = 0x22cd38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 3));
    // 0x22cd3c: 0x561026  xor         $v0, $v0, $s6
    ctx->pc = 0x22cd3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 22));
    // 0x22cd40: 0x8fa60020  lw          $a2, 0x20($sp)
    ctx->pc = 0x22cd40u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22cd44: 0x3c0e1fa2  lui         $t6, 0x1FA2
    ctx->pc = 0x22cd44u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)8098 << 16));
    // 0x22cd48: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x22cd48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x22cd4c: 0x35ce7cf8  ori         $t6, $t6, 0x7CF8
    ctx->pc = 0x22cd4cu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | (uint64_t)(uint16_t)31992);
    // 0x22cd50: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x22cd50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x22cd54: 0x3c09c4ac  lui         $t1, 0xC4AC
    ctx->pc = 0x22cd54u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)50348 << 16));
    // 0x22cd58: 0x62c821  addu        $t9, $v1, $v0
    ctx->pc = 0x22cd58u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x22cd5c: 0x3c06f753  lui         $a2, 0xF753
    ctx->pc = 0x22cd5cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)63315 << 16));
    // 0x22cd60: 0x191d42  srl         $v1, $t9, 21
    ctx->pc = 0x22cd60u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 25), 21));
    // 0x22cd64: 0x1912c0  sll         $v0, $t9, 11
    ctx->pc = 0x22cd64u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 25), 11));
    // 0x22cd68: 0x43c825  or          $t9, $v0, $v1
    ctx->pc = 0x22cd68u;
    SET_GPR_U64(ctx, 25, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x22cd6c: 0xafa600d0  sw          $a2, 0xD0($sp)
    ctx->pc = 0x22cd6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 6));
    // 0x22cd70: 0x8fa30084  lw          $v1, 0x84($sp)
    ctx->pc = 0x22cd70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 132)));
    // 0x22cd74: 0x33ec821  addu        $t9, $t9, $fp
    ctx->pc = 0x22cd74u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 30)));
    // 0x22cd78: 0x3c02bd3a  lui         $v0, 0xBD3A
    ctx->pc = 0x22cd78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48442 << 16));
    // 0x22cd7c: 0x34c67e82  ori         $a2, $a2, 0x7E82
    ctx->pc = 0x22cd7cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)32386);
    // 0x22cd80: 0xafa200d4  sw          $v0, 0xD4($sp)
    ctx->pc = 0x22cd80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 2));
    // 0x22cd84: 0x3239821  addu        $s3, $t9, $v1
    ctx->pc = 0x22cd84u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 3)));
    // 0x22cd88: 0x33e1026  xor         $v0, $t9, $fp
    ctx->pc = 0x22cd88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 25) ^ GPR_U64(ctx, 30));
    // 0x22cd8c: 0x8fa3002c  lw          $v1, 0x2C($sp)
    ctx->pc = 0x22cd8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x22cd90: 0xafa600d0  sw          $a2, 0xD0($sp)
    ctx->pc = 0x22cd90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 6));
    // 0x22cd94: 0x571026  xor         $v0, $v0, $s7
    ctx->pc = 0x22cd94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 23));
    // 0x22cd98: 0x8fa600d4  lw          $a2, 0xD4($sp)
    ctx->pc = 0x22cd98u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
    // 0x22cd9c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x22cd9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x22cda0: 0x82b021  addu        $s6, $a0, $v0
    ctx->pc = 0x22cda0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x22cda4: 0x35295665  ori         $t1, $t1, 0x5665
    ctx->pc = 0x22cda4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)22117);
    // 0x22cda8: 0x34c6f235  ori         $a2, $a2, 0xF235
    ctx->pc = 0x22cda8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)62005);
    // 0x22cdac: 0x161c02  srl         $v1, $s6, 16
    ctx->pc = 0x22cdacu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 22), 16));
    // 0x22cdb0: 0x161400  sll         $v0, $s6, 16
    ctx->pc = 0x22cdb0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 22), 16));
    // 0x22cdb4: 0xafa600d4  sw          $a2, 0xD4($sp)
    ctx->pc = 0x22cdb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 6));
    // 0x22cdb8: 0x43b025  or          $s6, $v0, $v1
    ctx->pc = 0x22cdb8u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x22cdbc: 0x3c062ad7  lui         $a2, 0x2AD7
    ctx->pc = 0x22cdbcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)10967 << 16));
    // 0x22cdc0: 0x3c02eb86  lui         $v0, 0xEB86
    ctx->pc = 0x22cdc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60294 << 16));
    // 0x22cdc4: 0xafa600d8  sw          $a2, 0xD8($sp)
    ctx->pc = 0x22cdc4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 6));
    // 0x22cdc8: 0xafa200dc  sw          $v0, 0xDC($sp)
    ctx->pc = 0x22cdc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 2));
    // 0x22cdcc: 0x34c6d2bb  ori         $a2, $a2, 0xD2BB
    ctx->pc = 0x22cdccu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)53947);
    // 0x22cdd0: 0x3442d391  ori         $v0, $v0, 0xD391
    ctx->pc = 0x22cdd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)54161);
    // 0x22cdd4: 0xafa600d8  sw          $a2, 0xD8($sp)
    ctx->pc = 0x22cdd4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 6));
    // 0x22cdd8: 0xafa200dc  sw          $v0, 0xDC($sp)
    ctx->pc = 0x22cdd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 2));
    // 0x22cddc: 0x2d9b021  addu        $s6, $s6, $t9
    ctx->pc = 0x22cddcu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 25)));
    // 0x22cde0: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x22cde0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x22cde4: 0x2d91026  xor         $v0, $s6, $t9
    ctx->pc = 0x22cde4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) ^ GPR_U64(ctx, 25));
    // 0x22cde8: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x22cde8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x22cdec: 0x5e1026  xor         $v0, $v0, $fp
    ctx->pc = 0x22cdecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 30));
    // 0x22cdf0: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x22cdf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x22cdf4: 0x3c11f429  lui         $s1, 0xF429
    ctx->pc = 0x22cdf4u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)62505 << 16));
    // 0x22cdf8: 0x2c3a021  addu        $s4, $s6, $v1
    ctx->pc = 0x22cdf8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 3)));
    // 0x22cdfc: 0x8fa60038  lw          $a2, 0x38($sp)
    ctx->pc = 0x22cdfcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x22ce00: 0xafa400e0  sw          $a0, 0xE0($sp)
    ctx->pc = 0x22ce00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 4));
    // 0x22ce04: 0x36312244  ori         $s1, $s1, 0x2244
    ctx->pc = 0x22ce04u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)8772);
    // 0x22ce08: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x22ce08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x22ce0c: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x22ce0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x22ce10: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x22ce10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x22ce14: 0xa2b821  addu        $s7, $a1, $v0
    ctx->pc = 0x22ce14u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x22ce18: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x22ce18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x22ce1c: 0x1715c0  sll         $v0, $s7, 23
    ctx->pc = 0x22ce1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 23), 23));
    // 0x22ce20: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x22ce20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x22ce24: 0x3c0afc93  lui         $t2, 0xFC93
    ctx->pc = 0x22ce24u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)64659 << 16));
    // 0x22ce28: 0xafa300e4  sw          $v1, 0xE4($sp)
    ctx->pc = 0x22ce28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 228), GPR_U32(ctx, 3));
    // 0x22ce2c: 0x354aa039  ori         $t2, $t2, 0xA039
    ctx->pc = 0x22ce2cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)41017);
    // 0x22ce30: 0x171a42  srl         $v1, $s7, 9
    ctx->pc = 0x22ce30u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 23), 9));
    // 0x22ce34: 0x3c0b8f0c  lui         $t3, 0x8F0C
    ctx->pc = 0x22ce34u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)36620 << 16));
    // 0x22ce38: 0x8c840008  lw          $a0, 0x8($a0)
    ctx->pc = 0x22ce38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x22ce3c: 0x43b825  or          $s7, $v0, $v1
    ctx->pc = 0x22ce3cu;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x22ce40: 0x2f6b821  addu        $s7, $s7, $s6
    ctx->pc = 0x22ce40u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 22)));
    // 0x22ce44: 0x356bcc92  ori         $t3, $t3, 0xCC92
    ctx->pc = 0x22ce44u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)52370);
    // 0x22ce48: 0xafa400e8  sw          $a0, 0xE8($sp)
    ctx->pc = 0x22ce48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 232), GPR_U32(ctx, 4));
    // 0x22ce4c: 0x2f61026  xor         $v0, $s7, $s6
    ctx->pc = 0x22ce4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) ^ GPR_U64(ctx, 22));
    // 0x22ce50: 0x591026  xor         $v0, $v0, $t9
    ctx->pc = 0x22ce50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 25));
    // 0x22ce54: 0x3c0ca301  lui         $t4, 0xA301
    ctx->pc = 0x22ce54u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)41729 << 16));
    // 0x22ce58: 0x8ca5000c  lw          $a1, 0xC($a1)
    ctx->pc = 0x22ce58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x22ce5c: 0x358c4314  ori         $t4, $t4, 0x4314
    ctx->pc = 0x22ce5cu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | (uint64_t)(uint16_t)17172);
    // 0x22ce60: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x22ce60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22ce64: 0xafa500ec  sw          $a1, 0xEC($sp)
    ctx->pc = 0x22ce64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 236), GPR_U32(ctx, 5));
    // 0x22ce68: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x22ce68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x22ce6c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x22ce6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22ce70: 0x8fa6008c  lw          $a2, 0x8C($sp)
    ctx->pc = 0x22ce70u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 140)));
    // 0x22ce74: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x22ce74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x22ce78: 0x1a2f021  addu        $fp, $t5, $v0
    ctx->pc = 0x22ce78u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 2)));
    // 0x22ce7c: 0x2e6a821  addu        $s5, $s7, $a2
    ctx->pc = 0x22ce7cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 6)));
    // 0x22ce80: 0x1e1f02  srl         $v1, $fp, 28
    ctx->pc = 0x22ce80u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 30), 28));
    // 0x22ce84: 0x1e1100  sll         $v0, $fp, 4
    ctx->pc = 0x22ce84u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 30), 4));
    // 0x22ce88: 0x43f025  or          $fp, $v0, $v1
    ctx->pc = 0x22ce88u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x22ce8c: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x22ce8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x22ce90: 0x3d7f021  addu        $fp, $fp, $s7
    ctx->pc = 0x22ce90u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 23)));
    // 0x22ce94: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x22ce94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22ce98: 0x3d71026  xor         $v0, $fp, $s7
    ctx->pc = 0x22ce98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) ^ GPR_U64(ctx, 23));
    // 0x22ce9c: 0x3cf7821  addu        $t7, $fp, $t7
    ctx->pc = 0x22ce9cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 15)));
    // 0x22cea0: 0x561026  xor         $v0, $v0, $s6
    ctx->pc = 0x22cea0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 22));
    // 0x22cea4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x22cea4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x22cea8: 0x262c821  addu        $t9, $s3, $v0
    ctx->pc = 0x22cea8u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x22ceac: 0x191d42  srl         $v1, $t9, 21
    ctx->pc = 0x22ceacu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 25), 21));
    // 0x22ceb0: 0x1912c0  sll         $v0, $t9, 11
    ctx->pc = 0x22ceb0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 25), 11));
    // 0x22ceb4: 0x43c825  or          $t9, $v0, $v1
    ctx->pc = 0x22ceb4u;
    SET_GPR_U64(ctx, 25, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x22ceb8: 0x8fa30090  lw          $v1, 0x90($sp)
    ctx->pc = 0x22ceb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x22cebc: 0x33ec821  addu        $t9, $t9, $fp
    ctx->pc = 0x22cebcu;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 30)));
    // 0x22cec0: 0x33e1026  xor         $v0, $t9, $fp
    ctx->pc = 0x22cec0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 25) ^ GPR_U64(ctx, 30));
    // 0x22cec4: 0x323c021  addu        $t8, $t9, $v1
    ctx->pc = 0x22cec4u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 3)));
    // 0x22cec8: 0x571026  xor         $v0, $v0, $s7
    ctx->pc = 0x22cec8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 23));
    // 0x22cecc: 0x8fa3001c  lw          $v1, 0x1C($sp)
    ctx->pc = 0x22ceccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x22ced0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x22ced0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x22ced4: 0x282b021  addu        $s6, $s4, $v0
    ctx->pc = 0x22ced4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x22ced8: 0x161c02  srl         $v1, $s6, 16
    ctx->pc = 0x22ced8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 22), 16));
    // 0x22cedc: 0x161400  sll         $v0, $s6, 16
    ctx->pc = 0x22cedcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 22), 16));
    // 0x22cee0: 0x43b025  or          $s6, $v0, $v1
    ctx->pc = 0x22cee0u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x22cee4: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x22cee4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x22cee8: 0x2d9b021  addu        $s6, $s6, $t9
    ctx->pc = 0x22cee8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 25)));
    // 0x22ceec: 0x2d91026  xor         $v0, $s6, $t9
    ctx->pc = 0x22ceecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) ^ GPR_U64(ctx, 25));
    // 0x22cef0: 0x2c31821  addu        $v1, $s6, $v1
    ctx->pc = 0x22cef0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 3)));
    // 0x22cef4: 0x5e1026  xor         $v0, $v0, $fp
    ctx->pc = 0x22cef4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 30));
    // 0x22cef8: 0xafa30094  sw          $v1, 0x94($sp)
    ctx->pc = 0x22cef8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 148), GPR_U32(ctx, 3));
    // 0x22cefc: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x22cefcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x22cf00: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x22cf00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x22cf04: 0x2a2b821  addu        $s7, $s5, $v0
    ctx->pc = 0x22cf04u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x22cf08: 0x171a42  srl         $v1, $s7, 9
    ctx->pc = 0x22cf08u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 23), 9));
    // 0x22cf0c: 0x1715c0  sll         $v0, $s7, 23
    ctx->pc = 0x22cf0cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 23), 23));
    // 0x22cf10: 0x43b825  or          $s7, $v0, $v1
    ctx->pc = 0x22cf10u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x22cf14: 0x2f6b821  addu        $s7, $s7, $s6
    ctx->pc = 0x22cf14u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 22)));
    // 0x22cf18: 0x8fa30034  lw          $v1, 0x34($sp)
    ctx->pc = 0x22cf18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x22cf1c: 0x2f61026  xor         $v0, $s7, $s6
    ctx->pc = 0x22cf1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) ^ GPR_U64(ctx, 22));
    // 0x22cf20: 0x2e73821  addu        $a3, $s7, $a3
    ctx->pc = 0x22cf20u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 7)));
    // 0x22cf24: 0x591026  xor         $v0, $v0, $t9
    ctx->pc = 0x22cf24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 25));
    // 0x22cf28: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x22cf28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x22cf2c: 0x1e2f021  addu        $fp, $t7, $v0
    ctx->pc = 0x22cf2cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 2)));
    // 0x22cf30: 0x1e1f02  srl         $v1, $fp, 28
    ctx->pc = 0x22cf30u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 30), 28));
    // 0x22cf34: 0x1e1100  sll         $v0, $fp, 4
    ctx->pc = 0x22cf34u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 30), 4));
    // 0x22cf38: 0x43f025  or          $fp, $v0, $v1
    ctx->pc = 0x22cf38u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x22cf3c: 0x8fa3009c  lw          $v1, 0x9C($sp)
    ctx->pc = 0x22cf3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 156)));
    // 0x22cf40: 0x3d7f021  addu        $fp, $fp, $s7
    ctx->pc = 0x22cf40u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 23)));
    // 0x22cf44: 0x3d71026  xor         $v0, $fp, $s7
    ctx->pc = 0x22cf44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) ^ GPR_U64(ctx, 23));
    // 0x22cf48: 0x3c37821  addu        $t7, $fp, $v1
    ctx->pc = 0x22cf48u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 3)));
    // 0x22cf4c: 0x561026  xor         $v0, $v0, $s6
    ctx->pc = 0x22cf4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 22));
    // 0x22cf50: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x22cf50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22cf54: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x22cf54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x22cf58: 0x302c821  addu        $t9, $t8, $v0
    ctx->pc = 0x22cf58u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 24), GPR_U32(ctx, 2)));
    // 0x22cf5c: 0x191d42  srl         $v1, $t9, 21
    ctx->pc = 0x22cf5cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 25), 21));
    // 0x22cf60: 0x1912c0  sll         $v0, $t9, 11
    ctx->pc = 0x22cf60u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 25), 11));
    // 0x22cf64: 0x43c825  or          $t9, $v0, $v1
    ctx->pc = 0x22cf64u;
    SET_GPR_U64(ctx, 25, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x22cf68: 0x33ec821  addu        $t9, $t9, $fp
    ctx->pc = 0x22cf68u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 30)));
    // 0x22cf6c: 0x8fa3000c  lw          $v1, 0xC($sp)
    ctx->pc = 0x22cf6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x22cf70: 0x33e1026  xor         $v0, $t9, $fp
    ctx->pc = 0x22cf70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 25) ^ GPR_U64(ctx, 30));
    // 0x22cf74: 0x3284021  addu        $t0, $t9, $t0
    ctx->pc = 0x22cf74u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 8)));
    // 0x22cf78: 0x571026  xor         $v0, $v0, $s7
    ctx->pc = 0x22cf78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 23));
    // 0x22cf7c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x22cf7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x22cf80: 0x8fa30094  lw          $v1, 0x94($sp)
    ctx->pc = 0x22cf80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 148)));
    // 0x22cf84: 0x62b021  addu        $s6, $v1, $v0
    ctx->pc = 0x22cf84u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x22cf88: 0x161c02  srl         $v1, $s6, 16
    ctx->pc = 0x22cf88u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 22), 16));
    // 0x22cf8c: 0x161400  sll         $v0, $s6, 16
    ctx->pc = 0x22cf8cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 22), 16));
    // 0x22cf90: 0x43b025  or          $s6, $v0, $v1
    ctx->pc = 0x22cf90u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x22cf94: 0x2d9b021  addu        $s6, $s6, $t9
    ctx->pc = 0x22cf94u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 25)));
    // 0x22cf98: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x22cf98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x22cf9c: 0x2d91026  xor         $v0, $s6, $t9
    ctx->pc = 0x22cf9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) ^ GPR_U64(ctx, 25));
    // 0x22cfa0: 0x2ce7021  addu        $t6, $s6, $t6
    ctx->pc = 0x22cfa0u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 14)));
    // 0x22cfa4: 0x5e1026  xor         $v0, $v0, $fp
    ctx->pc = 0x22cfa4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 30));
    // 0x22cfa8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x22cfa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x22cfac: 0xe2b821  addu        $s7, $a3, $v0
    ctx->pc = 0x22cfacu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x22cfb0: 0x171a42  srl         $v1, $s7, 9
    ctx->pc = 0x22cfb0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 23), 9));
    // 0x22cfb4: 0x1715c0  sll         $v0, $s7, 23
    ctx->pc = 0x22cfb4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 23), 23));
    // 0x22cfb8: 0x43b825  or          $s7, $v0, $v1
    ctx->pc = 0x22cfb8u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x22cfbc: 0x8fa70048  lw          $a3, 0x48($sp)
    ctx->pc = 0x22cfbcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22cfc0: 0x2f6b821  addu        $s7, $s7, $s6
    ctx->pc = 0x22cfc0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 22)));
    // 0x22cfc4: 0x2f61026  xor         $v0, $s7, $s6
    ctx->pc = 0x22cfc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) ^ GPR_U64(ctx, 22));
    // 0x22cfc8: 0x2e94821  addu        $t1, $s7, $t1
    ctx->pc = 0x22cfc8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 9)));
    // 0x22cfcc: 0x591026  xor         $v0, $v0, $t9
    ctx->pc = 0x22cfccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 25));
    // 0x22cfd0: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x22cfd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x22cfd4: 0x1e2f021  addu        $fp, $t7, $v0
    ctx->pc = 0x22cfd4u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 2)));
    // 0x22cfd8: 0x8fa700a4  lw          $a3, 0xA4($sp)
    ctx->pc = 0x22cfd8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
    // 0x22cfdc: 0x1e1f02  srl         $v1, $fp, 28
    ctx->pc = 0x22cfdcu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 30), 28));
    // 0x22cfe0: 0x1e1100  sll         $v0, $fp, 4
    ctx->pc = 0x22cfe0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 30), 4));
    // 0x22cfe4: 0x43f025  or          $fp, $v0, $v1
    ctx->pc = 0x22cfe4u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x22cfe8: 0x3d7f021  addu        $fp, $fp, $s7
    ctx->pc = 0x22cfe8u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 23)));
    // 0x22cfec: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x22cfecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x22cff0: 0x3d71026  xor         $v0, $fp, $s7
    ctx->pc = 0x22cff0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) ^ GPR_U64(ctx, 23));
    // 0x22cff4: 0x3d18821  addu        $s1, $fp, $s1
    ctx->pc = 0x22cff4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 17)));
    // 0x22cff8: 0x561026  xor         $v0, $v0, $s6
    ctx->pc = 0x22cff8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 22));
    // 0x22cffc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x22cffcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x22d000: 0x102c821  addu        $t9, $t0, $v0
    ctx->pc = 0x22d000u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x22d004: 0x191d42  srl         $v1, $t9, 21
    ctx->pc = 0x22d004u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 25), 21));
    // 0x22d008: 0x1912c0  sll         $v0, $t9, 11
    ctx->pc = 0x22d008u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 25), 11));
    // 0x22d00c: 0x43c825  or          $t9, $v0, $v1
    ctx->pc = 0x22d00cu;
    SET_GPR_U64(ctx, 25, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x22d010: 0x8fa8003c  lw          $t0, 0x3C($sp)
    ctx->pc = 0x22d010u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x22d014: 0x33ec821  addu        $t9, $t9, $fp
    ctx->pc = 0x22d014u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 30)));
    // 0x22d018: 0x33e1026  xor         $v0, $t9, $fp
    ctx->pc = 0x22d018u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 25) ^ GPR_U64(ctx, 30));
    // 0x22d01c: 0x3273821  addu        $a3, $t9, $a3
    ctx->pc = 0x22d01cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 7)));
    // 0x22d020: 0x571026  xor         $v0, $v0, $s7
    ctx->pc = 0x22d020u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 23));
    // 0x22d024: 0xafa700a0  sw          $a3, 0xA0($sp)
    ctx->pc = 0x22d024u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 7));
    // 0x22d028: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x22d028u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x22d02c: 0x191827  nor         $v1, $zero, $t9
    ctx->pc = 0x22d02cu;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 25)));
    // 0x22d030: 0x1c2b021  addu        $s6, $t6, $v0
    ctx->pc = 0x22d030u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 2)));
    // 0x22d034: 0x8fa800ac  lw          $t0, 0xAC($sp)
    ctx->pc = 0x22d034u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x22d038: 0x163c02  srl         $a3, $s6, 16
    ctx->pc = 0x22d038u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 22), 16));
    // 0x22d03c: 0x161400  sll         $v0, $s6, 16
    ctx->pc = 0x22d03cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 22), 16));
    // 0x22d040: 0x47b025  or          $s6, $v0, $a3
    ctx->pc = 0x22d040u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x22d044: 0x2d9b021  addu        $s6, $s6, $t9
    ctx->pc = 0x22d044u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 25)));
    // 0x22d048: 0x2c84021  addu        $t0, $s6, $t0
    ctx->pc = 0x22d048u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 8)));
    // 0x22d04c: 0x2d91026  xor         $v0, $s6, $t9
    ctx->pc = 0x22d04cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) ^ GPR_U64(ctx, 25));
    // 0x22d050: 0xafa800a8  sw          $t0, 0xA8($sp)
    ctx->pc = 0x22d050u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 8));
    // 0x22d054: 0x5e1026  xor         $v0, $v0, $fp
    ctx->pc = 0x22d054u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 30));
    // 0x22d058: 0x8fa80044  lw          $t0, 0x44($sp)
    ctx->pc = 0x22d058u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x22d05c: 0x163827  nor         $a3, $zero, $s6
    ctx->pc = 0x22d05cu;
    SET_GPR_U64(ctx, 7, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 22)));
    // 0x22d060: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x22d060u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x22d064: 0x122b821  addu        $s7, $t1, $v0
    ctx->pc = 0x22d064u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x22d068: 0x174242  srl         $t0, $s7, 9
    ctx->pc = 0x22d068u;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 23), 9));
    // 0x22d06c: 0x1715c0  sll         $v0, $s7, 23
    ctx->pc = 0x22d06cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 23), 23));
    // 0x22d070: 0x48b825  or          $s7, $v0, $t0
    ctx->pc = 0x22d070u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x22d074: 0x2f6b821  addu        $s7, $s7, $s6
    ctx->pc = 0x22d074u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 22)));
    // 0x22d078: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x22d078u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22d07c: 0x2e31825  or          $v1, $s7, $v1
    ctx->pc = 0x22d07cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 23) | GPR_U64(ctx, 3));
    // 0x22d080: 0x174027  nor         $t0, $zero, $s7
    ctx->pc = 0x22d080u;
    SET_GPR_U64(ctx, 8, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 23)));
    // 0x22d084: 0x2c31826  xor         $v1, $s6, $v1
    ctx->pc = 0x22d084u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 22) ^ GPR_U64(ctx, 3));
    // 0x22d088: 0x2ea5021  addu        $t2, $s7, $t2
    ctx->pc = 0x22d088u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 10)));
    // 0x22d08c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x22d08cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x22d090: 0x223f021  addu        $fp, $s1, $v1
    ctx->pc = 0x22d090u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x22d094: 0x1e4e82  srl         $t1, $fp, 26
    ctx->pc = 0x22d094u;
    SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 30), 26));
    // 0x22d098: 0x1e1180  sll         $v0, $fp, 6
    ctx->pc = 0x22d098u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 30), 6));
    // 0x22d09c: 0x49f025  or          $fp, $v0, $t1
    ctx->pc = 0x22d09cu;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
    // 0x22d0a0: 0x8fa200b4  lw          $v0, 0xB4($sp)
    ctx->pc = 0x22d0a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
    // 0x22d0a4: 0x3d7f021  addu        $fp, $fp, $s7
    ctx->pc = 0x22d0a4u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 23)));
    // 0x22d0a8: 0x3c73825  or          $a3, $fp, $a3
    ctx->pc = 0x22d0a8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 30) | GPR_U64(ctx, 7));
    // 0x22d0ac: 0x1e1827  nor         $v1, $zero, $fp
    ctx->pc = 0x22d0acu;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 30)));
    // 0x22d0b0: 0x3c21021  addu        $v0, $fp, $v0
    ctx->pc = 0x22d0b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 2)));
    // 0x22d0b4: 0x2e73826  xor         $a3, $s7, $a3
    ctx->pc = 0x22d0b4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 23) ^ GPR_U64(ctx, 7));
    // 0x22d0b8: 0xafa200b0  sw          $v0, 0xB0($sp)
    ctx->pc = 0x22d0b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
    // 0x22d0bc: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x22d0bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x22d0c0: 0xe23821  addu        $a3, $a3, $v0
    ctx->pc = 0x22d0c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x22d0c4: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x22d0c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x22d0c8: 0x47c821  addu        $t9, $v0, $a3
    ctx->pc = 0x22d0c8u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x22d0cc: 0x194d82  srl         $t1, $t9, 22
    ctx->pc = 0x22d0ccu;
    SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 25), 22));
    // 0x22d0d0: 0x191280  sll         $v0, $t9, 10
    ctx->pc = 0x22d0d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 25), 10));
    // 0x22d0d4: 0x49c825  or          $t9, $v0, $t1
    ctx->pc = 0x22d0d4u;
    SET_GPR_U64(ctx, 25, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
    // 0x22d0d8: 0x33ec821  addu        $t9, $t9, $fp
    ctx->pc = 0x22d0d8u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 30)));
    // 0x22d0dc: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x22d0dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x22d0e0: 0x3284025  or          $t0, $t9, $t0
    ctx->pc = 0x22d0e0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 25) | GPR_U64(ctx, 8));
    // 0x22d0e4: 0x193827  nor         $a3, $zero, $t9
    ctx->pc = 0x22d0e4u;
    SET_GPR_U64(ctx, 7, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 25)));
    // 0x22d0e8: 0x3c84026  xor         $t0, $fp, $t0
    ctx->pc = 0x22d0e8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 30) ^ GPR_U64(ctx, 8));
    // 0x22d0ec: 0x32b5821  addu        $t3, $t9, $t3
    ctx->pc = 0x22d0ecu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 11)));
    // 0x22d0f0: 0x1024021  addu        $t0, $t0, $v0
    ctx->pc = 0x22d0f0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x22d0f4: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x22d0f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x22d0f8: 0x48b021  addu        $s6, $v0, $t0
    ctx->pc = 0x22d0f8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x22d0fc: 0x164c42  srl         $t1, $s6, 17
    ctx->pc = 0x22d0fcu;
    SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 22), 17));
    // 0x22d100: 0x1613c0  sll         $v0, $s6, 15
    ctx->pc = 0x22d100u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 22), 15));
    // 0x22d104: 0x49b025  or          $s6, $v0, $t1
    ctx->pc = 0x22d104u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
    // 0x22d108: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x22d108u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x22d10c: 0x2d9b021  addu        $s6, $s6, $t9
    ctx->pc = 0x22d10cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 25)));
    // 0x22d110: 0x2c31825  or          $v1, $s6, $v1
    ctx->pc = 0x22d110u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 22) | GPR_U64(ctx, 3));
    // 0x22d114: 0x164027  nor         $t0, $zero, $s6
    ctx->pc = 0x22d114u;
    SET_GPR_U64(ctx, 8, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 22)));
    // 0x22d118: 0x2c27021  addu        $t6, $s6, $v0
    ctx->pc = 0x22d118u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x22d11c: 0x3231826  xor         $v1, $t9, $v1
    ctx->pc = 0x22d11cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 25) ^ GPR_U64(ctx, 3));
    // 0x22d120: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x22d120u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x22d124: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x22d124u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x22d128: 0x143b821  addu        $s7, $t2, $v1
    ctx->pc = 0x22d128u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 3)));
    // 0x22d12c: 0x174ac2  srl         $t1, $s7, 11
    ctx->pc = 0x22d12cu;
    SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 23), 11));
    // 0x22d130: 0x171540  sll         $v0, $s7, 21
    ctx->pc = 0x22d130u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 23), 21));
    // 0x22d134: 0x49b825  or          $s7, $v0, $t1
    ctx->pc = 0x22d134u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
    // 0x22d138: 0x8fa200bc  lw          $v0, 0xBC($sp)
    ctx->pc = 0x22d138u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
    // 0x22d13c: 0x2f6b821  addu        $s7, $s7, $s6
    ctx->pc = 0x22d13cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 22)));
    // 0x22d140: 0x2e73825  or          $a3, $s7, $a3
    ctx->pc = 0x22d140u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 23) | GPR_U64(ctx, 7));
    // 0x22d144: 0x171827  nor         $v1, $zero, $s7
    ctx->pc = 0x22d144u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 23)));
    // 0x22d148: 0x2e25021  addu        $t2, $s7, $v0
    ctx->pc = 0x22d148u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
    // 0x22d14c: 0x2c73826  xor         $a3, $s6, $a3
    ctx->pc = 0x22d14cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 22) ^ GPR_U64(ctx, 7));
    // 0x22d150: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x22d150u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x22d154: 0xe23821  addu        $a3, $a3, $v0
    ctx->pc = 0x22d154u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x22d158: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x22d158u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x22d15c: 0x47f021  addu        $fp, $v0, $a3
    ctx->pc = 0x22d15cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x22d160: 0x1e4e82  srl         $t1, $fp, 26
    ctx->pc = 0x22d160u;
    SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 30), 26));
    // 0x22d164: 0x1e1180  sll         $v0, $fp, 6
    ctx->pc = 0x22d164u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 30), 6));
    // 0x22d168: 0x49f025  or          $fp, $v0, $t1
    ctx->pc = 0x22d168u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
    // 0x22d16c: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x22d16cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x22d170: 0x3d7f021  addu        $fp, $fp, $s7
    ctx->pc = 0x22d170u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 23)));
    // 0x22d174: 0x3c84025  or          $t0, $fp, $t0
    ctx->pc = 0x22d174u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 30) | GPR_U64(ctx, 8));
    // 0x22d178: 0x1e3827  nor         $a3, $zero, $fp
    ctx->pc = 0x22d178u;
    SET_GPR_U64(ctx, 7, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 30)));
    // 0x22d17c: 0x3c27821  addu        $t7, $fp, $v0
    ctx->pc = 0x22d17cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 2)));
    // 0x22d180: 0x2e84026  xor         $t0, $s7, $t0
    ctx->pc = 0x22d180u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 23) ^ GPR_U64(ctx, 8));
    // 0x22d184: 0x8fa2000c  lw          $v0, 0xC($sp)
    ctx->pc = 0x22d184u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x22d188: 0x1024021  addu        $t0, $t0, $v0
    ctx->pc = 0x22d188u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x22d18c: 0x168c821  addu        $t9, $t3, $t0
    ctx->pc = 0x22d18cu;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 8)));
    // 0x22d190: 0x194d82  srl         $t1, $t9, 22
    ctx->pc = 0x22d190u;
    SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 25), 22));
    // 0x22d194: 0x191280  sll         $v0, $t9, 10
    ctx->pc = 0x22d194u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 25), 10));
    // 0x22d198: 0x49c825  or          $t9, $v0, $t1
    ctx->pc = 0x22d198u;
    SET_GPR_U64(ctx, 25, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
    // 0x22d19c: 0x8fa200c4  lw          $v0, 0xC4($sp)
    ctx->pc = 0x22d19cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
    // 0x22d1a0: 0x33ec821  addu        $t9, $t9, $fp
    ctx->pc = 0x22d1a0u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 30)));
    // 0x22d1a4: 0x3231825  or          $v1, $t9, $v1
    ctx->pc = 0x22d1a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 25) | GPR_U64(ctx, 3));
    // 0x22d1a8: 0x194027  nor         $t0, $zero, $t9
    ctx->pc = 0x22d1a8u;
    SET_GPR_U64(ctx, 8, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 25)));
    // 0x22d1ac: 0x3225821  addu        $t3, $t9, $v0
    ctx->pc = 0x22d1acu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 2)));
    // 0x22d1b0: 0x3c31826  xor         $v1, $fp, $v1
    ctx->pc = 0x22d1b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 30) ^ GPR_U64(ctx, 3));
    // 0x22d1b4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x22d1b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x22d1b8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x22d1b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x22d1bc: 0x1c3b021  addu        $s6, $t6, $v1
    ctx->pc = 0x22d1bcu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 3)));
    // 0x22d1c0: 0x164c42  srl         $t1, $s6, 17
    ctx->pc = 0x22d1c0u;
    SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 22), 17));
    // 0x22d1c4: 0x1613c0  sll         $v0, $s6, 15
    ctx->pc = 0x22d1c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 22), 15));
    // 0x22d1c8: 0x49b025  or          $s6, $v0, $t1
    ctx->pc = 0x22d1c8u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
    // 0x22d1cc: 0x2d9b021  addu        $s6, $s6, $t9
    ctx->pc = 0x22d1ccu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 25)));
    // 0x22d1d0: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x22d1d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x22d1d4: 0x2c73825  or          $a3, $s6, $a3
    ctx->pc = 0x22d1d4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 22) | GPR_U64(ctx, 7));
    // 0x22d1d8: 0x161827  nor         $v1, $zero, $s6
    ctx->pc = 0x22d1d8u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 22)));
    // 0x22d1dc: 0x3273826  xor         $a3, $t9, $a3
    ctx->pc = 0x22d1dcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 25) ^ GPR_U64(ctx, 7));
    // 0x22d1e0: 0x2cc6021  addu        $t4, $s6, $t4
    ctx->pc = 0x22d1e0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 12)));
    // 0x22d1e4: 0xe23821  addu        $a3, $a3, $v0
    ctx->pc = 0x22d1e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x22d1e8: 0x147b821  addu        $s7, $t2, $a3
    ctx->pc = 0x22d1e8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 7)));
    // 0x22d1ec: 0x174ac2  srl         $t1, $s7, 11
    ctx->pc = 0x22d1ecu;
    SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 23), 11));
    // 0x22d1f0: 0x171540  sll         $v0, $s7, 21
    ctx->pc = 0x22d1f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 23), 21));
    // 0x22d1f4: 0x49b825  or          $s7, $v0, $t1
    ctx->pc = 0x22d1f4u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
    // 0x22d1f8: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x22d1f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x22d1fc: 0x2f6b821  addu        $s7, $s7, $s6
    ctx->pc = 0x22d1fcu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 22)));
    // 0x22d200: 0x2e84025  or          $t0, $s7, $t0
    ctx->pc = 0x22d200u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 23) | GPR_U64(ctx, 8));
    // 0x22d204: 0x173827  nor         $a3, $zero, $s7
    ctx->pc = 0x22d204u;
    SET_GPR_U64(ctx, 7, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 23)));
    // 0x22d208: 0x2e25021  addu        $t2, $s7, $v0
    ctx->pc = 0x22d208u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
    // 0x22d20c: 0x2c84026  xor         $t0, $s6, $t0
    ctx->pc = 0x22d20cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 22) ^ GPR_U64(ctx, 8));
    // 0x22d210: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x22d210u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22d214: 0x1024021  addu        $t0, $t0, $v0
    ctx->pc = 0x22d214u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x22d218: 0x1e8f021  addu        $fp, $t7, $t0
    ctx->pc = 0x22d218u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 8)));
    // 0x22d21c: 0x1e4e82  srl         $t1, $fp, 26
    ctx->pc = 0x22d21cu;
    SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 30), 26));
    // 0x22d220: 0x1e1180  sll         $v0, $fp, 6
    ctx->pc = 0x22d220u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 30), 6));
    // 0x22d224: 0x49f025  or          $fp, $v0, $t1
    ctx->pc = 0x22d224u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
    // 0x22d228: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x22d228u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x22d22c: 0x3d7f021  addu        $fp, $fp, $s7
    ctx->pc = 0x22d22cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 23)));
    // 0x22d230: 0x3c31825  or          $v1, $fp, $v1
    ctx->pc = 0x22d230u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 30) | GPR_U64(ctx, 3));
    // 0x22d234: 0x1e4027  nor         $t0, $zero, $fp
    ctx->pc = 0x22d234u;
    SET_GPR_U64(ctx, 8, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 30)));
    // 0x22d238: 0x3c21021  addu        $v0, $fp, $v0
    ctx->pc = 0x22d238u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 2)));
    // 0x22d23c: 0x2e31826  xor         $v1, $s7, $v1
    ctx->pc = 0x22d23cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 23) ^ GPR_U64(ctx, 3));
    // 0x22d240: 0xafa200cc  sw          $v0, 0xCC($sp)
    ctx->pc = 0x22d240u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 2));
    // 0x22d244: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x22d244u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x22d248: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x22d248u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x22d24c: 0x163c821  addu        $t9, $t3, $v1
    ctx->pc = 0x22d24cu;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 3)));
    // 0x22d250: 0x194d82  srl         $t1, $t9, 22
    ctx->pc = 0x22d250u;
    SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 25), 22));
    // 0x22d254: 0x191280  sll         $v0, $t9, 10
    ctx->pc = 0x22d254u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 25), 10));
    // 0x22d258: 0x49c825  or          $t9, $v0, $t1
    ctx->pc = 0x22d258u;
    SET_GPR_U64(ctx, 25, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
    // 0x22d25c: 0x8fa200d4  lw          $v0, 0xD4($sp)
    ctx->pc = 0x22d25cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
    // 0x22d260: 0x33ec821  addu        $t9, $t9, $fp
    ctx->pc = 0x22d260u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 30)));
    // 0x22d264: 0x3273825  or          $a3, $t9, $a3
    ctx->pc = 0x22d264u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 25) | GPR_U64(ctx, 7));
    // 0x22d268: 0x191827  nor         $v1, $zero, $t9
    ctx->pc = 0x22d268u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 25)));
    // 0x22d26c: 0x3225821  addu        $t3, $t9, $v0
    ctx->pc = 0x22d26cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 2)));
    // 0x22d270: 0x3c73826  xor         $a3, $fp, $a3
    ctx->pc = 0x22d270u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 30) ^ GPR_U64(ctx, 7));
    // 0x22d274: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x22d274u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x22d278: 0xe23821  addu        $a3, $a3, $v0
    ctx->pc = 0x22d278u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x22d27c: 0x187b021  addu        $s6, $t4, $a3
    ctx->pc = 0x22d27cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 7)));
    // 0x22d280: 0x164c42  srl         $t1, $s6, 17
    ctx->pc = 0x22d280u;
    SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 22), 17));
    // 0x22d284: 0x1613c0  sll         $v0, $s6, 15
    ctx->pc = 0x22d284u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 22), 15));
    // 0x22d288: 0x49b025  or          $s6, $v0, $t1
    ctx->pc = 0x22d288u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
    // 0x22d28c: 0x8fa700d8  lw          $a3, 0xD8($sp)
    ctx->pc = 0x22d28cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x22d290: 0x2d9b021  addu        $s6, $s6, $t9
    ctx->pc = 0x22d290u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 25)));
    // 0x22d294: 0x8fa20034  lw          $v0, 0x34($sp)
    ctx->pc = 0x22d294u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x22d298: 0x2c84025  or          $t0, $s6, $t0
    ctx->pc = 0x22d298u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 22) | GPR_U64(ctx, 8));
    // 0x22d29c: 0x2c76021  addu        $t4, $s6, $a3
    ctx->pc = 0x22d29cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 7)));
    // 0x22d2a0: 0x3284026  xor         $t0, $t9, $t0
    ctx->pc = 0x22d2a0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 25) ^ GPR_U64(ctx, 8));
    // 0x22d2a4: 0x164827  nor         $t1, $zero, $s6
    ctx->pc = 0x22d2a4u;
    SET_GPR_U64(ctx, 9, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 22)));
    // 0x22d2a8: 0x1024021  addu        $t0, $t0, $v0
    ctx->pc = 0x22d2a8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x22d2ac: 0x148b821  addu        $s7, $t2, $t0
    ctx->pc = 0x22d2acu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 8)));
    // 0x22d2b0: 0x173ac2  srl         $a3, $s7, 11
    ctx->pc = 0x22d2b0u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 23), 11));
    // 0x22d2b4: 0x171540  sll         $v0, $s7, 21
    ctx->pc = 0x22d2b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 23), 21));
    // 0x22d2b8: 0x47b825  or          $s7, $v0, $a3
    ctx->pc = 0x22d2b8u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x22d2bc: 0x8fa700dc  lw          $a3, 0xDC($sp)
    ctx->pc = 0x22d2bcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x22d2c0: 0x2f6b821  addu        $s7, $s7, $s6
    ctx->pc = 0x22d2c0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 22)));
    // 0x22d2c4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x22d2c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22d2c8: 0x2e31825  or          $v1, $s7, $v1
    ctx->pc = 0x22d2c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 23) | GPR_U64(ctx, 3));
    // 0x22d2cc: 0x2e75021  addu        $t2, $s7, $a3
    ctx->pc = 0x22d2ccu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 7)));
    // 0x22d2d0: 0x2c31826  xor         $v1, $s6, $v1
    ctx->pc = 0x22d2d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 22) ^ GPR_U64(ctx, 3));
    // 0x22d2d4: 0x8fa700cc  lw          $a3, 0xCC($sp)
    ctx->pc = 0x22d2d4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
    // 0x22d2d8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x22d2d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x22d2dc: 0x174027  nor         $t0, $zero, $s7
    ctx->pc = 0x22d2dcu;
    SET_GPR_U64(ctx, 8, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 23)));
    // 0x22d2e0: 0xe3f021  addu        $fp, $a3, $v1
    ctx->pc = 0x22d2e0u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x22d2e4: 0x1e3e82  srl         $a3, $fp, 26
    ctx->pc = 0x22d2e4u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 30), 26));
    // 0x22d2e8: 0x1e1180  sll         $v0, $fp, 6
    ctx->pc = 0x22d2e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 30), 6));
    // 0x22d2ec: 0x8fa300e0  lw          $v1, 0xE0($sp)
    ctx->pc = 0x22d2ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x22d2f0: 0x47f025  or          $fp, $v0, $a3
    ctx->pc = 0x22d2f0u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x22d2f4: 0x3d7f021  addu        $fp, $fp, $s7
    ctx->pc = 0x22d2f4u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 23)));
    // 0x22d2f8: 0x7e1021  addu        $v0, $v1, $fp
    ctx->pc = 0x22d2f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 30)));
    // 0x22d2fc: 0x3c94825  or          $t1, $fp, $t1
    ctx->pc = 0x22d2fcu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 30) | GPR_U64(ctx, 9));
    // 0x22d300: 0x8fa3002c  lw          $v1, 0x2C($sp)
    ctx->pc = 0x22d300u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x22d304: 0x2e94826  xor         $t1, $s7, $t1
    ctx->pc = 0x22d304u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 23) ^ GPR_U64(ctx, 9));
    // 0x22d308: 0x1e3827  nor         $a3, $zero, $fp
    ctx->pc = 0x22d308u;
    SET_GPR_U64(ctx, 7, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 30)));
    // 0x22d30c: 0x1234821  addu        $t1, $t1, $v1
    ctx->pc = 0x22d30cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
    // 0x22d310: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x22d310u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x22d314: 0x169c821  addu        $t9, $t3, $t1
    ctx->pc = 0x22d314u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 9)));
    // 0x22d318: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x22d318u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x22d31c: 0x191d82  srl         $v1, $t9, 22
    ctx->pc = 0x22d31cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 25), 22));
    // 0x22d320: 0x191280  sll         $v0, $t9, 10
    ctx->pc = 0x22d320u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 25), 10));
    // 0x22d324: 0x43c825  or          $t9, $v0, $v1
    ctx->pc = 0x22d324u;
    SET_GPR_U64(ctx, 25, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x22d328: 0x8fa200ec  lw          $v0, 0xEC($sp)
    ctx->pc = 0x22d328u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
    // 0x22d32c: 0x33ec821  addu        $t9, $t9, $fp
    ctx->pc = 0x22d32cu;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 30)));
    // 0x22d330: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x22d330u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x22d334: 0x3284025  or          $t0, $t9, $t0
    ctx->pc = 0x22d334u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 25) | GPR_U64(ctx, 8));
    // 0x22d338: 0x591021  addu        $v0, $v0, $t9
    ctx->pc = 0x22d338u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 25)));
    // 0x22d33c: 0x3c84026  xor         $t0, $fp, $t0
    ctx->pc = 0x22d33cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 30) ^ GPR_U64(ctx, 8));
    // 0x22d340: 0xafa200f0  sw          $v0, 0xF0($sp)
    ctx->pc = 0x22d340u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 2));
    // 0x22d344: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x22d344u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
    // 0x22d348: 0x8fa20044  lw          $v0, 0x44($sp)
    ctx->pc = 0x22d348u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x22d34c: 0x1024021  addu        $t0, $t0, $v0
    ctx->pc = 0x22d34cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x22d350: 0x188b021  addu        $s6, $t4, $t0
    ctx->pc = 0x22d350u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 8)));
    // 0x22d354: 0x161c42  srl         $v1, $s6, 17
    ctx->pc = 0x22d354u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 22), 17));
    // 0x22d358: 0x1613c0  sll         $v0, $s6, 15
    ctx->pc = 0x22d358u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 22), 15));
    // 0x22d35c: 0x43b025  or          $s6, $v0, $v1
    ctx->pc = 0x22d35cu;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x22d360: 0x8fa80040  lw          $t0, 0x40($sp)
    ctx->pc = 0x22d360u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x22d364: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x22d364u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x22d368: 0x2d9b021  addu        $s6, $s6, $t9
    ctx->pc = 0x22d368u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 25)));
    // 0x22d36c: 0x2c73825  or          $a3, $s6, $a3
    ctx->pc = 0x22d36cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 22) | GPR_U64(ctx, 7));
    // 0x22d370: 0x761021  addu        $v0, $v1, $s6
    ctx->pc = 0x22d370u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 22)));
    // 0x22d374: 0x3273826  xor         $a3, $t9, $a3
    ctx->pc = 0x22d374u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 25) ^ GPR_U64(ctx, 7));
    // 0x22d378: 0xad020008  sw          $v0, 0x8($t0)
    ctx->pc = 0x22d378u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 2));
    // 0x22d37c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x22d37cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22d380: 0xe23821  addu        $a3, $a3, $v0
    ctx->pc = 0x22d380u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x22d384: 0x147b821  addu        $s7, $t2, $a3
    ctx->pc = 0x22d384u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 7)));
    // 0x22d388: 0x171ac2  srl         $v1, $s7, 11
    ctx->pc = 0x22d388u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 23), 11));
    // 0x22d38c: 0x171540  sll         $v0, $s7, 21
    ctx->pc = 0x22d38cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 23), 21));
    // 0x22d390: 0x43b825  or          $s7, $v0, $v1
    ctx->pc = 0x22d390u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x22d394: 0x8fa300e4  lw          $v1, 0xE4($sp)
    ctx->pc = 0x22d394u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 228)));
    // 0x22d398: 0x2f6b821  addu        $s7, $s7, $s6
    ctx->pc = 0x22d398u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 22)));
    // 0x22d39c: 0x771021  addu        $v0, $v1, $s7
    ctx->pc = 0x22d39cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 23)));
    // 0x22d3a0: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x22D3A0u;
    SET_GPR_U32(ctx, 31, 0x22D3A8u);
    ctx->pc = 0x22D3A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22D3A0u;
    // 0x22d3a4: 0xad020004  sw          $v0, 0x4($t0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1272D8u, 0x22D3A0u, 0x22D3A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22D3A8u;
label_22d3a8:
    // 0x22d3a8: 0xdfbf01a0  ld          $ra, 0x1A0($sp)
    ctx->pc = 0x22d3a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x22d3ac: 0xdfbe0190  ld          $fp, 0x190($sp)
    ctx->pc = 0x22d3acu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x22d3b0: 0xdfb70180  ld          $s7, 0x180($sp)
    ctx->pc = 0x22d3b0u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x22d3b4: 0xdfb60170  ld          $s6, 0x170($sp)
    ctx->pc = 0x22d3b4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x22d3b8: 0xdfb50160  ld          $s5, 0x160($sp)
    ctx->pc = 0x22d3b8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x22d3bc: 0xdfb40150  ld          $s4, 0x150($sp)
    ctx->pc = 0x22d3bcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x22d3c0: 0xdfb30140  ld          $s3, 0x140($sp)
    ctx->pc = 0x22d3c0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x22d3c4: 0xdfb20130  ld          $s2, 0x130($sp)
    ctx->pc = 0x22d3c4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x22d3c8: 0xdfb10120  ld          $s1, 0x120($sp)
    ctx->pc = 0x22d3c8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x22d3cc: 0xdfb00110  ld          $s0, 0x110($sp)
    ctx->pc = 0x22d3ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x22d3d0: 0x3e00008  jr          $ra
    ctx->pc = 0x22D3D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22D3D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D3D0u;
        // 0x22d3d4: 0x27bd01b0  addiu       $sp, $sp, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22D3D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22D3D8u;
    // 0x22d3d8: 0x0  nop
    ctx->pc = 0x22d3d8u;
    // NOP
    // 0x22d3dc: 0x0  nop
    ctx->pc = 0x22d3dcu;
    // NOP
}
