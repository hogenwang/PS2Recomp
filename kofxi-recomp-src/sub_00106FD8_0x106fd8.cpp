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

// Function: sub_00106FD8
// Address: 0x106fd8 - 0x107158
void sub_00106FD8_0x106fd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00106FD8_0x106fd8");
#endif

    switch (ctx->pc) {
        case 0x107068u: goto label_107068;
        case 0x1070c4u: goto label_1070c4;
        case 0x1070e8u: goto label_1070e8;
        case 0x1070fcu: goto label_1070fc;
        default: break;
    }

    ctx->pc = 0x106fd8u;

    // 0x106fd8: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x106fd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x106fdc: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x106fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x106fe0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x106fe0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x106fe4: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x106fe4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x106fe8: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x106fe8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x106fec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x106fecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106ff0: 0xffbe0080  sd          $fp, 0x80($sp)
    ctx->pc = 0x106ff0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 30));
    // 0x106ff4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x106ff4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106ff8: 0xffb70070  sd          $s7, 0x70($sp)
    ctx->pc = 0x106ff8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
    // 0x106ffc: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x106ffcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x107000: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x107000u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x107004: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x107004u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x107008: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x107008u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x10700c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x10700cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x107010: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x107010u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x107014: 0xdc510000  ld          $s1, 0x0($v0)
    ctx->pc = 0x107014u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x107018: 0x6230042  bgezl       $s1, . + 4 + (0x42 << 2)
    ctx->pc = 0x107018u;
    {
        const bool branch_taken_0x107018 = (GPR_S32(ctx, 17) >= 0);
        if (branch_taken_0x107018) {
            ctx->pc = 0x10701Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x107018u;
            // 0x10701c: 0xae00082c  sw          $zero, 0x82C($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 2092), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x107124u;
            goto label_107124;
        }
    }
    ctx->pc = 0x107020u;
    // 0x107020: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x107020u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x107024: 0x34422010  ori         $v0, $v0, 0x2010
    ctx->pc = 0x107024u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8208);
    // 0x107028: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x107028u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0))); // MMIO: 0x10000000
    // 0x10702c: 0x30634000  andi        $v1, $v1, 0x4000
    ctx->pc = 0x10702cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16384);
    // 0x107030: 0x5460003c  bnel        $v1, $zero, . + 4 + (0x3C << 2)
    ctx->pc = 0x107030u;
    {
        const bool branch_taken_0x107030 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x107030) {
            ctx->pc = 0x107034u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x107030u;
            // 0x107034: 0xae00082c  sw          $zero, 0x82C($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 2092), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x107124u;
            goto label_107124;
        }
    }
    ctx->pc = 0x107038u;
    // 0x107038: 0x3c151000  lui         $s5, 0x1000
    ctx->pc = 0x107038u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)4096 << 16));
    // 0x10703c: 0x3c141000  lui         $s4, 0x1000
    ctx->pc = 0x10703cu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)4096 << 16));
    // 0x107040: 0x3c131000  lui         $s3, 0x1000
    ctx->pc = 0x107040u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)4096 << 16));
    // 0x107044: 0x3c121000  lui         $s2, 0x1000
    ctx->pc = 0x107044u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)4096 << 16));
    // 0x107048: 0x36b52020  ori         $s5, $s5, 0x2020
    ctx->pc = 0x107048u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)8224);
    // 0x10704c: 0x3c1e2000  lui         $fp, 0x2000
    ctx->pc = 0x10704cu;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)8192 << 16));
    // 0x107050: 0x3c173000  lui         $s7, 0x3000
    ctx->pc = 0x107050u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)12288 << 16));
    // 0x107054: 0x3c164000  lui         $s6, 0x4000
    ctx->pc = 0x107054u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)16384 << 16));
    // 0x107058: 0x3694b420  ori         $s4, $s4, 0xB420
    ctx->pc = 0x107058u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | (uint64_t)(uint16_t)46112);
    // 0x10705c: 0x36732000  ori         $s3, $s3, 0x2000
    ctx->pc = 0x10705cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)8192);
    // 0x107060: 0x36522010  ori         $s2, $s2, 0x2010
    ctx->pc = 0x107060u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)8208);
    // 0x107064: 0x0  nop
    ctx->pc = 0x107064u;
    // NOP
label_107068:
    // 0x107068: 0x8ea40000  lw          $a0, 0x0($s5)
    ctx->pc = 0x107068u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x10706c: 0x3c070003  lui         $a3, 0x3
    ctx->pc = 0x10706cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)3 << 16));
    // 0x107070: 0x8e05082c  lw          $a1, 0x82C($s0)
    ctx->pc = 0x107070u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2092)));
    // 0x107074: 0x3083ff00  andi        $v1, $a0, 0xFF00
    ctx->pc = 0x107074u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65280);
    // 0x107078: 0x871024  and         $v0, $a0, $a3
    ctx->pc = 0x107078u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 7));
    // 0x10707c: 0x21242  srl         $v0, $v0, 9
    ctx->pc = 0x10707cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 9));
    // 0x107080: 0x31842  srl         $v1, $v1, 1
    ctx->pc = 0x107080u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x107084: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x107084u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x107088: 0x3084007f  andi        $a0, $a0, 0x7F
    ctx->pc = 0x107088u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)127);
    // 0x10708c: 0x10be0005  beq         $a1, $fp, . + 4 + (0x5 << 2)
    ctx->pc = 0x10708Cu;
    {
        const bool branch_taken_0x10708c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 30));
        ctx->pc = 0x107090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10708Cu;
        // 0x107090: 0x641023  subu        $v0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10708c) {
            ctx->pc = 0x1070A4u;
            goto label_1070a4;
        }
    }
    ctx->pc = 0x107094u;
    // 0x107094: 0x50b70004  beql        $a1, $s7, . + 4 + (0x4 << 2)
    ctx->pc = 0x107094u;
    {
        const bool branch_taken_0x107094 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 23));
        if (branch_taken_0x107094) {
            ctx->pc = 0x107098u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x107094u;
            // 0x107098: 0x2c420020  sltiu       $v0, $v0, 0x20 (Delay Slot)
            SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1070A8u;
            goto label_1070a8;
        }
    }
    ctx->pc = 0x10709Cu;
    // 0x10709c: 0x54b6000d  bnel        $a1, $s6, . + 4 + (0xD << 2)
    ctx->pc = 0x10709Cu;
    {
        const bool branch_taken_0x10709c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 22));
        if (branch_taken_0x10709c) {
            ctx->pc = 0x1070A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10709Cu;
            // 0x1070a0: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1070D4u;
            goto label_1070d4;
        }
    }
    ctx->pc = 0x1070A4u;
label_1070a4:
    // 0x1070a4: 0x2c420020  sltiu       $v0, $v0, 0x20
    ctx->pc = 0x1070a4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
label_1070a8:
    // 0x1070a8: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1070A8u;
    {
        const bool branch_taken_0x1070a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1070ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1070A8u;
        // 0x1070ac: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1070a8) {
            ctx->pc = 0x1070D4u;
            goto label_1070d4;
        }
    }
    ctx->pc = 0x1070B0u;
    // 0x1070b0: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x1070b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1070b4: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1070B4u;
    {
        const bool branch_taken_0x1070b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1070B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1070B4u;
        // 0x1070b8: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1070b4) {
            ctx->pc = 0x1070D4u;
            goto label_1070d4;
        }
    }
    ctx->pc = 0x1070BCu;
    // 0x1070bc: 0xc042a22  jal         func_10A888
    ctx->pc = 0x1070BCu;
    SET_GPR_U32(ctx, 31, 0x1070C4u);
    ctx->pc = 0x1070C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1070BCu;
    // 0x1070c0: 0x8e040868  lw          $a0, 0x868($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2152)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A888u, 0x1070BCu, 0x1070C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1070C4u;
label_1070c4:
    // 0x1070c4: 0x8e030878  lw          $v1, 0x878($s0)
    ctx->pc = 0x1070c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2168)));
    // 0x1070c8: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x1070C8u;
    {
        const bool branch_taken_0x1070c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1070CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1070C8u;
        // 0x1070cc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1070c8) {
            ctx->pc = 0x1070F4u;
            goto label_1070f4;
        }
    }
    ctx->pc = 0x1070D0u;
    // 0x1070d0: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x1070d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1070d4:
    // 0x1070d4: 0x284201f5  slti        $v0, $v0, 0x1F5
    ctx->pc = 0x1070d4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)501) ? 1 : 0);
    // 0x1070d8: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1070D8u;
    {
        const bool branch_taken_0x1070d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1070DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1070D8u;
        // 0x1070dc: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1070d8) {
            ctx->pc = 0x107104u;
            goto label_107104;
        }
    }
    ctx->pc = 0x1070E0u;
    // 0x1070e0: 0xc042a22  jal         func_10A888
    ctx->pc = 0x1070E0u;
    SET_GPR_U32(ctx, 31, 0x1070E8u);
    ctx->pc = 0x1070E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1070E0u;
    // 0x1070e4: 0x8e040868  lw          $a0, 0x868($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2152)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A888u, 0x1070E0u, 0x1070E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1070E8u;
label_1070e8:
    // 0x1070e8: 0x8e030878  lw          $v1, 0x878($s0)
    ctx->pc = 0x1070e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2168)));
    // 0x1070ec: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1070ECu;
    {
        const bool branch_taken_0x1070ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1070F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1070ECu;
        // 0x1070f0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1070ec) {
            ctx->pc = 0x107104u;
            goto label_107104;
        }
    }
    ctx->pc = 0x1070F4u;
label_1070f4:
    // 0x1070f4: 0xc043000  jal         func_10C000
    ctx->pc = 0x1070F4u;
    SET_GPR_U32(ctx, 31, 0x1070FCu);
    ctx->pc = 0x10C000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10C000u, 0x1070F4u, 0x1070FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1070FCu;
label_1070fc:
    // 0x1070fc: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1070FCu;
    {
        const bool branch_taken_0x1070fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x107100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1070FCu;
        // 0x107100: 0xae00082c  sw          $zero, 0x82C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2092), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1070fc) {
            ctx->pc = 0x107124u;
            goto label_107124;
        }
    }
    ctx->pc = 0x107104u;
label_107104:
    // 0x107104: 0xde710000  ld          $s1, 0x0($s3)
    ctx->pc = 0x107104u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x107108: 0x6230006  bgezl       $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x107108u;
    {
        const bool branch_taken_0x107108 = (GPR_S32(ctx, 17) >= 0);
        if (branch_taken_0x107108) {
            ctx->pc = 0x10710Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x107108u;
            // 0x10710c: 0xae00082c  sw          $zero, 0x82C($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 2092), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x107124u;
            goto label_107124;
        }
    }
    ctx->pc = 0x107110u;
    // 0x107110: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x107110u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x107114: 0x30424000  andi        $v0, $v0, 0x4000
    ctx->pc = 0x107114u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16384);
    // 0x107118: 0x1040ffd3  beqz        $v0, . + 4 + (-0x2D << 2)
    ctx->pc = 0x107118u;
    {
        const bool branch_taken_0x107118 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x107118) {
            ctx->pc = 0x107068u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_107068;
        }
    }
    ctx->pc = 0x107120u;
    // 0x107120: 0xae00082c  sw          $zero, 0x82C($s0)
    ctx->pc = 0x107120u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2092), GPR_U32(ctx, 0));
label_107124:
    // 0x107124: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x107124u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107128: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x107128u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x10712c: 0xdfbe0080  ld          $fp, 0x80($sp)
    ctx->pc = 0x10712cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x107130: 0xdfb70070  ld          $s7, 0x70($sp)
    ctx->pc = 0x107130u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x107134: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x107134u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x107138: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x107138u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x10713c: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x10713cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x107140: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x107140u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x107144: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x107144u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x107148: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x107148u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10714c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10714cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x107150: 0x3e00008  jr          $ra
    ctx->pc = 0x107150u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x107154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107150u;
        // 0x107154: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x107150u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x107158u;
}
