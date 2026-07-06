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

// Function: sub_00165F70
// Address: 0x165f70 - 0x166240
void sub_00165F70_0x165f70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00165F70_0x165f70");
#endif

    switch (ctx->pc) {
        case 0x165fa0u: goto label_165fa0;
        case 0x1661e8u: goto label_1661e8;
        case 0x166210u: goto label_166210;
        default: break;
    }

    ctx->pc = 0x165f70u;

    // 0x165f70: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x165f70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x165f74: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x165f74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x165f78: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x165f78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x165f7c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x165f7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x165f80: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x165f80u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165f84: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x165f84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x165f88: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x165f88u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165f8c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x165f8cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165f90: 0x326400ff  andi        $a0, $s3, 0xFF
    ctx->pc = 0x165f90u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)255);
    // 0x165f94: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x165f94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x165f98: 0xc063768  jal         func_18DDA0
    ctx->pc = 0x165F98u;
    SET_GPR_U32(ctx, 31, 0x165FA0u);
    ctx->pc = 0x165F9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x165F98u;
    // 0x165f9c: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18DDA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DDA0u, 0x165F98u, 0x165FA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165FA0u;
label_165fa0:
    // 0x165fa0: 0x94500000  lhu         $s0, 0x0($v0)
    ctx->pc = 0x165fa0u;
    SET_GPR_U32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x165fa4: 0x250082a  slt         $at, $s2, $s0
    ctx->pc = 0x165fa4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x165fa8: 0x1020009d  beqz        $at, . + 4 + (0x9D << 2)
    ctx->pc = 0x165FA8u;
    {
        const bool branch_taken_0x165fa8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x165FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165FA8u;
        // 0x165fac: 0x24430002  addiu       $v1, $v0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165fa8) {
            ctx->pc = 0x166220u;
            goto label_166220;
        }
    }
    ctx->pc = 0x165FB0u;
    // 0x165fb0: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x165fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x165fb4: 0xa620000e  sh          $zero, 0xE($s1)
    ctx->pc = 0x165fb4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 14), (uint16_t)GPR_U32(ctx, 0));
    // 0x165fb8: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x165fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x165fbc: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x165fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x165fc0: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x165fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x165fc4: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x165fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x165fc8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x165fc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x165fcc: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x165fccu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x165fd0: 0x90640002  lbu         $a0, 0x2($v1)
    ctx->pc = 0x165fd0u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x165fd4: 0xa6240004  sh          $a0, 0x4($s1)
    ctx->pc = 0x165fd4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 4), (uint16_t)GPR_U32(ctx, 4));
    // 0x165fd8: 0x94670004  lhu         $a3, 0x4($v1)
    ctx->pc = 0x165fd8u;
    SET_GPR_U32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x165fdc: 0x72a03  sra         $a1, $a3, 8
    ctx->pc = 0x165fdcu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 7), 8));
    // 0x165fe0: 0x72103  sra         $a0, $a3, 4
    ctx->pc = 0x165fe0u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 7), 4));
    // 0x165fe4: 0x30a600ff  andi        $a2, $a1, 0xFF
    ctx->pc = 0x165fe4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x165fe8: 0x3085000f  andi        $a1, $a0, 0xF
    ctx->pc = 0x165fe8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)15);
    // 0x165fec: 0xa626000a  sh          $a2, 0xA($s1)
    ctx->pc = 0x165fecu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 10), (uint16_t)GPR_U32(ctx, 6));
    // 0x165ff0: 0x72083  sra         $a0, $a3, 2
    ctx->pc = 0x165ff0u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 7), 2));
    // 0x165ff4: 0xa2250024  sb          $a1, 0x24($s1)
    ctx->pc = 0x165ff4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 36), (uint8_t)GPR_U32(ctx, 5));
    // 0x165ff8: 0x30840003  andi        $a0, $a0, 0x3
    ctx->pc = 0x165ff8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)3);
    // 0x165ffc: 0xa624000c  sh          $a0, 0xC($s1)
    ctx->pc = 0x165ffcu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 12), (uint16_t)GPR_U32(ctx, 4));
    // 0x166000: 0x30e40003  andi        $a0, $a3, 0x3
    ctx->pc = 0x166000u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)3);
    // 0x166004: 0xa2240021  sb          $a0, 0x21($s1)
    ctx->pc = 0x166004u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 33), (uint8_t)GPR_U32(ctx, 4));
    // 0x166008: 0x94660006  lhu         $a2, 0x6($v1)
    ctx->pc = 0x166008u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 6)));
    // 0x16600c: 0x30c44000  andi        $a0, $a2, 0x4000
    ctx->pc = 0x16600cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)16384);
    // 0x166010: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x166010u;
    {
        const bool branch_taken_0x166010 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x166010) {
            ctx->pc = 0x166014u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x166010u;
            // 0x166014: 0x62943  sra         $a1, $a2, 5 (Delay Slot)
            SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 6), 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x166028u;
            goto label_166028;
        }
    }
    ctx->pc = 0x166018u;
    // 0x166018: 0x9624000e  lhu         $a0, 0xE($s1)
    ctx->pc = 0x166018u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
    // 0x16601c: 0x34840100  ori         $a0, $a0, 0x100
    ctx->pc = 0x16601cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)256);
    // 0x166020: 0xa624000e  sh          $a0, 0xE($s1)
    ctx->pc = 0x166020u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 14), (uint16_t)GPR_U32(ctx, 4));
    // 0x166024: 0x62943  sra         $a1, $a2, 5
    ctx->pc = 0x166024u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 6), 5));
label_166028:
    // 0x166028: 0x30c42000  andi        $a0, $a2, 0x2000
    ctx->pc = 0x166028u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)8192);
    // 0x16602c: 0x30a5001f  andi        $a1, $a1, 0x1F
    ctx->pc = 0x16602cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)31);
    // 0x166030: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x166030u;
    {
        const bool branch_taken_0x166030 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x166034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166030u;
        // 0x166034: 0xa2250022  sb          $a1, 0x22($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 34), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166030) {
            ctx->pc = 0x166044u;
            goto label_166044;
        }
    }
    ctx->pc = 0x166038u;
    // 0x166038: 0x92240022  lbu         $a0, 0x22($s1)
    ctx->pc = 0x166038u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 34)));
    // 0x16603c: 0x34840080  ori         $a0, $a0, 0x80
    ctx->pc = 0x16603cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)128);
    // 0x166040: 0xa2240022  sb          $a0, 0x22($s1)
    ctx->pc = 0x166040u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 34), (uint8_t)GPR_U32(ctx, 4));
label_166044:
    // 0x166044: 0x30c40800  andi        $a0, $a2, 0x800
    ctx->pc = 0x166044u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)2048);
    // 0x166048: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x166048u;
    {
        const bool branch_taken_0x166048 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x166048) {
            ctx->pc = 0x16604Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x166048u;
            // 0x16604c: 0x30c5001f  andi        $a1, $a2, 0x1F (Delay Slot)
            SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)31);
            ctx->in_delay_slot = false;
            ctx->pc = 0x166060u;
            goto label_166060;
        }
    }
    ctx->pc = 0x166050u;
    // 0x166050: 0x92240022  lbu         $a0, 0x22($s1)
    ctx->pc = 0x166050u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 34)));
    // 0x166054: 0x34840040  ori         $a0, $a0, 0x40
    ctx->pc = 0x166054u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)64);
    // 0x166058: 0xa2240022  sb          $a0, 0x22($s1)
    ctx->pc = 0x166058u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 34), (uint8_t)GPR_U32(ctx, 4));
    // 0x16605c: 0x30c5001f  andi        $a1, $a2, 0x1F
    ctx->pc = 0x16605cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)31);
label_166060:
    // 0x166060: 0x30c41000  andi        $a0, $a2, 0x1000
    ctx->pc = 0x166060u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)4096);
    // 0x166064: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x166064u;
    {
        const bool branch_taken_0x166064 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x166068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166064u;
        // 0x166068: 0xa2250023  sb          $a1, 0x23($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 35), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166064) {
            ctx->pc = 0x166078u;
            goto label_166078;
        }
    }
    ctx->pc = 0x16606Cu;
    // 0x16606c: 0x92240023  lbu         $a0, 0x23($s1)
    ctx->pc = 0x16606cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 35)));
    // 0x166070: 0x34840080  ori         $a0, $a0, 0x80
    ctx->pc = 0x166070u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)128);
    // 0x166074: 0xa2240023  sb          $a0, 0x23($s1)
    ctx->pc = 0x166074u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 35), (uint8_t)GPR_U32(ctx, 4));
label_166078:
    // 0x166078: 0x30c40400  andi        $a0, $a2, 0x400
    ctx->pc = 0x166078u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1024);
    // 0x16607c: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x16607Cu;
    {
        const bool branch_taken_0x16607c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x16607c) {
            ctx->pc = 0x166080u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16607Cu;
            // 0x166080: 0x94650008  lhu         $a1, 0x8($v1) (Delay Slot)
            SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x166094u;
            goto label_166094;
        }
    }
    ctx->pc = 0x166084u;
    // 0x166084: 0x92240023  lbu         $a0, 0x23($s1)
    ctx->pc = 0x166084u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 35)));
    // 0x166088: 0x34840040  ori         $a0, $a0, 0x40
    ctx->pc = 0x166088u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)64);
    // 0x16608c: 0xa2240023  sb          $a0, 0x23($s1)
    ctx->pc = 0x16608cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 35), (uint8_t)GPR_U32(ctx, 4));
    // 0x166090: 0x94650008  lhu         $a1, 0x8($v1)
    ctx->pc = 0x166090u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
label_166094:
    // 0x166094: 0x52203  sra         $a0, $a1, 8
    ctx->pc = 0x166094u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 5), 8));
    // 0x166098: 0xa224001e  sb          $a0, 0x1E($s1)
    ctx->pc = 0x166098u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 30), (uint8_t)GPR_U32(ctx, 4));
    // 0x16609c: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x16609cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1660a0: 0x9624000e  lhu         $a0, 0xE($s1)
    ctx->pc = 0x1660a0u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
    // 0x1660a4: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x1660a4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x1660a8: 0xa624000e  sh          $a0, 0xE($s1)
    ctx->pc = 0x1660a8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 14), (uint16_t)GPR_U32(ctx, 4));
    // 0x1660ac: 0x9464000a  lhu         $a0, 0xA($v1)
    ctx->pc = 0x1660acu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 10)));
    // 0x1660b0: 0x30853f00  andi        $a1, $a0, 0x3F00
    ctx->pc = 0x1660b0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)16128);
    // 0x1660b4: 0x3084003f  andi        $a0, $a0, 0x3F
    ctx->pc = 0x1660b4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)63);
    // 0x1660b8: 0xa6250008  sh          $a1, 0x8($s1)
    ctx->pc = 0x1660b8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 8), (uint16_t)GPR_U32(ctx, 5));
    // 0x1660bc: 0x42a00  sll         $a1, $a0, 8
    ctx->pc = 0x1660bcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
    // 0x1660c0: 0x96240008  lhu         $a0, 0x8($s1)
    ctx->pc = 0x1660c0u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1660c4: 0xa42025  or          $a0, $a1, $a0
    ctx->pc = 0x1660c4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x1660c8: 0xa6240006  sh          $a0, 0x6($s1)
    ctx->pc = 0x1660c8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 6), (uint16_t)GPR_U32(ctx, 4));
    // 0x1660cc: 0x9464000c  lhu         $a0, 0xC($v1)
    ctx->pc = 0x1660ccu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x1660d0: 0x30851fff  andi        $a1, $a0, 0x1FFF
    ctx->pc = 0x1660d0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)8191);
    // 0x1660d4: 0x42343  sra         $a0, $a0, 13
    ctx->pc = 0x1660d4u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 13));
    // 0x1660d8: 0xa6250012  sh          $a1, 0x12($s1)
    ctx->pc = 0x1660d8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 18), (uint16_t)GPR_U32(ctx, 5));
    // 0x1660dc: 0x30840007  andi        $a0, $a0, 0x7
    ctx->pc = 0x1660dcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)7);
    // 0x1660e0: 0xa2240020  sb          $a0, 0x20($s1)
    ctx->pc = 0x1660e0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 32), (uint8_t)GPR_U32(ctx, 4));
    // 0x1660e4: 0x9467000e  lhu         $a3, 0xE($v1)
    ctx->pc = 0x1660e4u;
    SET_GPR_U32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 14)));
    // 0x1660e8: 0x72303  sra         $a0, $a3, 12
    ctx->pc = 0x1660e8u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 7), 12));
    // 0x1660ec: 0x72a03  sra         $a1, $a3, 8
    ctx->pc = 0x1660ecu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 7), 8));
    // 0x1660f0: 0x30860003  andi        $a2, $a0, 0x3
    ctx->pc = 0x1660f0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)3);
    // 0x1660f4: 0x30e400ff  andi        $a0, $a3, 0xFF
    ctx->pc = 0x1660f4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x1660f8: 0xa2260026  sb          $a2, 0x26($s1)
    ctx->pc = 0x1660f8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 38), (uint8_t)GPR_U32(ctx, 6));
    // 0x1660fc: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x1660fcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x166100: 0xa2250027  sb          $a1, 0x27($s1)
    ctx->pc = 0x166100u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 39), (uint8_t)GPR_U32(ctx, 5));
    // 0x166104: 0xa6240014  sh          $a0, 0x14($s1)
    ctx->pc = 0x166104u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 20), (uint16_t)GPR_U32(ctx, 4));
    // 0x166108: 0x94640010  lhu         $a0, 0x10($v1)
    ctx->pc = 0x166108u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x16610c: 0x42a03  sra         $a1, $a0, 8
    ctx->pc = 0x16610cu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 4), 8));
    // 0x166110: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x166110u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x166114: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x166114u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x166118: 0x52840  sll         $a1, $a1, 1
    ctx->pc = 0x166118u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x16611c: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x16611cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x166120: 0xa6250018  sh          $a1, 0x18($s1)
    ctx->pc = 0x166120u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 24), (uint16_t)GPR_U32(ctx, 5));
    // 0x166124: 0xa6240016  sh          $a0, 0x16($s1)
    ctx->pc = 0x166124u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 22), (uint16_t)GPR_U32(ctx, 4));
    // 0x166128: 0xa2200028  sb          $zero, 0x28($s1)
    ctx->pc = 0x166128u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 40), (uint8_t)GPR_U32(ctx, 0));
    // 0x16612c: 0x94640012  lhu         $a0, 0x12($v1)
    ctx->pc = 0x16612cu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 18)));
    // 0x166130: 0x42b03  sra         $a1, $a0, 12
    ctx->pc = 0x166130u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 4), 12));
    // 0x166134: 0x30a5000f  andi        $a1, $a1, 0xF
    ctx->pc = 0x166134u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)15);
    // 0x166138: 0x30840fff  andi        $a0, $a0, 0xFFF
    ctx->pc = 0x166138u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4095);
    // 0x16613c: 0xa2250029  sb          $a1, 0x29($s1)
    ctx->pc = 0x16613cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 41), (uint8_t)GPR_U32(ctx, 5));
    // 0x166140: 0xa624001c  sh          $a0, 0x1C($s1)
    ctx->pc = 0x166140u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 28), (uint16_t)GPR_U32(ctx, 4));
    // 0x166144: 0x94650014  lhu         $a1, 0x14($v1)
    ctx->pc = 0x166144u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x166148: 0x52203  sra         $a0, $a1, 8
    ctx->pc = 0x166148u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 5), 8));
    // 0x16614c: 0x30a30080  andi        $v1, $a1, 0x80
    ctx->pc = 0x16614cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)128);
    // 0x166150: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x166150u;
    {
        const bool branch_taken_0x166150 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x166154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166150u;
        // 0x166154: 0xa224001f  sb          $a0, 0x1F($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 31), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166150) {
            ctx->pc = 0x166164u;
            goto label_166164;
        }
    }
    ctx->pc = 0x166158u;
    // 0x166158: 0x9623000e  lhu         $v1, 0xE($s1)
    ctx->pc = 0x166158u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
    // 0x16615c: 0x34630200  ori         $v1, $v1, 0x200
    ctx->pc = 0x16615cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)512);
    // 0x166160: 0xa623000e  sh          $v1, 0xE($s1)
    ctx->pc = 0x166160u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 14), (uint16_t)GPR_U32(ctx, 3));
label_166164:
    // 0x166164: 0x30a3001f  andi        $v1, $a1, 0x1F
    ctx->pc = 0x166164u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)31);
    // 0x166168: 0x3263c  dsll32      $a0, $v1, 24
    ctx->pc = 0x166168u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 24));
    // 0x16616c: 0xa2230025  sb          $v1, 0x25($s1)
    ctx->pc = 0x16616cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 37), (uint8_t)GPR_U32(ctx, 3));
    // 0x166170: 0x4263f  dsra32      $a0, $a0, 24
    ctx->pc = 0x166170u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 24));
    // 0x166174: 0x30830010  andi        $v1, $a0, 0x10
    ctx->pc = 0x166174u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)16);
    // 0x166178: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x166178u;
    {
        const bool branch_taken_0x166178 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x166178) {
            ctx->pc = 0x16617Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x166178u;
            // 0x16617c: 0x92240021  lbu         $a0, 0x21($s1) (Delay Slot)
            SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 33)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x166190u;
            goto label_166190;
        }
    }
    ctx->pc = 0x166180u;
    // 0x166180: 0x2403fff0  addiu       $v1, $zero, -0x10
    ctx->pc = 0x166180u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x166184: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x166184u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x166188: 0xa2230025  sb          $v1, 0x25($s1)
    ctx->pc = 0x166188u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 37), (uint8_t)GPR_U32(ctx, 3));
    // 0x16618c: 0x92240021  lbu         $a0, 0x21($s1)
    ctx->pc = 0x16618cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 33)));
label_166190:
    // 0x166190: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x166190u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x166194: 0x50830010  beql        $a0, $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x166194u;
    {
        const bool branch_taken_0x166194 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x166194) {
            ctx->pc = 0x166198u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x166194u;
            // 0x166198: 0xa6220002  sh          $v0, 0x2($s1) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 17), 2), (uint16_t)GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1661D8u;
            goto label_1661d8;
        }
    }
    ctx->pc = 0x16619Cu;
    // 0x16619c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x16619cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1661a0: 0x1083000c  beq         $a0, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x1661A0u;
    {
        const bool branch_taken_0x1661a0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1661a0) {
            ctx->pc = 0x1661D4u;
            goto label_1661d4;
        }
    }
    ctx->pc = 0x1661A8u;
    // 0x1661a8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1661a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1661ac: 0x50830006  beql        $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1661ACu;
    {
        const bool branch_taken_0x1661ac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1661ac) {
            ctx->pc = 0x1661B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1661ACu;
            // 0x1661b0: 0xa6220000  sh          $v0, 0x0($s1) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1661C8u;
            goto label_1661c8;
        }
    }
    ctx->pc = 0x1661B4u;
    // 0x1661b4: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1661B4u;
    {
        const bool branch_taken_0x1661b4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1661b4) {
            ctx->pc = 0x1661C4u;
            goto label_1661c4;
        }
    }
    ctx->pc = 0x1661BCu;
    // 0x1661bc: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x1661BCu;
    {
        const bool branch_taken_0x1661bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1661C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1661BCu;
        // 0x1661c0: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1661bc) {
            ctx->pc = 0x166218u;
            goto label_166218;
        }
    }
    ctx->pc = 0x1661C4u;
label_1661c4:
    // 0x1661c4: 0xa6220000  sh          $v0, 0x0($s1)
    ctx->pc = 0x1661c4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 2));
label_1661c8:
    // 0x1661c8: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1661c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1661cc: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1661CCu;
    {
        const bool branch_taken_0x1661cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1661D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1661CCu;
        // 0x1661d0: 0xa6220002  sh          $v0, 0x2($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 2), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1661cc) {
            ctx->pc = 0x166214u;
            goto label_166214;
        }
    }
    ctx->pc = 0x1661D4u;
label_1661d4:
    // 0x1661d4: 0xa6220002  sh          $v0, 0x2($s1)
    ctx->pc = 0x1661d4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2), (uint16_t)GPR_U32(ctx, 2));
label_1661d8:
    // 0x1661d8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1661d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1661dc: 0x92260002  lbu         $a2, 0x2($s1)
    ctx->pc = 0x1661dcu;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x1661e0: 0xc0638d8  jal         func_18E360
    ctx->pc = 0x1661E0u;
    SET_GPR_U32(ctx, 31, 0x1661E8u);
    ctx->pc = 0x1661E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1661E0u;
    // 0x1661e4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18E360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18E360u, 0x1661E0u, 0x1661E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1661E8u;
label_1661e8:
    // 0x1661e8: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x1661E8u;
    {
        const bool branch_taken_0x1661e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1661e8) {
            ctx->pc = 0x1661ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1661E8u;
            // 0x1661ec: 0xa6200000  sh          $zero, 0x0($s1) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x166214u;
            goto label_166214;
        }
    }
    ctx->pc = 0x1661F0u;
    // 0x1661f0: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x1661f0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1661f4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1661f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1661f8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1661f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1661fc: 0x21203  sra         $v0, $v0, 8
    ctx->pc = 0x1661fcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 8));
    // 0x166200: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x166200u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x166204: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x166204u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x166208: 0xc063614  jal         func_18D850
    ctx->pc = 0x166208u;
    SET_GPR_U32(ctx, 31, 0x166210u);
    ctx->pc = 0x16620Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x166208u;
    // 0x16620c: 0x304600ff  andi        $a2, $v0, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x18D850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18D850u, 0x166208u, 0x166210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166210u;
label_166210:
    // 0x166210: 0xa6220000  sh          $v0, 0x0($s1)
    ctx->pc = 0x166210u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 2));
label_166214:
    // 0x166214: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x166214u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_166218:
    // 0x166218: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x166218u;
    {
        const bool branch_taken_0x166218 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16621Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166218u;
        // 0x16621c: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166218) {
            ctx->pc = 0x166228u;
            goto label_166228;
        }
    }
    ctx->pc = 0x166220u;
label_166220:
    // 0x166220: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x166220u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166224: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x166224u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_166228:
    // 0x166228: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x166228u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x16622c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x16622cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x166230: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x166230u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x166234: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x166234u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x166238: 0x3e00008  jr          $ra
    ctx->pc = 0x166238u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16623Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166238u;
        // 0x16623c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x166238u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x166240u;
}
