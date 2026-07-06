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

// Function: sub_002EE8D8
// Address: 0x2ee8d8 - 0x2eec90
void sub_002EE8D8_0x2ee8d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EE8D8_0x2ee8d8");
#endif

    switch (ctx->pc) {
        case 0x2ee920u: goto label_2ee920;
        case 0x2ee988u: goto label_2ee988;
        case 0x2ee9e4u: goto label_2ee9e4;
        case 0x2ee9ecu: goto label_2ee9ec;
        case 0x2ee9f4u: goto label_2ee9f4;
        case 0x2ee9fcu: goto label_2ee9fc;
        case 0x2eea00u: goto label_2eea00;
        case 0x2eea58u: goto label_2eea58;
        case 0x2eea74u: goto label_2eea74;
        case 0x2eea7cu: goto label_2eea7c;
        case 0x2eeaccu: goto label_2eeacc;
        case 0x2eeae4u: goto label_2eeae4;
        case 0x2eeaf8u: goto label_2eeaf8;
        case 0x2eeb14u: goto label_2eeb14;
        case 0x2eeb20u: goto label_2eeb20;
        case 0x2eeb28u: goto label_2eeb28;
        case 0x2eeb2cu: goto label_2eeb2c;
        case 0x2eeb58u: goto label_2eeb58;
        case 0x2eeb60u: goto label_2eeb60;
        case 0x2eeb6cu: goto label_2eeb6c;
        case 0x2eebb0u: goto label_2eebb0;
        case 0x2eebc8u: goto label_2eebc8;
        case 0x2eebdcu: goto label_2eebdc;
        case 0x2eebe8u: goto label_2eebe8;
        case 0x2eec10u: goto label_2eec10;
        case 0x2eec1cu: goto label_2eec1c;
        case 0x2eec24u: goto label_2eec24;
        case 0x2eec50u: goto label_2eec50;
        case 0x2eec80u: goto label_2eec80;
        default: break;
    }

    ctx->pc = 0x2ee8d8u;

    // 0x2ee8d8: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x2ee8d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x2ee8dc: 0xffb10088  sd          $s1, 0x88($sp)
    ctx->pc = 0x2ee8dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 17));
    // 0x2ee8e0: 0xffb00080  sd          $s0, 0x80($sp)
    ctx->pc = 0x2ee8e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 16));
    // 0x2ee8e4: 0xffb30098  sd          $s3, 0x98($sp)
    ctx->pc = 0x2ee8e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 19));
    // 0x2ee8e8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2ee8e8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ee8ec: 0xffb400a0  sd          $s4, 0xA0($sp)
    ctx->pc = 0x2ee8ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 20));
    // 0x2ee8f0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2ee8f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ee8f4: 0xffb600b0  sd          $s6, 0xB0($sp)
    ctx->pc = 0x2ee8f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 22));
    // 0x2ee8f8: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x2ee8f8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ee8fc: 0xffb700b8  sd          $s7, 0xB8($sp)
    ctx->pc = 0x2ee8fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 184), GPR_U64(ctx, 23));
    // 0x2ee900: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x2ee900u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ee904: 0xffb20090  sd          $s2, 0x90($sp)
    ctx->pc = 0x2ee904u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 18));
    // 0x2ee908: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2ee908u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ee90c: 0xffb500a8  sd          $s5, 0xA8($sp)
    ctx->pc = 0x2ee90cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 21));
    // 0x2ee910: 0xffbe00c0  sd          $fp, 0xC0($sp)
    ctx->pc = 0x2ee910u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 30));
    // 0x2ee914: 0xffbf00c8  sd          $ra, 0xC8($sp)
    ctx->pc = 0x2ee914u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 200), GPR_U64(ctx, 31));
    // 0x2ee918: 0xc0bb642  jal         func_2ED908
    ctx->pc = 0x2EE918u;
    SET_GPR_U32(ctx, 31, 0x2EE920u);
    ctx->pc = 0x2EE91Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EE918u;
    // 0x2ee91c: 0x24170008  addiu       $s7, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ED908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ED908u, 0x2EE918u, 0x2EE920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EE920u;
label_2ee920:
    // 0x2ee920: 0x240e0007  addiu       $t6, $zero, 0x7
    ctx->pc = 0x2ee920u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2ee924: 0xafb70074  sw          $s7, 0x74($sp)
    ctx->pc = 0x2ee924u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 23));
    // 0x2ee928: 0xafae0070  sw          $t6, 0x70($sp)
    ctx->pc = 0x2ee928u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 14));
    // 0x2ee92c: 0x3c0f0040  lui         $t7, 0x40
    ctx->pc = 0x2ee92cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)64 << 16));
    // 0x2ee930: 0x8ded0f38  lw          $t5, 0xF38($t7)
    ctx->pc = 0x2ee930u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 3896)));
    // 0x2ee934: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x2ee934u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ee938: 0x25ee0f38  addiu       $t6, $t7, 0xF38
    ctx->pc = 0x2ee938u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 15), 3896));
    // 0x2ee93c: 0x95cc0004  lhu         $t4, 0x4($t6)
    ctx->pc = 0x2ee93cu;
    SET_GPR_U32(ctx, 12, (uint16_t)READ16(ADD32(GPR_U32(ctx, 14), 4)));
    // 0x2ee940: 0x240f0009  addiu       $t7, $zero, 0x9
    ctx->pc = 0x2ee940u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x2ee944: 0xafad0050  sw          $t5, 0x50($sp)
    ctx->pc = 0x2ee944u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 13));
    // 0x2ee948: 0x168f000b  bne         $s4, $t7, . + 4 + (0xB << 2)
    ctx->pc = 0x2EE948u;
    {
        const bool branch_taken_0x2ee948 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 15));
        ctx->pc = 0x2EE94Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE948u;
        // 0x2ee94c: 0xa7ac0054  sh          $t4, 0x54($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 84), (uint16_t)GPR_U32(ctx, 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee948) {
            ctx->pc = 0x2EE978u;
            goto label_2ee978;
        }
    }
    ctx->pc = 0x2EE950u;
    // 0x2ee950: 0x3c0f0040  lui         $t7, 0x40
    ctx->pc = 0x2ee950u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)64 << 16));
    // 0x2ee954: 0x2417000b  addiu       $s7, $zero, 0xB
    ctx->pc = 0x2ee954u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x2ee958: 0x25ee0f40  addiu       $t6, $t7, 0xF40
    ctx->pc = 0x2ee958u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 15), 3904));
    // 0x2ee95c: 0x8ded0f40  lw          $t5, 0xF40($t7)
    ctx->pc = 0x2ee95cu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 3904)));
    // 0x2ee960: 0x91cc0004  lbu         $t4, 0x4($t6)
    ctx->pc = 0x2ee960u;
    SET_GPR_U32(ctx, 12, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 4)));
    // 0x2ee964: 0x240f000c  addiu       $t7, $zero, 0xC
    ctx->pc = 0x2ee964u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2ee968: 0xafb70070  sw          $s7, 0x70($sp)
    ctx->pc = 0x2ee968u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 23));
    // 0x2ee96c: 0xafad0050  sw          $t5, 0x50($sp)
    ctx->pc = 0x2ee96cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 13));
    // 0x2ee970: 0xafaf0074  sw          $t7, 0x74($sp)
    ctx->pc = 0x2ee970u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 15));
    // 0x2ee974: 0xa3ac0054  sb          $t4, 0x54($sp)
    ctx->pc = 0x2ee974u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 84), (uint8_t)GPR_U32(ctx, 12));
label_2ee978:
    // 0x2ee978: 0x92060001  lbu         $a2, 0x1($s0)
    ctx->pc = 0x2ee978u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x2ee97c: 0x26050002  addiu       $a1, $s0, 0x2
    ctx->pc = 0x2ee97cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x2ee980: 0xc049c48  jal         func_127120
    ctx->pc = 0x2EE980u;
    SET_GPR_U32(ctx, 31, 0x2EE988u);
    ctx->pc = 0x2EE984u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EE980u;
    // 0x2ee984: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127120u, 0x2EE980u, 0x2EE988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EE988u;
label_2ee988:
    // 0x2ee988: 0x3c0f003c  lui         $t7, 0x3C
    ctx->pc = 0x2ee988u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)60 << 16));
    // 0x2ee98c: 0x25f2eca8  addiu       $s2, $t7, -0x1358
    ctx->pc = 0x2ee98cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 15), 4294962344));
    // 0x2ee990: 0x8e4e003c  lw          $t6, 0x3C($s2)
    ctx->pc = 0x2ee990u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 60)));
    // 0x2ee994: 0x8e4f0040  lw          $t7, 0x40($s2)
    ctx->pc = 0x2ee994u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
    // 0x2ee998: 0x11cf00b1  beq         $t6, $t7, . + 4 + (0xB1 << 2)
    ctx->pc = 0x2EE998u;
    {
        const bool branch_taken_0x2ee998 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 15));
        ctx->pc = 0x2EE99Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE998u;
        // 0x2ee99c: 0x97ac0008  lhu         $t4, 0x8($sp) (Delay Slot)
        SET_GPR_U32(ctx, 12, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee998) {
            ctx->pc = 0x2EEC60u;
            goto label_2eec60;
        }
    }
    ctx->pc = 0x2EE9A0u;
    // 0x2ee9a0: 0x966f0006  lhu         $t7, 0x6($s3)
    ctx->pc = 0x2ee9a0u;
    SET_GPR_U32(ctx, 15, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 6)));
    // 0x2ee9a4: 0x97ae0006  lhu         $t6, 0x6($sp)
    ctx->pc = 0x2ee9a4u;
    SET_GPR_U32(ctx, 14, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 6)));
    // 0x2ee9a8: 0xf7c00  sll         $t7, $t7, 16
    ctx->pc = 0x2ee9a8u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 15), 16));
    // 0x2ee9ac: 0x966d0008  lhu         $t5, 0x8($s3)
    ctx->pc = 0x2ee9acu;
    SET_GPR_U32(ctx, 13, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x2ee9b0: 0x3188ffff  andi        $t0, $t4, 0xFFFF
    ctx->pc = 0x2ee9b0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)65535);
    // 0x2ee9b4: 0xe7400  sll         $t6, $t6, 16
    ctx->pc = 0x2ee9b4u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 14), 16));
    // 0x2ee9b8: 0x1af6821  addu        $t5, $t5, $t7
    ctx->pc = 0x2ee9b8u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 15)));
    // 0x2ee9bc: 0x10e7021  addu        $t6, $t0, $t6
    ctx->pc = 0x2ee9bcu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 14)));
    // 0x2ee9c0: 0x1cd702a  slt         $t6, $t6, $t5
    ctx->pc = 0x2ee9c0u;
    SET_GPR_U64(ctx, 14, ((int64_t)GPR_S64(ctx, 14) < (int64_t)GPR_S64(ctx, 13)) ? 1 : 0);
    // 0x2ee9c4: 0x11c00019  beqz        $t6, . + 4 + (0x19 << 2)
    ctx->pc = 0x2EE9C4u;
    {
        const bool branch_taken_0x2ee9c4 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EE9C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE9C4u;
        // 0x2ee9c8: 0x27b00010  addiu       $s0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee9c4) {
            ctx->pc = 0x2EEA2Cu;
            goto label_2eea2c;
        }
    }
    ctx->pc = 0x2EE9CCu;
    // 0x2ee9cc: 0x92270000  lbu         $a3, 0x0($s1)
    ctx->pc = 0x2ee9ccu;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2ee9d0: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x2ee9d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x2ee9d4: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x2ee9d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2ee9d8: 0x24a50f48  addiu       $a1, $a1, 0xF48
    ctx->pc = 0x2ee9d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3912));
    // 0x2ee9dc: 0xc04a5f2  jal         func_1297C8
    ctx->pc = 0x2EE9DCu;
    SET_GPR_U32(ctx, 31, 0x2EE9E4u);
    ctx->pc = 0x2EE9E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EE9DCu;
    // 0x2ee9e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1297C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1297C8u, 0x2EE9DCu, 0x2EE9E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EE9E4u;
label_2ee9e4:
    // 0x2ee9e4: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x2ee9e4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ee9e8: 0x240508f5  addiu       $a1, $zero, 0x8F5
    ctx->pc = 0x2ee9e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2293));
label_2ee9ec:
    // 0x2ee9ec: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x2ee9ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x2ee9f0: 0x24840f70  addiu       $a0, $a0, 0xF70
    ctx->pc = 0x2ee9f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3952));
label_2ee9f4:
    // 0x2ee9f4: 0xc0897d6  jal         func_225F58
    ctx->pc = 0x2EE9F4u;
    SET_GPR_U32(ctx, 31, 0x2EE9FCu);
    ctx->pc = 0x2EE9F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EE9F4u;
    // 0x2ee9f8: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225F58u, 0x2EE9F4u, 0x2EE9FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EE9FCu;
label_2ee9fc:
    // 0x2ee9fc: 0xdfb00080  ld          $s0, 0x80($sp)
    ctx->pc = 0x2ee9fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_2eea00:
    // 0x2eea00: 0xdfb10088  ld          $s1, 0x88($sp)
    ctx->pc = 0x2eea00u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2eea04: 0xdfb20090  ld          $s2, 0x90($sp)
    ctx->pc = 0x2eea04u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2eea08: 0xdfb30098  ld          $s3, 0x98($sp)
    ctx->pc = 0x2eea08u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x2eea0c: 0xdfb400a0  ld          $s4, 0xA0($sp)
    ctx->pc = 0x2eea0cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2eea10: 0xdfb500a8  ld          $s5, 0xA8($sp)
    ctx->pc = 0x2eea10u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2eea14: 0xdfb600b0  ld          $s6, 0xB0($sp)
    ctx->pc = 0x2eea14u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2eea18: 0xdfb700b8  ld          $s7, 0xB8($sp)
    ctx->pc = 0x2eea18u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x2eea1c: 0xdfbe00c0  ld          $fp, 0xC0($sp)
    ctx->pc = 0x2eea1cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2eea20: 0xdfbf00c8  ld          $ra, 0xC8($sp)
    ctx->pc = 0x2eea20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2eea24: 0x3e00008  jr          $ra
    ctx->pc = 0x2EEA24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EEA28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EEA24u;
        // 0x2eea28: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EEA24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EEA2Cu;
label_2eea2c:
    // 0x2eea2c: 0x240e0001  addiu       $t6, $zero, 0x1
    ctx->pc = 0x2eea2cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2eea30: 0xa66c0008  sh          $t4, 0x8($s3)
    ctx->pc = 0x2eea30u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 8), (uint16_t)GPR_U32(ctx, 12));
    // 0x2eea34: 0xae6e0000  sw          $t6, 0x0($s3)
    ctx->pc = 0x2eea34u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 14));
    // 0x2eea38: 0x27be0010  addiu       $fp, $sp, 0x10
    ctx->pc = 0x2eea38u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2eea3c: 0xae40003c  sw          $zero, 0x3C($s2)
    ctx->pc = 0x2eea3cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 60), GPR_U32(ctx, 0));
    // 0x2eea40: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x2eea40u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x2eea44: 0x24a50f88  addiu       $a1, $a1, 0xF88
    ctx->pc = 0x2eea44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3976));
    // 0x2eea48: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x2eea48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eea4c: 0x92270000  lbu         $a3, 0x0($s1)
    ctx->pc = 0x2eea4cu;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2eea50: 0xc04a5f2  jal         func_1297C8
    ctx->pc = 0x2EEA50u;
    SET_GPR_U32(ctx, 31, 0x2EEA58u);
    ctx->pc = 0x2EEA54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EEA50u;
    // 0x2eea54: 0x27a60050  addiu       $a2, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1297C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1297C8u, 0x2EEA50u, 0x2EEA58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EEA58u;
label_2eea58:
    // 0x2eea58: 0x3c0f0040  lui         $t7, 0x40
    ctx->pc = 0x2eea58u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)64 << 16));
    // 0x2eea5c: 0x240508f2  addiu       $a1, $zero, 0x8F2
    ctx->pc = 0x2eea5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2290));
    // 0x2eea60: 0x25f50f70  addiu       $s5, $t7, 0xF70
    ctx->pc = 0x2eea60u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 15), 3952));
    // 0x2eea64: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x2eea64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2eea68: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2eea68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eea6c: 0xc0897d6  jal         func_225F58
    ctx->pc = 0x2EEA6Cu;
    SET_GPR_U32(ctx, 31, 0x2EEA74u);
    ctx->pc = 0x2EEA70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EEA6Cu;
    // 0x2eea70: 0x3c0382d  daddu       $a3, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225F58u, 0x2EEA6Cu, 0x2EEA74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EEA74u;
label_2eea74:
    // 0x2eea74: 0xc0bb5fc  jal         func_2ED7F0
    ctx->pc = 0x2EEA74u;
    SET_GPR_U32(ctx, 31, 0x2EEA7Cu);
    ctx->pc = 0x2EEA78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EEA74u;
    // 0x2eea78: 0x92240000  lbu         $a0, 0x0($s1) (Delay Slot)
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ED7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ED7F0u, 0x2EEA74u, 0x2EEA7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EEA7Cu;
label_2eea7c:
    // 0x2eea7c: 0x904b0000  lbu         $t3, 0x0($v0)
    ctx->pc = 0x2eea7cu;
    SET_GPR_U32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2eea80: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x2eea80u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2eea84: 0x97ad0006  lhu         $t5, 0x6($sp)
    ctx->pc = 0x2eea84u;
    SET_GPR_U32(ctx, 13, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 6)));
    // 0x2eea88: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2eea88u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eea8c: 0x16f5804  sllv        $t3, $t7, $t3
    ctx->pc = 0x2eea8cu;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 15), GPR_U32(ctx, 11) & 0x1F));
    // 0x2eea90: 0x964c001a  lhu         $t4, 0x1A($s2)
    ctx->pc = 0x2eea90u;
    SET_GPR_U32(ctx, 12, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 26)));
    // 0x2eea94: 0x97ae0008  lhu         $t6, 0x8($sp)
    ctx->pc = 0x2eea94u;
    SET_GPR_U32(ctx, 14, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2eea98: 0xd6c00  sll         $t5, $t5, 16
    ctx->pc = 0x2eea98u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 13), 16));
    // 0x2eea9c: 0x964f0018  lhu         $t7, 0x18($s2)
    ctx->pc = 0x2eea9cu;
    SET_GPR_U32(ctx, 15, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x2eeaa0: 0xc6400  sll         $t4, $t4, 16
    ctx->pc = 0x2eeaa0u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), 16));
    // 0x2eeaa4: 0x1cd7021  addu        $t6, $t6, $t5
    ctx->pc = 0x2eeaa4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 13)));
    // 0x2eeaa8: 0x1ec7821  addu        $t7, $t7, $t4
    ctx->pc = 0x2eeaa8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 12)));
    // 0x2eeaac: 0x1cf702a  slt         $t6, $t6, $t7
    ctx->pc = 0x2eeaacu;
    SET_GPR_U64(ctx, 14, ((int64_t)GPR_S64(ctx, 14) < (int64_t)GPR_S64(ctx, 15)) ? 1 : 0);
    // 0x2eeab0: 0x15c0003a  bnez        $t6, . + 4 + (0x3A << 2)
    ctx->pc = 0x2EEAB0u;
    {
        const bool branch_taken_0x2eeab0 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EEAB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EEAB0u;
        // 0x2eeab4: 0xae4b003c  sw          $t3, 0x3C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 60), GPR_U32(ctx, 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eeab0) {
            ctx->pc = 0x2EEB9Cu;
            goto label_2eeb9c;
        }
    }
    ctx->pc = 0x2EEAB8u;
    // 0x2eeab8: 0x2e0382d  daddu       $a3, $s7, $zero
    ctx->pc = 0x2eeab8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eeabc: 0x240508fc  addiu       $a1, $zero, 0x8FC
    ctx->pc = 0x2eeabcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2300));
    // 0x2eeac0: 0x24060007  addiu       $a2, $zero, 0x7
    ctx->pc = 0x2eeac0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2eeac4: 0xc0bc6f6  jal         func_2F1BD8
    ctx->pc = 0x2EEAC4u;
    SET_GPR_U32(ctx, 31, 0x2EEACCu);
    ctx->pc = 0x2EEAC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EEAC4u;
    // 0x2eeac8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F1BD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1BD8u, 0x2EEAC4u, 0x2EEACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EEACCu;
label_2eeacc:
    // 0x2eeacc: 0x26501458  addiu       $s0, $s2, 0x1458
    ctx->pc = 0x2eeaccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 5208));
    // 0x2eead0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2eead0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eead4: 0x240508fd  addiu       $a1, $zero, 0x8FD
    ctx->pc = 0x2eead4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2301));
    // 0x2eead8: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x2eead8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eeadc: 0xc0bc71e  jal         func_2F1C78
    ctx->pc = 0x2EEADCu;
    SET_GPR_U32(ctx, 31, 0x2EEAE4u);
    ctx->pc = 0x2EEAE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EEADCu;
    // 0x2eeae0: 0x280382d  daddu       $a3, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F1C78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1C78u, 0x2EEADCu, 0x2EEAE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EEAE4u;
label_2eeae4:
    // 0x2eeae4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2eeae4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eeae8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2eeae8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eeaec: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x2eeaecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eeaf0: 0xc0bc71e  jal         func_2F1C78
    ctx->pc = 0x2EEAF0u;
    SET_GPR_U32(ctx, 31, 0x2EEAF8u);
    ctx->pc = 0x2EEAF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EEAF0u;
    // 0x2eeaf4: 0x240508fe  addiu       $a1, $zero, 0x8FE (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2302));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F1C78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1C78u, 0x2EEAF0u, 0x2EEAF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EEAF8u;
label_2eeaf8:
    // 0x2eeaf8: 0x8fae0070  lw          $t6, 0x70($sp)
    ctx->pc = 0x2eeaf8u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2eeafc: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2eeafcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eeb00: 0x2407000c  addiu       $a3, $zero, 0xC
    ctx->pc = 0x2eeb00u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2eeb04: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2eeb04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eeb08: 0xe2e00  sll         $a1, $t6, 24
    ctx->pc = 0x2eeb08u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 14), 24));
    // 0x2eeb0c: 0xc0bc200  jal         func_2F0800
    ctx->pc = 0x2EEB0Cu;
    SET_GPR_U32(ctx, 31, 0x2EEB14u);
    ctx->pc = 0x2EEB10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EEB0Cu;
    // 0x2eeb10: 0x52e03  sra         $a1, $a1, 24 (Delay Slot)
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F0800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0800u, 0x2EEB0Cu, 0x2EEB14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EEB14u;
label_2eeb14:
    // 0x2eeb14: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2eeb14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eeb18: 0xc0bc280  jal         func_2F0A00
    ctx->pc = 0x2EEB18u;
    SET_GPR_U32(ctx, 31, 0x2EEB20u);
    ctx->pc = 0x2EEB1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EEB18u;
    // 0x2eeb1c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0A00u, 0x2EEB18u, 0x2EEB20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EEB20u;
label_2eeb20:
    // 0x2eeb20: 0xc0bc778  jal         func_2F1DE0
    ctx->pc = 0x2EEB20u;
    SET_GPR_U32(ctx, 31, 0x2EEB28u);
    ctx->pc = 0x2F1DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1DE0u, 0x2EEB20u, 0x2EEB28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EEB28u;
label_2eeb28:
    // 0x2eeb28: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x2eeb28u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2eeb2c:
    // 0x2eeb2c: 0x8e49003c  lw          $t1, 0x3C($s2)
    ctx->pc = 0x2eeb2cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 60)));
    // 0x2eeb30: 0x4f1004  sllv        $v0, $t7, $v0
    ctx->pc = 0x2eeb30u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 15), GPR_U32(ctx, 2) & 0x1F));
    // 0x2eeb34: 0x96680008  lhu         $t0, 0x8($s3)
    ctx->pc = 0x2eeb34u;
    SET_GPR_U32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x2eeb38: 0x1224825  or          $t1, $t1, $v0
    ctx->pc = 0x2eeb38u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 2));
    // 0x2eeb3c: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x2eeb3cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x2eeb40: 0xae49003c  sw          $t1, 0x3C($s2)
    ctx->pc = 0x2eeb40u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 60), GPR_U32(ctx, 9));
    // 0x2eeb44: 0x24a50fb0  addiu       $a1, $a1, 0xFB0
    ctx->pc = 0x2eeb44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4016));
    // 0x2eeb48: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x2eeb48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2eeb4c: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x2eeb4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eeb50: 0xc04a5f2  jal         func_1297C8
    ctx->pc = 0x2EEB50u;
    SET_GPR_U32(ctx, 31, 0x2EEB58u);
    ctx->pc = 0x2EEB54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EEB50u;
    // 0x2eeb54: 0x92c70000  lbu         $a3, 0x0($s6) (Delay Slot)
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1297C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1297C8u, 0x2EEB50u, 0x2EEB58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EEB58u;
label_2eeb58:
    // 0x2eeb58: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2eeb58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eeb5c: 0x3c0382d  daddu       $a3, $fp, $zero
    ctx->pc = 0x2eeb5cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_2eeb60:
    // 0x2eeb60: 0x24050903  addiu       $a1, $zero, 0x903
    ctx->pc = 0x2eeb60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2307));
    // 0x2eeb64: 0xc0897d6  jal         func_225F58
    ctx->pc = 0x2EEB64u;
    SET_GPR_U32(ctx, 31, 0x2EEB6Cu);
    ctx->pc = 0x2EEB68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EEB64u;
    // 0x2eeb68: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225F58u, 0x2EEB64u, 0x2EEB6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EEB6Cu;
label_2eeb6c:
    // 0x2eeb6c: 0x8e4e003c  lw          $t6, 0x3C($s2)
    ctx->pc = 0x2eeb6cu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 60)));
    // 0x2eeb70: 0x8e4f0040  lw          $t7, 0x40($s2)
    ctx->pc = 0x2eeb70u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
    // 0x2eeb74: 0x15cfffa2  bne         $t6, $t7, . + 4 + (-0x5E << 2)
    ctx->pc = 0x2EEB74u;
    {
        const bool branch_taken_0x2eeb74 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 15));
        ctx->pc = 0x2EEB78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EEB74u;
        // 0x2eeb78: 0xdfb00080  ld          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eeb74) {
            ctx->pc = 0x2EEA00u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2eea00;
        }
    }
    ctx->pc = 0x2EEB7Cu;
    // 0x2eeb7c: 0x966f0008  lhu         $t7, 0x8($s3)
    ctx->pc = 0x2eeb7cu;
    SET_GPR_U32(ctx, 15, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x2eeb80: 0x3c070040  lui         $a3, 0x40
    ctx->pc = 0x2eeb80u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)64 << 16));
    // 0x2eeb84: 0xae400050  sw          $zero, 0x50($s2)
    ctx->pc = 0x2eeb84u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 80), GPR_U32(ctx, 0));
    // 0x2eeb88: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2eeb88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eeb8c: 0xa66f0004  sh          $t7, 0x4($s3)
    ctx->pc = 0x2eeb8cu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 4), (uint16_t)GPR_U32(ctx, 15));
    // 0x2eeb90: 0x24e70fd8  addiu       $a3, $a3, 0xFD8
    ctx->pc = 0x2eeb90u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4056));
    // 0x2eeb94: 0x1000ff97  b           . + 4 + (-0x69 << 2)
    ctx->pc = 0x2EEB94u;
    {
        const bool branch_taken_0x2eeb94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EEB98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EEB94u;
        // 0x2eeb98: 0x24050907  addiu       $a1, $zero, 0x907 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2311));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eeb94) {
            ctx->pc = 0x2EE9F4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2ee9f4;
        }
    }
    ctx->pc = 0x2EEB9Cu;
label_2eeb9c:
    // 0x2eeb9c: 0x2e0382d  daddu       $a3, $s7, $zero
    ctx->pc = 0x2eeb9cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eeba0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2eeba0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eeba4: 0x2405090a  addiu       $a1, $zero, 0x90A
    ctx->pc = 0x2eeba4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2314));
    // 0x2eeba8: 0xc0bc6f6  jal         func_2F1BD8
    ctx->pc = 0x2EEBA8u;
    SET_GPR_U32(ctx, 31, 0x2EEBB0u);
    ctx->pc = 0x2EEBACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EEBA8u;
    // 0x2eebac: 0x24060007  addiu       $a2, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F1BD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1BD8u, 0x2EEBA8u, 0x2EEBB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EEBB0u;
label_2eebb0:
    // 0x2eebb0: 0x26501458  addiu       $s0, $s2, 0x1458
    ctx->pc = 0x2eebb0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 5208));
    // 0x2eebb4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2eebb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eebb8: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x2eebb8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eebbc: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x2eebbcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eebc0: 0xc0bc71e  jal         func_2F1C78
    ctx->pc = 0x2EEBC0u;
    SET_GPR_U32(ctx, 31, 0x2EEBC8u);
    ctx->pc = 0x2EEBC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EEBC0u;
    // 0x2eebc4: 0x2405090b  addiu       $a1, $zero, 0x90B (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2315));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F1C78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1C78u, 0x2EEBC0u, 0x2EEBC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EEBC8u;
label_2eebc8:
    // 0x2eebc8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2eebc8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eebcc: 0x24070007  addiu       $a3, $zero, 0x7
    ctx->pc = 0x2eebccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2eebd0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2eebd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eebd4: 0xc0bc71e  jal         func_2F1C78
    ctx->pc = 0x2EEBD4u;
    SET_GPR_U32(ctx, 31, 0x2EEBDCu);
    ctx->pc = 0x2EEBD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EEBD4u;
    // 0x2eebd8: 0x2405090c  addiu       $a1, $zero, 0x90C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2316));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F1C78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1C78u, 0x2EEBD4u, 0x2EEBDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EEBDCu;
label_2eebdc:
    // 0x2eebdc: 0x96440018  lhu         $a0, 0x18($s2)
    ctx->pc = 0x2eebdcu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x2eebe0: 0xc0bc190  jal         func_2F0640
    ctx->pc = 0x2EEBE0u;
    SET_GPR_U32(ctx, 31, 0x2EEBE8u);
    ctx->pc = 0x2EEBE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EEBE0u;
    // 0x2eebe4: 0x8e45004c  lw          $a1, 0x4C($s2) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F0640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0640u, 0x2EEBE0u, 0x2EEBE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EEBE8u;
label_2eebe8:
    // 0x2eebe8: 0xa6620008  sh          $v0, 0x8($s3)
    ctx->pc = 0x2eebe8u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 8), (uint16_t)GPR_U32(ctx, 2));
    // 0x2eebec: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2eebecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eebf0: 0x8fae0074  lw          $t6, 0x74($sp)
    ctx->pc = 0x2eebf0u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 116)));
    // 0x2eebf4: 0x2407000c  addiu       $a3, $zero, 0xC
    ctx->pc = 0x2eebf4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2eebf8: 0x964f001a  lhu         $t7, 0x1A($s2)
    ctx->pc = 0x2eebf8u;
    SET_GPR_U32(ctx, 15, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 26)));
    // 0x2eebfc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2eebfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eec00: 0xe2e00  sll         $a1, $t6, 24
    ctx->pc = 0x2eec00u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 14), 24));
    // 0x2eec04: 0xa66f0006  sh          $t7, 0x6($s3)
    ctx->pc = 0x2eec04u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 6), (uint16_t)GPR_U32(ctx, 15));
    // 0x2eec08: 0xc0bc200  jal         func_2F0800
    ctx->pc = 0x2EEC08u;
    SET_GPR_U32(ctx, 31, 0x2EEC10u);
    ctx->pc = 0x2EEC0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EEC08u;
    // 0x2eec0c: 0x52e03  sra         $a1, $a1, 24 (Delay Slot)
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F0800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0800u, 0x2EEC08u, 0x2EEC10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EEC10u;
label_2eec10:
    // 0x2eec10: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2eec10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eec14: 0xc0bc280  jal         func_2F0A00
    ctx->pc = 0x2EEC14u;
    SET_GPR_U32(ctx, 31, 0x2EEC1Cu);
    ctx->pc = 0x2EEC18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EEC14u;
    // 0x2eec18: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0A00u, 0x2EEC14u, 0x2EEC1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EEC1Cu;
label_2eec1c:
    // 0x2eec1c: 0xc0bc778  jal         func_2F1DE0
    ctx->pc = 0x2EEC1Cu;
    SET_GPR_U32(ctx, 31, 0x2EEC24u);
    ctx->pc = 0x2F1DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1DE0u, 0x2EEC1Cu, 0x2EEC24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EEC24u;
label_2eec24:
    // 0x2eec24: 0x96680008  lhu         $t0, 0x8($s3)
    ctx->pc = 0x2eec24u;
    SET_GPR_U32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x2eec28: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x2eec28u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2eec2c: 0x4f4804  sllv        $t1, $t7, $v0
    ctx->pc = 0x2eec2cu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 15), GPR_U32(ctx, 2) & 0x1F));
    // 0x2eec30: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x2eec30u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x2eec34: 0xae49003c  sw          $t1, 0x3C($s2)
    ctx->pc = 0x2eec34u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 60), GPR_U32(ctx, 9));
    // 0x2eec38: 0x24a50fe8  addiu       $a1, $a1, 0xFE8
    ctx->pc = 0x2eec38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4072));
    // 0x2eec3c: 0xa6680004  sh          $t0, 0x4($s3)
    ctx->pc = 0x2eec3cu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 4), (uint16_t)GPR_U32(ctx, 8));
    // 0x2eec40: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x2eec40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eec44: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x2eec44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2eec48: 0xc04a5f2  jal         func_1297C8
    ctx->pc = 0x2EEC48u;
    SET_GPR_U32(ctx, 31, 0x2EEC50u);
    ctx->pc = 0x2EEC4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EEC48u;
    // 0x2eec4c: 0x92c70000  lbu         $a3, 0x0($s6) (Delay Slot)
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1297C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1297C8u, 0x2EEC48u, 0x2EEC50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EEC50u;
label_2eec50:
    // 0x2eec50: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2eec50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eec54: 0x3c0382d  daddu       $a3, $fp, $zero
    ctx->pc = 0x2eec54u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eec58: 0x1000ff66  b           . + 4 + (-0x9A << 2)
    ctx->pc = 0x2EEC58u;
    {
        const bool branch_taken_0x2eec58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EEC5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EEC58u;
        // 0x2eec5c: 0x24050914  addiu       $a1, $zero, 0x914 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2324));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eec58) {
            ctx->pc = 0x2EE9F4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2ee9f4;
        }
    }
    ctx->pc = 0x2EEC60u;
label_2eec60:
    // 0x2eec60: 0x92270000  lbu         $a3, 0x0($s1)
    ctx->pc = 0x2eec60u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2eec64: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x2eec64u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2eec68: 0x97a80008  lhu         $t0, 0x8($sp)
    ctx->pc = 0x2eec68u;
    SET_GPR_U32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2eec6c: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x2eec6cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x2eec70: 0x24a51010  addiu       $a1, $a1, 0x1010
    ctx->pc = 0x2eec70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4112));
    // 0x2eec74: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x2eec74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2eec78: 0xc04a5f2  jal         func_1297C8
    ctx->pc = 0x2EEC78u;
    SET_GPR_U32(ctx, 31, 0x2EEC80u);
    ctx->pc = 0x2EEC7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EEC78u;
    // 0x2eec7c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1297C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1297C8u, 0x2EEC78u, 0x2EEC80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EEC80u;
label_2eec80:
    // 0x2eec80: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x2eec80u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eec84: 0x1000ff59  b           . + 4 + (-0xA7 << 2)
    ctx->pc = 0x2EEC84u;
    {
        const bool branch_taken_0x2eec84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EEC88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EEC84u;
        // 0x2eec88: 0x24050918  addiu       $a1, $zero, 0x918 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2328));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eec84) {
            ctx->pc = 0x2EE9ECu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2ee9ec;
        }
    }
    ctx->pc = 0x2EEC8Cu;
    // 0x2eec8c: 0x0  nop
    ctx->pc = 0x2eec8cu;
    // NOP
    if (ctx->pc == 0x2eec8cu) { ctx->pc = 0x2eec90u; }
}
