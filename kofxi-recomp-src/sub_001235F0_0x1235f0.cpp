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

// Function: sub_001235F0
// Address: 0x1235f0 - 0x1247b8
void sub_001235F0_0x1235f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001235F0_0x1235f0");
#endif

    switch (ctx->pc) {
        case 0x123664u: goto label_123664;
        case 0x1236e0u: goto label_1236e0;
        case 0x123700u: goto label_123700;
        case 0x123704u: goto label_123704;
        case 0x123748u: goto label_123748;
        case 0x123788u: goto label_123788;
        case 0x1237e0u: goto label_1237e0;
        case 0x1237f0u: goto label_1237f0;
        case 0x123800u: goto label_123800;
        case 0x123810u: goto label_123810;
        case 0x12381cu: goto label_12381c;
        case 0x12382cu: goto label_12382c;
        case 0x123838u: goto label_123838;
        case 0x123844u: goto label_123844;
        case 0x123854u: goto label_123854;
        case 0x123864u: goto label_123864;
        case 0x123870u: goto label_123870;
        case 0x1238b4u: goto label_1238b4;
        case 0x1238e0u: goto label_1238e0;
        case 0x1238fcu: goto label_1238fc;
        case 0x12396cu: goto label_12396c;
        case 0x123980u: goto label_123980;
        case 0x1239acu: goto label_1239ac;
        case 0x123a20u: goto label_123a20;
        case 0x123a34u: goto label_123a34;
        case 0x123a4cu: goto label_123a4c;
        case 0x123a68u: goto label_123a68;
        case 0x123a6cu: goto label_123a6c;
        case 0x123a70u: goto label_123a70;
        case 0x123a84u: goto label_123a84;
        case 0x123aacu: goto label_123aac;
        case 0x123ac8u: goto label_123ac8;
        case 0x123ad4u: goto label_123ad4;
        case 0x123ae4u: goto label_123ae4;
        case 0x123b1cu: goto label_123b1c;
        case 0x123b30u: goto label_123b30;
        case 0x123b40u: goto label_123b40;
        case 0x123b4cu: goto label_123b4c;
        case 0x123b54u: goto label_123b54;
        case 0x123bc8u: goto label_123bc8;
        case 0x123bd4u: goto label_123bd4;
        case 0x123be0u: goto label_123be0;
        case 0x123bf8u: goto label_123bf8;
        case 0x123c04u: goto label_123c04;
        case 0x123c2cu: goto label_123c2c;
        case 0x123c38u: goto label_123c38;
        case 0x123c3cu: goto label_123c3c;
        case 0x123c44u: goto label_123c44;
        case 0x123c6cu: goto label_123c6c;
        case 0x123c70u: goto label_123c70;
        case 0x123c80u: goto label_123c80;
        case 0x123c88u: goto label_123c88;
        case 0x123c90u: goto label_123c90;
        case 0x123c9cu: goto label_123c9c;
        case 0x123ca8u: goto label_123ca8;
        case 0x123cb4u: goto label_123cb4;
        case 0x123cd4u: goto label_123cd4;
        case 0x123ce4u: goto label_123ce4;
        case 0x123cf4u: goto label_123cf4;
        case 0x123d04u: goto label_123d04;
        case 0x123d28u: goto label_123d28;
        case 0x123d48u: goto label_123d48;
        case 0x123d8cu: goto label_123d8c;
        case 0x123d9cu: goto label_123d9c;
        case 0x123decu: goto label_123dec;
        case 0x123e00u: goto label_123e00;
        case 0x123e6cu: goto label_123e6c;
        case 0x123e80u: goto label_123e80;
        case 0x123e94u: goto label_123e94;
        case 0x123ea8u: goto label_123ea8;
        case 0x123eb0u: goto label_123eb0;
        case 0x123ec0u: goto label_123ec0;
        case 0x123edcu: goto label_123edc;
        case 0x123f48u: goto label_123f48;
        case 0x123f54u: goto label_123f54;
        case 0x123f88u: goto label_123f88;
        case 0x123f8cu: goto label_123f8c;
        case 0x123fa4u: goto label_123fa4;
        case 0x123fc0u: goto label_123fc0;
        case 0x123fd8u: goto label_123fd8;
        case 0x123ff4u: goto label_123ff4;
        case 0x124020u: goto label_124020;
        case 0x124064u: goto label_124064;
        case 0x124074u: goto label_124074;
        case 0x1240a4u: goto label_1240a4;
        case 0x1240c0u: goto label_1240c0;
        case 0x1240e0u: goto label_1240e0;
        case 0x1240f0u: goto label_1240f0;
        case 0x124108u: goto label_124108;
        case 0x124114u: goto label_124114;
        case 0x124124u: goto label_124124;
        case 0x124138u: goto label_124138;
        case 0x124150u: goto label_124150;
        case 0x124154u: goto label_124154;
        case 0x124160u: goto label_124160;
        case 0x124184u: goto label_124184;
        case 0x124188u: goto label_124188;
        case 0x124190u: goto label_124190;
        case 0x124194u: goto label_124194;
        case 0x1241a0u: goto label_1241a0;
        case 0x1241c0u: goto label_1241c0;
        case 0x12423cu: goto label_12423c;
        case 0x12424cu: goto label_12424c;
        case 0x1242bcu: goto label_1242bc;
        case 0x1242e0u: goto label_1242e0;
        case 0x1242e8u: goto label_1242e8;
        case 0x124304u: goto label_124304;
        case 0x12431cu: goto label_12431c;
        case 0x124324u: goto label_124324;
        case 0x124334u: goto label_124334;
        case 0x124344u: goto label_124344;
        case 0x124368u: goto label_124368;
        case 0x124398u: goto label_124398;
        case 0x1243a4u: goto label_1243a4;
        case 0x1243d4u: goto label_1243d4;
        case 0x12449cu: goto label_12449c;
        case 0x1244a8u: goto label_1244a8;
        case 0x1244b0u: goto label_1244b0;
        case 0x1244b8u: goto label_1244b8;
        case 0x1244c4u: goto label_1244c4;
        case 0x1244d0u: goto label_1244d0;
        case 0x1244e8u: goto label_1244e8;
        case 0x124500u: goto label_124500;
        case 0x12450cu: goto label_12450c;
        case 0x124530u: goto label_124530;
        case 0x124544u: goto label_124544;
        case 0x12456cu: goto label_12456c;
        case 0x124570u: goto label_124570;
        case 0x124578u: goto label_124578;
        case 0x124584u: goto label_124584;
        case 0x124590u: goto label_124590;
        case 0x1245bcu: goto label_1245bc;
        case 0x1245c8u: goto label_1245c8;
        case 0x1245d8u: goto label_1245d8;
        case 0x1245e4u: goto label_1245e4;
        case 0x1245f0u: goto label_1245f0;
        case 0x12462cu: goto label_12462c;
        case 0x124664u: goto label_124664;
        case 0x124678u: goto label_124678;
        case 0x124690u: goto label_124690;
        case 0x12475cu: goto label_12475c;
        case 0x124764u: goto label_124764;
        case 0x12477cu: goto label_12477c;
        default: break;
    }

    ctx->pc = 0x1235f0u;

    // 0x1235f0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x1235f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x1235f4: 0xffb00060  sd          $s0, 0x60($sp)
    ctx->pc = 0x1235f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 16));
    // 0x1235f8: 0xffb40080  sd          $s4, 0x80($sp)
    ctx->pc = 0x1235f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 20));
    // 0x1235fc: 0xffb50088  sd          $s5, 0x88($sp)
    ctx->pc = 0x1235fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 21));
    // 0x123600: 0x120802d  daddu       $s0, $t1, $zero
    ctx->pc = 0x123600u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123604: 0xffb10068  sd          $s1, 0x68($sp)
    ctx->pc = 0x123604u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 17));
    // 0x123608: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x123608u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12360c: 0xffb20070  sd          $s2, 0x70($sp)
    ctx->pc = 0x12360cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 18));
    // 0x123610: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x123610u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123614: 0xffb30078  sd          $s3, 0x78($sp)
    ctx->pc = 0x123614u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 19));
    // 0x123618: 0xffb60090  sd          $s6, 0x90($sp)
    ctx->pc = 0x123618u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 22));
    // 0x12361c: 0xffb70098  sd          $s7, 0x98($sp)
    ctx->pc = 0x12361cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 23));
    // 0x123620: 0xffbe00a0  sd          $fp, 0xA0($sp)
    ctx->pc = 0x123620u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 30));
    // 0x123624: 0xffbf00a8  sd          $ra, 0xA8($sp)
    ctx->pc = 0x123624u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 31));
    // 0x123628: 0xafa60008  sw          $a2, 0x8($sp)
    ctx->pc = 0x123628u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 6));
    // 0x12362c: 0x8c8d0040  lw          $t5, 0x40($a0)
    ctx->pc = 0x12362cu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x123630: 0xafa7000c  sw          $a3, 0xC($sp)
    ctx->pc = 0x123630u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 7));
    // 0x123634: 0xafa80010  sw          $t0, 0x10($sp)
    ctx->pc = 0x123634u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 8));
    // 0x123638: 0xafaa0014  sw          $t2, 0x14($sp)
    ctx->pc = 0x123638u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 10));
    // 0x12363c: 0x11a0000a  beqz        $t5, . + 4 + (0xA << 2)
    ctx->pc = 0x12363Cu;
    {
        const bool branch_taken_0x12363c = (GPR_U64(ctx, 13) == GPR_U64(ctx, 0));
        ctx->pc = 0x123640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12363Cu;
        // 0x123640: 0xafa00048  sw          $zero, 0x48($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12363c) {
            ctx->pc = 0x123668u;
            goto label_123668;
        }
    }
    ctx->pc = 0x123644u;
    // 0x123644: 0x8c8f0044  lw          $t7, 0x44($a0)
    ctx->pc = 0x123644u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 68)));
    // 0x123648: 0x1a0282d  daddu       $a1, $t5, $zero
    ctx->pc = 0x123648u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12364c: 0xadaf0004  sw          $t7, 0x4($t5)
    ctx->pc = 0x12364cu;
    WRITE32(ADD32(GPR_U32(ctx, 13), 4), GPR_U32(ctx, 15));
    // 0x123650: 0x8c8e0044  lw          $t6, 0x44($a0)
    ctx->pc = 0x123650u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 68)));
    // 0x123654: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x123654u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x123658: 0x1cf7804  sllv        $t7, $t7, $t6
    ctx->pc = 0x123658u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 15), GPR_U32(ctx, 14) & 0x1F));
    // 0x12365c: 0xc049d3c  jal         func_1274F0
    ctx->pc = 0x12365Cu;
    SET_GPR_U32(ctx, 31, 0x123664u);
    ctx->pc = 0x123660u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12365Cu;
    // 0x123660: 0xadaf0008  sw          $t7, 0x8($t5) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 13), 8), GPR_U32(ctx, 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1274F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1274F0u, 0x12365Cu, 0x123664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123664u;
label_123664:
    // 0x123664: 0xaea00040  sw          $zero, 0x40($s5)
    ctx->pc = 0x123664u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 64), GPR_U32(ctx, 0));
label_123668:
    // 0x123668: 0x14703e  dsrl32      $t6, $s4, 0
    ctx->pc = 0x123668u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 20) >> (32 + 0));
    // 0x12366c: 0xe683c  dsll32      $t5, $t6, 0
    ctx->pc = 0x12366cu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 14) << (32 + 0));
    // 0x123670: 0xd683f  dsra32      $t5, $t5, 0
    ctx->pc = 0x123670u;
    SET_GPR_S64(ctx, 13, GPR_S64(ctx, 13) >> (32 + 0));
    // 0x123674: 0x5a3000b  bgezl       $t5, . + 4 + (0xB << 2)
    ctx->pc = 0x123674u;
    {
        const bool branch_taken_0x123674 = (GPR_S32(ctx, 13) >= 0);
        if (branch_taken_0x123674) {
            ctx->pc = 0x123678u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x123674u;
            // 0x123678: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1236A4u;
            goto label_1236a4;
        }
    }
    ctx->pc = 0x12367Cu;
    // 0x12367c: 0x3c0f7fff  lui         $t7, 0x7FFF
    ctx->pc = 0x12367cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)32767 << 16));
    // 0x123680: 0x240e0001  addiu       $t6, $zero, 0x1
    ctx->pc = 0x123680u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x123684: 0x35efffff  ori         $t7, $t7, 0xFFFF
    ctx->pc = 0x123684u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)65535);
    // 0x123688: 0xae0e0000  sw          $t6, 0x0($s0)
    ctx->pc = 0x123688u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 14));
    // 0x12368c: 0x14a03c  dsll32      $s4, $s4, 0
    ctx->pc = 0x12368cu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) << (32 + 0));
    // 0x123690: 0x1af7824  and         $t7, $t5, $t7
    ctx->pc = 0x123690u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 13) & GPR_U64(ctx, 15));
    // 0x123694: 0x14a03e  dsrl32      $s4, $s4, 0
    ctx->pc = 0x123694u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) >> (32 + 0));
    // 0x123698: 0xf783c  dsll32      $t7, $t7, 0
    ctx->pc = 0x123698u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) << (32 + 0));
    // 0x12369c: 0x28fa025  or          $s4, $s4, $t7
    ctx->pc = 0x12369cu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | GPR_U64(ctx, 15));
    // 0x1236a0: 0x14703e  dsrl32      $t6, $s4, 0
    ctx->pc = 0x1236a0u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 20) >> (32 + 0));
label_1236a4:
    // 0x1236a4: 0xe803c  dsll32      $s0, $t6, 0
    ctx->pc = 0x1236a4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 14) << (32 + 0));
    // 0x1236a8: 0x10803f  dsra32      $s0, $s0, 0
    ctx->pc = 0x1236a8u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 0));
    // 0x1236ac: 0x3c0e7ff0  lui         $t6, 0x7FF0
    ctx->pc = 0x1236acu;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)32752 << 16));
    // 0x1236b0: 0x20e7824  and         $t7, $s0, $t6
    ctx->pc = 0x1236b0u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 16) & GPR_U64(ctx, 14));
    // 0x1236b4: 0x15ee0022  bne         $t7, $t6, . + 4 + (0x22 << 2)
    ctx->pc = 0x1236B4u;
    {
        const bool branch_taken_0x1236b4 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 14));
        ctx->pc = 0x1236B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1236B4u;
        // 0x1236b8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1236b4) {
            ctx->pc = 0x123740u;
            goto label_123740;
        }
    }
    ctx->pc = 0x1236BCu;
    // 0x1236bc: 0x8fad0010  lw          $t5, 0x10($sp)
    ctx->pc = 0x1236bcu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1236c0: 0x240e270f  addiu       $t6, $zero, 0x270F
    ctx->pc = 0x1236c0u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 9999));
    // 0x1236c4: 0x240ff000  addiu       $t7, $zero, -0x1000
    ctx->pc = 0x1236c4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963200));
    // 0x1236c8: 0xf7b3a  dsrl        $t7, $t7, 12
    ctx->pc = 0x1236c8u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) >> 12);
    // 0x1236cc: 0x28f7824  and         $t7, $s4, $t7
    ctx->pc = 0x1236ccu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 20) & GPR_U64(ctx, 15));
    // 0x1236d0: 0x15e00018  bnez        $t7, . + 4 + (0x18 << 2)
    ctx->pc = 0x1236D0u;
    {
        const bool branch_taken_0x1236d0 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x1236D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1236D0u;
        // 0x1236d4: 0xadae0000  sw          $t6, 0x0($t5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1236d0) {
            ctx->pc = 0x123734u;
            goto label_123734;
        }
    }
    ctx->pc = 0x1236D8u;
    // 0x1236d8: 0x3c0f003e  lui         $t7, 0x3E
    ctx->pc = 0x1236d8u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)62 << 16));
    // 0x1236dc: 0x25f6b8c8  addiu       $s6, $t7, -0x4738
    ctx->pc = 0x1236dcu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 15), 4294949064));
label_1236e0:
    // 0x1236e0: 0x8fae0014  lw          $t6, 0x14($sp)
    ctx->pc = 0x1236e0u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x1236e4: 0x11c00006  beqz        $t6, . + 4 + (0x6 << 2)
    ctx->pc = 0x1236E4u;
    {
        const bool branch_taken_0x1236e4 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        ctx->pc = 0x1236E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1236E4u;
        // 0x1236e8: 0x26ce0008  addiu       $t6, $s6, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 22), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1236e4) {
            ctx->pc = 0x123700u;
            goto label_123700;
        }
    }
    ctx->pc = 0x1236ECu;
    // 0x1236ec: 0x82cf0003  lb          $t7, 0x3($s6)
    ctx->pc = 0x1236ecu;
    SET_GPR_S32(ctx, 15, (int8_t)READ8(ADD32(GPR_U32(ctx, 22), 3)));
    // 0x1236f0: 0x26cd0003  addiu       $t5, $s6, 0x3
    ctx->pc = 0x1236f0u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 22), 3));
    // 0x1236f4: 0x1af700a  movz        $t6, $t5, $t7
    ctx->pc = 0x1236f4u;
    if (GPR_U64(ctx, 15) == 0) SET_GPR_VEC(ctx, 14, GPR_VEC(ctx, 13));
    // 0x1236f8: 0x8faf0014  lw          $t7, 0x14($sp)
    ctx->pc = 0x1236f8u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x1236fc: 0xadee0000  sw          $t6, 0x0($t7)
    ctx->pc = 0x1236fcu;
    WRITE32(ADD32(GPR_U32(ctx, 15), 0), GPR_U32(ctx, 14));
label_123700:
    // 0x123700: 0x2c0102d  daddu       $v0, $s6, $zero
    ctx->pc = 0x123700u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_123704:
    // 0x123704: 0xdfb00060  ld          $s0, 0x60($sp)
    ctx->pc = 0x123704u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x123708: 0xdfb10068  ld          $s1, 0x68($sp)
    ctx->pc = 0x123708u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x12370c: 0xdfb20070  ld          $s2, 0x70($sp)
    ctx->pc = 0x12370cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x123710: 0xdfb30078  ld          $s3, 0x78($sp)
    ctx->pc = 0x123710u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x123714: 0xdfb40080  ld          $s4, 0x80($sp)
    ctx->pc = 0x123714u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x123718: 0xdfb50088  ld          $s5, 0x88($sp)
    ctx->pc = 0x123718u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x12371c: 0xdfb60090  ld          $s6, 0x90($sp)
    ctx->pc = 0x12371cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x123720: 0xdfb70098  ld          $s7, 0x98($sp)
    ctx->pc = 0x123720u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x123724: 0xdfbe00a0  ld          $fp, 0xA0($sp)
    ctx->pc = 0x123724u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x123728: 0xdfbf00a8  ld          $ra, 0xA8($sp)
    ctx->pc = 0x123728u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x12372c: 0x3e00008  jr          $ra
    ctx->pc = 0x12372Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x123730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12372Cu;
        // 0x123730: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12372Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x123734u;
label_123734:
    // 0x123734: 0x3c0f003e  lui         $t7, 0x3E
    ctx->pc = 0x123734u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)62 << 16));
    // 0x123738: 0x1000ffe9  b           . + 4 + (-0x17 << 2)
    ctx->pc = 0x123738u;
    {
        const bool branch_taken_0x123738 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12373Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123738u;
        // 0x12373c: 0x25f6b8d8  addiu       $s6, $t7, -0x4728 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 15), 4294949080));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123738) {
            ctx->pc = 0x1236E0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1236e0;
        }
    }
    ctx->pc = 0x123740u;
label_123740:
    // 0x123740: 0xc048b9e  jal         func_122E78
    ctx->pc = 0x123740u;
    SET_GPR_U32(ctx, 31, 0x123748u);
    ctx->pc = 0x123744u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x123740u;
    // 0x123744: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122E78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122E78u, 0x123740u, 0x123748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123748u;
label_123748:
    // 0x123748: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x123748u;
    {
        const bool branch_taken_0x123748 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12374Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123748u;
        // 0x12374c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123748) {
            ctx->pc = 0x123778u;
            goto label_123778;
        }
    }
    ctx->pc = 0x123750u;
    // 0x123750: 0x3c0e003e  lui         $t6, 0x3E
    ctx->pc = 0x123750u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)62 << 16));
    // 0x123754: 0x8fad0010  lw          $t5, 0x10($sp)
    ctx->pc = 0x123754u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x123758: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x123758u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12375c: 0x25d6b8e0  addiu       $s6, $t6, -0x4720
    ctx->pc = 0x12375cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 14), 4294949088));
    // 0x123760: 0xadaf0000  sw          $t7, 0x0($t5)
    ctx->pc = 0x123760u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 15));
    // 0x123764: 0x8fae0014  lw          $t6, 0x14($sp)
    ctx->pc = 0x123764u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x123768: 0x11c0ffe5  beqz        $t6, . + 4 + (-0x1B << 2)
    ctx->pc = 0x123768u;
    {
        const bool branch_taken_0x123768 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        ctx->pc = 0x12376Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123768u;
        // 0x12376c: 0x26cf0001  addiu       $t7, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123768) {
            ctx->pc = 0x123700u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_123700;
        }
    }
    ctx->pc = 0x123770u;
    // 0x123770: 0x1000ffe3  b           . + 4 + (-0x1D << 2)
    ctx->pc = 0x123770u;
    {
        const bool branch_taken_0x123770 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x123774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123770u;
        // 0x123774: 0xadcf0000  sw          $t7, 0x0($t6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123770) {
            ctx->pc = 0x123700u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_123700;
        }
    }
    ctx->pc = 0x123778u;
label_123778:
    // 0x123778: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x123778u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12377c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x12377cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123780: 0xc04a05c  jal         func_128170
    ctx->pc = 0x123780u;
    SET_GPR_U32(ctx, 31, 0x123788u);
    ctx->pc = 0x123784u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x123780u;
    // 0x123784: 0x27a70004  addiu       $a3, $sp, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128170u, 0x123780u, 0x123788u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123788u;
label_123788:
    // 0x123788: 0x107d02  srl         $t7, $s0, 20
    ctx->pc = 0x123788u;
    SET_GPR_S32(ctx, 15, (int32_t)SRL32(GPR_U32(ctx, 16), 20));
    // 0x12378c: 0x31f307ff  andi        $s3, $t7, 0x7FF
    ctx->pc = 0x12378cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 15) & (uint64_t)(uint16_t)2047);
    // 0x123790: 0x126003e4  beqz        $s3, . + 4 + (0x3E4 << 2)
    ctx->pc = 0x123790u;
    {
        const bool branch_taken_0x123790 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x123794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123790u;
        // 0x123794: 0x40f02d  daddu       $fp, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123790) {
            ctx->pc = 0x124724u;
            goto label_124724;
        }
    }
    ctx->pc = 0x123798u;
    // 0x123798: 0x3c0f000f  lui         $t7, 0xF
    ctx->pc = 0x123798u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)15 << 16));
    // 0x12379c: 0x8fb20004  lw          $s2, 0x4($sp)
    ctx->pc = 0x12379cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1237a0: 0x35efffff  ori         $t7, $t7, 0xFFFF
    ctx->pc = 0x1237a0u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)65535);
    // 0x1237a4: 0xafa00044  sw          $zero, 0x44($sp)
    ctx->pc = 0x1237a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
    // 0x1237a8: 0x14703f  dsra32      $t6, $s4, 0
    ctx->pc = 0x1237a8u;
    SET_GPR_S64(ctx, 14, GPR_S64(ctx, 20) >> (32 + 0));
    // 0x1237ac: 0x240cffff  addiu       $t4, $zero, -0x1
    ctx->pc = 0x1237acu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1237b0: 0x1cf7024  and         $t6, $t6, $t7
    ctx->pc = 0x1237b0u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) & GPR_U64(ctx, 15));
    // 0x1237b4: 0xc603e  dsrl32      $t4, $t4, 0
    ctx->pc = 0x1237b4u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) >> (32 + 0));
    // 0x1237b8: 0xe703c  dsll32      $t6, $t6, 0
    ctx->pc = 0x1237b8u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) << (32 + 0));
    // 0x1237bc: 0x28cb824  and         $s7, $s4, $t4
    ctx->pc = 0x1237bcu;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 20) & GPR_U64(ctx, 12));
    // 0x1237c0: 0x2eeb825  or          $s7, $s7, $t6
    ctx->pc = 0x1237c0u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) | GPR_U64(ctx, 14));
    // 0x1237c4: 0x3c0f3ff0  lui         $t7, 0x3FF0
    ctx->pc = 0x1237c4u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)16368 << 16));
    // 0x1237c8: 0x17683e  dsrl32      $t5, $s7, 0
    ctx->pc = 0x1237c8u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 23) >> (32 + 0));
    // 0x1237cc: 0x2673fc01  addiu       $s3, $s3, -0x3FF
    ctx->pc = 0x1237ccu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294966273));
    // 0x1237d0: 0x1af6825  or          $t5, $t5, $t7
    ctx->pc = 0x1237d0u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) | GPR_U64(ctx, 15));
    // 0x1237d4: 0x2ecb824  and         $s7, $s7, $t4
    ctx->pc = 0x1237d4u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) & GPR_U64(ctx, 12));
    // 0x1237d8: 0xd683c  dsll32      $t5, $t5, 0
    ctx->pc = 0x1237d8u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) << (32 + 0));
    // 0x1237dc: 0x2edb825  or          $s7, $s7, $t5
    ctx->pc = 0x1237dcu;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) | GPR_U64(ctx, 13));
label_1237e0:
    // 0x1237e0: 0x240507ff  addiu       $a1, $zero, 0x7FF
    ctx->pc = 0x1237e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2047));
    // 0x1237e4: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x1237e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1237e8: 0xc048a5c  jal         func_122970
    ctx->pc = 0x1237E8u;
    SET_GPR_U32(ctx, 31, 0x1237F0u);
    ctx->pc = 0x1237ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1237E8u;
    // 0x1237ec: 0x52cfc  dsll32      $a1, $a1, 19 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122970u, 0x1237E8u, 0x1237F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1237F0u;
label_1237f0:
    // 0x1237f0: 0x3c0f003e  lui         $t7, 0x3E
    ctx->pc = 0x1237f0u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)62 << 16));
    // 0x1237f4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1237f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1237f8: 0xc048a76  jal         func_1229D8
    ctx->pc = 0x1237F8u;
    SET_GPR_U32(ctx, 31, 0x123800u);
    ctx->pc = 0x1237FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1237F8u;
    // 0x1237fc: 0xdde5b8e8  ld          $a1, -0x4718($t7) (Delay Slot)
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 15), 4294949096)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1229D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1229D8u, 0x1237F8u, 0x123800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123800u;
label_123800:
    // 0x123800: 0x3c0f003e  lui         $t7, 0x3E
    ctx->pc = 0x123800u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)62 << 16));
    // 0x123804: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x123804u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123808: 0xc048a46  jal         func_122918
    ctx->pc = 0x123808u;
    SET_GPR_U32(ctx, 31, 0x123810u);
    ctx->pc = 0x12380Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x123808u;
    // 0x12380c: 0xdde5b8f0  ld          $a1, -0x4710($t7) (Delay Slot)
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 15), 4294949104)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122918u, 0x123808u, 0x123810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123810u;
label_123810:
    // 0x123810: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x123810u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123814: 0xc048bb2  jal         func_122EC8
    ctx->pc = 0x123814u;
    SET_GPR_U32(ctx, 31, 0x12381Cu);
    ctx->pc = 0x123818u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x123814u;
    // 0x123818: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122EC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122EC8u, 0x123814u, 0x12381Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12381Cu;
label_12381c:
    // 0x12381c: 0x3c0f003e  lui         $t7, 0x3E
    ctx->pc = 0x12381cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)62 << 16));
    // 0x123820: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x123820u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123824: 0xc048a76  jal         func_1229D8
    ctx->pc = 0x123824u;
    SET_GPR_U32(ctx, 31, 0x12382Cu);
    ctx->pc = 0x123828u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x123824u;
    // 0x123828: 0xdde5b8f8  ld          $a1, -0x4708($t7) (Delay Slot)
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 15), 4294949112)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1229D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1229D8u, 0x123824u, 0x12382Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12382Cu;
label_12382c:
    // 0x12382c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x12382cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123830: 0xc048a46  jal         func_122918
    ctx->pc = 0x123830u;
    SET_GPR_U32(ctx, 31, 0x123838u);
    ctx->pc = 0x123834u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x123830u;
    // 0x123834: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122918u, 0x123830u, 0x123838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123838u;
label_123838:
    // 0x123838: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x123838u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12383c: 0xc048bde  jal         func_122F78
    ctx->pc = 0x12383Cu;
    SET_GPR_U32(ctx, 31, 0x123844u);
    ctx->pc = 0x123840u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12383Cu;
    // 0x123840: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122F78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122F78u, 0x12383Cu, 0x123844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123844u;
label_123844:
    // 0x123844: 0xafa2002c  sw          $v0, 0x2C($sp)
    ctx->pc = 0x123844u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
    // 0x123848: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x123848u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12384c: 0xc048b9e  jal         func_122E78
    ctx->pc = 0x12384Cu;
    SET_GPR_U32(ctx, 31, 0x123854u);
    ctx->pc = 0x123850u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12384Cu;
    // 0x123850: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122E78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122E78u, 0x12384Cu, 0x123854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123854u;
label_123854:
    // 0x123854: 0x441000b  bgez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x123854u;
    {
        const bool branch_taken_0x123854 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x123858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123854u;
        // 0x123858: 0x240e0001  addiu       $t6, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123854) {
            ctx->pc = 0x123884u;
            goto label_123884;
        }
    }
    ctx->pc = 0x12385Cu;
    // 0x12385c: 0xc048bb2  jal         func_122EC8
    ctx->pc = 0x12385Cu;
    SET_GPR_U32(ctx, 31, 0x123864u);
    ctx->pc = 0x123860u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12385Cu;
    // 0x123860: 0x8fa4002c  lw          $a0, 0x2C($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122EC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122EC8u, 0x12385Cu, 0x123864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123864u;
label_123864:
    // 0x123864: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x123864u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123868: 0xc048b9e  jal         func_122E78
    ctx->pc = 0x123868u;
    SET_GPR_U32(ctx, 31, 0x123870u);
    ctx->pc = 0x12386Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x123868u;
    // 0x12386c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122E78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122E78u, 0x123868u, 0x123870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123870u;
label_123870:
    // 0x123870: 0x8fad002c  lw          $t5, 0x2C($sp)
    ctx->pc = 0x123870u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x123874: 0x25afffff  addiu       $t7, $t5, -0x1
    ctx->pc = 0x123874u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 13), 4294967295));
    // 0x123878: 0x1e2680b  movn        $t5, $t7, $v0
    ctx->pc = 0x123878u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 13, GPR_VEC(ctx, 15));
    // 0x12387c: 0xafad002c  sw          $t5, 0x2C($sp)
    ctx->pc = 0x12387cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 13));
    // 0x123880: 0x240e0001  addiu       $t6, $zero, 0x1
    ctx->pc = 0x123880u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_123884:
    // 0x123884: 0x8fad002c  lw          $t5, 0x2C($sp)
    ctx->pc = 0x123884u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x123888: 0x2daf0017  sltiu       $t7, $t5, 0x17
    ctx->pc = 0x123888u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 13) < (uint64_t)(int64_t)(int32_t)23) ? 1 : 0);
    // 0x12388c: 0x11e0000e  beqz        $t7, . + 4 + (0xE << 2)
    ctx->pc = 0x12388Cu;
    {
        const bool branch_taken_0x12388c = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x123890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12388Cu;
        // 0x123890: 0xafae0034  sw          $t6, 0x34($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12388c) {
            ctx->pc = 0x1238C8u;
            goto label_1238c8;
        }
    }
    ctx->pc = 0x123894u;
    // 0x123894: 0x3c0f003e  lui         $t7, 0x3E
    ctx->pc = 0x123894u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)62 << 16));
    // 0x123898: 0xafa00034  sw          $zero, 0x34($sp)
    ctx->pc = 0x123898u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
    // 0x12389c: 0x25efb978  addiu       $t7, $t7, -0x4688
    ctx->pc = 0x12389cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294949240));
    // 0x1238a0: 0xd70c0  sll         $t6, $t5, 3
    ctx->pc = 0x1238a0u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 13), 3));
    // 0x1238a4: 0x1cf7021  addu        $t6, $t6, $t7
    ctx->pc = 0x1238a4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 15)));
    // 0x1238a8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1238a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1238ac: 0xc048b9e  jal         func_122E78
    ctx->pc = 0x1238ACu;
    SET_GPR_U32(ctx, 31, 0x1238B4u);
    ctx->pc = 0x1238B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1238ACu;
    // 0x1238b0: 0xddc50000  ld          $a1, 0x0($t6) (Delay Slot)
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 14), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122E78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122E78u, 0x1238ACu, 0x1238B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1238B4u;
label_1238b4:
    // 0x1238b4: 0x8fae002c  lw          $t6, 0x2C($sp)
    ctx->pc = 0x1238b4u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x1238b8: 0x28420000  slti        $v0, $v0, 0x0
    ctx->pc = 0x1238b8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x1238bc: 0x25cfffff  addiu       $t7, $t6, -0x1
    ctx->pc = 0x1238bcu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 14), 4294967295));
    // 0x1238c0: 0x1e2700b  movn        $t6, $t7, $v0
    ctx->pc = 0x1238c0u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 14, GPR_VEC(ctx, 15));
    // 0x1238c4: 0xafae002c  sw          $t6, 0x2C($sp)
    ctx->pc = 0x1238c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 14));
label_1238c8:
    // 0x1238c8: 0x2537823  subu        $t7, $s2, $s3
    ctx->pc = 0x1238c8u;
    SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 19)));
    // 0x1238cc: 0x25f0ffff  addiu       $s0, $t7, -0x1
    ctx->pc = 0x1238ccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 15), 4294967295));
    // 0x1238d0: 0x6020391  bltzl       $s0, . + 4 + (0x391 << 2)
    ctx->pc = 0x1238D0u;
    {
        const bool branch_taken_0x1238d0 = (GPR_S32(ctx, 16) < 0);
        if (branch_taken_0x1238d0) {
            ctx->pc = 0x1238D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1238D0u;
            // 0x1238d4: 0x108023  negu        $s0, $s0 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x124718u;
            goto label_124718;
        }
    }
    ctx->pc = 0x1238D8u;
    // 0x1238d8: 0xafb0003c  sw          $s0, 0x3C($sp)
    ctx->pc = 0x1238d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 16));
    // 0x1238dc: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x1238dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
label_1238e0:
    // 0x1238e0: 0x8faf002c  lw          $t7, 0x2C($sp)
    ctx->pc = 0x1238e0u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x1238e4: 0x5e00384  bltz        $t7, . + 4 + (0x384 << 2)
    ctx->pc = 0x1238E4u;
    {
        const bool branch_taken_0x1238e4 = (GPR_S32(ctx, 15) < 0);
        ctx->pc = 0x1238E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1238E4u;
        // 0x1238e8: 0x8fad003c  lw          $t5, 0x3C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1238e4) {
            ctx->pc = 0x1246F8u;
            goto label_1246f8;
        }
    }
    ctx->pc = 0x1238ECu;
    // 0x1238ec: 0xafa0001c  sw          $zero, 0x1C($sp)
    ctx->pc = 0x1238ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 0));
    // 0x1238f0: 0x1af6821  addu        $t5, $t5, $t7
    ctx->pc = 0x1238f0u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 15)));
    // 0x1238f4: 0xafaf0040  sw          $t7, 0x40($sp)
    ctx->pc = 0x1238f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 15));
    // 0x1238f8: 0xafad003c  sw          $t5, 0x3C($sp)
    ctx->pc = 0x1238f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 13));
label_1238fc:
    // 0x1238fc: 0x8faf0008  lw          $t7, 0x8($sp)
    ctx->pc = 0x1238fcu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x123900: 0x2dee000a  sltiu       $t6, $t7, 0xA
    ctx->pc = 0x123900u;
    SET_GPR_U64(ctx, 14, ((uint64_t)GPR_U64(ctx, 15) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x123904: 0xe780a  movz        $t7, $zero, $t6
    ctx->pc = 0x123904u;
    if (GPR_U64(ctx, 14) == 0) SET_GPR_VEC(ctx, 15, GPR_VEC(ctx, 0));
    // 0x123908: 0xafaf0008  sw          $t7, 0x8($sp)
    ctx->pc = 0x123908u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 15));
    // 0x12390c: 0x29ef0006  slti        $t7, $t7, 0x6
    ctx->pc = 0x12390cu;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 15) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x123910: 0x15e00005  bnez        $t7, . + 4 + (0x5 << 2)
    ctx->pc = 0x123910u;
    {
        const bool branch_taken_0x123910 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x123914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123910u;
        // 0x123914: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123910) {
            ctx->pc = 0x123928u;
            goto label_123928;
        }
    }
    ctx->pc = 0x123918u;
    // 0x123918: 0x8fad0008  lw          $t5, 0x8($sp)
    ctx->pc = 0x123918u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x12391c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x12391cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123920: 0x25adfffc  addiu       $t5, $t5, -0x4
    ctx->pc = 0x123920u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 4294967292));
    // 0x123924: 0xafad0008  sw          $t5, 0x8($sp)
    ctx->pc = 0x123924u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 13));
label_123928:
    // 0x123928: 0x240fffff  addiu       $t7, $zero, -0x1
    ctx->pc = 0x123928u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x12392c: 0x8fad0008  lw          $t5, 0x8($sp)
    ctx->pc = 0x12392cu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x123930: 0x240e0001  addiu       $t6, $zero, 0x1
    ctx->pc = 0x123930u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x123934: 0xafaf0028  sw          $t7, 0x28($sp)
    ctx->pc = 0x123934u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 15));
    // 0x123938: 0xafaf0020  sw          $t7, 0x20($sp)
    ctx->pc = 0x123938u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 15));
    // 0x12393c: 0x2daf0006  sltiu       $t7, $t5, 0x6
    ctx->pc = 0x12393cu;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 13) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x123940: 0x11e0000a  beqz        $t7, . + 4 + (0xA << 2)
    ctx->pc = 0x123940u;
    {
        const bool branch_taken_0x123940 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x123944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123940u;
        // 0x123944: 0xafae0038  sw          $t6, 0x38($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123940) {
            ctx->pc = 0x12396Cu;
            goto label_12396c;
        }
    }
    ctx->pc = 0x123948u;
    // 0x123948: 0x3c0e003e  lui         $t6, 0x3E
    ctx->pc = 0x123948u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)62 << 16));
    // 0x12394c: 0xd7880  sll         $t7, $t5, 2
    ctx->pc = 0x12394cu;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 13), 2));
    // 0x123950: 0x25ceb900  addiu       $t6, $t6, -0x4700
    ctx->pc = 0x123950u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294949120));
    // 0x123954: 0x1ee7821  addu        $t7, $t7, $t6
    ctx->pc = 0x123954u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
    // 0x123958: 0x8ded0000  lw          $t5, 0x0($t7)
    ctx->pc = 0x123958u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x12395c: 0x1a00008  jr          $t5
    ctx->pc = 0x12395Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 13);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x123964u: goto label_123964;
            case 0x1246A8u: goto label_1246a8;
            case 0x1246ACu: goto label_1246ac;
            case 0x1246CCu: goto label_1246cc;
            case 0x1246D0u: goto label_1246d0;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12395Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x123964u;
label_123964:
    // 0x123964: 0xafa0000c  sw          $zero, 0xC($sp)
    ctx->pc = 0x123964u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
    // 0x123968: 0x24130012  addiu       $s3, $zero, 0x12
    ctx->pc = 0x123968u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_12396c:
    // 0x12396c: 0xaea00044  sw          $zero, 0x44($s5)
    ctx->pc = 0x12396cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 68), GPR_U32(ctx, 0));
    // 0x123970: 0x2e6f0018  sltiu       $t7, $s3, 0x18
    ctx->pc = 0x123970u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)24) ? 1 : 0);
    // 0x123974: 0x15e0000a  bnez        $t7, . + 4 + (0xA << 2)
    ctx->pc = 0x123974u;
    {
        const bool branch_taken_0x123974 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x123978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123974u;
        // 0x123978: 0x24100004  addiu       $s0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123974) {
            ctx->pc = 0x1239A0u;
            goto label_1239a0;
        }
    }
    ctx->pc = 0x12397Cu;
    // 0x12397c: 0x682d  daddu       $t5, $zero, $zero
    ctx->pc = 0x12397cu;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_123980:
    // 0x123980: 0x108040  sll         $s0, $s0, 1
    ctx->pc = 0x123980u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x123984: 0x260f0014  addiu       $t7, $s0, 0x14
    ctx->pc = 0x123984u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x123988: 0x26f782b  sltu        $t7, $s3, $t7
    ctx->pc = 0x123988u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 15)) ? 1 : 0);
    // 0x12398c: 0x0  nop
    ctx->pc = 0x12398cu;
    // NOP
    // 0x123990: 0x0  nop
    ctx->pc = 0x123990u;
    // NOP
    // 0x123994: 0x11e0fffa  beqz        $t7, . + 4 + (-0x6 << 2)
    ctx->pc = 0x123994u;
    {
        const bool branch_taken_0x123994 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x123998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123994u;
        // 0x123998: 0x25ad0001  addiu       $t5, $t5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123994) {
            ctx->pc = 0x123980u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_123980;
        }
    }
    ctx->pc = 0x12399Cu;
    // 0x12399c: 0xaead0044  sw          $t5, 0x44($s5)
    ctx->pc = 0x12399cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 68), GPR_U32(ctx, 13));
label_1239a0:
    // 0x1239a0: 0x8ea50044  lw          $a1, 0x44($s5)
    ctx->pc = 0x1239a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 68)));
    // 0x1239a4: 0xc049d12  jal         func_127448
    ctx->pc = 0x1239A4u;
    SET_GPR_U32(ctx, 31, 0x1239ACu);
    ctx->pc = 0x1239A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1239A4u;
    // 0x1239a8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127448u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127448u, 0x1239A4u, 0x1239ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1239ACu;
label_1239ac:
    // 0x1239ac: 0xafa20054  sw          $v0, 0x54($sp)
    ctx->pc = 0x1239acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 2));
    // 0x1239b0: 0x8fad0020  lw          $t5, 0x20($sp)
    ctx->pc = 0x1239b0u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1239b4: 0xaea20040  sw          $v0, 0x40($s5)
    ctx->pc = 0x1239b4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 64), GPR_U32(ctx, 2));
    // 0x1239b8: 0x2daf000f  sltiu       $t7, $t5, 0xF
    ctx->pc = 0x1239b8u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 13) < (uint64_t)(int64_t)(int32_t)15) ? 1 : 0);
    // 0x1239bc: 0x11e0006b  beqz        $t7, . + 4 + (0x6B << 2)
    ctx->pc = 0x1239BCu;
    {
        const bool branch_taken_0x1239bc = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x1239C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1239BCu;
        // 0x1239c0: 0x8fb60054  lw          $s6, 0x54($sp) (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1239bc) {
            ctx->pc = 0x123B6Cu;
            goto label_123b6c;
        }
    }
    ctx->pc = 0x1239C4u;
    // 0x1239c4: 0x12200069  beqz        $s1, . + 4 + (0x69 << 2)
    ctx->pc = 0x1239C4u;
    {
        const bool branch_taken_0x1239c4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1239C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1239C4u;
        // 0x1239c8: 0x8fae002c  lw          $t6, 0x2C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1239c4) {
            ctx->pc = 0x123B6Cu;
            goto label_123b6c;
        }
    }
    ctx->pc = 0x1239CCu;
    // 0x1239cc: 0x280b82d  daddu       $s7, $s4, $zero
    ctx->pc = 0x1239ccu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1239d0: 0xafad0024  sw          $t5, 0x24($sp)
    ctx->pc = 0x1239d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 13));
    // 0x1239d4: 0x24130002  addiu       $s3, $zero, 0x2
    ctx->pc = 0x1239d4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1239d8: 0x19c00316  blez        $t6, . + 4 + (0x316 << 2)
    ctx->pc = 0x1239D8u;
    {
        const bool branch_taken_0x1239d8 = (GPR_S32(ctx, 14) <= 0);
        ctx->pc = 0x1239DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1239D8u;
        // 0x1239dc: 0xafae0030  sw          $t6, 0x30($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1239d8) {
            ctx->pc = 0x124634u;
            goto label_124634;
        }
    }
    ctx->pc = 0x1239E0u;
    // 0x1239e0: 0x31cf000f  andi        $t7, $t6, 0xF
    ctx->pc = 0x1239e0u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)15);
    // 0x1239e4: 0x8fad002c  lw          $t5, 0x2C($sp)
    ctx->pc = 0x1239e4u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x1239e8: 0x3c0e003e  lui         $t6, 0x3E
    ctx->pc = 0x1239e8u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)62 << 16));
    // 0x1239ec: 0xf78c0  sll         $t7, $t7, 3
    ctx->pc = 0x1239ecu;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 15), 3));
    // 0x1239f0: 0x25ceb978  addiu       $t6, $t6, -0x4688
    ctx->pc = 0x1239f0u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294949240));
    // 0x1239f4: 0xd8103  sra         $s0, $t5, 4
    ctx->pc = 0x1239f4u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 13), 4));
    // 0x1239f8: 0x1ee7821  addu        $t7, $t7, $t6
    ctx->pc = 0x1239f8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
    // 0x1239fc: 0x320e0010  andi        $t6, $s0, 0x10
    ctx->pc = 0x1239fcu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)16);
    // 0x123a00: 0x11c00008  beqz        $t6, . + 4 + (0x8 << 2)
    ctx->pc = 0x123A00u;
    {
        const bool branch_taken_0x123a00 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        ctx->pc = 0x123A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123A00u;
        // 0x123a04: 0xddf10000  ld          $s1, 0x0($t7) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 15), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123a00) {
            ctx->pc = 0x123A24u;
            goto label_123a24;
        }
    }
    ctx->pc = 0x123A08u;
    // 0x123a08: 0x3c0f003e  lui         $t7, 0x3E
    ctx->pc = 0x123a08u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)62 << 16));
    // 0x123a0c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x123a0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123a10: 0xdde5ba60  ld          $a1, -0x45A0($t7)
    ctx->pc = 0x123a10u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 15), 4294949472)));
    // 0x123a14: 0x3210000f  andi        $s0, $s0, 0xF
    ctx->pc = 0x123a14u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)15);
    // 0x123a18: 0xc048b0a  jal         func_122C28
    ctx->pc = 0x123A18u;
    SET_GPR_U32(ctx, 31, 0x123A20u);
    ctx->pc = 0x123A1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x123A18u;
    // 0x123a1c: 0x24130003  addiu       $s3, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122C28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122C28u, 0x123A18u, 0x123A20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123A20u;
label_123a20:
    // 0x123a20: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x123a20u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_123a24:
    // 0x123a24: 0x1200000d  beqz        $s0, . + 4 + (0xD << 2)
    ctx->pc = 0x123A24u;
    {
        const bool branch_taken_0x123a24 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x123A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123A24u;
        // 0x123a28: 0x3c0f003e  lui         $t7, 0x3E (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)62 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123a24) {
            ctx->pc = 0x123A5Cu;
            goto label_123a5c;
        }
    }
    ctx->pc = 0x123A2Cu;
    // 0x123a2c: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x123a2cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123a30: 0x25f0ba40  addiu       $s0, $t7, -0x45C0
    ctx->pc = 0x123a30u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 15), 4294949440));
label_123a34:
    // 0x123a34: 0x324f0001  andi        $t7, $s2, 0x1
    ctx->pc = 0x123a34u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
    // 0x123a38: 0x11e00005  beqz        $t7, . + 4 + (0x5 << 2)
    ctx->pc = 0x123A38u;
    {
        const bool branch_taken_0x123a38 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x123A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123A38u;
        // 0x123a3c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123a38) {
            ctx->pc = 0x123A50u;
            goto label_123a50;
        }
    }
    ctx->pc = 0x123A40u;
    // 0x123a40: 0xde050000  ld          $a1, 0x0($s0)
    ctx->pc = 0x123a40u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x123a44: 0xc048a76  jal         func_1229D8
    ctx->pc = 0x123A44u;
    SET_GPR_U32(ctx, 31, 0x123A4Cu);
    ctx->pc = 0x123A48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x123A44u;
    // 0x123a48: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1229D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1229D8u, 0x123A44u, 0x123A4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123A4Cu;
label_123a4c:
    // 0x123a4c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x123a4cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_123a50:
    // 0x123a50: 0x129043  sra         $s2, $s2, 1
    ctx->pc = 0x123a50u;
    SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 18), 1));
    // 0x123a54: 0x1640fff7  bnez        $s2, . + 4 + (-0x9 << 2)
    ctx->pc = 0x123A54u;
    {
        const bool branch_taken_0x123a54 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x123A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123A54u;
        // 0x123a58: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123a54) {
            ctx->pc = 0x123A34u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_123a34;
        }
    }
    ctx->pc = 0x123A5Cu;
label_123a5c:
    // 0x123a5c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x123a5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123a60: 0xc048b0a  jal         func_122C28
    ctx->pc = 0x123A60u;
    SET_GPR_U32(ctx, 31, 0x123A68u);
    ctx->pc = 0x123A64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x123A60u;
    // 0x123a64: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122C28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122C28u, 0x123A60u, 0x123A68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123A68u;
label_123a68:
    // 0x123a68: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x123a68u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_123a6c:
    // 0x123a6c: 0x8faf0034  lw          $t7, 0x34($sp)
    ctx->pc = 0x123a6cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
label_123a70:
    // 0x123a70: 0x11e00013  beqz        $t7, . + 4 + (0x13 << 2)
    ctx->pc = 0x123A70u;
    {
        const bool branch_taken_0x123a70 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x123A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123A70u;
        // 0x123a74: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123a70) {
            ctx->pc = 0x123AC0u;
            goto label_123ac0;
        }
    }
    ctx->pc = 0x123A78u;
    // 0x123a78: 0x240503ff  addiu       $a1, $zero, 0x3FF
    ctx->pc = 0x123a78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1023));
    // 0x123a7c: 0xc048b9e  jal         func_122E78
    ctx->pc = 0x123A7Cu;
    SET_GPR_U32(ctx, 31, 0x123A84u);
    ctx->pc = 0x123A80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x123A7Cu;
    // 0x123a80: 0x52d3c  dsll32      $a1, $a1, 20 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122E78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122E78u, 0x123A7Cu, 0x123A84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123A84u;
label_123a84:
    // 0x123a84: 0x441000e  bgez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x123A84u;
    {
        const bool branch_taken_0x123a84 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x123A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123A84u;
        // 0x123a88: 0x8fad0020  lw          $t5, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123a84) {
            ctx->pc = 0x123AC0u;
            goto label_123ac0;
        }
    }
    ctx->pc = 0x123A8Cu;
    // 0x123a8c: 0x19a0000c  blez        $t5, . + 4 + (0xC << 2)
    ctx->pc = 0x123A8Cu;
    {
        const bool branch_taken_0x123a8c = (GPR_S32(ctx, 13) <= 0);
        ctx->pc = 0x123A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123A8Cu;
        // 0x123a90: 0x8fae0028  lw          $t6, 0x28($sp) (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123a8c) {
            ctx->pc = 0x123AC0u;
            goto label_123ac0;
        }
    }
    ctx->pc = 0x123A94u;
    // 0x123a94: 0x19c0002f  blez        $t6, . + 4 + (0x2F << 2)
    ctx->pc = 0x123A94u;
    {
        const bool branch_taken_0x123a94 = (GPR_S32(ctx, 14) <= 0);
        ctx->pc = 0x123A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123A94u;
        // 0x123a98: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123a94) {
            ctx->pc = 0x123B54u;
            goto label_123b54;
        }
    }
    ctx->pc = 0x123A9Cu;
    // 0x123a9c: 0x24041009  addiu       $a0, $zero, 0x1009
    ctx->pc = 0x123a9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4105));
    // 0x123aa0: 0xafae0020  sw          $t6, 0x20($sp)
    ctx->pc = 0x123aa0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 14));
    // 0x123aa4: 0xc048a76  jal         func_1229D8
    ctx->pc = 0x123AA4u;
    SET_GPR_U32(ctx, 31, 0x123AACu);
    ctx->pc = 0x123AA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x123AA4u;
    // 0x123aa8: 0x424bc  dsll32      $a0, $a0, 18 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1229D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1229D8u, 0x123AA4u, 0x123AACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123AACu;
label_123aac:
    // 0x123aac: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x123aacu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x123ab0: 0x8faf002c  lw          $t7, 0x2C($sp)
    ctx->pc = 0x123ab0u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x123ab4: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x123ab4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123ab8: 0x25efffff  addiu       $t7, $t7, -0x1
    ctx->pc = 0x123ab8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294967295));
    // 0x123abc: 0xafaf002c  sw          $t7, 0x2C($sp)
    ctx->pc = 0x123abcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 15));
label_123ac0:
    // 0x123ac0: 0xc048bb2  jal         func_122EC8
    ctx->pc = 0x123AC0u;
    SET_GPR_U32(ctx, 31, 0x123AC8u);
    ctx->pc = 0x123AC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x123AC0u;
    // 0x123ac4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122EC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122EC8u, 0x123AC0u, 0x123AC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123AC8u;
label_123ac8:
    // 0x123ac8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x123ac8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123acc: 0xc048a76  jal         func_1229D8
    ctx->pc = 0x123ACCu;
    SET_GPR_U32(ctx, 31, 0x123AD4u);
    ctx->pc = 0x123AD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x123ACCu;
    // 0x123ad0: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1229D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1229D8u, 0x123ACCu, 0x123AD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123AD4u;
label_123ad4:
    // 0x123ad4: 0x24051007  addiu       $a1, $zero, 0x1007
    ctx->pc = 0x123ad4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4103));
    // 0x123ad8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x123ad8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123adc: 0xc048a46  jal         func_122918
    ctx->pc = 0x123ADCu;
    SET_GPR_U32(ctx, 31, 0x123AE4u);
    ctx->pc = 0x123AE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x123ADCu;
    // 0x123ae0: 0x52cbc  dsll32      $a1, $a1, 18 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122918u, 0x123ADCu, 0x123AE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123AE4u;
label_123ae4:
    // 0x123ae4: 0x2783f  dsra32      $t7, $v0, 0
    ctx->pc = 0x123ae4u;
    SET_GPR_S64(ctx, 15, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x123ae8: 0x8fad0020  lw          $t5, 0x20($sp)
    ctx->pc = 0x123ae8u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x123aec: 0x3c0efcc0  lui         $t6, 0xFCC0
    ctx->pc = 0x123aecu;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)64704 << 16));
    // 0x123af0: 0x2903c  dsll32      $s2, $v0, 0
    ctx->pc = 0x123af0u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) << (32 + 0));
    // 0x123af4: 0x1ee7821  addu        $t7, $t7, $t6
    ctx->pc = 0x123af4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
    // 0x123af8: 0x12903e  dsrl32      $s2, $s2, 0
    ctx->pc = 0x123af8u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) >> (32 + 0));
    // 0x123afc: 0xf783c  dsll32      $t7, $t7, 0
    ctx->pc = 0x123afcu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) << (32 + 0));
    // 0x123b00: 0x15a0025a  bnez        $t5, . + 4 + (0x25A << 2)
    ctx->pc = 0x123B00u;
    {
        const bool branch_taken_0x123b00 = (GPR_U64(ctx, 13) != GPR_U64(ctx, 0));
        ctx->pc = 0x123B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123B00u;
        // 0x123b04: 0x24f9025  or          $s2, $s2, $t7 (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123b00) {
            ctx->pc = 0x12446Cu;
            goto label_12446c;
        }
    }
    ctx->pc = 0x123B08u;
    // 0x123b08: 0x24051005  addiu       $a1, $zero, 0x1005
    ctx->pc = 0x123b08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4101));
    // 0x123b0c: 0xafa0004c  sw          $zero, 0x4C($sp)
    ctx->pc = 0x123b0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 0));
    // 0x123b10: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x123b10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123b14: 0xc048a5c  jal         func_122970
    ctx->pc = 0x123B14u;
    SET_GPR_U32(ctx, 31, 0x123B1Cu);
    ctx->pc = 0x123B18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x123B14u;
    // 0x123b18: 0x52cbc  dsll32      $a1, $a1, 18 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122970u, 0x123B14u, 0x123B1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123B1Cu;
label_123b1c:
    // 0x123b1c: 0xafa00050  sw          $zero, 0x50($sp)
    ctx->pc = 0x123b1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
    // 0x123b20: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x123b20u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123b24: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x123b24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123b28: 0xc048b9e  jal         func_122E78
    ctx->pc = 0x123B28u;
    SET_GPR_U32(ctx, 31, 0x123B30u);
    ctx->pc = 0x123B2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x123B28u;
    // 0x123b2c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122E78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122E78u, 0x123B28u, 0x123B30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123B30u;
label_123b30:
    // 0x123b30: 0x440002a  bltz        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x123B30u;
    {
        const bool branch_taken_0x123b30 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x123B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123B30u;
        // 0x123b34: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123b30) {
            ctx->pc = 0x123BDCu;
            goto label_123bdc;
        }
    }
    ctx->pc = 0x123B38u;
    // 0x123b38: 0xc048a5c  jal         func_122970
    ctx->pc = 0x123B38u;
    SET_GPR_U32(ctx, 31, 0x123B40u);
    ctx->pc = 0x123B3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x123B38u;
    // 0x123b3c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122970u, 0x123B38u, 0x123B40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123B40u;
label_123b40:
    // 0x123b40: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x123b40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123b44: 0xc048b9e  jal         func_122E78
    ctx->pc = 0x123B44u;
    SET_GPR_U32(ctx, 31, 0x123B4Cu);
    ctx->pc = 0x123B48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x123B44u;
    // 0x123b48: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122E78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122E78u, 0x123B44u, 0x123B4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123B4Cu;
label_123b4c:
    // 0x123b4c: 0x4400048  bltz        $v0, . + 4 + (0x48 << 2)
    ctx->pc = 0x123B4Cu;
    {
        const bool branch_taken_0x123b4c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x123B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123B4Cu;
        // 0x123b50: 0x8faf000c  lw          $t7, 0xC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123b4c) {
            ctx->pc = 0x123C70u;
            goto label_123c70;
        }
    }
    ctx->pc = 0x123B54u;
label_123b54:
    // 0x123b54: 0x8fae0030  lw          $t6, 0x30($sp)
    ctx->pc = 0x123b54u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x123b58: 0x2e0a02d  daddu       $s4, $s7, $zero
    ctx->pc = 0x123b58u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123b5c: 0x8faf0024  lw          $t7, 0x24($sp)
    ctx->pc = 0x123b5cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x123b60: 0xafae002c  sw          $t6, 0x2C($sp)
    ctx->pc = 0x123b60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 14));
    // 0x123b64: 0xafaf0020  sw          $t7, 0x20($sp)
    ctx->pc = 0x123b64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 15));
    // 0x123b68: 0x8fb60054  lw          $s6, 0x54($sp)
    ctx->pc = 0x123b68u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
label_123b6c:
    // 0x123b6c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x123b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x123b70: 0x440008e  bltz        $v0, . + 4 + (0x8E << 2)
    ctx->pc = 0x123B70u;
    {
        const bool branch_taken_0x123b70 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x123B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123B70u;
        // 0x123b74: 0x8fad002c  lw          $t5, 0x2C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123b70) {
            ctx->pc = 0x123DACu;
            goto label_123dac;
        }
    }
    ctx->pc = 0x123B78u;
    // 0x123b78: 0x29af000f  slti        $t7, $t5, 0xF
    ctx->pc = 0x123b78u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 13) < (int64_t)(int32_t)15) ? 1 : 0);
    // 0x123b7c: 0x11e0008b  beqz        $t7, . + 4 + (0x8B << 2)
    ctx->pc = 0x123B7Cu;
    {
        const bool branch_taken_0x123b7c = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x123B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123B7Cu;
        // 0x123b80: 0x3c0f003e  lui         $t7, 0x3E (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)62 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123b7c) {
            ctx->pc = 0x123DACu;
            goto label_123dac;
        }
    }
    ctx->pc = 0x123B84u;
    // 0x123b84: 0xd70c0  sll         $t6, $t5, 3
    ctx->pc = 0x123b84u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 13), 3));
    // 0x123b88: 0x25efb978  addiu       $t7, $t7, -0x4688
    ctx->pc = 0x123b88u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294949240));
    // 0x123b8c: 0x1cf7021  addu        $t6, $t6, $t7
    ctx->pc = 0x123b8cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 15)));
    // 0x123b90: 0xddd10000  ld          $s1, 0x0($t6)
    ctx->pc = 0x123b90u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x123b94: 0x8fae000c  lw          $t6, 0xC($sp)
    ctx->pc = 0x123b94u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x123b98: 0x5c30038  bgezl       $t6, . + 4 + (0x38 << 2)
    ctx->pc = 0x123B98u;
    {
        const bool branch_taken_0x123b98 = (GPR_S32(ctx, 14) >= 0);
        if (branch_taken_0x123b98) {
            ctx->pc = 0x123B9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x123B98u;
            // 0x123b9c: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x123C7Cu;
            goto label_123c7c;
        }
    }
    ctx->pc = 0x123BA0u;
    // 0x123ba0: 0x8faf0020  lw          $t7, 0x20($sp)
    ctx->pc = 0x123ba0u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x123ba4: 0x5de00035  bgtzl       $t7, . + 4 + (0x35 << 2)
    ctx->pc = 0x123BA4u;
    {
        const bool branch_taken_0x123ba4 = (GPR_S32(ctx, 15) > 0);
        if (branch_taken_0x123ba4) {
            ctx->pc = 0x123BA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x123BA4u;
            // 0x123ba8: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x123C7Cu;
            goto label_123c7c;
        }
    }
    ctx->pc = 0x123BACu;
    // 0x123bac: 0xafa0004c  sw          $zero, 0x4C($sp)
    ctx->pc = 0x123bacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 0));
    // 0x123bb0: 0x5e0002e  bltz        $t7, . + 4 + (0x2E << 2)
    ctx->pc = 0x123BB0u;
    {
        const bool branch_taken_0x123bb0 = (GPR_S32(ctx, 15) < 0);
        ctx->pc = 0x123BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123BB0u;
        // 0x123bb4: 0xafa00050  sw          $zero, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123bb0) {
            ctx->pc = 0x123C6Cu;
            goto label_123c6c;
        }
    }
    ctx->pc = 0x123BB8u;
    // 0x123bb8: 0x24051005  addiu       $a1, $zero, 0x1005
    ctx->pc = 0x123bb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4101));
    // 0x123bbc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x123bbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123bc0: 0xc048a76  jal         func_1229D8
    ctx->pc = 0x123BC0u;
    SET_GPR_U32(ctx, 31, 0x123BC8u);
    ctx->pc = 0x123BC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x123BC0u;
    // 0x123bc4: 0x52cbc  dsll32      $a1, $a1, 18 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1229D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1229D8u, 0x123BC0u, 0x123BC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123BC8u;
label_123bc8:
    // 0x123bc8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x123bc8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123bcc: 0xc048b9e  jal         func_122E78
    ctx->pc = 0x123BCCu;
    SET_GPR_U32(ctx, 31, 0x123BD4u);
    ctx->pc = 0x123BD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x123BCCu;
    // 0x123bd0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122E78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122E78u, 0x123BCCu, 0x123BD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123BD4u;
label_123bd4:
    // 0x123bd4: 0x18400026  blez        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x123BD4u;
    {
        const bool branch_taken_0x123bd4 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x123BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123BD4u;
        // 0x123bd8: 0x8faf000c  lw          $t7, 0xC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123bd4) {
            ctx->pc = 0x123C70u;
            goto label_123c70;
        }
    }
    ctx->pc = 0x123BDCu;
label_123bdc:
    // 0x123bdc: 0x8fad0054  lw          $t5, 0x54($sp)
    ctx->pc = 0x123bdcu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
label_123be0:
    // 0x123be0: 0x240f0031  addiu       $t7, $zero, 0x31
    ctx->pc = 0x123be0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
    // 0x123be4: 0xa1af0000  sb          $t7, 0x0($t5)
    ctx->pc = 0x123be4u;
    WRITE8(ADD32(GPR_U32(ctx, 13), 0), (uint8_t)GPR_U32(ctx, 15));
    // 0x123be8: 0x25b60001  addiu       $s6, $t5, 0x1
    ctx->pc = 0x123be8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 13), 1));
    // 0x123bec: 0x8fae002c  lw          $t6, 0x2C($sp)
    ctx->pc = 0x123becu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x123bf0: 0x25ce0001  addiu       $t6, $t6, 0x1
    ctx->pc = 0x123bf0u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 1));
    // 0x123bf4: 0xafae002c  sw          $t6, 0x2C($sp)
    ctx->pc = 0x123bf4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 14));
label_123bf8:
    // 0x123bf8: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x123bf8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x123bfc: 0xc049d3c  jal         func_1274F0
    ctx->pc = 0x123BFCu;
    SET_GPR_U32(ctx, 31, 0x123C04u);
    ctx->pc = 0x123C00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x123BFCu;
    // 0x123c00: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1274F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1274F0u, 0x123BFCu, 0x123C04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123C04u;
label_123c04:
    // 0x123c04: 0x8faf004c  lw          $t7, 0x4C($sp)
    ctx->pc = 0x123c04u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x123c08: 0x11e0000b  beqz        $t7, . + 4 + (0xB << 2)
    ctx->pc = 0x123C08u;
    {
        const bool branch_taken_0x123c08 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x123C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123C08u;
        // 0x123c0c: 0x8fad0048  lw          $t5, 0x48($sp) (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123c08) {
            ctx->pc = 0x123C38u;
            goto label_123c38;
        }
    }
    ctx->pc = 0x123C10u;
    // 0x123c10: 0x11a00007  beqz        $t5, . + 4 + (0x7 << 2)
    ctx->pc = 0x123C10u;
    {
        const bool branch_taken_0x123c10 = (GPR_U64(ctx, 13) == GPR_U64(ctx, 0));
        ctx->pc = 0x123C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123C10u;
        // 0x123c14: 0x8fa5004c  lw          $a1, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123c10) {
            ctx->pc = 0x123C30u;
            goto label_123c30;
        }
    }
    ctx->pc = 0x123C18u;
    // 0x123c18: 0x11af0005  beq         $t5, $t7, . + 4 + (0x5 << 2)
    ctx->pc = 0x123C18u;
    {
        const bool branch_taken_0x123c18 = (GPR_U64(ctx, 13) == GPR_U64(ctx, 15));
        if (branch_taken_0x123c18) {
            ctx->pc = 0x123C30u;
            goto label_123c30;
        }
    }
    ctx->pc = 0x123C20u;
    // 0x123c20: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x123c20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x123c24: 0xc049d3c  jal         func_1274F0
    ctx->pc = 0x123C24u;
    SET_GPR_U32(ctx, 31, 0x123C2Cu);
    ctx->pc = 0x123C28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x123C24u;
    // 0x123c28: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1274F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1274F0u, 0x123C24u, 0x123C2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123C2Cu;
label_123c2c:
    // 0x123c2c: 0x8fa5004c  lw          $a1, 0x4C($sp)
    ctx->pc = 0x123c2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
label_123c30:
    // 0x123c30: 0xc049d3c  jal         func_1274F0
    ctx->pc = 0x123C30u;
    SET_GPR_U32(ctx, 31, 0x123C38u);
    ctx->pc = 0x123C34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x123C30u;
    // 0x123c34: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1274F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1274F0u, 0x123C30u, 0x123C38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123C38u;
label_123c38:
    // 0x123c38: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x123c38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_123c3c:
    // 0x123c3c: 0xc049d3c  jal         func_1274F0
    ctx->pc = 0x123C3Cu;
    SET_GPR_U32(ctx, 31, 0x123C44u);
    ctx->pc = 0x123C40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x123C3Cu;
    // 0x123c40: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1274F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1274F0u, 0x123C3Cu, 0x123C44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123C44u;
label_123c44:
    // 0x123c44: 0xa2c00000  sb          $zero, 0x0($s6)
    ctx->pc = 0x123c44u;
    WRITE8(ADD32(GPR_U32(ctx, 22), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x123c48: 0x8fae002c  lw          $t6, 0x2C($sp)
    ctx->pc = 0x123c48u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x123c4c: 0x8fad0010  lw          $t5, 0x10($sp)
    ctx->pc = 0x123c4cu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x123c50: 0x25cf0001  addiu       $t7, $t6, 0x1
    ctx->pc = 0x123c50u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 14), 1));
    // 0x123c54: 0xadaf0000  sw          $t7, 0x0($t5)
    ctx->pc = 0x123c54u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 15));
    // 0x123c58: 0x8fae0014  lw          $t6, 0x14($sp)
    ctx->pc = 0x123c58u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x123c5c: 0x55c00001  bnel        $t6, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x123C5Cu;
    {
        const bool branch_taken_0x123c5c = (GPR_U64(ctx, 14) != GPR_U64(ctx, 0));
        if (branch_taken_0x123c5c) {
            ctx->pc = 0x123C60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x123C5Cu;
            // 0x123c60: 0xadd60000  sw          $s6, 0x0($t6) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 22));
            ctx->in_delay_slot = false;
            ctx->pc = 0x123C64u;
            goto label_123c64;
        }
    }
    ctx->pc = 0x123C64u;
label_123c64:
    // 0x123c64: 0x1000fea7  b           . + 4 + (-0x159 << 2)
    ctx->pc = 0x123C64u;
    {
        const bool branch_taken_0x123c64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x123C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123C64u;
        // 0x123c68: 0x8fa20054  lw          $v0, 0x54($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123c64) {
            ctx->pc = 0x123704u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_123704;
        }
    }
    ctx->pc = 0x123C6Cu;
label_123c6c:
    // 0x123c6c: 0x8faf000c  lw          $t7, 0xC($sp)
    ctx->pc = 0x123c6cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
label_123c70:
    // 0x123c70: 0xf7827  nor         $t7, $zero, $t7
    ctx->pc = 0x123c70u;
    SET_GPR_U64(ctx, 15, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 15)));
    // 0x123c74: 0x1000ffe0  b           . + 4 + (-0x20 << 2)
    ctx->pc = 0x123C74u;
    {
        const bool branch_taken_0x123c74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x123C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123C74u;
        // 0x123c78: 0xafaf002c  sw          $t7, 0x2C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123c74) {
            ctx->pc = 0x123BF8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_123bf8;
        }
    }
    ctx->pc = 0x123C7Cu;
label_123c7c:
    // 0x123c7c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x123c7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_123c80:
    // 0x123c80: 0xc048b0a  jal         func_122C28
    ctx->pc = 0x123C80u;
    SET_GPR_U32(ctx, 31, 0x123C88u);
    ctx->pc = 0x123C84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x123C80u;
    // 0x123c84: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122C28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122C28u, 0x123C80u, 0x123C88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123C88u;
label_123c88:
    // 0x123c88: 0xc048bde  jal         func_122F78
    ctx->pc = 0x123C88u;
    SET_GPR_U32(ctx, 31, 0x123C90u);
    ctx->pc = 0x123C8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x123C88u;
    // 0x123c8c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122F78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122F78u, 0x123C88u, 0x123C90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123C90u;
label_123c90:
    // 0x123c90: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x123c90u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123c94: 0xc048bb2  jal         func_122EC8
    ctx->pc = 0x123C94u;
    SET_GPR_U32(ctx, 31, 0x123C9Cu);
    ctx->pc = 0x123C98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x123C94u;
    // 0x123c98: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122EC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122EC8u, 0x123C94u, 0x123C9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123C9Cu;
label_123c9c:
    // 0x123c9c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x123c9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123ca0: 0xc048a76  jal         func_1229D8
    ctx->pc = 0x123CA0u;
    SET_GPR_U32(ctx, 31, 0x123CA8u);
    ctx->pc = 0x123CA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x123CA0u;
    // 0x123ca4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1229D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1229D8u, 0x123CA0u, 0x123CA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123CA8u;
label_123ca8:
    // 0x123ca8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x123ca8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123cac: 0xc048a5c  jal         func_122970
    ctx->pc = 0x123CACu;
    SET_GPR_U32(ctx, 31, 0x123CB4u);
    ctx->pc = 0x123CB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x123CACu;
    // 0x123cb0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122970u, 0x123CACu, 0x123CB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123CB4u;
label_123cb4:
    // 0x123cb4: 0x260f0030  addiu       $t7, $s0, 0x30
    ctx->pc = 0x123cb4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x123cb8: 0xa2cf0000  sb          $t7, 0x0($s6)
    ctx->pc = 0x123cb8u;
    WRITE8(ADD32(GPR_U32(ctx, 22), 0), (uint8_t)GPR_U32(ctx, 15));
    // 0x123cbc: 0x8fad0020  lw          $t5, 0x20($sp)
    ctx->pc = 0x123cbcu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x123cc0: 0x166d002d  bne         $s3, $t5, . + 4 + (0x2D << 2)
    ctx->pc = 0x123CC0u;
    {
        const bool branch_taken_0x123cc0 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 13));
        ctx->pc = 0x123CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123CC0u;
        // 0x123cc4: 0x26d60001  addiu       $s6, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123cc0) {
            ctx->pc = 0x123D78u;
            goto label_123d78;
        }
    }
    ctx->pc = 0x123CC8u;
    // 0x123cc8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x123cc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123ccc: 0xc048a46  jal         func_122918
    ctx->pc = 0x123CCCu;
    SET_GPR_U32(ctx, 31, 0x123CD4u);
    ctx->pc = 0x123CD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x123CCCu;
    // 0x123cd0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122918u, 0x123CCCu, 0x123CD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123CD4u;
label_123cd4:
    // 0x123cd4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x123cd4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123cd8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x123cd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123cdc: 0xc048b9e  jal         func_122E78
    ctx->pc = 0x123CDCu;
    SET_GPR_U32(ctx, 31, 0x123CE4u);
    ctx->pc = 0x123CE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x123CDCu;
    // 0x123ce0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122E78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122E78u, 0x123CDCu, 0x123CE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123CE4u;
label_123ce4:
    // 0x123ce4: 0x4400007  bltz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x123CE4u;
    {
        const bool branch_taken_0x123ce4 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x123CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123CE4u;
        // 0x123ce8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123ce4) {
            ctx->pc = 0x123D04u;
            goto label_123d04;
        }
    }
    ctx->pc = 0x123CECu;
    // 0x123cec: 0xc048b9e  jal         func_122E78
    ctx->pc = 0x123CECu;
    SET_GPR_U32(ctx, 31, 0x123CF4u);
    ctx->pc = 0x123CF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x123CECu;
    // 0x123cf0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122E78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122E78u, 0x123CECu, 0x123CF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123CF4u;
label_123cf4:
    // 0x123cf4: 0x1440ffd0  bnez        $v0, . + 4 + (-0x30 << 2)
    ctx->pc = 0x123CF4u;
    {
        const bool branch_taken_0x123cf4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x123CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123CF4u;
        // 0x123cf8: 0x320f0001  andi        $t7, $s0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 15, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x123cf4) {
            ctx->pc = 0x123C38u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_123c38;
        }
    }
    ctx->pc = 0x123CFCu;
    // 0x123cfc: 0x11e0ffcf  beqz        $t7, . + 4 + (-0x31 << 2)
    ctx->pc = 0x123CFCu;
    {
        const bool branch_taken_0x123cfc = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x123D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123CFCu;
        // 0x123d00: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123cfc) {
            ctx->pc = 0x123C3Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_123c3c;
        }
    }
    ctx->pc = 0x123D04u;
label_123d04:
    // 0x123d04: 0x26d6ffff  addiu       $s6, $s6, -0x1
    ctx->pc = 0x123d04u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967295));
    // 0x123d08: 0x240f0039  addiu       $t7, $zero, 0x39
    ctx->pc = 0x123d08u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
    // 0x123d0c: 0x92cd0000  lbu         $t5, 0x0($s6)
    ctx->pc = 0x123d0cu;
    SET_GPR_U32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x123d10: 0xd7600  sll         $t6, $t5, 24
    ctx->pc = 0x123d10u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 13), 24));
    // 0x123d14: 0xe7603  sra         $t6, $t6, 24
    ctx->pc = 0x123d14u;
    SET_GPR_S32(ctx, 14, SRA32(GPR_S32(ctx, 14), 24));
    // 0x123d18: 0x15cf000c  bne         $t6, $t7, . + 4 + (0xC << 2)
    ctx->pc = 0x123D18u;
    {
        const bool branch_taken_0x123d18 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 15));
        ctx->pc = 0x123D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123D18u;
        // 0x123d1c: 0x25af0001  addiu       $t7, $t5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 13), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123d18) {
            ctx->pc = 0x123D4Cu;
            goto label_123d4c;
        }
    }
    ctx->pc = 0x123D20u;
    // 0x123d20: 0x240e0039  addiu       $t6, $zero, 0x39
    ctx->pc = 0x123d20u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
    // 0x123d24: 0x8faf0054  lw          $t7, 0x54($sp)
    ctx->pc = 0x123d24u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
label_123d28:
    // 0x123d28: 0x12cf000b  beq         $s6, $t7, . + 4 + (0xB << 2)
    ctx->pc = 0x123D28u;
    {
        const bool branch_taken_0x123d28 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 15));
        ctx->pc = 0x123D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123D28u;
        // 0x123d2c: 0x8fad002c  lw          $t5, 0x2C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123d28) {
            ctx->pc = 0x123D58u;
            goto label_123d58;
        }
    }
    ctx->pc = 0x123D30u;
    // 0x123d30: 0x26d6ffff  addiu       $s6, $s6, -0x1
    ctx->pc = 0x123d30u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967295));
    // 0x123d34: 0x92cd0000  lbu         $t5, 0x0($s6)
    ctx->pc = 0x123d34u;
    SET_GPR_U32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x123d38: 0xd7e00  sll         $t7, $t5, 24
    ctx->pc = 0x123d38u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 13), 24));
    // 0x123d3c: 0xf7e03  sra         $t7, $t7, 24
    ctx->pc = 0x123d3cu;
    SET_GPR_S32(ctx, 15, SRA32(GPR_S32(ctx, 15), 24));
    // 0x123d40: 0x11eefff9  beq         $t7, $t6, . + 4 + (-0x7 << 2)
    ctx->pc = 0x123D40u;
    {
        const bool branch_taken_0x123d40 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 14));
        ctx->pc = 0x123D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123D40u;
        // 0x123d44: 0x8faf0054  lw          $t7, 0x54($sp) (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123d40) {
            ctx->pc = 0x123D28u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_123d28;
        }
    }
    ctx->pc = 0x123D48u;
label_123d48:
    // 0x123d48: 0x25af0001  addiu       $t7, $t5, 0x1
    ctx->pc = 0x123d48u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 13), 1));
label_123d4c:
    // 0x123d4c: 0xa2cf0000  sb          $t7, 0x0($s6)
    ctx->pc = 0x123d4cu;
    WRITE8(ADD32(GPR_U32(ctx, 22), 0), (uint8_t)GPR_U32(ctx, 15));
    // 0x123d50: 0x1000ffb9  b           . + 4 + (-0x47 << 2)
    ctx->pc = 0x123D50u;
    {
        const bool branch_taken_0x123d50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x123D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123D50u;
        // 0x123d54: 0x26d60001  addiu       $s6, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123d50) {
            ctx->pc = 0x123C38u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_123c38;
        }
    }
    ctx->pc = 0x123D58u;
label_123d58:
    // 0x123d58: 0x240f0030  addiu       $t7, $zero, 0x30
    ctx->pc = 0x123d58u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x123d5c: 0x8fae0054  lw          $t6, 0x54($sp)
    ctx->pc = 0x123d5cu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
    // 0x123d60: 0x25ad0001  addiu       $t5, $t5, 0x1
    ctx->pc = 0x123d60u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 1));
    // 0x123d64: 0xafad002c  sw          $t5, 0x2C($sp)
    ctx->pc = 0x123d64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 13));
    // 0x123d68: 0xa1cf0000  sb          $t7, 0x0($t6)
    ctx->pc = 0x123d68u;
    WRITE8(ADD32(GPR_U32(ctx, 14), 0), (uint8_t)GPR_U32(ctx, 15));
    // 0x123d6c: 0x1000fff6  b           . + 4 + (-0xA << 2)
    ctx->pc = 0x123D6Cu;
    {
        const bool branch_taken_0x123d6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x123D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123D6Cu;
        // 0x123d70: 0x240d0030  addiu       $t5, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123d6c) {
            ctx->pc = 0x123D48u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_123d48;
        }
    }
    ctx->pc = 0x123D74u;
    // 0x123d74: 0x0  nop
    ctx->pc = 0x123d74u;
    // NOP
label_123d78:
    // 0x123d78: 0x24041009  addiu       $a0, $zero, 0x1009
    ctx->pc = 0x123d78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4105));
    // 0x123d7c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x123d7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123d80: 0x424bc  dsll32      $a0, $a0, 18
    ctx->pc = 0x123d80u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 18));
    // 0x123d84: 0xc048a76  jal         func_1229D8
    ctx->pc = 0x123D84u;
    SET_GPR_U32(ctx, 31, 0x123D8Cu);
    ctx->pc = 0x123D88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x123D84u;
    // 0x123d88: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1229D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1229D8u, 0x123D84u, 0x123D8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123D8Cu;
label_123d8c:
    // 0x123d8c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x123d8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123d90: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x123d90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123d94: 0xc048b9e  jal         func_122E78
    ctx->pc = 0x123D94u;
    SET_GPR_U32(ctx, 31, 0x123D9Cu);
    ctx->pc = 0x123D98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x123D94u;
    // 0x123d98: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122E78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122E78u, 0x123D94u, 0x123D9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123D9Cu;
label_123d9c:
    // 0x123d9c: 0x1440ffb8  bnez        $v0, . + 4 + (-0x48 << 2)
    ctx->pc = 0x123D9Cu;
    {
        const bool branch_taken_0x123d9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x123DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123D9Cu;
        // 0x123da0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123d9c) {
            ctx->pc = 0x123C80u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_123c80;
        }
    }
    ctx->pc = 0x123DA4u;
    // 0x123da4: 0x1000ffa5  b           . + 4 + (-0x5B << 2)
    ctx->pc = 0x123DA4u;
    {
        const bool branch_taken_0x123da4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x123DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123DA4u;
        // 0x123da8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123da4) {
            ctx->pc = 0x123C3Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_123c3c;
        }
    }
    ctx->pc = 0x123DACu;
label_123dac:
    // 0x123dac: 0x8faf0008  lw          $t7, 0x8($sp)
    ctx->pc = 0x123dacu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x123db0: 0x8fb10018  lw          $s1, 0x18($sp)
    ctx->pc = 0x123db0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x123db4: 0x8fb2001c  lw          $s2, 0x1C($sp)
    ctx->pc = 0x123db4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x123db8: 0xafa00048  sw          $zero, 0x48($sp)
    ctx->pc = 0x123db8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 0));
    // 0x123dbc: 0xafa0004c  sw          $zero, 0x4C($sp)
    ctx->pc = 0x123dbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 0));
    // 0x123dc0: 0x8fad0038  lw          $t5, 0x38($sp)
    ctx->pc = 0x123dc0u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x123dc4: 0x11a00012  beqz        $t5, . + 4 + (0x12 << 2)
    ctx->pc = 0x123DC4u;
    {
        const bool branch_taken_0x123dc4 = (GPR_U64(ctx, 13) == GPR_U64(ctx, 0));
        ctx->pc = 0x123DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123DC4u;
        // 0x123dc8: 0x29f70002  slti        $s7, $t7, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 23, ((int64_t)GPR_S64(ctx, 15) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x123dc4) {
            ctx->pc = 0x123E10u;
            goto label_123e10;
        }
    }
    ctx->pc = 0x123DCCu;
    // 0x123dcc: 0x12e00193  beqz        $s7, . + 4 + (0x193 << 2)
    ctx->pc = 0x123DCCu;
    {
        const bool branch_taken_0x123dcc = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x123DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123DCCu;
        // 0x123dd0: 0x8fae0044  lw          $t6, 0x44($sp) (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123dcc) {
            ctx->pc = 0x12441Cu;
            goto label_12441c;
        }
    }
    ctx->pc = 0x123DD4u;
    // 0x123dd4: 0x15c00004  bnez        $t6, . + 4 + (0x4 << 2)
    ctx->pc = 0x123DD4u;
    {
        const bool branch_taken_0x123dd4 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 0));
        ctx->pc = 0x123DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123DD4u;
        // 0x123dd8: 0x24530433  addiu       $s3, $v0, 0x433 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 1075));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123dd4) {
            ctx->pc = 0x123DE8u;
            goto label_123de8;
        }
    }
    ctx->pc = 0x123DDCu;
    // 0x123ddc: 0x8faf0004  lw          $t7, 0x4($sp)
    ctx->pc = 0x123ddcu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x123de0: 0x240e0036  addiu       $t6, $zero, 0x36
    ctx->pc = 0x123de0u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
    // 0x123de4: 0x1cf9823  subu        $s3, $t6, $t7
    ctx->pc = 0x123de4u;
    SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 14), GPR_U32(ctx, 15)));
label_123de8:
    // 0x123de8: 0x8fad003c  lw          $t5, 0x3C($sp)
    ctx->pc = 0x123de8u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_123dec:
    // 0x123dec: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x123decu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123df0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x123df0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x123df4: 0x1b36821  addu        $t5, $t5, $s3
    ctx->pc = 0x123df4u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 19)));
    // 0x123df8: 0xc049e26  jal         func_127898
    ctx->pc = 0x123DF8u;
    SET_GPR_U32(ctx, 31, 0x123E00u);
    ctx->pc = 0x123DFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x123DF8u;
    // 0x123dfc: 0xafad003c  sw          $t5, 0x3C($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 13));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127898u, 0x123DF8u, 0x123E00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123E00u;
label_123e00:
    // 0x123e00: 0x8fae0018  lw          $t6, 0x18($sp)
    ctx->pc = 0x123e00u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x123e04: 0xafa2004c  sw          $v0, 0x4C($sp)
    ctx->pc = 0x123e04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
    // 0x123e08: 0x1d37021  addu        $t6, $t6, $s3
    ctx->pc = 0x123e08u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 19)));
    // 0x123e0c: 0xafae0018  sw          $t6, 0x18($sp)
    ctx->pc = 0x123e0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 14));
label_123e10:
    // 0x123e10: 0x1a20000c  blez        $s1, . + 4 + (0xC << 2)
    ctx->pc = 0x123E10u;
    {
        const bool branch_taken_0x123e10 = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x123E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123E10u;
        // 0x123e14: 0x8faf003c  lw          $t7, 0x3C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123e10) {
            ctx->pc = 0x123E44u;
            goto label_123e44;
        }
    }
    ctx->pc = 0x123E18u;
    // 0x123e18: 0x19e0000a  blez        $t7, . + 4 + (0xA << 2)
    ctx->pc = 0x123E18u;
    {
        const bool branch_taken_0x123e18 = (GPR_S32(ctx, 15) <= 0);
        ctx->pc = 0x123E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123E18u;
        // 0x123e1c: 0x8fb3003c  lw          $s3, 0x3C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123e18) {
            ctx->pc = 0x123E44u;
            goto label_123e44;
        }
    }
    ctx->pc = 0x123E20u;
    // 0x123e20: 0x8fad003c  lw          $t5, 0x3C($sp)
    ctx->pc = 0x123e20u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x123e24: 0x233782a  slt         $t7, $s1, $s3
    ctx->pc = 0x123e24u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x123e28: 0x8fae0018  lw          $t6, 0x18($sp)
    ctx->pc = 0x123e28u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x123e2c: 0x22f980b  movn        $s3, $s1, $t7
    ctx->pc = 0x123e2cu;
    if (GPR_U64(ctx, 15) != 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 17));
    // 0x123e30: 0x1b36823  subu        $t5, $t5, $s3
    ctx->pc = 0x123e30u;
    SET_GPR_S32(ctx, 13, (int32_t)SUB32(GPR_U32(ctx, 13), GPR_U32(ctx, 19)));
    // 0x123e34: 0x1d37023  subu        $t6, $t6, $s3
    ctx->pc = 0x123e34u;
    SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 14), GPR_U32(ctx, 19)));
    // 0x123e38: 0xafad003c  sw          $t5, 0x3C($sp)
    ctx->pc = 0x123e38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 13));
    // 0x123e3c: 0x2338823  subu        $s1, $s1, $s3
    ctx->pc = 0x123e3cu;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 19)));
    // 0x123e40: 0xafae0018  sw          $t6, 0x18($sp)
    ctx->pc = 0x123e40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 14));
label_123e44:
    // 0x123e44: 0x8faf001c  lw          $t7, 0x1C($sp)
    ctx->pc = 0x123e44u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x123e48: 0x19e0001a  blez        $t7, . + 4 + (0x1A << 2)
    ctx->pc = 0x123E48u;
    {
        const bool branch_taken_0x123e48 = (GPR_S32(ctx, 15) <= 0);
        ctx->pc = 0x123E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123E48u;
        // 0x123e4c: 0x8fad0038  lw          $t5, 0x38($sp) (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123e48) {
            ctx->pc = 0x123EB4u;
            goto label_123eb4;
        }
    }
    ctx->pc = 0x123E50u;
    // 0x123e50: 0x11a00170  beqz        $t5, . + 4 + (0x170 << 2)
    ctx->pc = 0x123E50u;
    {
        const bool branch_taken_0x123e50 = (GPR_U64(ctx, 13) == GPR_U64(ctx, 0));
        ctx->pc = 0x123E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123E50u;
        // 0x123e54: 0x8fa6001c  lw          $a2, 0x1C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123e50) {
            ctx->pc = 0x124414u;
            goto label_124414;
        }
    }
    ctx->pc = 0x123E58u;
    // 0x123e58: 0x1a40000e  blez        $s2, . + 4 + (0xE << 2)
    ctx->pc = 0x123E58u;
    {
        const bool branch_taken_0x123e58 = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x123E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123E58u;
        // 0x123e5c: 0x8fa5004c  lw          $a1, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123e58) {
            ctx->pc = 0x123E94u;
            goto label_123e94;
        }
    }
    ctx->pc = 0x123E60u;
    // 0x123e60: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x123e60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123e64: 0xc049eb6  jal         func_127AD8
    ctx->pc = 0x123E64u;
    SET_GPR_U32(ctx, 31, 0x123E6Cu);
    ctx->pc = 0x123E68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x123E64u;
    // 0x123e68: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127AD8u, 0x123E64u, 0x123E6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123E6Cu;
label_123e6c:
    // 0x123e6c: 0xafa2004c  sw          $v0, 0x4C($sp)
    ctx->pc = 0x123e6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
    // 0x123e70: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x123e70u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123e74: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x123e74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123e78: 0xc049e34  jal         func_1278D0
    ctx->pc = 0x123E78u;
    SET_GPR_U32(ctx, 31, 0x123E80u);
    ctx->pc = 0x123E7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x123E78u;
    // 0x123e7c: 0x8fa5004c  lw          $a1, 0x4C($sp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1278D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1278D0u, 0x123E78u, 0x123E80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123E80u;
label_123e80:
    // 0x123e80: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x123e80u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123e84: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x123e84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123e88: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x123e88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123e8c: 0xc049d3c  jal         func_1274F0
    ctx->pc = 0x123E8Cu;
    SET_GPR_U32(ctx, 31, 0x123E94u);
    ctx->pc = 0x123E90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x123E8Cu;
    // 0x123e90: 0x200f02d  daddu       $fp, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1274F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1274F0u, 0x123E8Cu, 0x123E94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123E94u;
label_123e94:
    // 0x123e94: 0x8fae001c  lw          $t6, 0x1C($sp)
    ctx->pc = 0x123e94u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x123e98: 0x1d28023  subu        $s0, $t6, $s2
    ctx->pc = 0x123e98u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 14), GPR_U32(ctx, 18)));
    // 0x123e9c: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x123E9Cu;
    {
        const bool branch_taken_0x123e9c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x123EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123E9Cu;
        // 0x123ea0: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123e9c) {
            ctx->pc = 0x123EB4u;
            goto label_123eb4;
        }
    }
    ctx->pc = 0x123EA4u;
    // 0x123ea4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x123ea4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_123ea8:
    // 0x123ea8: 0xc049eb6  jal         func_127AD8
    ctx->pc = 0x123EA8u;
    SET_GPR_U32(ctx, 31, 0x123EB0u);
    ctx->pc = 0x123EACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x123EA8u;
    // 0x123eac: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127AD8u, 0x123EA8u, 0x123EB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123EB0u;
label_123eb0:
    // 0x123eb0: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x123eb0u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_123eb4:
    // 0x123eb4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x123eb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123eb8: 0xc049e26  jal         func_127898
    ctx->pc = 0x123EB8u;
    SET_GPR_U32(ctx, 31, 0x123EC0u);
    ctx->pc = 0x123EBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x123EB8u;
    // 0x123ebc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127898u, 0x123EB8u, 0x123EC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123EC0u;
label_123ec0:
    // 0x123ec0: 0xafa20050  sw          $v0, 0x50($sp)
    ctx->pc = 0x123ec0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
    // 0x123ec4: 0x8faf0040  lw          $t7, 0x40($sp)
    ctx->pc = 0x123ec4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x123ec8: 0x19e00005  blez        $t7, . + 4 + (0x5 << 2)
    ctx->pc = 0x123EC8u;
    {
        const bool branch_taken_0x123ec8 = (GPR_S32(ctx, 15) <= 0);
        ctx->pc = 0x123ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123EC8u;
        // 0x123ecc: 0x8fa50050  lw          $a1, 0x50($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123ec8) {
            ctx->pc = 0x123EE0u;
            goto label_123ee0;
        }
    }
    ctx->pc = 0x123ED0u;
    // 0x123ed0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x123ed0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123ed4: 0xc049eb6  jal         func_127AD8
    ctx->pc = 0x123ED4u;
    SET_GPR_U32(ctx, 31, 0x123EDCu);
    ctx->pc = 0x123ED8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x123ED4u;
    // 0x123ed8: 0x8fa60040  lw          $a2, 0x40($sp) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127AD8u, 0x123ED4u, 0x123EDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123EDCu;
label_123edc:
    // 0x123edc: 0xafa20050  sw          $v0, 0x50($sp)
    ctx->pc = 0x123edcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
label_123ee0:
    // 0x123ee0: 0x12e00011  beqz        $s7, . + 4 + (0x11 << 2)
    ctx->pc = 0x123EE0u;
    {
        const bool branch_taken_0x123ee0 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x123EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123EE0u;
        // 0x123ee4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123ee0) {
            ctx->pc = 0x123F28u;
            goto label_123f28;
        }
    }
    ctx->pc = 0x123EE8u;
    // 0x123ee8: 0x240ff000  addiu       $t7, $zero, -0x1000
    ctx->pc = 0x123ee8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963200));
    // 0x123eec: 0xf7b3a  dsrl        $t7, $t7, 12
    ctx->pc = 0x123eecu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) >> 12);
    // 0x123ef0: 0x28f7824  and         $t7, $s4, $t7
    ctx->pc = 0x123ef0u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 20) & GPR_U64(ctx, 15));
    // 0x123ef4: 0x15e0000d  bnez        $t7, . + 4 + (0xD << 2)
    ctx->pc = 0x123EF4u;
    {
        const bool branch_taken_0x123ef4 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x123EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123EF4u;
        // 0x123ef8: 0x8faf0040  lw          $t7, 0x40($sp) (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123ef4) {
            ctx->pc = 0x123F2Cu;
            goto label_123f2c;
        }
    }
    ctx->pc = 0x123EFCu;
    // 0x123efc: 0x14783f  dsra32      $t7, $s4, 0
    ctx->pc = 0x123efcu;
    SET_GPR_S64(ctx, 15, GPR_S64(ctx, 20) >> (32 + 0));
    // 0x123f00: 0x3c0e7ff0  lui         $t6, 0x7FF0
    ctx->pc = 0x123f00u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)32752 << 16));
    // 0x123f04: 0x1ee7824  and         $t7, $t7, $t6
    ctx->pc = 0x123f04u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) & GPR_U64(ctx, 14));
    // 0x123f08: 0x11e00007  beqz        $t7, . + 4 + (0x7 << 2)
    ctx->pc = 0x123F08u;
    {
        const bool branch_taken_0x123f08 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x123F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123F08u;
        // 0x123f0c: 0x8fad0018  lw          $t5, 0x18($sp) (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123f08) {
            ctx->pc = 0x123F28u;
            goto label_123f28;
        }
    }
    ctx->pc = 0x123F10u;
    // 0x123f10: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x123f10u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x123f14: 0x8fae003c  lw          $t6, 0x3C($sp)
    ctx->pc = 0x123f14u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x123f18: 0x25ad0001  addiu       $t5, $t5, 0x1
    ctx->pc = 0x123f18u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 1));
    // 0x123f1c: 0x25ce0001  addiu       $t6, $t6, 0x1
    ctx->pc = 0x123f1cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 1));
    // 0x123f20: 0xafad0018  sw          $t5, 0x18($sp)
    ctx->pc = 0x123f20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 13));
    // 0x123f24: 0xafae003c  sw          $t6, 0x3C($sp)
    ctx->pc = 0x123f24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 14));
label_123f28:
    // 0x123f28: 0x8faf0040  lw          $t7, 0x40($sp)
    ctx->pc = 0x123f28u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_123f2c:
    // 0x123f2c: 0x11e00135  beqz        $t7, . + 4 + (0x135 << 2)
    ctx->pc = 0x123F2Cu;
    {
        const bool branch_taken_0x123f2c = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x123F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123F2Cu;
        // 0x123f30: 0x8fad0050  lw          $t5, 0x50($sp) (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123f2c) {
            ctx->pc = 0x124404u;
            goto label_124404;
        }
    }
    ctx->pc = 0x123F34u;
    // 0x123f34: 0x8daf0010  lw          $t7, 0x10($t5)
    ctx->pc = 0x123f34u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 16)));
    // 0x123f38: 0xf7880  sll         $t7, $t7, 2
    ctx->pc = 0x123f38u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 15), 2));
    // 0x123f3c: 0x1ed7821  addu        $t7, $t7, $t5
    ctx->pc = 0x123f3cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 13)));
    // 0x123f40: 0xc049dd6  jal         func_127758
    ctx->pc = 0x123F40u;
    SET_GPR_U32(ctx, 31, 0x123F48u);
    ctx->pc = 0x123F44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x123F40u;
    // 0x123f44: 0x8de40010  lw          $a0, 0x10($t7) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127758u, 0x123F40u, 0x123F48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123F48u;
label_123f48:
    // 0x123f48: 0x8fae003c  lw          $t6, 0x3C($sp)
    ctx->pc = 0x123f48u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x123f4c: 0x1c21023  subu        $v0, $t6, $v0
    ctx->pc = 0x123f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 14), GPR_U32(ctx, 2)));
    // 0x123f50: 0x3053001f  andi        $s3, $v0, 0x1F
    ctx->pc = 0x123f50u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
label_123f54:
    // 0x123f54: 0x12600002  beqz        $s3, . + 4 + (0x2 << 2)
    ctx->pc = 0x123F54u;
    {
        const bool branch_taken_0x123f54 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x123F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123F54u;
        // 0x123f58: 0x240f0020  addiu       $t7, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123f54) {
            ctx->pc = 0x123F60u;
            goto label_123f60;
        }
    }
    ctx->pc = 0x123F5Cu;
    // 0x123f5c: 0x1f39823  subu        $s3, $t7, $s3
    ctx->pc = 0x123f5cu;
    SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 15), GPR_U32(ctx, 19)));
label_123f60:
    // 0x123f60: 0x2a6f0005  slti        $t7, $s3, 0x5
    ctx->pc = 0x123f60u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x123f64: 0x15e0011e  bnez        $t7, . + 4 + (0x11E << 2)
    ctx->pc = 0x123F64u;
    {
        const bool branch_taken_0x123f64 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x123F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123F64u;
        // 0x123f68: 0x2a6f0004  slti        $t7, $s3, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x123f64) {
            ctx->pc = 0x1243E0u;
            goto label_1243e0;
        }
    }
    ctx->pc = 0x123F6Cu;
    // 0x123f6c: 0x8fae003c  lw          $t6, 0x3C($sp)
    ctx->pc = 0x123f6cu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x123f70: 0x2673fffc  addiu       $s3, $s3, -0x4
    ctx->pc = 0x123f70u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967292));
    // 0x123f74: 0x8faf0018  lw          $t7, 0x18($sp)
    ctx->pc = 0x123f74u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x123f78: 0x1d37021  addu        $t6, $t6, $s3
    ctx->pc = 0x123f78u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 19)));
    // 0x123f7c: 0x1f37821  addu        $t7, $t7, $s3
    ctx->pc = 0x123f7cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 19)));
    // 0x123f80: 0xafae003c  sw          $t6, 0x3C($sp)
    ctx->pc = 0x123f80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 14));
    // 0x123f84: 0xafaf0018  sw          $t7, 0x18($sp)
    ctx->pc = 0x123f84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 15));
label_123f88:
    // 0x123f88: 0x2338821  addu        $s1, $s1, $s3
    ctx->pc = 0x123f88u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 19)));
label_123f8c:
    // 0x123f8c: 0x8faf0018  lw          $t7, 0x18($sp)
    ctx->pc = 0x123f8cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x123f90: 0x19e00005  blez        $t7, . + 4 + (0x5 << 2)
    ctx->pc = 0x123F90u;
    {
        const bool branch_taken_0x123f90 = (GPR_S32(ctx, 15) <= 0);
        ctx->pc = 0x123F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123F90u;
        // 0x123f94: 0x8fa60018  lw          $a2, 0x18($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123f90) {
            ctx->pc = 0x123FA8u;
            goto label_123fa8;
        }
    }
    ctx->pc = 0x123F98u;
    // 0x123f98: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x123f98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123f9c: 0xc049ef8  jal         func_127BE0
    ctx->pc = 0x123F9Cu;
    SET_GPR_U32(ctx, 31, 0x123FA4u);
    ctx->pc = 0x123FA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x123F9Cu;
    // 0x123fa0: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127BE0u, 0x123F9Cu, 0x123FA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123FA4u;
label_123fa4:
    // 0x123fa4: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x123fa4u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_123fa8:
    // 0x123fa8: 0x8fad003c  lw          $t5, 0x3C($sp)
    ctx->pc = 0x123fa8u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x123fac: 0x19a00005  blez        $t5, . + 4 + (0x5 << 2)
    ctx->pc = 0x123FACu;
    {
        const bool branch_taken_0x123fac = (GPR_S32(ctx, 13) <= 0);
        ctx->pc = 0x123FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123FACu;
        // 0x123fb0: 0x8fa50050  lw          $a1, 0x50($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123fac) {
            ctx->pc = 0x123FC4u;
            goto label_123fc4;
        }
    }
    ctx->pc = 0x123FB4u;
    // 0x123fb4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x123fb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123fb8: 0xc049ef8  jal         func_127BE0
    ctx->pc = 0x123FB8u;
    SET_GPR_U32(ctx, 31, 0x123FC0u);
    ctx->pc = 0x123FBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x123FB8u;
    // 0x123fbc: 0x8fa6003c  lw          $a2, 0x3C($sp) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127BE0u, 0x123FB8u, 0x123FC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123FC0u;
label_123fc0:
    // 0x123fc0: 0xafa20050  sw          $v0, 0x50($sp)
    ctx->pc = 0x123fc0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
label_123fc4:
    // 0x123fc4: 0x8fae0034  lw          $t6, 0x34($sp)
    ctx->pc = 0x123fc4u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x123fc8: 0x11c00018  beqz        $t6, . + 4 + (0x18 << 2)
    ctx->pc = 0x123FC8u;
    {
        const bool branch_taken_0x123fc8 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        ctx->pc = 0x123FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123FC8u;
        // 0x123fcc: 0x8fa50050  lw          $a1, 0x50($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123fc8) {
            ctx->pc = 0x12402Cu;
            goto label_12402c;
        }
    }
    ctx->pc = 0x123FD0u;
    // 0x123fd0: 0xc049f50  jal         func_127D40
    ctx->pc = 0x123FD0u;
    SET_GPR_U32(ctx, 31, 0x123FD8u);
    ctx->pc = 0x123FD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x123FD0u;
    // 0x123fd4: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127D40u, 0x123FD0u, 0x123FD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123FD8u;
label_123fd8:
    // 0x123fd8: 0x4410015  bgez        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x123FD8u;
    {
        const bool branch_taken_0x123fd8 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x123FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123FD8u;
        // 0x123fdc: 0x8faf0020  lw          $t7, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123fd8) {
            ctx->pc = 0x124030u;
            goto label_124030;
        }
    }
    ctx->pc = 0x123FE0u;
    // 0x123fe0: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x123fe0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123fe4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x123fe4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123fe8: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x123fe8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x123fec: 0xc049d48  jal         func_127520
    ctx->pc = 0x123FECu;
    SET_GPR_U32(ctx, 31, 0x123FF4u);
    ctx->pc = 0x123FF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x123FECu;
    // 0x123ff0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127520u, 0x123FECu, 0x123FF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123FF4u;
label_123ff4:
    // 0x123ff4: 0x8faf002c  lw          $t7, 0x2C($sp)
    ctx->pc = 0x123ff4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x123ff8: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x123ff8u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123ffc: 0x8fad0038  lw          $t5, 0x38($sp)
    ctx->pc = 0x123ffcu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x124000: 0x25efffff  addiu       $t7, $t7, -0x1
    ctx->pc = 0x124000u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294967295));
    // 0x124004: 0x11a00007  beqz        $t5, . + 4 + (0x7 << 2)
    ctx->pc = 0x124004u;
    {
        const bool branch_taken_0x124004 = (GPR_U64(ctx, 13) == GPR_U64(ctx, 0));
        ctx->pc = 0x124008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124004u;
        // 0x124008: 0xafaf002c  sw          $t7, 0x2C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124004) {
            ctx->pc = 0x124024u;
            goto label_124024;
        }
    }
    ctx->pc = 0x12400Cu;
    // 0x12400c: 0x8fa5004c  lw          $a1, 0x4C($sp)
    ctx->pc = 0x12400cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x124010: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x124010u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124014: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x124014u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x124018: 0xc049d48  jal         func_127520
    ctx->pc = 0x124018u;
    SET_GPR_U32(ctx, 31, 0x124020u);
    ctx->pc = 0x12401Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x124018u;
    // 0x12401c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127520u, 0x124018u, 0x124020u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124020u;
label_124020:
    // 0x124020: 0xafa2004c  sw          $v0, 0x4C($sp)
    ctx->pc = 0x124020u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
label_124024:
    // 0x124024: 0x8fae0028  lw          $t6, 0x28($sp)
    ctx->pc = 0x124024u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x124028: 0xafae0020  sw          $t6, 0x20($sp)
    ctx->pc = 0x124028u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 14));
label_12402c:
    // 0x12402c: 0x8faf0020  lw          $t7, 0x20($sp)
    ctx->pc = 0x12402cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_124030:
    // 0x124030: 0x1de00015  bgtz        $t7, . + 4 + (0x15 << 2)
    ctx->pc = 0x124030u;
    {
        const bool branch_taken_0x124030 = (GPR_S32(ctx, 15) > 0);
        ctx->pc = 0x124034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124030u;
        // 0x124034: 0x8faf0038  lw          $t7, 0x38($sp) (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124030) {
            ctx->pc = 0x124088u;
            goto label_124088;
        }
    }
    ctx->pc = 0x124038u;
    // 0x124038: 0x8fad0008  lw          $t5, 0x8($sp)
    ctx->pc = 0x124038u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x12403c: 0x29af0003  slti        $t7, $t5, 0x3
    ctx->pc = 0x12403cu;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 13) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x124040: 0x15e00011  bnez        $t7, . + 4 + (0x11 << 2)
    ctx->pc = 0x124040u;
    {
        const bool branch_taken_0x124040 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x124044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124040u;
        // 0x124044: 0x8faf0038  lw          $t7, 0x38($sp) (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124040) {
            ctx->pc = 0x124088u;
            goto label_124088;
        }
    }
    ctx->pc = 0x124048u;
    // 0x124048: 0x8fae0020  lw          $t6, 0x20($sp)
    ctx->pc = 0x124048u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12404c: 0x5c0ff07  bltz        $t6, . + 4 + (-0xF9 << 2)
    ctx->pc = 0x12404Cu;
    {
        const bool branch_taken_0x12404c = (GPR_S32(ctx, 14) < 0);
        ctx->pc = 0x124050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12404Cu;
        // 0x124050: 0x8fa50050  lw          $a1, 0x50($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12404c) {
            ctx->pc = 0x123C6Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_123c6c;
        }
    }
    ctx->pc = 0x124054u;
    // 0x124054: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x124054u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124058: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x124058u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x12405c: 0xc049d48  jal         func_127520
    ctx->pc = 0x12405Cu;
    SET_GPR_U32(ctx, 31, 0x124064u);
    ctx->pc = 0x124060u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12405Cu;
    // 0x124060: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127520u, 0x12405Cu, 0x124064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124064u;
label_124064:
    // 0x124064: 0xafa20050  sw          $v0, 0x50($sp)
    ctx->pc = 0x124064u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
    // 0x124068: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x124068u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12406c: 0xc049f50  jal         func_127D40
    ctx->pc = 0x12406Cu;
    SET_GPR_U32(ctx, 31, 0x124074u);
    ctx->pc = 0x124070u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12406Cu;
    // 0x124070: 0x8fa50050  lw          $a1, 0x50($sp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127D40u, 0x12406Cu, 0x124074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124074u;
label_124074:
    // 0x124074: 0x1c40feda  bgtz        $v0, . + 4 + (-0x126 << 2)
    ctx->pc = 0x124074u;
    {
        const bool branch_taken_0x124074 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x124078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124074u;
        // 0x124078: 0x8fad0054  lw          $t5, 0x54($sp) (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124074) {
            ctx->pc = 0x123BE0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_123be0;
        }
    }
    ctx->pc = 0x12407Cu;
    // 0x12407c: 0x1000fefc  b           . + 4 + (-0x104 << 2)
    ctx->pc = 0x12407Cu;
    {
        const bool branch_taken_0x12407c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x124080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12407Cu;
        // 0x124080: 0x8faf000c  lw          $t7, 0xC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12407c) {
            ctx->pc = 0x123C70u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_123c70;
        }
    }
    ctx->pc = 0x124084u;
    // 0x124084: 0x0  nop
    ctx->pc = 0x124084u;
    // NOP
label_124088:
    // 0x124088: 0x11e000c3  beqz        $t7, . + 4 + (0xC3 << 2)
    ctx->pc = 0x124088u;
    {
        const bool branch_taken_0x124088 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x12408Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124088u;
        // 0x12408c: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124088) {
            ctx->pc = 0x124398u;
            goto label_124398;
        }
    }
    ctx->pc = 0x124090u;
    // 0x124090: 0x1a200005  blez        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x124090u;
    {
        const bool branch_taken_0x124090 = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x124094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124090u;
        // 0x124094: 0x8fa5004c  lw          $a1, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124090) {
            ctx->pc = 0x1240A8u;
            goto label_1240a8;
        }
    }
    ctx->pc = 0x124098u;
    // 0x124098: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x124098u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12409c: 0xc049ef8  jal         func_127BE0
    ctx->pc = 0x12409Cu;
    SET_GPR_U32(ctx, 31, 0x1240A4u);
    ctx->pc = 0x1240A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12409Cu;
    // 0x1240a0: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127BE0u, 0x12409Cu, 0x1240A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1240A4u;
label_1240a4:
    // 0x1240a4: 0xafa2004c  sw          $v0, 0x4C($sp)
    ctx->pc = 0x1240a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
label_1240a8:
    // 0x1240a8: 0x8fad004c  lw          $t5, 0x4C($sp)
    ctx->pc = 0x1240a8u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x1240ac: 0x12000011  beqz        $s0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1240ACu;
    {
        const bool branch_taken_0x1240ac = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1240B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1240ACu;
        // 0x1240b0: 0xafad0048  sw          $t5, 0x48($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1240ac) {
            ctx->pc = 0x1240F4u;
            goto label_1240f4;
        }
    }
    ctx->pc = 0x1240B4u;
    // 0x1240b4: 0x8da50004  lw          $a1, 0x4($t5)
    ctx->pc = 0x1240b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 4)));
    // 0x1240b8: 0xc049d12  jal         func_127448
    ctx->pc = 0x1240B8u;
    SET_GPR_U32(ctx, 31, 0x1240C0u);
    ctx->pc = 0x1240BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1240B8u;
    // 0x1240bc: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127448u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127448u, 0x1240B8u, 0x1240C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1240C0u;
label_1240c0:
    // 0x1240c0: 0x8fae0048  lw          $t6, 0x48($sp)
    ctx->pc = 0x1240c0u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1240c4: 0x2444000c  addiu       $a0, $v0, 0xC
    ctx->pc = 0x1240c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x1240c8: 0xafa2004c  sw          $v0, 0x4C($sp)
    ctx->pc = 0x1240c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
    // 0x1240cc: 0x8dc60010  lw          $a2, 0x10($t6)
    ctx->pc = 0x1240ccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 16)));
    // 0x1240d0: 0x25c5000c  addiu       $a1, $t6, 0xC
    ctx->pc = 0x1240d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 14), 12));
    // 0x1240d4: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x1240d4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1240d8: 0xc049c48  jal         func_127120
    ctx->pc = 0x1240D8u;
    SET_GPR_U32(ctx, 31, 0x1240E0u);
    ctx->pc = 0x1240DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1240D8u;
    // 0x1240dc: 0x24c60008  addiu       $a2, $a2, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127120u, 0x1240D8u, 0x1240E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1240E0u;
label_1240e0:
    // 0x1240e0: 0x8fa5004c  lw          $a1, 0x4C($sp)
    ctx->pc = 0x1240e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x1240e4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1240e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1240e8: 0xc049ef8  jal         func_127BE0
    ctx->pc = 0x1240E8u;
    SET_GPR_U32(ctx, 31, 0x1240F0u);
    ctx->pc = 0x1240ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1240E8u;
    // 0x1240ec: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127BE0u, 0x1240E8u, 0x1240F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1240F0u;
label_1240f0:
    // 0x1240f0: 0xafa2004c  sw          $v0, 0x4C($sp)
    ctx->pc = 0x1240f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
label_1240f4:
    // 0x1240f4: 0x14783c  dsll32      $t7, $s4, 0
    ctx->pc = 0x1240f4u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 20) << (32 + 0));
    // 0x1240f8: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x1240f8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1240fc: 0xf783f  dsra32      $t7, $t7, 0
    ctx->pc = 0x1240fcu;
    SET_GPR_S64(ctx, 15, GPR_S64(ctx, 15) >> (32 + 0));
    // 0x124100: 0x31f70001  andi        $s7, $t7, 0x1
    ctx->pc = 0x124100u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 15) & (uint64_t)(uint16_t)1);
    // 0x124104: 0xafb70058  sw          $s7, 0x58($sp)
    ctx->pc = 0x124104u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 23));
label_124108:
    // 0x124108: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x124108u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x12410c: 0xc048cf0  jal         func_1233C0
    ctx->pc = 0x12410Cu;
    SET_GPR_U32(ctx, 31, 0x124114u);
    ctx->pc = 0x124110u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12410Cu;
    // 0x124110: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1233C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1233C0u, 0x12410Cu, 0x124114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124114u;
label_124114:
    // 0x124114: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x124114u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x124118: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x124118u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12411c: 0xc049f50  jal         func_127D40
    ctx->pc = 0x12411Cu;
    SET_GPR_U32(ctx, 31, 0x124124u);
    ctx->pc = 0x124120u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12411Cu;
    // 0x124120: 0x24540030  addiu       $s4, $v0, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127D40u, 0x12411Cu, 0x124124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124124u;
label_124124:
    // 0x124124: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x124124u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x124128: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x124128u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12412c: 0x8fa6004c  lw          $a2, 0x4C($sp)
    ctx->pc = 0x12412cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x124130: 0xc049f6a  jal         func_127DA8
    ctx->pc = 0x124130u;
    SET_GPR_U32(ctx, 31, 0x124138u);
    ctx->pc = 0x124134u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x124130u;
    // 0x124134: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127DA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127DA8u, 0x124130u, 0x124138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124138u;
label_124138:
    // 0x124138: 0x8c4f000c  lw          $t7, 0xC($v0)
    ctx->pc = 0x124138u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x12413c: 0x15e00094  bnez        $t7, . + 4 + (0x94 << 2)
    ctx->pc = 0x12413Cu;
    {
        const bool branch_taken_0x12413c = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x124140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12413Cu;
        // 0x124140: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12413c) {
            ctx->pc = 0x124390u;
            goto label_124390;
        }
    }
    ctx->pc = 0x124144u;
    // 0x124144: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x124144u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124148: 0xc049f50  jal         func_127D40
    ctx->pc = 0x124148u;
    SET_GPR_U32(ctx, 31, 0x124150u);
    ctx->pc = 0x12414Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x124148u;
    // 0x12414c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127D40u, 0x124148u, 0x124150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124150u;
label_124150:
    // 0x124150: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x124150u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_124154:
    // 0x124154: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x124154u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124158: 0xc049d3c  jal         func_1274F0
    ctx->pc = 0x124158u;
    SET_GPR_U32(ctx, 31, 0x124160u);
    ctx->pc = 0x12415Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x124158u;
    // 0x12415c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1274F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1274F0u, 0x124158u, 0x124160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124160u;
label_124160:
    // 0x124160: 0x16400029  bnez        $s2, . + 4 + (0x29 << 2)
    ctx->pc = 0x124160u;
    {
        const bool branch_taken_0x124160 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x124164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124160u;
        // 0x124164: 0x8faf0008  lw          $t7, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124160) {
            ctx->pc = 0x124208u;
            goto label_124208;
        }
    }
    ctx->pc = 0x124168u;
    // 0x124168: 0x15e00027  bnez        $t7, . + 4 + (0x27 << 2)
    ctx->pc = 0x124168u;
    {
        const bool branch_taken_0x124168 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        if (branch_taken_0x124168) {
            ctx->pc = 0x124208u;
            goto label_124208;
        }
    }
    ctx->pc = 0x124170u;
    // 0x124170: 0x16e00025  bnez        $s7, . + 4 + (0x25 << 2)
    ctx->pc = 0x124170u;
    {
        const bool branch_taken_0x124170 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 0));
        ctx->pc = 0x124174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124170u;
        // 0x124174: 0x240f0039  addiu       $t7, $zero, 0x39 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124170) {
            ctx->pc = 0x124208u;
            goto label_124208;
        }
    }
    ctx->pc = 0x124178u;
    // 0x124178: 0x128f0005  beq         $s4, $t7, . + 4 + (0x5 << 2)
    ctx->pc = 0x124178u;
    {
        const bool branch_taken_0x124178 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 15));
        ctx->pc = 0x12417Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124178u;
        // 0x12417c: 0x250782a  slt         $t7, $s2, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x124178) {
            ctx->pc = 0x124190u;
            goto label_124190;
        }
    }
    ctx->pc = 0x124180u;
    // 0x124180: 0x28fa021  addu        $s4, $s4, $t7
    ctx->pc = 0x124180u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 15)));
label_124184:
    // 0x124184: 0xa2d40000  sb          $s4, 0x0($s6)
    ctx->pc = 0x124184u;
    WRITE8(ADD32(GPR_U32(ctx, 22), 0), (uint8_t)GPR_U32(ctx, 20));
label_124188:
    // 0x124188: 0x1000fe9b  b           . + 4 + (-0x165 << 2)
    ctx->pc = 0x124188u;
    {
        const bool branch_taken_0x124188 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12418Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124188u;
        // 0x12418c: 0x26d60001  addiu       $s6, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124188) {
            ctx->pc = 0x123BF8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_123bf8;
        }
    }
    ctx->pc = 0x124190u;
label_124190:
    // 0x124190: 0x240f0039  addiu       $t7, $zero, 0x39
    ctx->pc = 0x124190u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
label_124194:
    // 0x124194: 0xa2cf0000  sb          $t7, 0x0($s6)
    ctx->pc = 0x124194u;
    WRITE8(ADD32(GPR_U32(ctx, 22), 0), (uint8_t)GPR_U32(ctx, 15));
    // 0x124198: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x124198u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x12419c: 0x26d6ffff  addiu       $s6, $s6, -0x1
    ctx->pc = 0x12419cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967295));
label_1241a0:
    // 0x1241a0: 0x240f0039  addiu       $t7, $zero, 0x39
    ctx->pc = 0x1241a0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
    // 0x1241a4: 0x92cd0000  lbu         $t5, 0x0($s6)
    ctx->pc = 0x1241a4u;
    SET_GPR_U32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x1241a8: 0xd7600  sll         $t6, $t5, 24
    ctx->pc = 0x1241a8u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 13), 24));
    // 0x1241ac: 0xe7603  sra         $t6, $t6, 24
    ctx->pc = 0x1241acu;
    SET_GPR_S32(ctx, 14, SRA32(GPR_S32(ctx, 14), 24));
    // 0x1241b0: 0x15cf000c  bne         $t6, $t7, . + 4 + (0xC << 2)
    ctx->pc = 0x1241B0u;
    {
        const bool branch_taken_0x1241b0 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 15));
        ctx->pc = 0x1241B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1241B0u;
        // 0x1241b4: 0x25af0001  addiu       $t7, $t5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 13), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1241b0) {
            ctx->pc = 0x1241E4u;
            goto label_1241e4;
        }
    }
    ctx->pc = 0x1241B8u;
    // 0x1241b8: 0x240e0039  addiu       $t6, $zero, 0x39
    ctx->pc = 0x1241b8u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
    // 0x1241bc: 0x8faf0054  lw          $t7, 0x54($sp)
    ctx->pc = 0x1241bcu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
label_1241c0:
    // 0x1241c0: 0x12cf000a  beq         $s6, $t7, . + 4 + (0xA << 2)
    ctx->pc = 0x1241C0u;
    {
        const bool branch_taken_0x1241c0 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 15));
        ctx->pc = 0x1241C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1241C0u;
        // 0x1241c4: 0x8fad002c  lw          $t5, 0x2C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1241c0) {
            ctx->pc = 0x1241ECu;
            goto label_1241ec;
        }
    }
    ctx->pc = 0x1241C8u;
    // 0x1241c8: 0x26d6ffff  addiu       $s6, $s6, -0x1
    ctx->pc = 0x1241c8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967295));
    // 0x1241cc: 0x92cd0000  lbu         $t5, 0x0($s6)
    ctx->pc = 0x1241ccu;
    SET_GPR_U32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x1241d0: 0xd7e00  sll         $t7, $t5, 24
    ctx->pc = 0x1241d0u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 13), 24));
    // 0x1241d4: 0xf7e03  sra         $t7, $t7, 24
    ctx->pc = 0x1241d4u;
    SET_GPR_S32(ctx, 15, SRA32(GPR_S32(ctx, 15), 24));
    // 0x1241d8: 0x11eefff9  beq         $t7, $t6, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1241D8u;
    {
        const bool branch_taken_0x1241d8 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 14));
        ctx->pc = 0x1241DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1241D8u;
        // 0x1241dc: 0x8faf0054  lw          $t7, 0x54($sp) (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1241d8) {
            ctx->pc = 0x1241C0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1241c0;
        }
    }
    ctx->pc = 0x1241E0u;
    // 0x1241e0: 0x25af0001  addiu       $t7, $t5, 0x1
    ctx->pc = 0x1241e0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 13), 1));
label_1241e4:
    // 0x1241e4: 0x1000ffe8  b           . + 4 + (-0x18 << 2)
    ctx->pc = 0x1241E4u;
    {
        const bool branch_taken_0x1241e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1241E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1241E4u;
        // 0x1241e8: 0xa2cf0000  sb          $t7, 0x0($s6) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 22), 0), (uint8_t)GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1241e4) {
            ctx->pc = 0x124188u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_124188;
        }
    }
    ctx->pc = 0x1241ECu;
label_1241ec:
    // 0x1241ec: 0x240f0031  addiu       $t7, $zero, 0x31
    ctx->pc = 0x1241ecu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
    // 0x1241f0: 0x8fae0054  lw          $t6, 0x54($sp)
    ctx->pc = 0x1241f0u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
    // 0x1241f4: 0x25ad0001  addiu       $t5, $t5, 0x1
    ctx->pc = 0x1241f4u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 1));
    // 0x1241f8: 0xafad002c  sw          $t5, 0x2C($sp)
    ctx->pc = 0x1241f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 13));
    // 0x1241fc: 0x25d60001  addiu       $s6, $t6, 0x1
    ctx->pc = 0x1241fcu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 14), 1));
    // 0x124200: 0x1000fe7d  b           . + 4 + (-0x183 << 2)
    ctx->pc = 0x124200u;
    {
        const bool branch_taken_0x124200 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x124204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124200u;
        // 0x124204: 0xa1cf0000  sb          $t7, 0x0($t6) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 14), 0), (uint8_t)GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124200) {
            ctx->pc = 0x123BF8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_123bf8;
        }
    }
    ctx->pc = 0x124208u;
label_124208:
    // 0x124208: 0x6000007  bltz        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x124208u;
    {
        const bool branch_taken_0x124208 = (GPR_S32(ctx, 16) < 0);
        if (branch_taken_0x124208) {
            ctx->pc = 0x124228u;
            goto label_124228;
        }
    }
    ctx->pc = 0x124210u;
    // 0x124210: 0x1600001b  bnez        $s0, . + 4 + (0x1B << 2)
    ctx->pc = 0x124210u;
    {
        const bool branch_taken_0x124210 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x124214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124210u;
        // 0x124214: 0x8fad0008  lw          $t5, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124210) {
            ctx->pc = 0x124280u;
            goto label_124280;
        }
    }
    ctx->pc = 0x124218u;
    // 0x124218: 0x15a00019  bnez        $t5, . + 4 + (0x19 << 2)
    ctx->pc = 0x124218u;
    {
        const bool branch_taken_0x124218 = (GPR_U64(ctx, 13) != GPR_U64(ctx, 0));
        ctx->pc = 0x12421Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124218u;
        // 0x12421c: 0x8fae0058  lw          $t6, 0x58($sp) (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124218) {
            ctx->pc = 0x124280u;
            goto label_124280;
        }
    }
    ctx->pc = 0x124220u;
    // 0x124220: 0x15c00017  bnez        $t6, . + 4 + (0x17 << 2)
    ctx->pc = 0x124220u;
    {
        const bool branch_taken_0x124220 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 0));
        if (branch_taken_0x124220) {
            ctx->pc = 0x124280u;
            goto label_124280;
        }
    }
    ctx->pc = 0x124228u;
label_124228:
    // 0x124228: 0x1a40ffd6  blez        $s2, . + 4 + (-0x2A << 2)
    ctx->pc = 0x124228u;
    {
        const bool branch_taken_0x124228 = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x12422Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124228u;
        // 0x12422c: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124228) {
            ctx->pc = 0x124184u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_124184;
        }
    }
    ctx->pc = 0x124230u;
    // 0x124230: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x124230u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124234: 0xc049ef8  jal         func_127BE0
    ctx->pc = 0x124234u;
    SET_GPR_U32(ctx, 31, 0x12423Cu);
    ctx->pc = 0x124238u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x124234u;
    // 0x124238: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127BE0u, 0x124234u, 0x12423Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12423Cu;
label_12423c:
    // 0x12423c: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x12423cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x124240: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x124240u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124244: 0xc049f50  jal         func_127D40
    ctx->pc = 0x124244u;
    SET_GPR_U32(ctx, 31, 0x12424Cu);
    ctx->pc = 0x124248u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x124244u;
    // 0x124248: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127D40u, 0x124244u, 0x12424Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12424Cu;
label_12424c:
    // 0x12424c: 0x5c400007  bgtzl       $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x12424Cu;
    {
        const bool branch_taken_0x12424c = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x12424c) {
            ctx->pc = 0x124250u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12424Cu;
            // 0x124250: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12426Cu;
            goto label_12426c;
        }
    }
    ctx->pc = 0x124254u;
    // 0x124254: 0x5440ffcc  bnel        $v0, $zero, . + 4 + (-0x34 << 2)
    ctx->pc = 0x124254u;
    {
        const bool branch_taken_0x124254 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x124254) {
            ctx->pc = 0x124258u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x124254u;
            // 0x124258: 0xa2d40000  sb          $s4, 0x0($s6) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 22), 0), (uint8_t)GPR_U32(ctx, 20));
            ctx->in_delay_slot = false;
            ctx->pc = 0x124188u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_124188;
        }
    }
    ctx->pc = 0x12425Cu;
    // 0x12425c: 0x328f0001  andi        $t7, $s4, 0x1
    ctx->pc = 0x12425cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)1);
    // 0x124260: 0x51e0ffc9  beql        $t7, $zero, . + 4 + (-0x37 << 2)
    ctx->pc = 0x124260u;
    {
        const bool branch_taken_0x124260 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        if (branch_taken_0x124260) {
            ctx->pc = 0x124264u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x124260u;
            // 0x124264: 0xa2d40000  sb          $s4, 0x0($s6) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 22), 0), (uint8_t)GPR_U32(ctx, 20));
            ctx->in_delay_slot = false;
            ctx->pc = 0x124188u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_124188;
        }
    }
    ctx->pc = 0x124268u;
    // 0x124268: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x124268u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_12426c:
    // 0x12426c: 0x240f003a  addiu       $t7, $zero, 0x3A
    ctx->pc = 0x12426cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 58));
    // 0x124270: 0x128fffc8  beq         $s4, $t7, . + 4 + (-0x38 << 2)
    ctx->pc = 0x124270u;
    {
        const bool branch_taken_0x124270 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 15));
        ctx->pc = 0x124274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124270u;
        // 0x124274: 0x240f0039  addiu       $t7, $zero, 0x39 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124270) {
            ctx->pc = 0x124194u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_124194;
        }
    }
    ctx->pc = 0x124278u;
    // 0x124278: 0x1000ffc3  b           . + 4 + (-0x3D << 2)
    ctx->pc = 0x124278u;
    {
        const bool branch_taken_0x124278 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12427Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124278u;
        // 0x12427c: 0xa2d40000  sb          $s4, 0x0($s6) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 22), 0), (uint8_t)GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124278) {
            ctx->pc = 0x124188u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_124188;
        }
    }
    ctx->pc = 0x124280u;
label_124280:
    // 0x124280: 0x1a400005  blez        $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x124280u;
    {
        const bool branch_taken_0x124280 = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x124284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124280u;
        // 0x124284: 0x240f0039  addiu       $t7, $zero, 0x39 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124280) {
            ctx->pc = 0x124298u;
            goto label_124298;
        }
    }
    ctx->pc = 0x124288u;
    // 0x124288: 0x128fffc1  beq         $s4, $t7, . + 4 + (-0x3F << 2)
    ctx->pc = 0x124288u;
    {
        const bool branch_taken_0x124288 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 15));
        ctx->pc = 0x12428Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124288u;
        // 0x12428c: 0x268f0001  addiu       $t7, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124288) {
            ctx->pc = 0x124190u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_124190;
        }
    }
    ctx->pc = 0x124290u;
    // 0x124290: 0x1000ffbd  b           . + 4 + (-0x43 << 2)
    ctx->pc = 0x124290u;
    {
        const bool branch_taken_0x124290 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x124294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124290u;
        // 0x124294: 0xa2cf0000  sb          $t7, 0x0($s6) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 22), 0), (uint8_t)GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124290) {
            ctx->pc = 0x124188u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_124188;
        }
    }
    ctx->pc = 0x124298u;
label_124298:
    // 0x124298: 0xa2d40000  sb          $s4, 0x0($s6)
    ctx->pc = 0x124298u;
    WRITE8(ADD32(GPR_U32(ctx, 22), 0), (uint8_t)GPR_U32(ctx, 20));
    // 0x12429c: 0x8faf0020  lw          $t7, 0x20($sp)
    ctx->pc = 0x12429cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1242a0: 0x126f0020  beq         $s3, $t7, . + 4 + (0x20 << 2)
    ctx->pc = 0x1242A0u;
    {
        const bool branch_taken_0x1242a0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 15));
        ctx->pc = 0x1242A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1242A0u;
        // 0x1242a4: 0x26d60001  addiu       $s6, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1242a0) {
            ctx->pc = 0x124324u;
            goto label_124324;
        }
    }
    ctx->pc = 0x1242A8u;
    // 0x1242a8: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x1242a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1242ac: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1242acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1242b0: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x1242b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1242b4: 0xc049d48  jal         func_127520
    ctx->pc = 0x1242B4u;
    SET_GPR_U32(ctx, 31, 0x1242BCu);
    ctx->pc = 0x1242B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1242B4u;
    // 0x1242b8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127520u, 0x1242B4u, 0x1242BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1242BCu;
label_1242bc:
    // 0x1242bc: 0x8fad0048  lw          $t5, 0x48($sp)
    ctx->pc = 0x1242bcu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1242c0: 0x8fae004c  lw          $t6, 0x4C($sp)
    ctx->pc = 0x1242c0u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x1242c4: 0x15ae000a  bne         $t5, $t6, . + 4 + (0xA << 2)
    ctx->pc = 0x1242C4u;
    {
        const bool branch_taken_0x1242c4 = (GPR_U64(ctx, 13) != GPR_U64(ctx, 14));
        ctx->pc = 0x1242C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1242C4u;
        // 0x1242c8: 0x40f02d  daddu       $fp, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1242c4) {
            ctx->pc = 0x1242F0u;
            goto label_1242f0;
        }
    }
    ctx->pc = 0x1242CCu;
    // 0x1242cc: 0x8fa5004c  lw          $a1, 0x4C($sp)
    ctx->pc = 0x1242ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x1242d0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1242d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1242d4: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x1242d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1242d8: 0xc049d48  jal         func_127520
    ctx->pc = 0x1242D8u;
    SET_GPR_U32(ctx, 31, 0x1242E0u);
    ctx->pc = 0x1242DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1242D8u;
    // 0x1242dc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127520u, 0x1242D8u, 0x1242E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1242E0u;
label_1242e0:
    // 0x1242e0: 0xafa2004c  sw          $v0, 0x4C($sp)
    ctx->pc = 0x1242e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
    // 0x1242e4: 0xafa20048  sw          $v0, 0x48($sp)
    ctx->pc = 0x1242e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 2));
label_1242e8:
    // 0x1242e8: 0x1000ff87  b           . + 4 + (-0x79 << 2)
    ctx->pc = 0x1242E8u;
    {
        const bool branch_taken_0x1242e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1242ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1242E8u;
        // 0x1242ec: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1242e8) {
            ctx->pc = 0x124108u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_124108;
        }
    }
    ctx->pc = 0x1242F0u;
label_1242f0:
    // 0x1242f0: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x1242f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1242f4: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x1242f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1242f8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1242f8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1242fc: 0xc049d48  jal         func_127520
    ctx->pc = 0x1242FCu;
    SET_GPR_U32(ctx, 31, 0x124304u);
    ctx->pc = 0x124300u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1242FCu;
    // 0x124300: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127520u, 0x1242FCu, 0x124304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124304u;
label_124304:
    // 0x124304: 0xafa20048  sw          $v0, 0x48($sp)
    ctx->pc = 0x124304u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 2));
    // 0x124308: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x124308u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12430c: 0x8fa5004c  lw          $a1, 0x4C($sp)
    ctx->pc = 0x12430cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x124310: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x124310u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x124314: 0xc049d48  jal         func_127520
    ctx->pc = 0x124314u;
    SET_GPR_U32(ctx, 31, 0x12431Cu);
    ctx->pc = 0x124318u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x124314u;
    // 0x124318: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127520u, 0x124314u, 0x12431Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12431Cu;
label_12431c:
    // 0x12431c: 0x1000fff2  b           . + 4 + (-0xE << 2)
    ctx->pc = 0x12431Cu;
    {
        const bool branch_taken_0x12431c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x124320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12431Cu;
        // 0x124320: 0xafa2004c  sw          $v0, 0x4C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12431c) {
            ctx->pc = 0x1242E8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1242e8;
        }
    }
    ctx->pc = 0x124324u;
label_124324:
    // 0x124324: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x124324u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124328: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x124328u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12432c: 0xc049ef8  jal         func_127BE0
    ctx->pc = 0x12432Cu;
    SET_GPR_U32(ctx, 31, 0x124334u);
    ctx->pc = 0x124330u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12432Cu;
    // 0x124330: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127BE0u, 0x12432Cu, 0x124334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124334u;
label_124334:
    // 0x124334: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x124334u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x124338: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x124338u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12433c: 0xc049f50  jal         func_127D40
    ctx->pc = 0x12433Cu;
    SET_GPR_U32(ctx, 31, 0x124344u);
    ctx->pc = 0x124340u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12433Cu;
    // 0x124340: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127D40u, 0x12433Cu, 0x124344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124344u;
label_124344:
    // 0x124344: 0x5c40ff96  bgtzl       $v0, . + 4 + (-0x6A << 2)
    ctx->pc = 0x124344u;
    {
        const bool branch_taken_0x124344 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x124344) {
            ctx->pc = 0x124348u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x124344u;
            // 0x124348: 0x26d6ffff  addiu       $s6, $s6, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1241A0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1241a0;
        }
    }
    ctx->pc = 0x12434Cu;
    // 0x12434c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x12434Cu;
    {
        const bool branch_taken_0x12434c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x124350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12434Cu;
        // 0x124350: 0x240e0030  addiu       $t6, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12434c) {
            ctx->pc = 0x124364u;
            goto label_124364;
        }
    }
    ctx->pc = 0x124354u;
    // 0x124354: 0x328f0001  andi        $t7, $s4, 0x1
    ctx->pc = 0x124354u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)1);
    // 0x124358: 0x55e0ff91  bnel        $t7, $zero, . + 4 + (-0x6F << 2)
    ctx->pc = 0x124358u;
    {
        const bool branch_taken_0x124358 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        if (branch_taken_0x124358) {
            ctx->pc = 0x12435Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x124358u;
            // 0x12435c: 0x26d6ffff  addiu       $s6, $s6, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1241A0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1241a0;
        }
    }
    ctx->pc = 0x124360u;
    // 0x124360: 0x240e0030  addiu       $t6, $zero, 0x30
    ctx->pc = 0x124360u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_124364:
    // 0x124364: 0x26d6ffff  addiu       $s6, $s6, -0x1
    ctx->pc = 0x124364u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967295));
label_124368:
    // 0x124368: 0x82cf0000  lb          $t7, 0x0($s6)
    ctx->pc = 0x124368u;
    SET_GPR_S32(ctx, 15, (int8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x12436c: 0x0  nop
    ctx->pc = 0x12436cu;
    // NOP
    // 0x124370: 0x0  nop
    ctx->pc = 0x124370u;
    // NOP
    // 0x124374: 0x0  nop
    ctx->pc = 0x124374u;
    // NOP
    // 0x124378: 0x0  nop
    ctx->pc = 0x124378u;
    // NOP
    // 0x12437c: 0x51eefffa  beql        $t7, $t6, . + 4 + (-0x6 << 2)
    ctx->pc = 0x12437Cu;
    {
        const bool branch_taken_0x12437c = (GPR_U64(ctx, 15) == GPR_U64(ctx, 14));
        if (branch_taken_0x12437c) {
            ctx->pc = 0x124380u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12437Cu;
            // 0x124380: 0x26d6ffff  addiu       $s6, $s6, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x124368u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_124368;
        }
    }
    ctx->pc = 0x124384u;
    // 0x124384: 0x1000fe1c  b           . + 4 + (-0x1E4 << 2)
    ctx->pc = 0x124384u;
    {
        const bool branch_taken_0x124384 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x124388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124384u;
        // 0x124388: 0x26d60001  addiu       $s6, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124384) {
            ctx->pc = 0x123BF8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_123bf8;
        }
    }
    ctx->pc = 0x12438Cu;
    // 0x12438c: 0x0  nop
    ctx->pc = 0x12438cu;
    // NOP
label_124390:
    // 0x124390: 0x1000ff70  b           . + 4 + (-0x90 << 2)
    ctx->pc = 0x124390u;
    {
        const bool branch_taken_0x124390 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x124394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124390u;
        // 0x124394: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124390) {
            ctx->pc = 0x124154u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_124154;
        }
    }
    ctx->pc = 0x124398u;
label_124398:
    // 0x124398: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x124398u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x12439c: 0xc048cf0  jal         func_1233C0
    ctx->pc = 0x12439Cu;
    SET_GPR_U32(ctx, 31, 0x1243A4u);
    ctx->pc = 0x1243A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12439Cu;
    // 0x1243a0: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1233C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1233C0u, 0x12439Cu, 0x1243A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1243A4u;
label_1243a4:
    // 0x1243a4: 0x2c0702d  daddu       $t6, $s6, $zero
    ctx->pc = 0x1243a4u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1243a8: 0x24540030  addiu       $s4, $v0, 0x30
    ctx->pc = 0x1243a8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x1243ac: 0xa1d40000  sb          $s4, 0x0($t6)
    ctx->pc = 0x1243acu;
    WRITE8(ADD32(GPR_U32(ctx, 14), 0), (uint8_t)GPR_U32(ctx, 20));
    // 0x1243b0: 0x8fad0020  lw          $t5, 0x20($sp)
    ctx->pc = 0x1243b0u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1243b4: 0x26d782a  slt         $t7, $s3, $t5
    ctx->pc = 0x1243b4u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 13)) ? 1 : 0);
    // 0x1243b8: 0x11e0ffda  beqz        $t7, . + 4 + (-0x26 << 2)
    ctx->pc = 0x1243B8u;
    {
        const bool branch_taken_0x1243b8 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x1243BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1243B8u;
        // 0x1243bc: 0x26d60001  addiu       $s6, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1243b8) {
            ctx->pc = 0x124324u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_124324;
        }
    }
    ctx->pc = 0x1243C0u;
    // 0x1243c0: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x1243c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1243c4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1243c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1243c8: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x1243c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1243cc: 0xc049d48  jal         func_127520
    ctx->pc = 0x1243CCu;
    SET_GPR_U32(ctx, 31, 0x1243D4u);
    ctx->pc = 0x1243D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1243CCu;
    // 0x1243d0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127520u, 0x1243CCu, 0x1243D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1243D4u;
label_1243d4:
    // 0x1243d4: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1243d4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x1243d8: 0x1000ffef  b           . + 4 + (-0x11 << 2)
    ctx->pc = 0x1243D8u;
    {
        const bool branch_taken_0x1243d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1243DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1243D8u;
        // 0x1243dc: 0x40f02d  daddu       $fp, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1243d8) {
            ctx->pc = 0x124398u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_124398;
        }
    }
    ctx->pc = 0x1243E0u;
label_1243e0:
    // 0x1243e0: 0x11e0feea  beqz        $t7, . + 4 + (-0x116 << 2)
    ctx->pc = 0x1243E0u;
    {
        const bool branch_taken_0x1243e0 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x1243E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1243E0u;
        // 0x1243e4: 0x8fad003c  lw          $t5, 0x3C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1243e0) {
            ctx->pc = 0x123F8Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_123f8c;
        }
    }
    ctx->pc = 0x1243E8u;
    // 0x1243e8: 0x2673001c  addiu       $s3, $s3, 0x1C
    ctx->pc = 0x1243e8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 28));
    // 0x1243ec: 0x8fae0018  lw          $t6, 0x18($sp)
    ctx->pc = 0x1243ecu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1243f0: 0x1b36821  addu        $t5, $t5, $s3
    ctx->pc = 0x1243f0u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 19)));
    // 0x1243f4: 0x1d37021  addu        $t6, $t6, $s3
    ctx->pc = 0x1243f4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 19)));
    // 0x1243f8: 0xafad003c  sw          $t5, 0x3C($sp)
    ctx->pc = 0x1243f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 13));
    // 0x1243fc: 0x1000fee2  b           . + 4 + (-0x11E << 2)
    ctx->pc = 0x1243FCu;
    {
        const bool branch_taken_0x1243fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x124400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1243FCu;
        // 0x124400: 0xafae0018  sw          $t6, 0x18($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1243fc) {
            ctx->pc = 0x123F88u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_123f88;
        }
    }
    ctx->pc = 0x124404u;
label_124404:
    // 0x124404: 0x8fad003c  lw          $t5, 0x3C($sp)
    ctx->pc = 0x124404u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x124408: 0x25af0001  addiu       $t7, $t5, 0x1
    ctx->pc = 0x124408u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 13), 1));
    // 0x12440c: 0x1000fed1  b           . + 4 + (-0x12F << 2)
    ctx->pc = 0x12440Cu;
    {
        const bool branch_taken_0x12440c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x124410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12440Cu;
        // 0x124410: 0x31f3001f  andi        $s3, $t7, 0x1F (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 15) & (uint64_t)(uint16_t)31);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12440c) {
            ctx->pc = 0x123F54u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_123f54;
        }
    }
    ctx->pc = 0x124414u;
label_124414:
    // 0x124414: 0x1000fea4  b           . + 4 + (-0x15C << 2)
    ctx->pc = 0x124414u;
    {
        const bool branch_taken_0x124414 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x124418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124414u;
        // 0x124418: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124414) {
            ctx->pc = 0x123EA8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_123ea8;
        }
    }
    ctx->pc = 0x12441Cu;
label_12441c:
    // 0x12441c: 0x8faf0020  lw          $t7, 0x20($sp)
    ctx->pc = 0x12441cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x124420: 0x8fad001c  lw          $t5, 0x1C($sp)
    ctx->pc = 0x124420u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x124424: 0x25f0ffff  addiu       $s0, $t7, -0x1
    ctx->pc = 0x124424u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 15), 4294967295));
    // 0x124428: 0x1b0782a  slt         $t7, $t5, $s0
    ctx->pc = 0x124428u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 13) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x12442c: 0x11e00008  beqz        $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x12442Cu;
    {
        const bool branch_taken_0x12442c = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x124430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12442Cu;
        // 0x124430: 0x1b09023  subu        $s2, $t5, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 13), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12442c) {
            ctx->pc = 0x124450u;
            goto label_124450;
        }
    }
    ctx->pc = 0x124434u;
    // 0x124434: 0x8fae0040  lw          $t6, 0x40($sp)
    ctx->pc = 0x124434u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x124438: 0x20d8023  subu        $s0, $s0, $t5
    ctx->pc = 0x124438u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 13)));
    // 0x12443c: 0x1b06821  addu        $t5, $t5, $s0
    ctx->pc = 0x12443cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 16)));
    // 0x124440: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x124440u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124444: 0x1d07021  addu        $t6, $t6, $s0
    ctx->pc = 0x124444u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 16)));
    // 0x124448: 0xafad001c  sw          $t5, 0x1C($sp)
    ctx->pc = 0x124448u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 13));
    // 0x12444c: 0xafae0040  sw          $t6, 0x40($sp)
    ctx->pc = 0x12444cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 14));
label_124450:
    // 0x124450: 0x8fb30020  lw          $s3, 0x20($sp)
    ctx->pc = 0x124450u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x124454: 0x661fe65  bgez        $s3, . + 4 + (-0x19B << 2)
    ctx->pc = 0x124454u;
    {
        const bool branch_taken_0x124454 = (GPR_S32(ctx, 19) >= 0);
        ctx->pc = 0x124458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124454u;
        // 0x124458: 0x8fad003c  lw          $t5, 0x3C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124454) {
            ctx->pc = 0x123DECu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_123dec;
        }
    }
    ctx->pc = 0x12445Cu;
    // 0x12445c: 0x8faf0018  lw          $t7, 0x18($sp)
    ctx->pc = 0x12445cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x124460: 0x1f38823  subu        $s1, $t7, $s3
    ctx->pc = 0x124460u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 15), GPR_U32(ctx, 19)));
    // 0x124464: 0x1000fe61  b           . + 4 + (-0x19F << 2)
    ctx->pc = 0x124464u;
    {
        const bool branch_taken_0x124464 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x124468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124464u;
        // 0x124468: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124464) {
            ctx->pc = 0x123DECu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_123dec;
        }
    }
    ctx->pc = 0x12446Cu;
label_12446c:
    // 0x12446c: 0x8fae0038  lw          $t6, 0x38($sp)
    ctx->pc = 0x12446cu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x124470: 0x11c00036  beqz        $t6, . + 4 + (0x36 << 2)
    ctx->pc = 0x124470u;
    {
        const bool branch_taken_0x124470 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        ctx->pc = 0x124474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124470u;
        // 0x124474: 0x8faf0020  lw          $t7, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124470) {
            ctx->pc = 0x12454Cu;
            goto label_12454c;
        }
    }
    ctx->pc = 0x124478u;
    // 0x124478: 0x240401ff  addiu       $a0, $zero, 0x1FF
    ctx->pc = 0x124478u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 511));
    // 0x12447c: 0x4257c  dsll32      $a0, $a0, 21
    ctx->pc = 0x12447cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 21));
    // 0x124480: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x124480u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124484: 0xf70c0  sll         $t6, $t7, 3
    ctx->pc = 0x124484u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 15), 3));
    // 0x124488: 0x3c0f003e  lui         $t7, 0x3E
    ctx->pc = 0x124488u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)62 << 16));
    // 0x12448c: 0x25efb978  addiu       $t7, $t7, -0x4688
    ctx->pc = 0x12448cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294949240));
    // 0x124490: 0x1cf7021  addu        $t6, $t6, $t7
    ctx->pc = 0x124490u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 15)));
    // 0x124494: 0xc048b0a  jal         func_122C28
    ctx->pc = 0x124494u;
    SET_GPR_U32(ctx, 31, 0x12449Cu);
    ctx->pc = 0x124498u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x124494u;
    // 0x124498: 0xddc5fff8  ld          $a1, -0x8($t6) (Delay Slot)
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 14), 4294967288)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122C28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122C28u, 0x124494u, 0x12449Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12449Cu;
label_12449c:
    // 0x12449c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x12449cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1244a0: 0xc048a5c  jal         func_122970
    ctx->pc = 0x1244A0u;
    SET_GPR_U32(ctx, 31, 0x1244A8u);
    ctx->pc = 0x1244A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1244A0u;
    // 0x1244a4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122970u, 0x1244A0u, 0x1244A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1244A8u;
label_1244a8:
    // 0x1244a8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1244a8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1244ac: 0x0  nop
    ctx->pc = 0x1244acu;
    // NOP
label_1244b0:
    // 0x1244b0: 0xc048bde  jal         func_122F78
    ctx->pc = 0x1244B0u;
    SET_GPR_U32(ctx, 31, 0x1244B8u);
    ctx->pc = 0x1244B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1244B0u;
    // 0x1244b4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122F78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122F78u, 0x1244B0u, 0x1244B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1244B8u;
label_1244b8:
    // 0x1244b8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1244b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1244bc: 0xc048bb2  jal         func_122EC8
    ctx->pc = 0x1244BCu;
    SET_GPR_U32(ctx, 31, 0x1244C4u);
    ctx->pc = 0x1244C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1244BCu;
    // 0x1244c0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122EC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122EC8u, 0x1244BCu, 0x1244C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1244C4u;
label_1244c4:
    // 0x1244c4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1244c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1244c8: 0xc048a5c  jal         func_122970
    ctx->pc = 0x1244C8u;
    SET_GPR_U32(ctx, 31, 0x1244D0u);
    ctx->pc = 0x1244CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1244C8u;
    // 0x1244cc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122970u, 0x1244C8u, 0x1244D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1244D0u;
label_1244d0:
    // 0x1244d0: 0x260f0030  addiu       $t7, $s0, 0x30
    ctx->pc = 0x1244d0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x1244d4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1244d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1244d8: 0xa2cf0000  sb          $t7, 0x0($s6)
    ctx->pc = 0x1244d8u;
    WRITE8(ADD32(GPR_U32(ctx, 22), 0), (uint8_t)GPR_U32(ctx, 15));
    // 0x1244dc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1244dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1244e0: 0xc048b9e  jal         func_122E78
    ctx->pc = 0x1244E0u;
    SET_GPR_U32(ctx, 31, 0x1244E8u);
    ctx->pc = 0x1244E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1244E0u;
    // 0x1244e4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122E78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122E78u, 0x1244E0u, 0x1244E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1244E8u;
label_1244e8:
    // 0x1244e8: 0x440fdd3  bltz        $v0, . + 4 + (-0x22D << 2)
    ctx->pc = 0x1244E8u;
    {
        const bool branch_taken_0x1244e8 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1244ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1244E8u;
        // 0x1244ec: 0x26d60001  addiu       $s6, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1244e8) {
            ctx->pc = 0x123C38u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_123c38;
        }
    }
    ctx->pc = 0x1244F0u;
    // 0x1244f0: 0x240403ff  addiu       $a0, $zero, 0x3FF
    ctx->pc = 0x1244f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1023));
    // 0x1244f4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1244f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1244f8: 0xc048a5c  jal         func_122970
    ctx->pc = 0x1244F8u;
    SET_GPR_U32(ctx, 31, 0x124500u);
    ctx->pc = 0x1244FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1244F8u;
    // 0x1244fc: 0x4253c  dsll32      $a0, $a0, 20 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122970u, 0x1244F8u, 0x124500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124500u;
label_124500:
    // 0x124500: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x124500u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124504: 0xc048b9e  jal         func_122E78
    ctx->pc = 0x124504u;
    SET_GPR_U32(ctx, 31, 0x12450Cu);
    ctx->pc = 0x124508u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x124504u;
    // 0x124508: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122E78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122E78u, 0x124504u, 0x12450Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12450Cu;
label_12450c:
    // 0x12450c: 0x440fdfd  bltz        $v0, . + 4 + (-0x203 << 2)
    ctx->pc = 0x12450Cu;
    {
        const bool branch_taken_0x12450c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x124510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12450Cu;
        // 0x124510: 0x8fad0020  lw          $t5, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12450c) {
            ctx->pc = 0x123D04u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_123d04;
        }
    }
    ctx->pc = 0x124514u;
    // 0x124514: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x124514u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x124518: 0x26d782a  slt         $t7, $s3, $t5
    ctx->pc = 0x124518u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 13)) ? 1 : 0);
    // 0x12451c: 0x11e0fd8d  beqz        $t7, . + 4 + (-0x273 << 2)
    ctx->pc = 0x12451Cu;
    {
        const bool branch_taken_0x12451c = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x124520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12451Cu;
        // 0x124520: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12451c) {
            ctx->pc = 0x123B54u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_123b54;
        }
    }
    ctx->pc = 0x124524u;
    // 0x124524: 0x24041009  addiu       $a0, $zero, 0x1009
    ctx->pc = 0x124524u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4105));
    // 0x124528: 0xc048a76  jal         func_1229D8
    ctx->pc = 0x124528u;
    SET_GPR_U32(ctx, 31, 0x124530u);
    ctx->pc = 0x12452Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x124528u;
    // 0x12452c: 0x424bc  dsll32      $a0, $a0, 18 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1229D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1229D8u, 0x124528u, 0x124530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124530u;
label_124530:
    // 0x124530: 0x24041009  addiu       $a0, $zero, 0x1009
    ctx->pc = 0x124530u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4105));
    // 0x124534: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x124534u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124538: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x124538u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12453c: 0xc048a76  jal         func_1229D8
    ctx->pc = 0x12453Cu;
    SET_GPR_U32(ctx, 31, 0x124544u);
    ctx->pc = 0x124540u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12453Cu;
    // 0x124540: 0x424bc  dsll32      $a0, $a0, 18 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1229D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1229D8u, 0x12453Cu, 0x124544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124544u;
label_124544:
    // 0x124544: 0x1000ffda  b           . + 4 + (-0x26 << 2)
    ctx->pc = 0x124544u;
    {
        const bool branch_taken_0x124544 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x124548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124544u;
        // 0x124548: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124544) {
            ctx->pc = 0x1244B0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1244b0;
        }
    }
    ctx->pc = 0x12454Cu;
label_12454c:
    // 0x12454c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x12454cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124550: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x124550u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x124554: 0xf70c0  sll         $t6, $t7, 3
    ctx->pc = 0x124554u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 15), 3));
    // 0x124558: 0x3c0f003e  lui         $t7, 0x3E
    ctx->pc = 0x124558u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)62 << 16));
    // 0x12455c: 0x25efb978  addiu       $t7, $t7, -0x4688
    ctx->pc = 0x12455cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294949240));
    // 0x124560: 0x1cf7021  addu        $t6, $t6, $t7
    ctx->pc = 0x124560u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 15)));
    // 0x124564: 0xc048a76  jal         func_1229D8
    ctx->pc = 0x124564u;
    SET_GPR_U32(ctx, 31, 0x12456Cu);
    ctx->pc = 0x124568u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x124564u;
    // 0x124568: 0xddc4fff8  ld          $a0, -0x8($t6) (Delay Slot)
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 14), 4294967288)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1229D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1229D8u, 0x124564u, 0x12456Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12456Cu;
label_12456c:
    // 0x12456c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x12456cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_124570:
    // 0x124570: 0xc048bde  jal         func_122F78
    ctx->pc = 0x124570u;
    SET_GPR_U32(ctx, 31, 0x124578u);
    ctx->pc = 0x124574u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x124570u;
    // 0x124574: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122F78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122F78u, 0x124570u, 0x124578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124578u;
label_124578:
    // 0x124578: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x124578u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12457c: 0xc048bb2  jal         func_122EC8
    ctx->pc = 0x12457Cu;
    SET_GPR_U32(ctx, 31, 0x124584u);
    ctx->pc = 0x124580u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12457Cu;
    // 0x124580: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122EC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122EC8u, 0x12457Cu, 0x124584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124584u;
label_124584:
    // 0x124584: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x124584u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124588: 0xc048a5c  jal         func_122970
    ctx->pc = 0x124588u;
    SET_GPR_U32(ctx, 31, 0x124590u);
    ctx->pc = 0x12458Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x124588u;
    // 0x12458c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122970u, 0x124588u, 0x124590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124590u;
label_124590:
    // 0x124590: 0x260f0030  addiu       $t7, $s0, 0x30
    ctx->pc = 0x124590u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x124594: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x124594u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124598: 0xa2cf0000  sb          $t7, 0x0($s6)
    ctx->pc = 0x124598u;
    WRITE8(ADD32(GPR_U32(ctx, 22), 0), (uint8_t)GPR_U32(ctx, 15));
    // 0x12459c: 0x8fad0020  lw          $t5, 0x20($sp)
    ctx->pc = 0x12459cu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1245a0: 0x166d001d  bne         $s3, $t5, . + 4 + (0x1D << 2)
    ctx->pc = 0x1245A0u;
    {
        const bool branch_taken_0x1245a0 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 13));
        ctx->pc = 0x1245A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1245A0u;
        // 0x1245a4: 0x26d60001  addiu       $s6, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1245a0) {
            ctx->pc = 0x124618u;
            goto label_124618;
        }
    }
    ctx->pc = 0x1245A8u;
    // 0x1245a8: 0x241001ff  addiu       $s0, $zero, 0x1FF
    ctx->pc = 0x1245a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 511));
    // 0x1245ac: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1245acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1245b0: 0x10857c  dsll32      $s0, $s0, 21
    ctx->pc = 0x1245b0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << (32 + 21));
    // 0x1245b4: 0xc048a46  jal         func_122918
    ctx->pc = 0x1245B4u;
    SET_GPR_U32(ctx, 31, 0x1245BCu);
    ctx->pc = 0x1245B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1245B4u;
    // 0x1245b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122918u, 0x1245B4u, 0x1245BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1245BCu;
label_1245bc:
    // 0x1245bc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1245bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1245c0: 0xc048b9e  jal         func_122E78
    ctx->pc = 0x1245C0u;
    SET_GPR_U32(ctx, 31, 0x1245C8u);
    ctx->pc = 0x1245C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1245C0u;
    // 0x1245c4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122E78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122E78u, 0x1245C0u, 0x1245C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1245C8u;
label_1245c8:
    // 0x1245c8: 0x440fdce  bltz        $v0, . + 4 + (-0x232 << 2)
    ctx->pc = 0x1245C8u;
    {
        const bool branch_taken_0x1245c8 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1245CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1245C8u;
        // 0x1245cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1245c8) {
            ctx->pc = 0x123D04u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_123d04;
        }
    }
    ctx->pc = 0x1245D0u;
    // 0x1245d0: 0xc048a5c  jal         func_122970
    ctx->pc = 0x1245D0u;
    SET_GPR_U32(ctx, 31, 0x1245D8u);
    ctx->pc = 0x1245D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1245D0u;
    // 0x1245d4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122970u, 0x1245D0u, 0x1245D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1245D8u;
label_1245d8:
    // 0x1245d8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1245d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1245dc: 0xc048b9e  jal         func_122E78
    ctx->pc = 0x1245DCu;
    SET_GPR_U32(ctx, 31, 0x1245E4u);
    ctx->pc = 0x1245E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1245DCu;
    // 0x1245e0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122E78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122E78u, 0x1245DCu, 0x1245E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1245E4u;
label_1245e4:
    // 0x1245e4: 0x441fd5b  bgez        $v0, . + 4 + (-0x2A5 << 2)
    ctx->pc = 0x1245E4u;
    {
        const bool branch_taken_0x1245e4 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1245E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1245E4u;
        // 0x1245e8: 0x240e0030  addiu       $t6, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1245e4) {
            ctx->pc = 0x123B54u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_123b54;
        }
    }
    ctx->pc = 0x1245ECu;
    // 0x1245ec: 0x26d6ffff  addiu       $s6, $s6, -0x1
    ctx->pc = 0x1245ecu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967295));
label_1245f0:
    // 0x1245f0: 0x82cf0000  lb          $t7, 0x0($s6)
    ctx->pc = 0x1245f0u;
    SET_GPR_S32(ctx, 15, (int8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x1245f4: 0x0  nop
    ctx->pc = 0x1245f4u;
    // NOP
    // 0x1245f8: 0x0  nop
    ctx->pc = 0x1245f8u;
    // NOP
    // 0x1245fc: 0x0  nop
    ctx->pc = 0x1245fcu;
    // NOP
    // 0x124600: 0x0  nop
    ctx->pc = 0x124600u;
    // NOP
    // 0x124604: 0x51eefffa  beql        $t7, $t6, . + 4 + (-0x6 << 2)
    ctx->pc = 0x124604u;
    {
        const bool branch_taken_0x124604 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 14));
        if (branch_taken_0x124604) {
            ctx->pc = 0x124608u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x124604u;
            // 0x124608: 0x26d6ffff  addiu       $s6, $s6, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1245F0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1245f0;
        }
    }
    ctx->pc = 0x12460Cu;
    // 0x12460c: 0x1000fd8a  b           . + 4 + (-0x276 << 2)
    ctx->pc = 0x12460Cu;
    {
        const bool branch_taken_0x12460c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x124610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12460Cu;
        // 0x124610: 0x26d60001  addiu       $s6, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12460c) {
            ctx->pc = 0x123C38u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_123c38;
        }
    }
    ctx->pc = 0x124614u;
    // 0x124614: 0x0  nop
    ctx->pc = 0x124614u;
    // NOP
label_124618:
    // 0x124618: 0x24041009  addiu       $a0, $zero, 0x1009
    ctx->pc = 0x124618u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4105));
    // 0x12461c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x12461cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124620: 0x424bc  dsll32      $a0, $a0, 18
    ctx->pc = 0x124620u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 18));
    // 0x124624: 0xc048a76  jal         func_1229D8
    ctx->pc = 0x124624u;
    SET_GPR_U32(ctx, 31, 0x12462Cu);
    ctx->pc = 0x124628u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x124624u;
    // 0x124628: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1229D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1229D8u, 0x124624u, 0x12462Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12462Cu;
label_12462c:
    // 0x12462c: 0x1000ffd0  b           . + 4 + (-0x30 << 2)
    ctx->pc = 0x12462Cu;
    {
        const bool branch_taken_0x12462c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x124630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12462Cu;
        // 0x124630: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12462c) {
            ctx->pc = 0x124570u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_124570;
        }
    }
    ctx->pc = 0x124634u;
label_124634:
    // 0x124634: 0x8fae002c  lw          $t6, 0x2C($sp)
    ctx->pc = 0x124634u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x124638: 0xe9023  negu        $s2, $t6
    ctx->pc = 0x124638u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 14)));
    // 0x12463c: 0x1240fd0b  beqz        $s2, . + 4 + (-0x2F5 << 2)
    ctx->pc = 0x12463Cu;
    {
        const bool branch_taken_0x12463c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x124640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12463Cu;
        // 0x124640: 0x324e000f  andi        $t6, $s2, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 14, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12463c) {
            ctx->pc = 0x123A6Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_123a6c;
        }
    }
    ctx->pc = 0x124644u;
    // 0x124644: 0x3c0f003e  lui         $t7, 0x3E
    ctx->pc = 0x124644u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)62 << 16));
    // 0x124648: 0x25efb978  addiu       $t7, $t7, -0x4688
    ctx->pc = 0x124648u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294949240));
    // 0x12464c: 0xe70c0  sll         $t6, $t6, 3
    ctx->pc = 0x12464cu;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 14), 3));
    // 0x124650: 0x1cf7021  addu        $t6, $t6, $t7
    ctx->pc = 0x124650u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 15)));
    // 0x124654: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x124654u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124658: 0xddc40000  ld          $a0, 0x0($t6)
    ctx->pc = 0x124658u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x12465c: 0xc048a76  jal         func_1229D8
    ctx->pc = 0x12465Cu;
    SET_GPR_U32(ctx, 31, 0x124664u);
    ctx->pc = 0x124660u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12465Cu;
    // 0x124660: 0x128103  sra         $s0, $s2, 4 (Delay Slot)
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 18), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1229D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1229D8u, 0x12465Cu, 0x124664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124664u;
label_124664:
    // 0x124664: 0x1200fd01  beqz        $s0, . + 4 + (-0x2FF << 2)
    ctx->pc = 0x124664u;
    {
        const bool branch_taken_0x124664 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x124668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124664u;
        // 0x124668: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124664) {
            ctx->pc = 0x123A6Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_123a6c;
        }
    }
    ctx->pc = 0x12466Cu;
    // 0x12466c: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x12466cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124670: 0x3c0f003e  lui         $t7, 0x3E
    ctx->pc = 0x124670u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)62 << 16));
    // 0x124674: 0x25f0ba40  addiu       $s0, $t7, -0x45C0
    ctx->pc = 0x124674u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 15), 4294949440));
label_124678:
    // 0x124678: 0x324f0001  andi        $t7, $s2, 0x1
    ctx->pc = 0x124678u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
    // 0x12467c: 0x11e00005  beqz        $t7, . + 4 + (0x5 << 2)
    ctx->pc = 0x12467Cu;
    {
        const bool branch_taken_0x12467c = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x124680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12467Cu;
        // 0x124680: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12467c) {
            ctx->pc = 0x124694u;
            goto label_124694;
        }
    }
    ctx->pc = 0x124684u;
    // 0x124684: 0xde040000  ld          $a0, 0x0($s0)
    ctx->pc = 0x124684u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x124688: 0xc048a76  jal         func_1229D8
    ctx->pc = 0x124688u;
    SET_GPR_U32(ctx, 31, 0x124690u);
    ctx->pc = 0x12468Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x124688u;
    // 0x12468c: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1229D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1229D8u, 0x124688u, 0x124690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124690u;
label_124690:
    // 0x124690: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x124690u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_124694:
    // 0x124694: 0x129043  sra         $s2, $s2, 1
    ctx->pc = 0x124694u;
    SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 18), 1));
    // 0x124698: 0x1640fff7  bnez        $s2, . + 4 + (-0x9 << 2)
    ctx->pc = 0x124698u;
    {
        const bool branch_taken_0x124698 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x12469Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124698u;
        // 0x12469c: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124698) {
            ctx->pc = 0x124678u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_124678;
        }
    }
    ctx->pc = 0x1246A0u;
    // 0x1246a0: 0x1000fcf3  b           . + 4 + (-0x30D << 2)
    ctx->pc = 0x1246A0u;
    {
        const bool branch_taken_0x1246a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1246A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1246A0u;
        // 0x1246a4: 0x8faf0034  lw          $t7, 0x34($sp) (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1246a0) {
            ctx->pc = 0x123A70u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_123a70;
        }
    }
    ctx->pc = 0x1246A8u;
label_1246a8:
    // 0x1246a8: 0xafa00038  sw          $zero, 0x38($sp)
    ctx->pc = 0x1246a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
label_1246ac:
    // 0x1246ac: 0x8fae000c  lw          $t6, 0xC($sp)
    ctx->pc = 0x1246acu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x1246b0: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x1246b0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1246b4: 0xe782a  slt         $t7, $zero, $t6
    ctx->pc = 0x1246b4u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 14)) ? 1 : 0);
    // 0x1246b8: 0x1cf980b  movn        $s3, $t6, $t7
    ctx->pc = 0x1246b8u;
    if (GPR_U64(ctx, 15) != 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 14));
    // 0x1246bc: 0xafb3000c  sw          $s3, 0xC($sp)
    ctx->pc = 0x1246bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 19));
    // 0x1246c0: 0xafb30028  sw          $s3, 0x28($sp)
    ctx->pc = 0x1246c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 19));
    // 0x1246c4: 0x1000fca9  b           . + 4 + (-0x357 << 2)
    ctx->pc = 0x1246C4u;
    {
        const bool branch_taken_0x1246c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1246C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1246C4u;
        // 0x1246c8: 0xafb30020  sw          $s3, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1246c4) {
            ctx->pc = 0x12396Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12396c;
        }
    }
    ctx->pc = 0x1246CCu;
label_1246cc:
    // 0x1246cc: 0xafa00038  sw          $zero, 0x38($sp)
    ctx->pc = 0x1246ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
label_1246d0:
    // 0x1246d0: 0x8fae002c  lw          $t6, 0x2C($sp)
    ctx->pc = 0x1246d0u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x1246d4: 0x8fad000c  lw          $t5, 0xC($sp)
    ctx->pc = 0x1246d4u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x1246d8: 0x1ae7821  addu        $t7, $t5, $t6
    ctx->pc = 0x1246d8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 14)));
    // 0x1246dc: 0x25f30001  addiu       $s3, $t7, 0x1
    ctx->pc = 0x1246dcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
    // 0x1246e0: 0xafaf0028  sw          $t7, 0x28($sp)
    ctx->pc = 0x1246e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 15));
    // 0x1246e4: 0xafb30020  sw          $s3, 0x20($sp)
    ctx->pc = 0x1246e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 19));
    // 0x1246e8: 0x13702a  slt         $t6, $zero, $s3
    ctx->pc = 0x1246e8u;
    SET_GPR_U64(ctx, 14, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x1246ec: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1246ecu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1246f0: 0x1000fc9e  b           . + 4 + (-0x362 << 2)
    ctx->pc = 0x1246F0u;
    {
        const bool branch_taken_0x1246f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1246F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1246F0u;
        // 0x1246f4: 0x1ee980a  movz        $s3, $t7, $t6 (Delay Slot)
        if (GPR_U64(ctx, 14) == 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1246f0) {
            ctx->pc = 0x12396Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12396c;
        }
    }
    ctx->pc = 0x1246F8u;
label_1246f8:
    // 0x1246f8: 0x8fae0018  lw          $t6, 0x18($sp)
    ctx->pc = 0x1246f8u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1246fc: 0x8faf002c  lw          $t7, 0x2C($sp)
    ctx->pc = 0x1246fcu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x124700: 0xafa00040  sw          $zero, 0x40($sp)
    ctx->pc = 0x124700u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
    // 0x124704: 0x1cf7023  subu        $t6, $t6, $t7
    ctx->pc = 0x124704u;
    SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 14), GPR_U32(ctx, 15)));
    // 0x124708: 0xf6823  negu        $t5, $t7
    ctx->pc = 0x124708u;
    SET_GPR_S32(ctx, 13, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 15)));
    // 0x12470c: 0xafae0018  sw          $t6, 0x18($sp)
    ctx->pc = 0x12470cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 14));
    // 0x124710: 0x1000fc7a  b           . + 4 + (-0x386 << 2)
    ctx->pc = 0x124710u;
    {
        const bool branch_taken_0x124710 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x124714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124710u;
        // 0x124714: 0xafad001c  sw          $t5, 0x1C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124710) {
            ctx->pc = 0x1238FCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1238fc;
        }
    }
    ctx->pc = 0x124718u;
label_124718:
    // 0x124718: 0xafa0003c  sw          $zero, 0x3C($sp)
    ctx->pc = 0x124718u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 0));
    // 0x12471c: 0x1000fc70  b           . + 4 + (-0x390 << 2)
    ctx->pc = 0x12471Cu;
    {
        const bool branch_taken_0x12471c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x124720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12471Cu;
        // 0x124720: 0xafb00018  sw          $s0, 0x18($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12471c) {
            ctx->pc = 0x1238E0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1238e0;
        }
    }
    ctx->pc = 0x124724u;
label_124724:
    // 0x124724: 0x8faf0000  lw          $t7, 0x0($sp)
    ctx->pc = 0x124724u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x124728: 0x8fb20004  lw          $s2, 0x4($sp)
    ctx->pc = 0x124728u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x12472c: 0x24f6821  addu        $t5, $s2, $t7
    ctx->pc = 0x12472cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 15)));
    // 0x124730: 0x25b30432  addiu       $s3, $t5, 0x432
    ctx->pc = 0x124730u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 13), 1074));
    // 0x124734: 0x2a6f0021  slti        $t7, $s3, 0x21
    ctx->pc = 0x124734u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)33) ? 1 : 0);
    // 0x124738: 0x15e0001b  bnez        $t7, . + 4 + (0x1B << 2)
    ctx->pc = 0x124738u;
    {
        const bool branch_taken_0x124738 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x12473Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124738u;
        // 0x12473c: 0x14703c  dsll32      $t6, $s4, 0 (Delay Slot)
        SET_GPR_U64(ctx, 14, GPR_U64(ctx, 20) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124738) {
            ctx->pc = 0x1247A8u;
            goto label_1247a8;
        }
    }
    ctx->pc = 0x124740u;
    // 0x124740: 0x14783c  dsll32      $t7, $s4, 0
    ctx->pc = 0x124740u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 20) << (32 + 0));
    // 0x124744: 0x25ad0412  addiu       $t5, $t5, 0x412
    ctx->pc = 0x124744u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 1042));
    // 0x124748: 0x137023  negu        $t6, $s3
    ctx->pc = 0x124748u;
    SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 19)));
    // 0x12474c: 0xf783f  dsra32      $t7, $t7, 0
    ctx->pc = 0x12474cu;
    SET_GPR_S64(ctx, 15, GPR_S64(ctx, 15) >> (32 + 0));
    // 0x124750: 0x1d07004  sllv        $t6, $s0, $t6
    ctx->pc = 0x124750u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 14) & 0x1F));
    // 0x124754: 0x1af7806  srlv        $t7, $t7, $t5
    ctx->pc = 0x124754u;
    SET_GPR_S32(ctx, 15, (int32_t)SRL32(GPR_U32(ctx, 15), GPR_U32(ctx, 13) & 0x1F));
    // 0x124758: 0x1cf8025  or          $s0, $t6, $t7
    ctx->pc = 0x124758u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 14) | GPR_U64(ctx, 15));
label_12475c:
    // 0x12475c: 0xc048bb2  jal         func_122EC8
    ctx->pc = 0x12475Cu;
    SET_GPR_U32(ctx, 31, 0x124764u);
    ctx->pc = 0x124760u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12475Cu;
    // 0x124760: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122EC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122EC8u, 0x12475Cu, 0x124764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124764u;
label_124764:
    // 0x124764: 0x6010006  bgez        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x124764u;
    {
        const bool branch_taken_0x124764 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x124768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124764u;
        // 0x124768: 0x3c0ffe10  lui         $t7, 0xFE10 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)65040 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124764) {
            ctx->pc = 0x124780u;
            goto label_124780;
        }
    }
    ctx->pc = 0x12476Cu;
    // 0x12476c: 0x2405041f  addiu       $a1, $zero, 0x41F
    ctx->pc = 0x12476cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1055));
    // 0x124770: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x124770u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124774: 0xc048a46  jal         func_122918
    ctx->pc = 0x124774u;
    SET_GPR_U32(ctx, 31, 0x12477Cu);
    ctx->pc = 0x124778u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x124774u;
    // 0x124778: 0x52d3c  dsll32      $a1, $a1, 20 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122918u, 0x124774u, 0x12477Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12477Cu;
label_12477c:
    // 0x12477c: 0x3c0ffe10  lui         $t7, 0xFE10
    ctx->pc = 0x12477cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)65040 << 16));
label_124780:
    // 0x124780: 0x2703f  dsra32      $t6, $v0, 0
    ctx->pc = 0x124780u;
    SET_GPR_S64(ctx, 14, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x124784: 0x1cf7021  addu        $t6, $t6, $t7
    ctx->pc = 0x124784u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 15)));
    // 0x124788: 0x2b83c  dsll32      $s7, $v0, 0
    ctx->pc = 0x124788u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 2) << (32 + 0));
    // 0x12478c: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x12478cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x124790: 0x17b83e  dsrl32      $s7, $s7, 0
    ctx->pc = 0x124790u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) >> (32 + 0));
    // 0x124794: 0xe703c  dsll32      $t6, $t6, 0
    ctx->pc = 0x124794u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) << (32 + 0));
    // 0x124798: 0xafaf0044  sw          $t7, 0x44($sp)
    ctx->pc = 0x124798u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 15));
    // 0x12479c: 0x2673fbcd  addiu       $s3, $s3, -0x433
    ctx->pc = 0x12479cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294966221));
    // 0x1247a0: 0x1000fc0f  b           . + 4 + (-0x3F1 << 2)
    ctx->pc = 0x1247A0u;
    {
        const bool branch_taken_0x1247a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1247A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1247A0u;
        // 0x1247a4: 0x2eeb825  or          $s7, $s7, $t6 (Delay Slot)
        SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) | GPR_U64(ctx, 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1247a0) {
            ctx->pc = 0x1237E0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1237e0;
        }
    }
    ctx->pc = 0x1247A8u;
label_1247a8:
    // 0x1247a8: 0x137823  negu        $t7, $s3
    ctx->pc = 0x1247a8u;
    SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 19)));
    // 0x1247ac: 0xe703f  dsra32      $t6, $t6, 0
    ctx->pc = 0x1247acu;
    SET_GPR_S64(ctx, 14, GPR_S64(ctx, 14) >> (32 + 0));
    // 0x1247b0: 0x1000ffea  b           . + 4 + (-0x16 << 2)
    ctx->pc = 0x1247B0u;
    {
        const bool branch_taken_0x1247b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1247B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1247B0u;
        // 0x1247b4: 0x1ee8004  sllv        $s0, $t6, $t7 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 14), GPR_U32(ctx, 15) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1247b0) {
            ctx->pc = 0x12475Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12475c;
        }
    }
    ctx->pc = 0x1247B8u;
}
