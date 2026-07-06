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

// Function: sub_001D5820
// Address: 0x1d5820 - 0x1d5b48
void sub_001D5820_0x1d5820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D5820_0x1d5820");
#endif

    switch (ctx->pc) {
        case 0x1d5a0cu: goto label_1d5a0c;
        case 0x1d5a3cu: goto label_1d5a3c;
        case 0x1d5a50u: goto label_1d5a50;
        case 0x1d5ad0u: goto label_1d5ad0;
        case 0x1d5ad8u: goto label_1d5ad8;
        case 0x1d5ae8u: goto label_1d5ae8;
        case 0x1d5b20u: goto label_1d5b20;
        default: break;
    }

    ctx->pc = 0x1d5820u;

    // 0x1d5820: 0x3c02001d  lui         $v0, 0x1D
    ctx->pc = 0x1d5820u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)29 << 16));
    // 0x1d5824: 0x3c180039  lui         $t8, 0x39
    ctx->pc = 0x1d5824u;
    SET_GPR_S32(ctx, 24, (int32_t)((uint32_t)57 << 16));
    // 0x1d5828: 0x244259d8  addiu       $v0, $v0, 0x59D8
    ctx->pc = 0x1d5828u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23000));
    // 0x1d582c: 0x3c190039  lui         $t9, 0x39
    ctx->pc = 0x1d582cu;
    SET_GPR_S32(ctx, 25, (int32_t)((uint32_t)57 << 16));
    // 0x1d5830: 0xaf02e63c  sw          $v0, -0x19C4($t8)
    ctx->pc = 0x1d5830u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 4294960700), GPR_U32(ctx, 2));
    // 0x1d5834: 0x3c02001d  lui         $v0, 0x1D
    ctx->pc = 0x1d5834u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)29 << 16));
    // 0x1d5838: 0x244259e8  addiu       $v0, $v0, 0x59E8
    ctx->pc = 0x1d5838u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23016));
    // 0x1d583c: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1d583cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1d5840: 0xaf22e640  sw          $v0, -0x19C0($t9)
    ctx->pc = 0x1d5840u;
    WRITE32(ADD32(GPR_U32(ctx, 25), 4294960704), GPR_U32(ctx, 2));
    // 0x1d5844: 0x3c02001d  lui         $v0, 0x1D
    ctx->pc = 0x1d5844u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)29 << 16));
    // 0x1d5848: 0xffbe0040  sd          $fp, 0x40($sp)
    ctx->pc = 0x1d5848u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 30));
    // 0x1d584c: 0x3c1e0039  lui         $fp, 0x39
    ctx->pc = 0x1d584cu;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)57 << 16));
    // 0x1d5850: 0x24425a98  addiu       $v0, $v0, 0x5A98
    ctx->pc = 0x1d5850u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23192));
    // 0x1d5854: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d5854u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d5858: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1d5858u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1d585c: 0x3c110039  lui         $s1, 0x39
    ctx->pc = 0x1d585cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)57 << 16));
    // 0x1d5860: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1d5860u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1d5864: 0x3c120039  lui         $s2, 0x39
    ctx->pc = 0x1d5864u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)57 << 16));
    // 0x1d5868: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1d5868u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1d586c: 0x3c130039  lui         $s3, 0x39
    ctx->pc = 0x1d586cu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)57 << 16));
    // 0x1d5870: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1d5870u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1d5874: 0x3c140039  lui         $s4, 0x39
    ctx->pc = 0x1d5874u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)57 << 16));
    // 0x1d5878: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x1d5878u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x1d587c: 0x3c150039  lui         $s5, 0x39
    ctx->pc = 0x1d587cu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)57 << 16));
    // 0x1d5880: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x1d5880u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x1d5884: 0x3c160039  lui         $s6, 0x39
    ctx->pc = 0x1d5884u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)57 << 16));
    // 0x1d5888: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x1d5888u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x1d588c: 0x24170001  addiu       $s7, $zero, 0x1
    ctx->pc = 0x1d588cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d5890: 0xafc2e644  sw          $v0, -0x19BC($fp)
    ctx->pc = 0x1d5890u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4294960708), GPR_U32(ctx, 2));
    // 0x1d5894: 0x3c02001d  lui         $v0, 0x1D
    ctx->pc = 0x1d5894u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)29 << 16));
    // 0x1d5898: 0x24425c98  addiu       $v0, $v0, 0x5C98
    ctx->pc = 0x1d5898u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23704));
    // 0x1d589c: 0x3c03001d  lui         $v1, 0x1D
    ctx->pc = 0x1d589cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)29 << 16));
    // 0x1d58a0: 0xaec2e648  sw          $v0, -0x19B8($s6)
    ctx->pc = 0x1d58a0u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 4294960712), GPR_U32(ctx, 2));
    // 0x1d58a4: 0x3c02001d  lui         $v0, 0x1D
    ctx->pc = 0x1d58a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)29 << 16));
    // 0x1d58a8: 0x24425ca0  addiu       $v0, $v0, 0x5CA0
    ctx->pc = 0x1d58a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23712));
    // 0x1d58ac: 0x3c100039  lui         $s0, 0x39
    ctx->pc = 0x1d58acu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)57 << 16));
    // 0x1d58b0: 0xaea2e64c  sw          $v0, -0x19B4($s5)
    ctx->pc = 0x1d58b0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4294960716), GPR_U32(ctx, 2));
    // 0x1d58b4: 0x3c02001d  lui         $v0, 0x1D
    ctx->pc = 0x1d58b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)29 << 16));
    // 0x1d58b8: 0x24425e00  addiu       $v0, $v0, 0x5E00
    ctx->pc = 0x1d58b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24064));
    // 0x1d58bc: 0x3c0f0039  lui         $t7, 0x39
    ctx->pc = 0x1d58bcu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)57 << 16));
    // 0x1d58c0: 0xae82e650  sw          $v0, -0x19B0($s4)
    ctx->pc = 0x1d58c0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4294960720), GPR_U32(ctx, 2));
    // 0x1d58c4: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x1d58c4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d58c8: 0x24425e50  addiu       $v0, $v0, 0x5E50
    ctx->pc = 0x1d58c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24144));
    // 0x1d58cc: 0x3c0e0039  lui         $t6, 0x39
    ctx->pc = 0x1d58ccu;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)57 << 16));
    // 0x1d58d0: 0xae62e654  sw          $v0, -0x19AC($s3)
    ctx->pc = 0x1d58d0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4294960724), GPR_U32(ctx, 2));
    // 0x1d58d4: 0x3c02001d  lui         $v0, 0x1D
    ctx->pc = 0x1d58d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)29 << 16));
    // 0x1d58d8: 0x24425f40  addiu       $v0, $v0, 0x5F40
    ctx->pc = 0x1d58d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24384));
    // 0x1d58dc: 0x3c0d0039  lui         $t5, 0x39
    ctx->pc = 0x1d58dcu;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)57 << 16));
    // 0x1d58e0: 0xae42e658  sw          $v0, -0x19A8($s2)
    ctx->pc = 0x1d58e0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4294960728), GPR_U32(ctx, 2));
    // 0x1d58e4: 0x3c02001d  lui         $v0, 0x1D
    ctx->pc = 0x1d58e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)29 << 16));
    // 0x1d58e8: 0x244203b0  addiu       $v0, $v0, 0x3B0
    ctx->pc = 0x1d58e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 944));
    // 0x1d58ec: 0x3c0c0039  lui         $t4, 0x39
    ctx->pc = 0x1d58ecu;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)57 << 16));
    // 0x1d58f0: 0xae22e65c  sw          $v0, -0x19A4($s1)
    ctx->pc = 0x1d58f0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294960732), GPR_U32(ctx, 2));
    // 0x1d58f4: 0x3c02001d  lui         $v0, 0x1D
    ctx->pc = 0x1d58f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)29 << 16));
    // 0x1d58f8: 0x24420420  addiu       $v0, $v0, 0x420
    ctx->pc = 0x1d58f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1056));
    // 0x1d58fc: 0x3c0b0039  lui         $t3, 0x39
    ctx->pc = 0x1d58fcu;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)57 << 16));
    // 0x1d5900: 0xae02e660  sw          $v0, -0x19A0($s0)
    ctx->pc = 0x1d5900u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294960736), GPR_U32(ctx, 2));
    // 0x1d5904: 0x3c02001d  lui         $v0, 0x1D
    ctx->pc = 0x1d5904u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)29 << 16));
    // 0x1d5908: 0x244205e0  addiu       $v0, $v0, 0x5E0
    ctx->pc = 0x1d5908u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1504));
    // 0x1d590c: 0x3c0a0039  lui         $t2, 0x39
    ctx->pc = 0x1d590cu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)57 << 16));
    // 0x1d5910: 0xade2e664  sw          $v0, -0x199C($t7)
    ctx->pc = 0x1d5910u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 4294960740), GPR_U32(ctx, 2));
    // 0x1d5914: 0x3c02001d  lui         $v0, 0x1D
    ctx->pc = 0x1d5914u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)29 << 16));
    // 0x1d5918: 0x24420528  addiu       $v0, $v0, 0x528
    ctx->pc = 0x1d5918u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1320));
    // 0x1d591c: 0x3c090039  lui         $t1, 0x39
    ctx->pc = 0x1d591cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)57 << 16));
    // 0x1d5920: 0xadc2e668  sw          $v0, -0x1998($t6)
    ctx->pc = 0x1d5920u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 4294960744), GPR_U32(ctx, 2));
    // 0x1d5924: 0x3c02001d  lui         $v0, 0x1D
    ctx->pc = 0x1d5924u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)29 << 16));
    // 0x1d5928: 0x24420958  addiu       $v0, $v0, 0x958
    ctx->pc = 0x1d5928u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2392));
    // 0x1d592c: 0x3c080039  lui         $t0, 0x39
    ctx->pc = 0x1d592cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)57 << 16));
    // 0x1d5930: 0xada2e66c  sw          $v0, -0x1994($t5)
    ctx->pc = 0x1d5930u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 4294960748), GPR_U32(ctx, 2));
    // 0x1d5934: 0x3c02001d  lui         $v0, 0x1D
    ctx->pc = 0x1d5934u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)29 << 16));
    // 0x1d5938: 0x24420980  addiu       $v0, $v0, 0x980
    ctx->pc = 0x1d5938u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2432));
    // 0x1d593c: 0x3c070039  lui         $a3, 0x39
    ctx->pc = 0x1d593cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)57 << 16));
    // 0x1d5940: 0xad82e670  sw          $v0, -0x1990($t4)
    ctx->pc = 0x1d5940u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 4294960752), GPR_U32(ctx, 2));
    // 0x1d5944: 0x3c02001d  lui         $v0, 0x1D
    ctx->pc = 0x1d5944u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)29 << 16));
    // 0x1d5948: 0x24420990  addiu       $v0, $v0, 0x990
    ctx->pc = 0x1d5948u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2448));
    // 0x1d594c: 0x3c060039  lui         $a2, 0x39
    ctx->pc = 0x1d594cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)57 << 16));
    // 0x1d5950: 0xad62e674  sw          $v0, -0x198C($t3)
    ctx->pc = 0x1d5950u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 4294960756), GPR_U32(ctx, 2));
    // 0x1d5954: 0x3c02001d  lui         $v0, 0x1D
    ctx->pc = 0x1d5954u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)29 << 16));
    // 0x1d5958: 0x244209b8  addiu       $v0, $v0, 0x9B8
    ctx->pc = 0x1d5958u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2488));
    // 0x1d595c: 0x3c040039  lui         $a0, 0x39
    ctx->pc = 0x1d595cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)57 << 16));
    // 0x1d5960: 0xad42e678  sw          $v0, -0x1988($t2)
    ctx->pc = 0x1d5960u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 4294960760), GPR_U32(ctx, 2));
    // 0x1d5964: 0x3c02001d  lui         $v0, 0x1D
    ctx->pc = 0x1d5964u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)29 << 16));
    // 0x1d5968: 0x24420638  addiu       $v0, $v0, 0x638
    ctx->pc = 0x1d5968u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1592));
    // 0x1d596c: 0xac97e638  sw          $s7, -0x19C8($a0)
    ctx->pc = 0x1d596cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294960696), GPR_U32(ctx, 23));
    // 0x1d5970: 0xad22e67c  sw          $v0, -0x1984($t1)
    ctx->pc = 0x1d5970u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4294960764), GPR_U32(ctx, 2));
    // 0x1d5974: 0x3c02001d  lui         $v0, 0x1D
    ctx->pc = 0x1d5974u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)29 << 16));
    // 0x1d5978: 0x24420738  addiu       $v0, $v0, 0x738
    ctx->pc = 0x1d5978u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1848));
    // 0x1d597c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d597cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d5980: 0xad02e680  sw          $v0, -0x1980($t0)
    ctx->pc = 0x1d5980u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4294960768), GPR_U32(ctx, 2));
    // 0x1d5984: 0x3c02001d  lui         $v0, 0x1D
    ctx->pc = 0x1d5984u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)29 << 16));
    // 0x1d5988: 0x24420798  addiu       $v0, $v0, 0x798
    ctx->pc = 0x1d5988u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1944));
    // 0x1d598c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d598cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d5990: 0xace2e684  sw          $v0, -0x197C($a3)
    ctx->pc = 0x1d5990u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4294960772), GPR_U32(ctx, 2));
    // 0x1d5994: 0x3c02001d  lui         $v0, 0x1D
    ctx->pc = 0x1d5994u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)29 << 16));
    // 0x1d5998: 0x24420828  addiu       $v0, $v0, 0x828
    ctx->pc = 0x1d5998u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2088));
    // 0x1d599c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1d599cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d59a0: 0xacc2e688  sw          $v0, -0x1978($a2)
    ctx->pc = 0x1d59a0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4294960776), GPR_U32(ctx, 2));
    // 0x1d59a4: 0x3c02001d  lui         $v0, 0x1D
    ctx->pc = 0x1d59a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)29 << 16));
    // 0x1d59a8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1d59a8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1d59ac: 0x3c050039  lui         $a1, 0x39
    ctx->pc = 0x1d59acu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)57 << 16));
    // 0x1d59b0: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1d59b0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d59b4: 0x244205e8  addiu       $v0, $v0, 0x5E8
    ctx->pc = 0x1d59b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1512));
    // 0x1d59b8: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1d59b8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1d59bc: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x1d59bcu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d59c0: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x1d59c0u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d59c4: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x1d59c4u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1d59c8: 0xaca2e68c  sw          $v0, -0x1974($a1)
    ctx->pc = 0x1d59c8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294960780), GPR_U32(ctx, 2));
    // 0x1d59cc: 0x3e00008  jr          $ra
    ctx->pc = 0x1D59CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D59D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D59CCu;
        // 0x1d59d0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D59CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D59D4u;
    // 0x1d59d4: 0x0  nop
    ctx->pc = 0x1d59d4u;
    // NOP
    // 0x1d59d8: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x1d59d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x1d59dc: 0x3e00008  jr          $ra
    ctx->pc = 0x1D59DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D59E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D59DCu;
        // 0x1d59e0: 0x2442c128  addiu       $v0, $v0, -0x3ED8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D59DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D59E4u;
    // 0x1d59e4: 0x0  nop
    ctx->pc = 0x1d59e4u;
    // NOP
    // 0x1d59e8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d59e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d59ec: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x1d59ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1d59f0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d59f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d59f4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1d59f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1d59f8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1d59f8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d59fc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1d59fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1d5a00: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1d5a00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1d5a04: 0xc076326  jal         func_1D8C98
    ctx->pc = 0x1D5A04u;
    SET_GPR_U32(ctx, 31, 0x1D5A0Cu);
    ctx->pc = 0x1D5A08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5A04u;
    // 0x1d5a08: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D8C98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D8C98u, 0x1D5A04u, 0x1D5A0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5A0Cu;
label_1d5a0c:
    // 0x1d5a0c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1d5a0cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5a10: 0x1200001b  beqz        $s0, . + 4 + (0x1B << 2)
    ctx->pc = 0x1D5A10u;
    {
        const bool branch_taken_0x1d5a10 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D5A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5A10u;
        // 0x1d5a14: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5a10) {
            ctx->pc = 0x1D5A80u;
            goto label_1d5a80;
        }
    }
    ctx->pc = 0x1D5A18u;
    // 0x1d5a18: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1d5a18u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5a1c: 0x2121823  subu        $v1, $s0, $s2
    ctx->pc = 0x1d5a1cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
    // 0x1d5a20: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x1d5a20u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5a24: 0x2238823  subu        $s1, $s1, $v1
    ctx->pc = 0x1d5a24u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x1d5a28: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1d5a28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5a2c: 0x1a200014  blez        $s1, . + 4 + (0x14 << 2)
    ctx->pc = 0x1D5A2Cu;
    {
        const bool branch_taken_0x1d5a2c = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x1D5A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5A2Cu;
        // 0x1d5a30: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5a2c) {
            ctx->pc = 0x1D5A80u;
            goto label_1d5a80;
        }
    }
    ctx->pc = 0x1D5A34u;
    // 0x1d5a34: 0xc076326  jal         func_1D8C98
    ctx->pc = 0x1D5A34u;
    SET_GPR_U32(ctx, 31, 0x1D5A3Cu);
    ctx->pc = 0x1D5A38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5A34u;
    // 0x1d5a38: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D8C98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D8C98u, 0x1D5A34u, 0x1D5A3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5A3Cu;
label_1d5a3c:
    // 0x1d5a3c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1d5a3cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5a40: 0x1200000f  beqz        $s0, . + 4 + (0xF << 2)
    ctx->pc = 0x1D5A40u;
    {
        const bool branch_taken_0x1d5a40 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D5A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5A40u;
        // 0x1d5a44: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5a40) {
            ctx->pc = 0x1D5A80u;
            goto label_1d5a80;
        }
    }
    ctx->pc = 0x1D5A48u;
    // 0x1d5a48: 0xc0762c0  jal         func_1D8B00
    ctx->pc = 0x1D5A48u;
    SET_GPR_U32(ctx, 31, 0x1D5A50u);
    ctx->pc = 0x1D8B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D8B00u, 0x1D5A48u, 0x1D5A50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5A50u;
label_1d5a50:
    // 0x1d5a50: 0x30430010  andi        $v1, $v0, 0x10
    ctx->pc = 0x1d5a50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x1d5a54: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x1D5A54u;
    {
        const bool branch_taken_0x1d5a54 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D5A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5A54u;
        // 0x1d5a58: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5a54) {
            ctx->pc = 0x1D5A80u;
            goto label_1d5a80;
        }
    }
    ctx->pc = 0x1D5A5Cu;
    // 0x1d5a5c: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x1d5a5cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x1d5a60: 0x2121823  subu        $v1, $s0, $s2
    ctx->pc = 0x1d5a60u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
    // 0x1d5a64: 0x2238823  subu        $s1, $s1, $v1
    ctx->pc = 0x1d5a64u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x1d5a68: 0x5a200006  blezl       $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1D5A68u;
    {
        const bool branch_taken_0x1d5a68 = (GPR_S32(ctx, 17) <= 0);
        if (branch_taken_0x1d5a68) {
            ctx->pc = 0x1D5A6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D5A68u;
            // 0x1d5a6c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D5A84u;
            goto label_1d5a84;
        }
    }
    ctx->pc = 0x1D5A70u;
    // 0x1d5a70: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x1d5a70u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1d5a74: 0x21102  srl         $v0, $v0, 4
    ctx->pc = 0x1d5a74u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
    // 0x1d5a78: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1d5a78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x1d5a7c: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1d5a7cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1d5a80:
    // 0x1d5a80: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d5a80u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1d5a84:
    // 0x1d5a84: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d5a84u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d5a88: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1d5a88u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d5a8c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1d5a8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1d5a90: 0x3e00008  jr          $ra
    ctx->pc = 0x1D5A90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D5A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5A90u;
        // 0x1d5a94: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D5A90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D5A98u;
    // 0x1d5a98: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d5a98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d5a9c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d5a9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d5aa0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d5aa0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5aa4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1d5aa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1d5aa8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1d5aa8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5aac: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1d5aacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1d5ab0: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1d5ab0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5ab4: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1d5ab4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1d5ab8: 0x3c0301c0  lui         $v1, 0x1C0
    ctx->pc = 0x1d5ab8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)448 << 16));
    // 0x1d5abc: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x1d5abcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x1d5ac0: 0x24638018  addiu       $v1, $v1, -0x7FE8
    ctx->pc = 0x1d5ac0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294934552));
    // 0x1d5ac4: 0x2442c128  addiu       $v0, $v0, -0x3ED8
    ctx->pc = 0x1d5ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951208));
    // 0x1d5ac8: 0xc0740de  jal         func_1D0378
    ctx->pc = 0x1D5AC8u;
    SET_GPR_U32(ctx, 31, 0x1D5AD0u);
    ctx->pc = 0x1D5ACCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5AC8u;
    // 0x1d5acc: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0378u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0378u, 0x1D5AC8u, 0x1D5AD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5AD0u;
label_1d5ad0:
    // 0x1d5ad0: 0xc074228  jal         func_1D08A0
    ctx->pc = 0x1D5AD0u;
    SET_GPR_U32(ctx, 31, 0x1D5AD8u);
    ctx->pc = 0x1D08A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D08A0u, 0x1D5AD0u, 0x1D5AD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5AD8u;
label_1d5ad8:
    // 0x1d5ad8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d5ad8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5adc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1d5adcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5ae0: 0xc0756d2  jal         func_1D5B48
    ctx->pc = 0x1D5AE0u;
    SET_GPR_U32(ctx, 31, 0x1D5AE8u);
    ctx->pc = 0x1D5AE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5AE0u;
    // 0x1d5ae4: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5B48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5B48u, 0x1D5AE0u, 0x1D5AE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5AE8u;
label_1d5ae8:
    // 0x1d5ae8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d5ae8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d5aec: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d5aecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d5af0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1d5af0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d5af4: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1d5af4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1d5af8: 0x80756c0  j           func_1D5B00
    ctx->pc = 0x1D5AF8u;
    ctx->pc = 0x1D5AFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5AF8u;
    // 0x1d5afc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5B00u;
    goto label_1d5b00;
    ctx->pc = 0x1D5B00u;
label_1d5b00:
    // 0x1d5b00: 0x3c0201c0  lui         $v0, 0x1C0
    ctx->pc = 0x1d5b00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)448 << 16));
    // 0x1d5b04: 0x24428020  addiu       $v0, $v0, -0x7FE0
    ctx->pc = 0x1d5b04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934560));
    // 0x1d5b08: 0x8c440040  lw          $a0, 0x40($v0)
    ctx->pc = 0x1d5b08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x1d5b0c: 0x1880000b  blez        $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x1D5B0Cu;
    {
        const bool branch_taken_0x1d5b0c = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x1D5B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5B0Cu;
        // 0x1d5b10: 0x8c430044  lw          $v1, 0x44($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5b0c) {
            ctx->pc = 0x1D5B3Cu;
            goto label_1d5b3c;
        }
    }
    ctx->pc = 0x1D5B14u;
    // 0x1d5b14: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1d5b14u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5b18: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1d5b18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d5b1c: 0x0  nop
    ctx->pc = 0x1d5b1cu;
    // NOP
label_1d5b20:
    // 0x1d5b20: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1d5b20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1d5b24: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x1d5b24u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x1d5b28: 0x0  nop
    ctx->pc = 0x1d5b28u;
    // NOP
    // 0x1d5b2c: 0x0  nop
    ctx->pc = 0x1d5b2cu;
    // NOP
    // 0x1d5b30: 0x0  nop
    ctx->pc = 0x1d5b30u;
    // NOP
    // 0x1d5b34: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1D5B34u;
    {
        const bool branch_taken_0x1d5b34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D5B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5B34u;
        // 0x1d5b38: 0x24630660  addiu       $v1, $v1, 0x660 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1632));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5b34) {
            ctx->pc = 0x1D5B20u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1d5b20;
        }
    }
    ctx->pc = 0x1D5B3Cu;
label_1d5b3c:
    // 0x1d5b3c: 0x3e00008  jr          $ra
    ctx->pc = 0x1D5B3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D5B3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D5B44u;
    // 0x1d5b44: 0x0  nop
    ctx->pc = 0x1d5b44u;
    // NOP
    if (ctx->pc == 0x1d5b44u) { ctx->pc = 0x1d5b48u; }
}
