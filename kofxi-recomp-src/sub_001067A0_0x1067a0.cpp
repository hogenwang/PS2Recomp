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

// Function: sub_001067A0
// Address: 0x1067a0 - 0x106cf8
void sub_001067A0_0x1067a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001067A0_0x1067a0");
#endif

    switch (ctx->pc) {
        case 0x106818u: goto label_106818;
        case 0x10683cu: goto label_10683c;
        case 0x1068b4u: goto label_1068b4;
        case 0x1068fcu: goto label_1068fc;
        case 0x1069b8u: goto label_1069b8;
        case 0x1069e4u: goto label_1069e4;
        case 0x106a54u: goto label_106a54;
        case 0x106a80u: goto label_106a80;
        case 0x106ae0u: goto label_106ae0;
        case 0x106b0cu: goto label_106b0c;
        case 0x106b3cu: goto label_106b3c;
        case 0x106b64u: goto label_106b64;
        case 0x106b6cu: goto label_106b6c;
        default: break;
    }

    ctx->pc = 0x1067a0u;

    // 0x1067a0: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x1067a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x1067a4: 0x3c0b1000  lui         $t3, 0x1000
    ctx->pc = 0x1067a4u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)4096 << 16));
    // 0x1067a8: 0xffb60090  sd          $s6, 0x90($sp)
    ctx->pc = 0x1067a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 22));
    // 0x1067ac: 0x356b2010  ori         $t3, $t3, 0x2010
    ctx->pc = 0x1067acu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)8208);
    // 0x1067b0: 0xffb50080  sd          $s5, 0x80($sp)
    ctx->pc = 0x1067b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 21));
    // 0x1067b4: 0x3c02f8ff  lui         $v0, 0xF8FF
    ctx->pc = 0x1067b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63743 << 16));
    // 0x1067b8: 0xffb30060  sd          $s3, 0x60($sp)
    ctx->pc = 0x1067b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 19));
    // 0x1067bc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1067bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1067c0: 0xffb10040  sd          $s1, 0x40($sp)
    ctx->pc = 0x1067c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 17));
    // 0x1067c4: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1067c4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1067c8: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x1067c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x1067cc: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x1067ccu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1067d0: 0xffbf00c0  sd          $ra, 0xC0($sp)
    ctx->pc = 0x1067d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 31));
    // 0x1067d4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1067d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1067d8: 0xffbe00b0  sd          $fp, 0xB0($sp)
    ctx->pc = 0x1067d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 30));
    // 0x1067dc: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x1067dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1067e0: 0xffb700a0  sd          $s7, 0xA0($sp)
    ctx->pc = 0x1067e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 23));
    // 0x1067e4: 0x140b02d  daddu       $s6, $t2, $zero
    ctx->pc = 0x1067e4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1067e8: 0xffb40070  sd          $s4, 0x70($sp)
    ctx->pc = 0x1067e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 20));
    // 0x1067ec: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x1067ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x1067f0: 0x8e040160  lw          $a0, 0x160($s0)
    ctx->pc = 0x1067f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 352)));
    // 0x1067f4: 0x8d630000  lw          $v1, 0x0($t3)
    ctx->pc = 0x1067f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x1067f8: 0x42600  sll         $a0, $a0, 24
    ctx->pc = 0x1067f8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 24));
    // 0x1067fc: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x1067fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x106800: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x106800u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x106804: 0xad630000  sw          $v1, 0x0($t3)
    ctx->pc = 0x106804u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 3));
    // 0x106808: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x106808u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10680c: 0xafa70020  sw          $a3, 0x20($sp)
    ctx->pc = 0x10680cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 7));
    // 0x106810: 0xc041cda  jal         func_107368
    ctx->pc = 0x106810u;
    SET_GPR_U32(ctx, 31, 0x106818u);
    ctx->pc = 0x106814u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x106810u;
    // 0x106814: 0xafa90024  sw          $t1, 0x24($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107368u, 0x106810u, 0x106818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x106818u;
label_106818:
    // 0x106818: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x106818u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x10681c: 0x3c033400  lui         $v1, 0x3400
    ctx->pc = 0x10681cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)13312 << 16));
    // 0x106820: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x106820u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x106824: 0x3c053000  lui         $a1, 0x3000
    ctx->pc = 0x106824u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)12288 << 16));
    // 0x106828: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x106828u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3)); // MMIO: 0x10000000
    // 0x10682c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10682cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106830: 0xae000828  sw          $zero, 0x828($s0)
    ctx->pc = 0x106830u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2088), GPR_U32(ctx, 0));
    // 0x106834: 0xc041bf6  jal         func_106FD8
    ctx->pc = 0x106834u;
    SET_GPR_U32(ctx, 31, 0x10683Cu);
    ctx->pc = 0x106838u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x106834u;
    // 0x106838: 0xae05082c  sw          $a1, 0x82C($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 2092), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106FD8u, 0x106834u, 0x10683Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10683Cu;
label_10683c:
    // 0x10683c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x10683cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106840: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x106840u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x106844: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x106844u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x106848: 0x34632030  ori         $v1, $v1, 0x2030
    ctx->pc = 0x106848u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8240);
    // 0x10684c: 0x34422020  ori         $v0, $v0, 0x2020
    ctx->pc = 0x10684cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8224);
    // 0x106850: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x106850u;
    SET_GPR_S32(ctx, 5, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0))); // MMIO: 0x10000000
    // 0x106854: 0xdc640000  ld          $a0, 0x0($v1)
    ctx->pc = 0x106854u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x106858: 0x4103c  dsll32      $v0, $a0, 0
    ctx->pc = 0x106858u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 0));
    // 0x10685c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x10685cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x106860: 0x4810005  bgez        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x106860u;
    {
        const bool branch_taken_0x106860 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x106864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106860u;
        // 0x106864: 0xae020848  sw          $v0, 0x848($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2120), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106860) {
            ctx->pc = 0x106878u;
            goto label_106878;
        }
    }
    ctx->pc = 0x106868u;
    // 0x106868: 0x30a2001f  andi        $v0, $a1, 0x1F
    ctx->pc = 0x106868u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)31);
    // 0x10686c: 0x21023  negu        $v0, $v0
    ctx->pc = 0x10686cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x106870: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x106870u;
    {
        const bool branch_taken_0x106870 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x106874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106870u;
        // 0x106874: 0x3042001f  andi        $v0, $v0, 0x1F (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
        ctx->in_delay_slot = false;
        if (branch_taken_0x106870) {
            ctx->pc = 0x10687Cu;
            goto label_10687c;
        }
    }
    ctx->pc = 0x106878u;
label_106878:
    // 0x106878: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x106878u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_10687c:
    // 0x10687c: 0xae02084c  sw          $v0, 0x84C($s0)
    ctx->pc = 0x10687cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2124), GPR_U32(ctx, 2));
    // 0x106880: 0x30c2ffff  andi        $v0, $a2, 0xFFFF
    ctx->pc = 0x106880u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x106884: 0x6183c  dsll32      $v1, $a2, 0
    ctx->pc = 0x106884u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) << (32 + 0));
    // 0x106888: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x106888u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x10688c: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x10688cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x106890: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x106890u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x106894: 0x22403  sra         $a0, $v0, 16
    ctx->pc = 0x106894u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 16));
    // 0x106898: 0xae03012c  sw          $v1, 0x12C($s0)
    ctx->pc = 0x106898u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 300), GPR_U32(ctx, 3));
    // 0x10689c: 0x14800009  bnez        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x10689Cu;
    {
        const bool branch_taken_0x10689c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1068A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10689Cu;
        // 0x1068a0: 0xae640000  sw          $a0, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10689c) {
            ctx->pc = 0x1068C4u;
            goto label_1068c4;
        }
    }
    ctx->pc = 0x1068A4u;
    // 0x1068a4: 0x3c05003e  lui         $a1, 0x3E
    ctx->pc = 0x1068a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)62 << 16));
    // 0x1068a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1068a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1068ac: 0xc04305a  jal         func_10C168
    ctx->pc = 0x1068ACu;
    SET_GPR_U32(ctx, 31, 0x1068B4u);
    ctx->pc = 0x1068B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1068ACu;
    // 0x1068b0: 0x24a5a058  addiu       $a1, $a1, -0x5FA8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294942808));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10C168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10C168u, 0x1068ACu, 0x1068B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1068B4u;
label_1068b4:
    // 0x1068b4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1068b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1068b8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1068b8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1068bc: 0x10000102  b           . + 4 + (0x102 << 2)
    ctx->pc = 0x1068BCu;
    {
        const bool branch_taken_0x1068bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1068C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1068BCu;
        // 0x1068c0: 0xae03012c  sw          $v1, 0x12C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 300), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1068bc) {
            ctx->pc = 0x106CC8u;
            goto label_106cc8;
        }
    }
    ctx->pc = 0x1068C4u;
label_1068c4:
    // 0x1068c4: 0x3082000c  andi        $v0, $a0, 0xC
    ctx->pc = 0x1068c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)12);
    // 0x1068c8: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1068C8u;
    {
        const bool branch_taken_0x1068c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1068CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1068C8u;
        // 0x1068cc: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1068c8) {
            ctx->pc = 0x106904u;
            goto label_106904;
        }
    }
    ctx->pc = 0x1068D0u;
    // 0x1068d0: 0x8e030184  lw          $v1, 0x184($s0)
    ctx->pc = 0x1068d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 388)));
    // 0x1068d4: 0x54620007  bnel        $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1068D4u;
    {
        const bool branch_taken_0x1068d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1068d4) {
            ctx->pc = 0x1068D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1068D4u;
            // 0x1068d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1068F4u;
            goto label_1068f4;
        }
    }
    ctx->pc = 0x1068DCu;
    // 0x1068dc: 0x8e02018c  lw          $v0, 0x18C($s0)
    ctx->pc = 0x1068dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 396)));
    // 0x1068e0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1068E0u;
    {
        const bool branch_taken_0x1068e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1068E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1068E0u;
        // 0x1068e4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1068e0) {
            ctx->pc = 0x1068F0u;
            goto label_1068f0;
        }
    }
    ctx->pc = 0x1068E8u;
    // 0x1068e8: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1068E8u;
    {
        const bool branch_taken_0x1068e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1068ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1068E8u;
        // 0x1068ec: 0xaea20000  sw          $v0, 0x0($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1068e8) {
            ctx->pc = 0x106930u;
            goto label_106930;
        }
    }
    ctx->pc = 0x1068F0u;
label_1068f0:
    // 0x1068f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1068f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1068f4:
    // 0x1068f4: 0xc041c56  jal         func_107158
    ctx->pc = 0x1068F4u;
    SET_GPR_U32(ctx, 31, 0x1068FCu);
    ctx->pc = 0x1068F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1068F4u;
    // 0x1068f8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107158u, 0x1068F4u, 0x1068FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1068FCu;
label_1068fc:
    // 0x1068fc: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1068FCu;
    {
        const bool branch_taken_0x1068fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x106900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1068FCu;
        // 0x106900: 0xaea20000  sw          $v0, 0x0($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1068fc) {
            ctx->pc = 0x106930u;
            goto label_106930;
        }
    }
    ctx->pc = 0x106904u;
label_106904:
    // 0x106904: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x106904u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x106908: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x106908u;
    {
        const bool branch_taken_0x106908 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x106908) {
            ctx->pc = 0x10690Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x106908u;
            // 0x10690c: 0x8e060184  lw          $a2, 0x184($s0) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 388)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x106934u;
            goto label_106934;
        }
    }
    ctx->pc = 0x106910u;
    // 0x106910: 0x8e020190  lw          $v0, 0x190($s0)
    ctx->pc = 0x106910u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 400)));
    // 0x106914: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x106914u;
    {
        const bool branch_taken_0x106914 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x106918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106914u;
        // 0x106918: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106914) {
            ctx->pc = 0x106930u;
            goto label_106930;
        }
    }
    ctx->pc = 0x10691Cu;
    // 0x10691c: 0x8e020184  lw          $v0, 0x184($s0)
    ctx->pc = 0x10691cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 388)));
    // 0x106920: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x106920u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x106924: 0x38420003  xori        $v0, $v0, 0x3
    ctx->pc = 0x106924u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)3);
    // 0x106928: 0x82180a  movz        $v1, $a0, $v0
    ctx->pc = 0x106928u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 4));
    // 0x10692c: 0xaea30000  sw          $v1, 0x0($s5)
    ctx->pc = 0x10692cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 3));
label_106930:
    // 0x106930: 0x8e060184  lw          $a2, 0x184($s0)
    ctx->pc = 0x106930u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 388)));
label_106934:
    // 0x106934: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x106934u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x106938: 0x14c20008  bne         $a2, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x106938u;
    {
        const bool branch_taken_0x106938 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x10693Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106938u;
        // 0x10693c: 0x8ea50000  lw          $a1, 0x0($s5) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106938) {
            ctx->pc = 0x10695Cu;
            goto label_10695c;
        }
    }
    ctx->pc = 0x106940u;
    // 0x106940: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x106940u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x106944: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x106944u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x106948: 0x38a30001  xori        $v1, $a1, 0x1
    ctx->pc = 0x106948u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)1);
    // 0x10694c: 0x38a40002  xori        $a0, $a1, 0x2
    ctx->pc = 0x10694cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)2);
    // 0x106950: 0x43900a  movz        $s2, $v0, $v1
    ctx->pc = 0x106950u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 2));
    // 0x106954: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x106954u;
    {
        const bool branch_taken_0x106954 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x106958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106954u;
        // 0x106958: 0x2c940001  sltiu       $s4, $a0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 20, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x106954) {
            ctx->pc = 0x106970u;
            goto label_106970;
        }
    }
    ctx->pc = 0x10695Cu;
label_10695c:
    // 0x10695c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x10695cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x106960: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x106960u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x106964: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x106964u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106968: 0x38a20002  xori        $v0, $a1, 0x2
    ctx->pc = 0x106968u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)2);
    // 0x10696c: 0x62900a  movz        $s2, $v1, $v0
    ctx->pc = 0x10696cu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 3));
label_106970:
    // 0x106970: 0x38a20003  xori        $v0, $a1, 0x3
    ctx->pc = 0x106970u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)3);
    // 0x106974: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x106974u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106978: 0x16800003  bnez        $s4, . + 4 + (0x3 << 2)
    ctx->pc = 0x106978u;
    {
        const bool branch_taken_0x106978 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x10697Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106978u;
        // 0x10697c: 0x2c5e0001  sltiu       $fp, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 30, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x106978) {
            ctx->pc = 0x106988u;
            goto label_106988;
        }
    }
    ctx->pc = 0x106980u;
    // 0x106980: 0x38c20003  xori        $v0, $a2, 0x3
    ctx->pc = 0x106980u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) ^ (uint64_t)(uint16_t)3);
    // 0x106984: 0x2c570001  sltiu       $s7, $v0, 0x1
    ctx->pc = 0x106984u;
    SET_GPR_U64(ctx, 23, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_106988:
    // 0x106988: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x106988u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x10698c: 0x14c2000d  bne         $a2, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x10698Cu;
    {
        const bool branch_taken_0x10698c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x106990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10698Cu;
        // 0x106990: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10698c) {
            ctx->pc = 0x1069C4u;
            goto label_1069c4;
        }
    }
    ctx->pc = 0x106994u;
    // 0x106994: 0x8e02018c  lw          $v0, 0x18C($s0)
    ctx->pc = 0x106994u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 396)));
    // 0x106998: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x106998u;
    {
        const bool branch_taken_0x106998 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10699Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106998u;
        // 0x10699c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106998) {
            ctx->pc = 0x1069C4u;
            goto label_1069c4;
        }
    }
    ctx->pc = 0x1069A0u;
    // 0x1069a0: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x1069a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1069a4: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x1069a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x1069a8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1069A8u;
    {
        const bool branch_taken_0x1069a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1069ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1069A8u;
        // 0x1069ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1069a8) {
            ctx->pc = 0x1069C0u;
            goto label_1069c0;
        }
    }
    ctx->pc = 0x1069B0u;
    // 0x1069b0: 0xc041c56  jal         func_107158
    ctx->pc = 0x1069B0u;
    SET_GPR_U32(ctx, 31, 0x1069B8u);
    ctx->pc = 0x1069B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1069B0u;
    // 0x1069b4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107158u, 0x1069B0u, 0x1069B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1069B8u;
label_1069b8:
    // 0x1069b8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1069B8u;
    {
        const bool branch_taken_0x1069b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1069BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1069B8u;
        // 0x1069bc: 0x8fa30020  lw          $v1, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1069b8) {
            ctx->pc = 0x1069C8u;
            goto label_1069c8;
        }
    }
    ctx->pc = 0x1069C0u;
label_1069c0:
    // 0x1069c0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1069c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1069c4:
    // 0x1069c4: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1069c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_1069c8:
    // 0x1069c8: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1069c8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x1069cc: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x1069ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1069d0: 0x30620010  andi        $v0, $v1, 0x10
    ctx->pc = 0x1069d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x1069d4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1069D4u;
    {
        const bool branch_taken_0x1069d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1069D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1069D4u;
        // 0x1069d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1069d4) {
            ctx->pc = 0x1069ECu;
            goto label_1069ec;
        }
    }
    ctx->pc = 0x1069DCu;
    // 0x1069dc: 0xc041c56  jal         func_107158
    ctx->pc = 0x1069DCu;
    SET_GPR_U32(ctx, 31, 0x1069E4u);
    ctx->pc = 0x1069E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1069DCu;
    // 0x1069e0: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107158u, 0x1069DCu, 0x1069E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1069E4u;
label_1069e4:
    // 0x1069e4: 0xae0201c4  sw          $v0, 0x1C4($s0)
    ctx->pc = 0x1069e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 452), GPR_U32(ctx, 2));
    // 0x1069e8: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x1069e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1069ec:
    // 0x1069ec: 0x30620008  andi        $v0, $v1, 0x8
    ctx->pc = 0x1069ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x1069f0: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x1069F0u;
    {
        const bool branch_taken_0x1069f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1069f0) {
            ctx->pc = 0x1069F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1069F0u;
            // 0x1069f4: 0x8e020858  lw          $v0, 0x858($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2136)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x106A14u;
            goto label_106a14;
        }
    }
    ctx->pc = 0x1069F8u;
    // 0x1069f8: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x1069f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x1069fc: 0x50400021  beql        $v0, $zero, . + 4 + (0x21 << 2)
    ctx->pc = 0x1069FCu;
    {
        const bool branch_taken_0x1069fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1069fc) {
            ctx->pc = 0x106A00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1069FCu;
            // 0x106a00: 0x8e03012c  lw          $v1, 0x12C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 300)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x106A84u;
            goto label_106a84;
        }
    }
    ctx->pc = 0x106A04u;
    // 0x106a04: 0x8e020190  lw          $v0, 0x190($s0)
    ctx->pc = 0x106a04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 400)));
    // 0x106a08: 0x5040001e  beql        $v0, $zero, . + 4 + (0x1E << 2)
    ctx->pc = 0x106A08u;
    {
        const bool branch_taken_0x106a08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x106a08) {
            ctx->pc = 0x106A0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x106A08u;
            // 0x106a0c: 0x8e03012c  lw          $v1, 0x12C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 300)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x106A84u;
            goto label_106a84;
        }
    }
    ctx->pc = 0x106A10u;
    // 0x106a10: 0x8e020858  lw          $v0, 0x858($s0)
    ctx->pc = 0x106a10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2136)));
label_106a14:
    // 0x106a14: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x106A14u;
    {
        const bool branch_taken_0x106a14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x106A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106A14u;
        // 0x106a18: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106a14) {
            ctx->pc = 0x106A5Cu;
            goto label_106a5c;
        }
    }
    ctx->pc = 0x106A1Cu;
    // 0x106a1c: 0x8e020178  lw          $v0, 0x178($s0)
    ctx->pc = 0x106a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 376)));
    // 0x106a20: 0x8e0b0174  lw          $t3, 0x174($s0)
    ctx->pc = 0x106a20u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 372)));
    // 0x106a24: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x106a24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106a28: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x106a28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x106a2c: 0x8fa70024  lw          $a3, 0x24($sp)
    ctx->pc = 0x106a2cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x106a30: 0xafbe0008  sw          $fp, 0x8($sp)
    ctx->pc = 0x106a30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 30));
    // 0x106a34: 0x256bffff  addiu       $t3, $t3, -0x1
    ctx->pc = 0x106a34u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967295));
    // 0x106a38: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x106a38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x106a3c: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x106a3cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106a40: 0xafb70010  sw          $s7, 0x10($sp)
    ctx->pc = 0x106a40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 23));
    // 0x106a44: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x106a44u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106a48: 0x240482d  daddu       $t1, $s2, $zero
    ctx->pc = 0x106a48u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106a4c: 0xc041980  jal         func_106600
    ctx->pc = 0x106A4Cu;
    SET_GPR_U32(ctx, 31, 0x106A54u);
    ctx->pc = 0x106A50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x106A4Cu;
    // 0x106a50: 0x280502d  daddu       $t2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106600u, 0x106A4Cu, 0x106A54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x106A54u;
label_106a54:
    // 0x106a54: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x106A54u;
    {
        const bool branch_taken_0x106a54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x106A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106A54u;
        // 0x106a58: 0x8e03012c  lw          $v1, 0x12C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 300)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106a54) {
            ctx->pc = 0x106A84u;
            goto label_106a84;
        }
    }
    ctx->pc = 0x106A5Cu;
label_106a5c:
    // 0x106a5c: 0x8e070168  lw          $a3, 0x168($s0)
    ctx->pc = 0x106a5cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 360)));
    // 0x106a60: 0x8e0b0164  lw          $t3, 0x164($s0)
    ctx->pc = 0x106a60u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 356)));
    // 0x106a64: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x106a64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106a68: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x106a68u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x106a6c: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x106a6cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106a70: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x106a70u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106a74: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x106a74u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106a78: 0xc041876  jal         func_1061D8
    ctx->pc = 0x106A78u;
    SET_GPR_U32(ctx, 31, 0x106A80u);
    ctx->pc = 0x106A7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x106A78u;
    // 0x106a7c: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1061D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1061D8u, 0x106A78u, 0x106A80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x106A80u;
label_106a80:
    // 0x106a80: 0x8e03012c  lw          $v1, 0x12C($s0)
    ctx->pc = 0x106a80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 300)));
label_106a84:
    // 0x106a84: 0x14600090  bnez        $v1, . + 4 + (0x90 << 2)
    ctx->pc = 0x106A84u;
    {
        const bool branch_taken_0x106a84 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x106A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106A84u;
        // 0x106a88: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106a84) {
            ctx->pc = 0x106CC8u;
            goto label_106cc8;
        }
    }
    ctx->pc = 0x106A8Cu;
    // 0x106a8c: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x106a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x106a90: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x106a90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x106a94: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x106A94u;
    {
        const bool branch_taken_0x106a94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x106a94) {
            ctx->pc = 0x106B10u;
            goto label_106b10;
        }
    }
    ctx->pc = 0x106A9Cu;
    // 0x106a9c: 0x8e020858  lw          $v0, 0x858($s0)
    ctx->pc = 0x106a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2136)));
    // 0x106aa0: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x106AA0u;
    {
        const bool branch_taken_0x106aa0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x106AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106AA0u;
        // 0x106aa4: 0x2c0302d  daddu       $a2, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106aa0) {
            ctx->pc = 0x106AE8u;
            goto label_106ae8;
        }
    }
    ctx->pc = 0x106AA8u;
    // 0x106aa8: 0x8e020180  lw          $v0, 0x180($s0)
    ctx->pc = 0x106aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 384)));
    // 0x106aac: 0x8e0b017c  lw          $t3, 0x17C($s0)
    ctx->pc = 0x106aacu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 380)));
    // 0x106ab0: 0x240482d  daddu       $t1, $s2, $zero
    ctx->pc = 0x106ab0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106ab4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x106ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x106ab8: 0x8fa70024  lw          $a3, 0x24($sp)
    ctx->pc = 0x106ab8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x106abc: 0xafb70010  sw          $s7, 0x10($sp)
    ctx->pc = 0x106abcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 23));
    // 0x106ac0: 0x280502d  daddu       $t2, $s4, $zero
    ctx->pc = 0x106ac0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106ac4: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x106ac4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x106ac8: 0x256bffff  addiu       $t3, $t3, -0x1
    ctx->pc = 0x106ac8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967295));
    // 0x106acc: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x106accu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x106ad0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x106ad0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106ad4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x106ad4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106ad8: 0xc041980  jal         func_106600
    ctx->pc = 0x106AD8u;
    SET_GPR_U32(ctx, 31, 0x106AE0u);
    ctx->pc = 0x106ADCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x106AD8u;
    // 0x106adc: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106600u, 0x106AD8u, 0x106AE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x106AE0u;
label_106ae0:
    // 0x106ae0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x106AE0u;
    {
        const bool branch_taken_0x106ae0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x106AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106AE0u;
        // 0x106ae4: 0x8e03012c  lw          $v1, 0x12C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 300)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106ae0) {
            ctx->pc = 0x106B10u;
            goto label_106b10;
        }
    }
    ctx->pc = 0x106AE8u;
label_106ae8:
    // 0x106ae8: 0x8e070170  lw          $a3, 0x170($s0)
    ctx->pc = 0x106ae8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 368)));
    // 0x106aec: 0x8e0b016c  lw          $t3, 0x16C($s0)
    ctx->pc = 0x106aecu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 364)));
    // 0x106af0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x106af0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106af4: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x106af4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x106af8: 0x26250008  addiu       $a1, $s1, 0x8
    ctx->pc = 0x106af8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x106afc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x106afcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106b00: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x106b00u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106b04: 0xc041876  jal         func_1061D8
    ctx->pc = 0x106B04u;
    SET_GPR_U32(ctx, 31, 0x106B0Cu);
    ctx->pc = 0x106B08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x106B04u;
    // 0x106b08: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1061D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1061D8u, 0x106B04u, 0x106B0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x106B0Cu;
label_106b0c:
    // 0x106b0c: 0x8e03012c  lw          $v1, 0x12C($s0)
    ctx->pc = 0x106b0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 300)));
label_106b10:
    // 0x106b10: 0x1460006d  bnez        $v1, . + 4 + (0x6D << 2)
    ctx->pc = 0x106B10u;
    {
        const bool branch_taken_0x106b10 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x106B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106B10u;
        // 0x106b14: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106b10) {
            ctx->pc = 0x106CC8u;
            goto label_106cc8;
        }
    }
    ctx->pc = 0x106B18u;
    // 0x106b18: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x106b18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x106b1c: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x106b1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x106b20: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x106B20u;
    {
        const bool branch_taken_0x106b20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x106B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106B20u;
        // 0x106b24: 0x30620003  andi        $v0, $v1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x106b20) {
            ctx->pc = 0x106B44u;
            goto label_106b44;
        }
    }
    ctx->pc = 0x106B28u;
    // 0x106b28: 0x8e020190  lw          $v0, 0x190($s0)
    ctx->pc = 0x106b28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 400)));
    // 0x106b2c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x106B2Cu;
    {
        const bool branch_taken_0x106b2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x106B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106B2Cu;
        // 0x106b30: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106b2c) {
            ctx->pc = 0x106B40u;
            goto label_106b40;
        }
    }
    ctx->pc = 0x106B34u;
    // 0x106b34: 0xc041ce8  jal         func_1073A0
    ctx->pc = 0x106B34u;
    SET_GPR_U32(ctx, 31, 0x106B3Cu);
    ctx->pc = 0x106B38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x106B34u;
    // 0x106b38: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1073A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1073A0u, 0x106B34u, 0x106B3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x106B3Cu;
label_106b3c:
    // 0x106b3c: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x106b3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_106b40:
    // 0x106b40: 0x30620003  andi        $v0, $v1, 0x3
    ctx->pc = 0x106b40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
label_106b44:
    // 0x106b44: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x106B44u;
    {
        const bool branch_taken_0x106b44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x106B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106B44u;
        // 0x106b48: 0x24030140  addiu       $v1, $zero, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106b44) {
            ctx->pc = 0x106BE8u;
            goto label_106be8;
        }
    }
    ctx->pc = 0x106B4Cu;
    // 0x106b4c: 0x8e020820  lw          $v0, 0x820($s0)
    ctx->pc = 0x106b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2080)));
    // 0x106b50: 0x24050300  addiu       $a1, $zero, 0x300
    ctx->pc = 0x106b50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 768));
    // 0x106b54: 0x432018  mult        $a0, $v0, $v1
    ctx->pc = 0x106b54u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x106b58: 0x901021  addu        $v0, $a0, $s0
    ctx->pc = 0x106b58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x106b5c: 0xc042122  jal         func_108488
    ctx->pc = 0x106B5Cu;
    SET_GPR_U32(ctx, 31, 0x106B64u);
    ctx->pc = 0x106B60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x106B5Cu;
    // 0x106b60: 0x8c4405a4  lw          $a0, 0x5A4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1444)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108488u, 0x106B5Cu, 0x106B64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x106B64u;
label_106b64:
    // 0x106b64: 0xc041cda  jal         func_107368
    ctx->pc = 0x106B64u;
    SET_GPR_U32(ctx, 31, 0x106B6Cu);
    ctx->pc = 0x106B68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x106B64u;
    // 0x106b68: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107368u, 0x106B64u, 0x106B6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x106B6Cu;
label_106b6c:
    // 0x106b6c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x106b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x106b70: 0x3c072000  lui         $a3, 0x2000
    ctx->pc = 0x106b70u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)8192 << 16));
    // 0x106b74: 0x8e0401c0  lw          $a0, 0x1C0($s0)
    ctx->pc = 0x106b74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 448)));
    // 0x106b78: 0x3c061000  lui         $a2, 0x1000
    ctx->pc = 0x106b78u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
    // 0x106b7c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x106b7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x106b80: 0x34c62000  ori         $a2, $a2, 0x2000
    ctx->pc = 0x106b80u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)8192);
    // 0x106b84: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x106b84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x106b88: 0x42680  sll         $a0, $a0, 26
    ctx->pc = 0x106b88u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 26));
    // 0x106b8c: 0x8e0301c4  lw          $v1, 0x1C4($s0)
    ctx->pc = 0x106b8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 452)));
    // 0x106b90: 0x52e40  sll         $a1, $a1, 25
    ctx->pc = 0x106b90u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 25));
    // 0x106b94: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x106b94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x106b98: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x106b98u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x106b9c: 0x216c0  sll         $v0, $v0, 27
    ctx->pc = 0x106b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 27));
    // 0x106ba0: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x106ba0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x106ba4: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x106ba4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x106ba8: 0x671825  or          $v1, $v1, $a3
    ctx->pc = 0x106ba8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
    // 0x106bac: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x106bacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x106bb0: 0x3c03f000  lui         $v1, 0xF000
    ctx->pc = 0x106bb0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)61440 << 16));
    // 0x106bb4: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x106bb4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x106bb8: 0x432824  and         $a1, $v0, $v1
    ctx->pc = 0x106bb8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x106bbc: 0x10a70006  beq         $a1, $a3, . + 4 + (0x6 << 2)
    ctx->pc = 0x106BBCu;
    {
        const bool branch_taken_0x106bbc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 7));
        ctx->pc = 0x106BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106BBCu;
        // 0x106bc0: 0xae05082c  sw          $a1, 0x82C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2092), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106bbc) {
            ctx->pc = 0x106BD8u;
            goto label_106bd8;
        }
    }
    ctx->pc = 0x106BC4u;
    // 0x106bc4: 0x3c023000  lui         $v0, 0x3000
    ctx->pc = 0x106bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12288 << 16));
    // 0x106bc8: 0x10a20003  beq         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x106BC8u;
    {
        const bool branch_taken_0x106bc8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x106BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106BC8u;
        // 0x106bcc: 0x3c024000  lui         $v0, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106bc8) {
            ctx->pc = 0x106BD8u;
            goto label_106bd8;
        }
    }
    ctx->pc = 0x106BD0u;
    // 0x106bd0: 0x14a20003  bne         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x106BD0u;
    {
        const bool branch_taken_0x106bd0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x106BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106BD0u;
        // 0x106bd4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106bd0) {
            ctx->pc = 0x106BE0u;
            goto label_106be0;
        }
    }
    ctx->pc = 0x106BD8u;
label_106bd8:
    // 0x106bd8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x106BD8u;
    {
        const bool branch_taken_0x106bd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x106BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106BD8u;
        // 0x106bdc: 0xae000828  sw          $zero, 0x828($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2088), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106bd8) {
            ctx->pc = 0x106BFCu;
            goto label_106bfc;
        }
    }
    ctx->pc = 0x106BE0u;
label_106be0:
    // 0x106be0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x106BE0u;
    {
        const bool branch_taken_0x106be0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x106BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106BE0u;
        // 0x106be4: 0xae020828  sw          $v0, 0x828($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2088), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106be0) {
            ctx->pc = 0x106BFCu;
            goto label_106bfc;
        }
    }
    ctx->pc = 0x106BE8u;
label_106be8:
    // 0x106be8: 0x8e020820  lw          $v0, 0x820($s0)
    ctx->pc = 0x106be8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2080)));
    // 0x106bec: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x106becu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x106bf0: 0x432818  mult        $a1, $v0, $v1
    ctx->pc = 0x106bf0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x106bf4: 0xb01021  addu        $v0, $a1, $s0
    ctx->pc = 0x106bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    // 0x106bf8: 0xac4406dc  sw          $a0, 0x6DC($v0)
    ctx->pc = 0x106bf8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1756), GPR_U32(ctx, 4));
label_106bfc:
    // 0x106bfc: 0x8e02012c  lw          $v0, 0x12C($s0)
    ctx->pc = 0x106bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 300)));
    // 0x106c00: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x106C00u;
    {
        const bool branch_taken_0x106c00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x106C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106C00u;
        // 0x106c04: 0xae0001c0  sw          $zero, 0x1C0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 448), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106c00) {
            ctx->pc = 0x106C10u;
            goto label_106c10;
        }
    }
    ctx->pc = 0x106C08u;
    // 0x106c08: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x106C08u;
    {
        const bool branch_taken_0x106c08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x106C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106C08u;
        // 0x106c0c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106c08) {
            ctx->pc = 0x106CC8u;
            goto label_106cc8;
        }
    }
    ctx->pc = 0x106C10u;
label_106c10:
    // 0x106c10: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x106c10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x106c14: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x106c14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x106c18: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x106C18u;
    {
        const bool branch_taken_0x106c18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x106c18) {
            ctx->pc = 0x106C1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x106C18u;
            // 0x106c1c: 0x8e020190  lw          $v0, 0x190($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 400)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x106C3Cu;
            goto label_106c3c;
        }
    }
    ctx->pc = 0x106C20u;
    // 0x106c20: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x106c20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x106c24: 0xae0301c0  sw          $v1, 0x1C0($s0)
    ctx->pc = 0x106c24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 448), GPR_U32(ctx, 3));
    // 0x106c28: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x106c28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x106c2c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x106c2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x106c30: 0x5040000d  beql        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x106C30u;
    {
        const bool branch_taken_0x106c30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x106c30) {
            ctx->pc = 0x106C34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x106C30u;
            // 0x106c34: 0x8e040160  lw          $a0, 0x160($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 352)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x106C68u;
            goto label_106c68;
        }
    }
    ctx->pc = 0x106C38u;
    // 0x106c38: 0x8e020190  lw          $v0, 0x190($s0)
    ctx->pc = 0x106c38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 400)));
label_106c3c:
    // 0x106c3c: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x106C3Cu;
    {
        const bool branch_taken_0x106c3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x106c3c) {
            ctx->pc = 0x106C40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x106C3Cu;
            // 0x106c40: 0x8e040160  lw          $a0, 0x160($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 352)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x106C68u;
            goto label_106c68;
        }
    }
    ctx->pc = 0x106C44u;
    // 0x106c44: 0xae200014  sw          $zero, 0x14($s1)
    ctx->pc = 0x106c44u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 0));
    // 0x106c48: 0xae200010  sw          $zero, 0x10($s1)
    ctx->pc = 0x106c48u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
    // 0x106c4c: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x106c4cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    // 0x106c50: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x106c50u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x106c54: 0xae20001c  sw          $zero, 0x1C($s1)
    ctx->pc = 0x106c54u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 0));
    // 0x106c58: 0xae200018  sw          $zero, 0x18($s1)
    ctx->pc = 0x106c58u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 0));
    // 0x106c5c: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x106c5cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
    // 0x106c60: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x106c60u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x106c64: 0x8e040160  lw          $a0, 0x160($s0)
    ctx->pc = 0x106c64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 352)));
label_106c68:
    // 0x106c68: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x106c68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x106c6c: 0x14820016  bne         $a0, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x106C6Cu;
    {
        const bool branch_taken_0x106c6c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x106C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106C6Cu;
        // 0x106c70: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106c6c) {
            ctx->pc = 0x106CC8u;
            goto label_106cc8;
        }
    }
    ctx->pc = 0x106C74u;
    // 0x106c74: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x106c74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x106c78: 0x30420009  andi        $v0, $v0, 0x9
    ctx->pc = 0x106c78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)9);
    // 0x106c7c: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x106C7Cu;
    {
        const bool branch_taken_0x106c7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x106C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106C7Cu;
        // 0x106c80: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106c7c) {
            ctx->pc = 0x106CC8u;
            goto label_106cc8;
        }
    }
    ctx->pc = 0x106C84u;
    // 0x106c84: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x106c84u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x106c88: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x106c88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x106c8c: 0xae200014  sw          $zero, 0x14($s1)
    ctx->pc = 0x106c8cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 0));
    // 0x106c90: 0xae200010  sw          $zero, 0x10($s1)
    ctx->pc = 0x106c90u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
    // 0x106c94: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x106c94u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    // 0x106c98: 0x8e020184  lw          $v0, 0x184($s0)
    ctx->pc = 0x106c98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 388)));
    // 0x106c9c: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x106C9Cu;
    {
        const bool branch_taken_0x106c9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x106CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106C9Cu;
        // 0x106ca0: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106c9c) {
            ctx->pc = 0x106CACu;
            goto label_106cac;
        }
    }
    ctx->pc = 0x106CA4u;
    // 0x106ca4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x106CA4u;
    {
        const bool branch_taken_0x106ca4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x106CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106CA4u;
        // 0x106ca8: 0xaea40000  sw          $a0, 0x0($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106ca4) {
            ctx->pc = 0x106CC4u;
            goto label_106cc4;
        }
    }
    ctx->pc = 0x106CACu;
label_106cac:
    // 0x106cac: 0xaea30000  sw          $v1, 0x0($s5)
    ctx->pc = 0x106cacu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 3));
    // 0x106cb0: 0x8fa30024  lw          $v1, 0x24($sp)
    ctx->pc = 0x106cb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x106cb4: 0x8e020184  lw          $v0, 0x184($s0)
    ctx->pc = 0x106cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 388)));
    // 0x106cb8: 0x38420002  xori        $v0, $v0, 0x2
    ctx->pc = 0x106cb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)2);
    // 0x106cbc: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x106cbcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x106cc0: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x106cc0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_106cc4:
    // 0x106cc4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x106cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_106cc8:
    // 0x106cc8: 0xdfbf00c0  ld          $ra, 0xC0($sp)
    ctx->pc = 0x106cc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x106ccc: 0xdfbe00b0  ld          $fp, 0xB0($sp)
    ctx->pc = 0x106cccu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x106cd0: 0xdfb700a0  ld          $s7, 0xA0($sp)
    ctx->pc = 0x106cd0u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x106cd4: 0xdfb60090  ld          $s6, 0x90($sp)
    ctx->pc = 0x106cd4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x106cd8: 0xdfb50080  ld          $s5, 0x80($sp)
    ctx->pc = 0x106cd8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x106cdc: 0xdfb40070  ld          $s4, 0x70($sp)
    ctx->pc = 0x106cdcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x106ce0: 0xdfb30060  ld          $s3, 0x60($sp)
    ctx->pc = 0x106ce0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x106ce4: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x106ce4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x106ce8: 0xdfb10040  ld          $s1, 0x40($sp)
    ctx->pc = 0x106ce8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x106cec: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x106cecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x106cf0: 0x3e00008  jr          $ra
    ctx->pc = 0x106CF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x106CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106CF0u;
        // 0x106cf4: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x106CF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x106CF8u;
}
