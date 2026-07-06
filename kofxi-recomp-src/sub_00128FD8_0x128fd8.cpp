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

// Function: sub_00128FD8
// Address: 0x128fd8 - 0x129598
void sub_00128FD8_0x128fd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00128FD8_0x128fd8");
#endif

    switch (ctx->pc) {
        case 0x129050u: goto label_129050;
        case 0x129078u: goto label_129078;
        case 0x1290b4u: goto label_1290b4;
        case 0x129100u: goto label_129100;
        case 0x129104u: goto label_129104;
        case 0x129134u: goto label_129134;
        case 0x129138u: goto label_129138;
        case 0x129230u: goto label_129230;
        case 0x129260u: goto label_129260;
        case 0x129268u: goto label_129268;
        case 0x12927cu: goto label_12927c;
        case 0x129288u: goto label_129288;
        case 0x1292bcu: goto label_1292bc;
        case 0x129350u: goto label_129350;
        case 0x129390u: goto label_129390;
        case 0x129398u: goto label_129398;
        case 0x1293c8u: goto label_1293c8;
        case 0x1293dcu: goto label_1293dc;
        case 0x1293ecu: goto label_1293ec;
        case 0x1294c0u: goto label_1294c0;
        case 0x1294c8u: goto label_1294c8;
        case 0x1294dcu: goto label_1294dc;
        default: break;
    }

    ctx->pc = 0x128fd8u;

    // 0x128fd8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x128fd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x128fdc: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x128fdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x128fe0: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x128fe0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x128fe4: 0xffbe0050  sd          $fp, 0x50($sp)
    ctx->pc = 0x128fe4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 30));
    // 0x128fe8: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x128fe8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128fec: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x128fecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x128ff0: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x128ff0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128ff4: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x128ff4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x128ff8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x128ff8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x128ffc: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x128ffcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x129000: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x129000u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x129004: 0xffb70048  sd          $s7, 0x48($sp)
    ctx->pc = 0x129004u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 23));
    // 0x129008: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x129008u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
    // 0x12900c: 0x14a0000e  bnez        $a1, . + 4 + (0xE << 2)
    ctx->pc = 0x12900Cu;
    {
        const bool branch_taken_0x12900c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x129010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12900Cu;
        // 0x129010: 0x80f02d  daddu       $fp, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12900c) {
            ctx->pc = 0x129048u;
            goto label_129048;
        }
    }
    ctx->pc = 0x129014u;
    // 0x129014: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x129014u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x129018: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x129018u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12901c: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x12901cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x129020: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x129020u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x129024: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x129024u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x129028: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x129028u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x12902c: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x12902cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x129030: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x129030u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x129034: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x129034u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x129038: 0xdfbe0050  ld          $fp, 0x50($sp)
    ctx->pc = 0x129038u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x12903c: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x12903cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x129040: 0x8049a24  j           func_126890
    ctx->pc = 0x129040u;
    ctx->pc = 0x129044u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x129040u;
    // 0x129044: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x126890u;
    sub_00126890_0x126890(rdram, ctx, runtime); return;
    ctx->pc = 0x129048u;
label_129048:
    // 0x129048: 0xc049ce6  jal         func_127398
    ctx->pc = 0x129048u;
    SET_GPR_U32(ctx, 31, 0x129050u);
    ctx->pc = 0x12904Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x129048u;
    // 0x12904c: 0x2690fff8  addiu       $s0, $s4, -0x8 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127398u, 0x129048u, 0x129050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x129050u;
label_129050:
    // 0x129050: 0x8e0d0004  lw          $t5, 0x4($s0)
    ctx->pc = 0x129050u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x129054: 0x240ffffc  addiu       $t7, $zero, -0x4
    ctx->pc = 0x129054u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x129058: 0x26ac0013  addiu       $t4, $s5, 0x13
    ctx->pc = 0x129058u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 21), 19));
    // 0x12905c: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x12905cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129060: 0x1af9824  and         $s3, $t5, $t7
    ctx->pc = 0x129060u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 13) & GPR_U64(ctx, 15));
    // 0x129064: 0x2d8e001f  sltiu       $t6, $t4, 0x1F
    ctx->pc = 0x129064u;
    SET_GPR_U64(ctx, 14, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)(int64_t)(int32_t)31) ? 1 : 0);
    // 0x129068: 0x15c0013d  bnez        $t6, . + 4 + (0x13D << 2)
    ctx->pc = 0x129068u;
    {
        const bool branch_taken_0x129068 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 0));
        ctx->pc = 0x12906Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129068u;
        // 0x12906c: 0x260882d  daddu       $s1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129068) {
            ctx->pc = 0x129560u;
            goto label_129560;
        }
    }
    ctx->pc = 0x129070u;
    // 0x129070: 0x240ffff0  addiu       $t7, $zero, -0x10
    ctx->pc = 0x129070u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x129074: 0x18fb024  and         $s6, $t4, $t7
    ctx->pc = 0x129074u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 12) & GPR_U64(ctx, 15));
label_129078:
    // 0x129078: 0x236782b  sltu        $t7, $s1, $s6
    ctx->pc = 0x129078u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 22)) ? 1 : 0);
    // 0x12907c: 0x11e000e9  beqz        $t7, . + 4 + (0xE9 << 2)
    ctx->pc = 0x12907Cu;
    {
        const bool branch_taken_0x12907c = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x129080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12907Cu;
        // 0x129080: 0x3c0f0036  lui         $t7, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12907c) {
            ctx->pc = 0x129424u;
            goto label_129424;
        }
    }
    ctx->pc = 0x129084u;
    // 0x129084: 0x2515821  addu        $t3, $s2, $s1
    ctx->pc = 0x129084u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
    // 0x129088: 0x25e9bdf8  addiu       $t1, $t7, -0x4208
    ctx->pc = 0x129088u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 15), 4294950392));
    // 0x12908c: 0x8d2a0008  lw          $t2, 0x8($t1)
    ctx->pc = 0x12908cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 8)));
    // 0x129090: 0x116a0131  beq         $t3, $t2, . + 4 + (0x131 << 2)
    ctx->pc = 0x129090u;
    {
        const bool branch_taken_0x129090 = (GPR_U64(ctx, 11) == GPR_U64(ctx, 10));
        ctx->pc = 0x129094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129090u;
        // 0x129094: 0x240ffffe  addiu       $t7, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129090) {
            ctx->pc = 0x129558u;
            goto label_129558;
        }
    }
    ctx->pc = 0x129098u;
    // 0x129098: 0x8d6c0004  lw          $t4, 0x4($t3)
    ctx->pc = 0x129098u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 4)));
    // 0x12909c: 0x18f7824  and         $t7, $t4, $t7
    ctx->pc = 0x12909cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 12) & GPR_U64(ctx, 15));
    // 0x1290a0: 0x16f7821  addu        $t7, $t3, $t7
    ctx->pc = 0x1290a0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 15)));
    // 0x1290a4: 0x8dee0004  lw          $t6, 0x4($t7)
    ctx->pc = 0x1290a4u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 4)));
    // 0x1290a8: 0x31ce0001  andi        $t6, $t6, 0x1
    ctx->pc = 0x1290a8u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)1);
    // 0x1290ac: 0x55c00128  bnel        $t6, $zero, . + 4 + (0x128 << 2)
    ctx->pc = 0x1290ACu;
    {
        const bool branch_taken_0x1290ac = (GPR_U64(ctx, 14) != GPR_U64(ctx, 0));
        if (branch_taken_0x1290ac) {
            ctx->pc = 0x1290B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1290ACu;
            // 0x1290b0: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x129550u;
            goto label_129550;
        }
    }
    ctx->pc = 0x1290B4u;
label_1290b4:
    // 0x1290b4: 0x240ffffc  addiu       $t7, $zero, -0x4
    ctx->pc = 0x1290b4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x1290b8: 0x156a011a  bne         $t3, $t2, . + 4 + (0x11A << 2)
    ctx->pc = 0x1290B8u;
    {
        const bool branch_taken_0x1290b8 = (GPR_U64(ctx, 11) != GPR_U64(ctx, 10));
        ctx->pc = 0x1290BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1290B8u;
        // 0x1290bc: 0x18f6024  and         $t4, $t4, $t7 (Delay Slot)
        SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) & GPR_U64(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1290b8) {
            ctx->pc = 0x129524u;
            goto label_129524;
        }
    }
    ctx->pc = 0x1290C0u;
    // 0x1290c0: 0x1917021  addu        $t6, $t4, $s1
    ctx->pc = 0x1290c0u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 17)));
    // 0x1290c4: 0x26cf0010  addiu       $t7, $s6, 0x10
    ctx->pc = 0x1290c4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 22), 16));
    // 0x1290c8: 0x1cf782b  sltu        $t7, $t6, $t7
    ctx->pc = 0x1290c8u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)GPR_U64(ctx, 15)) ? 1 : 0);
    // 0x1290cc: 0x55e0001a  bnel        $t7, $zero, . + 4 + (0x1A << 2)
    ctx->pc = 0x1290CCu;
    {
        const bool branch_taken_0x1290cc = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        if (branch_taken_0x1290cc) {
            ctx->pc = 0x1290D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1290CCu;
            // 0x1290d0: 0x8e4f0004  lw          $t7, 0x4($s2) (Delay Slot)
            SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x129138u;
            goto label_129138;
        }
    }
    ctx->pc = 0x1290D4u;
    // 0x1290d4: 0x1d67823  subu        $t7, $t6, $s6
    ctx->pc = 0x1290d4u;
    SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 14), GPR_U32(ctx, 22)));
    // 0x1290d8: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x1290d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1290dc: 0x2567021  addu        $t6, $s2, $s6
    ctx->pc = 0x1290dcu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 22)));
    // 0x1290e0: 0x35ef0001  ori         $t7, $t7, 0x1
    ctx->pc = 0x1290e0u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)1);
    // 0x1290e4: 0xadcf0004  sw          $t7, 0x4($t6)
    ctx->pc = 0x1290e4u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 4), GPR_U32(ctx, 15));
    // 0x1290e8: 0xad2e0008  sw          $t6, 0x8($t1)
    ctx->pc = 0x1290e8u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 8), GPR_U32(ctx, 14));
    // 0x1290ec: 0x8e4f0004  lw          $t7, 0x4($s2)
    ctx->pc = 0x1290ecu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1290f0: 0x31ef0001  andi        $t7, $t7, 0x1
    ctx->pc = 0x1290f0u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) & (uint64_t)(uint16_t)1);
    // 0x1290f4: 0x1f67825  or          $t7, $t7, $s6
    ctx->pc = 0x1290f4u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | GPR_U64(ctx, 22));
    // 0x1290f8: 0xc049cfc  jal         func_1273F0
    ctx->pc = 0x1290F8u;
    SET_GPR_U32(ctx, 31, 0x129100u);
    ctx->pc = 0x1290FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1290F8u;
    // 0x1290fc: 0xae4f0004  sw          $t7, 0x4($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1273F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1273F0u, 0x1290F8u, 0x129100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x129100u;
label_129100:
    // 0x129100: 0x26420008  addiu       $v0, $s2, 0x8
    ctx->pc = 0x129100u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
label_129104:
    // 0x129104: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x129104u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x129108: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x129108u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12910c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x12910cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x129110: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x129110u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x129114: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x129114u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x129118: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x129118u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x12911c: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x12911cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x129120: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x129120u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x129124: 0xdfbe0050  ld          $fp, 0x50($sp)
    ctx->pc = 0x129124u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x129128: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x129128u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x12912c: 0x3e00008  jr          $ra
    ctx->pc = 0x12912Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x129130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12912Cu;
        // 0x129130: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12912Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x129134u;
label_129134:
    // 0x129134: 0x8e4f0004  lw          $t7, 0x4($s2)
    ctx->pc = 0x129134u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_129138:
    // 0x129138: 0x31ef0001  andi        $t7, $t7, 0x1
    ctx->pc = 0x129138u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) & (uint64_t)(uint16_t)1);
    // 0x12913c: 0x15e000a5  bnez        $t7, . + 4 + (0xA5 << 2)
    ctx->pc = 0x12913Cu;
    {
        const bool branch_taken_0x12913c = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x129140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12913Cu;
        // 0x129140: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12913c) {
            ctx->pc = 0x1293D4u;
            goto label_1293d4;
        }
    }
    ctx->pc = 0x129144u;
    // 0x129144: 0x8e4f0000  lw          $t7, 0x0($s2)
    ctx->pc = 0x129144u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x129148: 0x24fb823  subu        $s7, $s2, $t7
    ctx->pc = 0x129148u;
    SET_GPR_S32(ctx, 23, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 15)));
    // 0x12914c: 0x8eee0004  lw          $t6, 0x4($s7)
    ctx->pc = 0x12914cu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4)));
    // 0x129150: 0x240ffffc  addiu       $t7, $zero, -0x4
    ctx->pc = 0x129150u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x129154: 0x1160004c  beqz        $t3, . + 4 + (0x4C << 2)
    ctx->pc = 0x129154u;
    {
        const bool branch_taken_0x129154 = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        ctx->pc = 0x129158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129154u;
        // 0x129158: 0x1cf6824  and         $t5, $t6, $t7 (Delay Slot)
        SET_GPR_U64(ctx, 13, GPR_U64(ctx, 14) & GPR_U64(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129154) {
            ctx->pc = 0x129288u;
            goto label_129288;
        }
    }
    ctx->pc = 0x12915Cu;
    // 0x12915c: 0x3c0f0036  lui         $t7, 0x36
    ctx->pc = 0x12915cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)54 << 16));
    // 0x129160: 0x8deebe00  lw          $t6, -0x4200($t7)
    ctx->pc = 0x129160u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 4294950400)));
    // 0x129164: 0x156e00df  bne         $t3, $t6, . + 4 + (0xDF << 2)
    ctx->pc = 0x129164u;
    {
        const bool branch_taken_0x129164 = (GPR_U64(ctx, 11) != GPR_U64(ctx, 14));
        ctx->pc = 0x129168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129164u;
        // 0x129168: 0x18d7821  addu        $t7, $t4, $t5 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 13)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129164) {
            ctx->pc = 0x1294E4u;
            goto label_1294e4;
        }
    }
    ctx->pc = 0x12916Cu;
    // 0x12916c: 0x18d7021  addu        $t6, $t4, $t5
    ctx->pc = 0x12916cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 13)));
    // 0x129170: 0x26cf0010  addiu       $t7, $s6, 0x10
    ctx->pc = 0x129170u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 22), 16));
    // 0x129174: 0x1d17021  addu        $t6, $t6, $s1
    ctx->pc = 0x129174u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 17)));
    // 0x129178: 0x1cf782b  sltu        $t7, $t6, $t7
    ctx->pc = 0x129178u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)GPR_U64(ctx, 15)) ? 1 : 0);
    // 0x12917c: 0x15e00042  bnez        $t7, . + 4 + (0x42 << 2)
    ctx->pc = 0x12917Cu;
    {
        const bool branch_taken_0x12917c = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x129180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12917Cu;
        // 0x129180: 0xafae0000  sw          $t6, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12917c) {
            ctx->pc = 0x129288u;
            goto label_129288;
        }
    }
    ctx->pc = 0x129184u;
    // 0x129184: 0x8eec000c  lw          $t4, 0xC($s7)
    ctx->pc = 0x129184u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 12)));
    // 0x129188: 0x2626fffc  addiu       $a2, $s1, -0x4
    ctx->pc = 0x129188u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967292));
    // 0x12918c: 0x8eea0008  lw          $t2, 0x8($s7)
    ctx->pc = 0x12918cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 8)));
    // 0x129190: 0x26f30008  addiu       $s3, $s7, 0x8
    ctx->pc = 0x129190u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 23), 8));
    // 0x129194: 0x2ccf0025  sltiu       $t7, $a2, 0x25
    ctx->pc = 0x129194u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)37) ? 1 : 0);
    // 0x129198: 0xad8a0008  sw          $t2, 0x8($t4)
    ctx->pc = 0x129198u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 8), GPR_U32(ctx, 10));
    // 0x12919c: 0x11e00034  beqz        $t7, . + 4 + (0x34 << 2)
    ctx->pc = 0x12919Cu;
    {
        const bool branch_taken_0x12919c = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x1291A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12919Cu;
        // 0x1291a0: 0xad4c000c  sw          $t4, 0xC($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 12), GPR_U32(ctx, 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12919c) {
            ctx->pc = 0x129270u;
            goto label_129270;
        }
    }
    ctx->pc = 0x1291A4u;
    // 0x1291a4: 0x280582d  daddu       $t3, $s4, $zero
    ctx->pc = 0x1291a4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1291a8: 0x2ccf0014  sltiu       $t7, $a2, 0x14
    ctx->pc = 0x1291a8u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)20) ? 1 : 0);
    // 0x1291ac: 0x15e00017  bnez        $t7, . + 4 + (0x17 << 2)
    ctx->pc = 0x1291ACu;
    {
        const bool branch_taken_0x1291ac = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x1291B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1291ACu;
        // 0x1291b0: 0x260602d  daddu       $t4, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1291ac) {
            ctx->pc = 0x12920Cu;
            goto label_12920c;
        }
    }
    ctx->pc = 0x1291B4u;
    // 0x1291b4: 0x8e8f0000  lw          $t7, 0x0($s4)
    ctx->pc = 0x1291b4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1291b8: 0x268b0008  addiu       $t3, $s4, 0x8
    ctx->pc = 0x1291b8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
    // 0x1291bc: 0x26ec0010  addiu       $t4, $s7, 0x10
    ctx->pc = 0x1291bcu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 23), 16));
    // 0x1291c0: 0x2ccd001c  sltiu       $t5, $a2, 0x1C
    ctx->pc = 0x1291c0u;
    SET_GPR_U64(ctx, 13, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)28) ? 1 : 0);
    // 0x1291c4: 0xaeef0008  sw          $t7, 0x8($s7)
    ctx->pc = 0x1291c4u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 8), GPR_U32(ctx, 15));
    // 0x1291c8: 0x8e8e0004  lw          $t6, 0x4($s4)
    ctx->pc = 0x1291c8u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x1291cc: 0x15a0000f  bnez        $t5, . + 4 + (0xF << 2)
    ctx->pc = 0x1291CCu;
    {
        const bool branch_taken_0x1291cc = (GPR_U64(ctx, 13) != GPR_U64(ctx, 0));
        ctx->pc = 0x1291D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1291CCu;
        // 0x1291d0: 0xaeee000c  sw          $t6, 0xC($s7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 23), 12), GPR_U32(ctx, 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1291cc) {
            ctx->pc = 0x12920Cu;
            goto label_12920c;
        }
    }
    ctx->pc = 0x1291D4u;
    // 0x1291d4: 0x8e8f0008  lw          $t7, 0x8($s4)
    ctx->pc = 0x1291d4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x1291d8: 0x2ccd0024  sltiu       $t5, $a2, 0x24
    ctx->pc = 0x1291d8u;
    SET_GPR_U64(ctx, 13, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)36) ? 1 : 0);
    // 0x1291dc: 0x268b0010  addiu       $t3, $s4, 0x10
    ctx->pc = 0x1291dcu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    // 0x1291e0: 0x26ec0018  addiu       $t4, $s7, 0x18
    ctx->pc = 0x1291e0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 23), 24));
    // 0x1291e4: 0xaeef0010  sw          $t7, 0x10($s7)
    ctx->pc = 0x1291e4u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 16), GPR_U32(ctx, 15));
    // 0x1291e8: 0x8e8e000c  lw          $t6, 0xC($s4)
    ctx->pc = 0x1291e8u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x1291ec: 0x15a00007  bnez        $t5, . + 4 + (0x7 << 2)
    ctx->pc = 0x1291ECu;
    {
        const bool branch_taken_0x1291ec = (GPR_U64(ctx, 13) != GPR_U64(ctx, 0));
        ctx->pc = 0x1291F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1291ECu;
        // 0x1291f0: 0xaeee0014  sw          $t6, 0x14($s7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 23), 20), GPR_U32(ctx, 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1291ec) {
            ctx->pc = 0x12920Cu;
            goto label_12920c;
        }
    }
    ctx->pc = 0x1291F4u;
    // 0x1291f4: 0x8e8e0010  lw          $t6, 0x10($s4)
    ctx->pc = 0x1291f4u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x1291f8: 0x268b0018  addiu       $t3, $s4, 0x18
    ctx->pc = 0x1291f8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 20), 24));
    // 0x1291fc: 0x26ec0020  addiu       $t4, $s7, 0x20
    ctx->pc = 0x1291fcu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 23), 32));
    // 0x129200: 0xaeee0018  sw          $t6, 0x18($s7)
    ctx->pc = 0x129200u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 24), GPR_U32(ctx, 14));
    // 0x129204: 0x8e8f0014  lw          $t7, 0x14($s4)
    ctx->pc = 0x129204u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
    // 0x129208: 0xaeef001c  sw          $t7, 0x1C($s7)
    ctx->pc = 0x129208u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 28), GPR_U32(ctx, 15));
label_12920c:
    // 0x12920c: 0x8d6f0000  lw          $t7, 0x0($t3)
    ctx->pc = 0x12920cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x129210: 0xad8f0000  sw          $t7, 0x0($t4)
    ctx->pc = 0x129210u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 15));
    // 0x129214: 0x256b0004  addiu       $t3, $t3, 0x4
    ctx->pc = 0x129214u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4));
    // 0x129218: 0x8d6e0000  lw          $t6, 0x0($t3)
    ctx->pc = 0x129218u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x12921c: 0x258c0004  addiu       $t4, $t4, 0x4
    ctx->pc = 0x12921cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4));
    // 0x129220: 0xad8e0000  sw          $t6, 0x0($t4)
    ctx->pc = 0x129220u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 14));
    // 0x129224: 0x8d6f0004  lw          $t7, 0x4($t3)
    ctx->pc = 0x129224u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 4)));
    // 0x129228: 0xad8f0004  sw          $t7, 0x4($t4)
    ctx->pc = 0x129228u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 4), GPR_U32(ctx, 15));
    // 0x12922c: 0x8fae0000  lw          $t6, 0x0($sp)
    ctx->pc = 0x12922cu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_129230:
    // 0x129230: 0x2f66821  addu        $t5, $s7, $s6
    ctx->pc = 0x129230u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 22)));
    // 0x129234: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x129234u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129238: 0x1d67823  subu        $t7, $t6, $s6
    ctx->pc = 0x129238u;
    SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 14), GPR_U32(ctx, 22)));
    // 0x12923c: 0x35ef0001  ori         $t7, $t7, 0x1
    ctx->pc = 0x12923cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)1);
    // 0x129240: 0x3c0e0036  lui         $t6, 0x36
    ctx->pc = 0x129240u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)54 << 16));
    // 0x129244: 0xadaf0004  sw          $t7, 0x4($t5)
    ctx->pc = 0x129244u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 4), GPR_U32(ctx, 15));
    // 0x129248: 0xadcdbe00  sw          $t5, -0x4200($t6)
    ctx->pc = 0x129248u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 4294950400), GPR_U32(ctx, 13));
    // 0x12924c: 0x8eef0004  lw          $t7, 0x4($s7)
    ctx->pc = 0x12924cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4)));
    // 0x129250: 0x31ef0001  andi        $t7, $t7, 0x1
    ctx->pc = 0x129250u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) & (uint64_t)(uint16_t)1);
    // 0x129254: 0x1f67825  or          $t7, $t7, $s6
    ctx->pc = 0x129254u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | GPR_U64(ctx, 22));
    // 0x129258: 0xaeef0004  sw          $t7, 0x4($s7)
    ctx->pc = 0x129258u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 4), GPR_U32(ctx, 15));
    // 0x12925c: 0x0  nop
    ctx->pc = 0x12925cu;
    // NOP
label_129260:
    // 0x129260: 0xc049cfc  jal         func_1273F0
    ctx->pc = 0x129260u;
    SET_GPR_U32(ctx, 31, 0x129268u);
    ctx->pc = 0x1273F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1273F0u, 0x129260u, 0x129268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x129268u;
label_129268:
    // 0x129268: 0x1000ffa6  b           . + 4 + (-0x5A << 2)
    ctx->pc = 0x129268u;
    {
        const bool branch_taken_0x129268 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12926Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129268u;
        // 0x12926c: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129268) {
            ctx->pc = 0x129104u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_129104;
        }
    }
    ctx->pc = 0x129270u;
label_129270:
    // 0x129270: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x129270u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129274: 0xc049c48  jal         func_127120
    ctx->pc = 0x129274u;
    SET_GPR_U32(ctx, 31, 0x12927Cu);
    ctx->pc = 0x129278u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x129274u;
    // 0x129278: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127120u, 0x129274u, 0x12927Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12927Cu;
label_12927c:
    // 0x12927c: 0x1000ffec  b           . + 4 + (-0x14 << 2)
    ctx->pc = 0x12927Cu;
    {
        const bool branch_taken_0x12927c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x129280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12927Cu;
        // 0x129280: 0x8fae0000  lw          $t6, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12927c) {
            ctx->pc = 0x129230u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_129230;
        }
    }
    ctx->pc = 0x129284u;
    // 0x129284: 0x0  nop
    ctx->pc = 0x129284u;
    // NOP
label_129288:
    // 0x129288: 0x12e00051  beqz        $s7, . + 4 + (0x51 << 2)
    ctx->pc = 0x129288u;
    {
        const bool branch_taken_0x129288 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x12928Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129288u;
        // 0x12928c: 0x1b17021  addu        $t6, $t5, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129288) {
            ctx->pc = 0x1293D0u;
            goto label_1293d0;
        }
    }
    ctx->pc = 0x129290u;
    // 0x129290: 0x1d6782b  sltu        $t7, $t6, $s6
    ctx->pc = 0x129290u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)GPR_U64(ctx, 22)) ? 1 : 0);
    // 0x129294: 0x15e0004f  bnez        $t7, . + 4 + (0x4F << 2)
    ctx->pc = 0x129294u;
    {
        const bool branch_taken_0x129294 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x129298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129294u;
        // 0x129298: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129294) {
            ctx->pc = 0x1293D4u;
            goto label_1293d4;
        }
    }
    ctx->pc = 0x12929Cu;
    // 0x12929c: 0x8eec000c  lw          $t4, 0xC($s7)
    ctx->pc = 0x12929cu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 12)));
    // 0x1292a0: 0x2626fffc  addiu       $a2, $s1, -0x4
    ctx->pc = 0x1292a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967292));
    // 0x1292a4: 0x8eea0008  lw          $t2, 0x8($s7)
    ctx->pc = 0x1292a4u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 8)));
    // 0x1292a8: 0x2e0802d  daddu       $s0, $s7, $zero
    ctx->pc = 0x1292a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1292ac: 0x1c0982d  daddu       $s3, $t6, $zero
    ctx->pc = 0x1292acu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1292b0: 0x26f10008  addiu       $s1, $s7, 0x8
    ctx->pc = 0x1292b0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 23), 8));
    // 0x1292b4: 0xad8a0008  sw          $t2, 0x8($t4)
    ctx->pc = 0x1292b4u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 8), GPR_U32(ctx, 10));
    // 0x1292b8: 0x2ccf0025  sltiu       $t7, $a2, 0x25
    ctx->pc = 0x1292b8u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)37) ? 1 : 0);
label_1292bc:
    // 0x1292bc: 0x11e0003f  beqz        $t7, . + 4 + (0x3F << 2)
    ctx->pc = 0x1292BCu;
    {
        const bool branch_taken_0x1292bc = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x1292C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1292BCu;
        // 0x1292c0: 0xad4c000c  sw          $t4, 0xC($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 12), GPR_U32(ctx, 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1292bc) {
            ctx->pc = 0x1293BCu;
            goto label_1293bc;
        }
    }
    ctx->pc = 0x1292C4u;
    // 0x1292c4: 0x280582d  daddu       $t3, $s4, $zero
    ctx->pc = 0x1292c4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1292c8: 0x2ccf0014  sltiu       $t7, $a2, 0x14
    ctx->pc = 0x1292c8u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)20) ? 1 : 0);
    // 0x1292cc: 0x15e00017  bnez        $t7, . + 4 + (0x17 << 2)
    ctx->pc = 0x1292CCu;
    {
        const bool branch_taken_0x1292cc = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x1292D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1292CCu;
        // 0x1292d0: 0x220602d  daddu       $t4, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1292cc) {
            ctx->pc = 0x12932Cu;
            goto label_12932c;
        }
    }
    ctx->pc = 0x1292D4u;
    // 0x1292d4: 0x8e8f0000  lw          $t7, 0x0($s4)
    ctx->pc = 0x1292d4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1292d8: 0x268b0008  addiu       $t3, $s4, 0x8
    ctx->pc = 0x1292d8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
    // 0x1292dc: 0x260c0010  addiu       $t4, $s0, 0x10
    ctx->pc = 0x1292dcu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1292e0: 0x2ccd001c  sltiu       $t5, $a2, 0x1C
    ctx->pc = 0x1292e0u;
    SET_GPR_U64(ctx, 13, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)28) ? 1 : 0);
    // 0x1292e4: 0xae0f0008  sw          $t7, 0x8($s0)
    ctx->pc = 0x1292e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 15));
    // 0x1292e8: 0x8e8e0004  lw          $t6, 0x4($s4)
    ctx->pc = 0x1292e8u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x1292ec: 0x15a0000f  bnez        $t5, . + 4 + (0xF << 2)
    ctx->pc = 0x1292ECu;
    {
        const bool branch_taken_0x1292ec = (GPR_U64(ctx, 13) != GPR_U64(ctx, 0));
        ctx->pc = 0x1292F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1292ECu;
        // 0x1292f0: 0xae0e000c  sw          $t6, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1292ec) {
            ctx->pc = 0x12932Cu;
            goto label_12932c;
        }
    }
    ctx->pc = 0x1292F4u;
    // 0x1292f4: 0x8e8f0008  lw          $t7, 0x8($s4)
    ctx->pc = 0x1292f4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x1292f8: 0x2ccd0024  sltiu       $t5, $a2, 0x24
    ctx->pc = 0x1292f8u;
    SET_GPR_U64(ctx, 13, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)36) ? 1 : 0);
    // 0x1292fc: 0x268b0010  addiu       $t3, $s4, 0x10
    ctx->pc = 0x1292fcu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    // 0x129300: 0x260c0018  addiu       $t4, $s0, 0x18
    ctx->pc = 0x129300u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x129304: 0xae0f0010  sw          $t7, 0x10($s0)
    ctx->pc = 0x129304u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 15));
    // 0x129308: 0x8e8e000c  lw          $t6, 0xC($s4)
    ctx->pc = 0x129308u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x12930c: 0x15a00007  bnez        $t5, . + 4 + (0x7 << 2)
    ctx->pc = 0x12930Cu;
    {
        const bool branch_taken_0x12930c = (GPR_U64(ctx, 13) != GPR_U64(ctx, 0));
        ctx->pc = 0x129310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12930Cu;
        // 0x129310: 0xae0e0014  sw          $t6, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12930c) {
            ctx->pc = 0x12932Cu;
            goto label_12932c;
        }
    }
    ctx->pc = 0x129314u;
    // 0x129314: 0x8e8e0010  lw          $t6, 0x10($s4)
    ctx->pc = 0x129314u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x129318: 0x268b0018  addiu       $t3, $s4, 0x18
    ctx->pc = 0x129318u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 20), 24));
    // 0x12931c: 0x260c0020  addiu       $t4, $s0, 0x20
    ctx->pc = 0x12931cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x129320: 0xae0e0018  sw          $t6, 0x18($s0)
    ctx->pc = 0x129320u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 14));
    // 0x129324: 0x8e8f0014  lw          $t7, 0x14($s4)
    ctx->pc = 0x129324u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
    // 0x129328: 0xae0f001c  sw          $t7, 0x1C($s0)
    ctx->pc = 0x129328u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 15));
label_12932c:
    // 0x12932c: 0x8d6f0000  lw          $t7, 0x0($t3)
    ctx->pc = 0x12932cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x129330: 0xad8f0000  sw          $t7, 0x0($t4)
    ctx->pc = 0x129330u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 15));
    // 0x129334: 0x256b0004  addiu       $t3, $t3, 0x4
    ctx->pc = 0x129334u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4));
    // 0x129338: 0x8d6e0000  lw          $t6, 0x0($t3)
    ctx->pc = 0x129338u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x12933c: 0x258c0004  addiu       $t4, $t4, 0x4
    ctx->pc = 0x12933cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4));
    // 0x129340: 0xad8e0000  sw          $t6, 0x0($t4)
    ctx->pc = 0x129340u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 14));
    // 0x129344: 0x8d6f0004  lw          $t7, 0x4($t3)
    ctx->pc = 0x129344u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 4)));
    // 0x129348: 0xad8f0004  sw          $t7, 0x4($t4)
    ctx->pc = 0x129348u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 4), GPR_U32(ctx, 15));
    // 0x12934c: 0x8eed0004  lw          $t5, 0x4($s7)
    ctx->pc = 0x12934cu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4)));
label_129350:
    // 0x129350: 0x2765823  subu        $t3, $s3, $s6
    ctx->pc = 0x129350u;
    SET_GPR_S32(ctx, 11, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 22)));
    // 0x129354: 0x2d6f0010  sltiu       $t7, $t3, 0x10
    ctx->pc = 0x129354u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x129358: 0x15e00011  bnez        $t7, . + 4 + (0x11 << 2)
    ctx->pc = 0x129358u;
    {
        const bool branch_taken_0x129358 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x12935Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129358u;
        // 0x12935c: 0x31af0001  andi        $t7, $t5, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 15, GPR_U64(ctx, 13) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x129358) {
            ctx->pc = 0x1293A0u;
            goto label_1293a0;
        }
    }
    ctx->pc = 0x129360u;
    // 0x129360: 0x2167021  addu        $t6, $s0, $s6
    ctx->pc = 0x129360u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 22)));
    // 0x129364: 0x1f67825  or          $t7, $t7, $s6
    ctx->pc = 0x129364u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | GPR_U64(ctx, 22));
    // 0x129368: 0x356c0001  ori         $t4, $t3, 0x1
    ctx->pc = 0x129368u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)1);
    // 0x12936c: 0xae0f0004  sw          $t7, 0x4($s0)
    ctx->pc = 0x12936cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 15));
    // 0x129370: 0x1cb6821  addu        $t5, $t6, $t3
    ctx->pc = 0x129370u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 11)));
    // 0x129374: 0x25c50008  addiu       $a1, $t6, 0x8
    ctx->pc = 0x129374u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 14), 8));
    // 0x129378: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x129378u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12937c: 0xadcc0004  sw          $t4, 0x4($t6)
    ctx->pc = 0x12937cu;
    WRITE32(ADD32(GPR_U32(ctx, 14), 4), GPR_U32(ctx, 12));
    // 0x129380: 0x8daf0004  lw          $t7, 0x4($t5)
    ctx->pc = 0x129380u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 4)));
    // 0x129384: 0x35ef0001  ori         $t7, $t7, 0x1
    ctx->pc = 0x129384u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)1);
    // 0x129388: 0xc04943c  jal         func_1250F0
    ctx->pc = 0x129388u;
    SET_GPR_U32(ctx, 31, 0x129390u);
    ctx->pc = 0x12938Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x129388u;
    // 0x12938c: 0xadaf0004  sw          $t7, 0x4($t5) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 13), 4), GPR_U32(ctx, 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1250F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1250F0u, 0x129388u, 0x129390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x129390u;
label_129390:
    // 0x129390: 0xc049cfc  jal         func_1273F0
    ctx->pc = 0x129390u;
    SET_GPR_U32(ctx, 31, 0x129398u);
    ctx->pc = 0x129394u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x129390u;
    // 0x129394: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1273F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1273F0u, 0x129390u, 0x129398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x129398u;
label_129398:
    // 0x129398: 0x1000ff5a  b           . + 4 + (-0xA6 << 2)
    ctx->pc = 0x129398u;
    {
        const bool branch_taken_0x129398 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12939Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129398u;
        // 0x12939c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129398) {
            ctx->pc = 0x129104u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_129104;
        }
    }
    ctx->pc = 0x1293A0u;
label_1293a0:
    // 0x1293a0: 0x1f37825  or          $t7, $t7, $s3
    ctx->pc = 0x1293a0u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | GPR_U64(ctx, 19));
    // 0x1293a4: 0x2136821  addu        $t5, $s0, $s3
    ctx->pc = 0x1293a4u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 19)));
    // 0x1293a8: 0xae0f0004  sw          $t7, 0x4($s0)
    ctx->pc = 0x1293a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 15));
    // 0x1293ac: 0x8dae0004  lw          $t6, 0x4($t5)
    ctx->pc = 0x1293acu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 4)));
    // 0x1293b0: 0x35ce0001  ori         $t6, $t6, 0x1
    ctx->pc = 0x1293b0u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | (uint64_t)(uint16_t)1);
    // 0x1293b4: 0x1000fff6  b           . + 4 + (-0xA << 2)
    ctx->pc = 0x1293B4u;
    {
        const bool branch_taken_0x1293b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1293B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1293B4u;
        // 0x1293b8: 0xadae0004  sw          $t6, 0x4($t5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 13), 4), GPR_U32(ctx, 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1293b4) {
            ctx->pc = 0x129390u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_129390;
        }
    }
    ctx->pc = 0x1293BCu;
label_1293bc:
    // 0x1293bc: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1293bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1293c0: 0xc049c48  jal         func_127120
    ctx->pc = 0x1293C0u;
    SET_GPR_U32(ctx, 31, 0x1293C8u);
    ctx->pc = 0x1293C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1293C0u;
    // 0x1293c4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127120u, 0x1293C0u, 0x1293C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1293C8u;
label_1293c8:
    // 0x1293c8: 0x1000ffe1  b           . + 4 + (-0x1F << 2)
    ctx->pc = 0x1293C8u;
    {
        const bool branch_taken_0x1293c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1293CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1293C8u;
        // 0x1293cc: 0x8e0d0004  lw          $t5, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1293c8) {
            ctx->pc = 0x129350u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_129350;
        }
    }
    ctx->pc = 0x1293D0u;
label_1293d0:
    // 0x1293d0: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x1293d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1293d4:
    // 0x1293d4: 0xc049a24  jal         func_126890
    ctx->pc = 0x1293D4u;
    SET_GPR_U32(ctx, 31, 0x1293DCu);
    ctx->pc = 0x1293D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1293D4u;
    // 0x1293d8: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x126890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126890u, 0x1293D4u, 0x1293DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1293DCu;
label_1293dc:
    // 0x1293dc: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1293DCu;
    {
        const bool branch_taken_0x1293dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1293E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1293DCu;
        // 0x1293e0: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1293dc) {
            ctx->pc = 0x1293F4u;
            goto label_1293f4;
        }
    }
    ctx->pc = 0x1293E4u;
    // 0x1293e4: 0xc049cfc  jal         func_1273F0
    ctx->pc = 0x1293E4u;
    SET_GPR_U32(ctx, 31, 0x1293ECu);
    ctx->pc = 0x1293E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1293E4u;
    // 0x1293e8: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1273F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1273F0u, 0x1293E4u, 0x1293ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1293ECu;
label_1293ec:
    // 0x1293ec: 0x1000ff45  b           . + 4 + (-0xBB << 2)
    ctx->pc = 0x1293ECu;
    {
        const bool branch_taken_0x1293ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1293F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1293ECu;
        // 0x1293f0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1293ec) {
            ctx->pc = 0x129104u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_129104;
        }
    }
    ctx->pc = 0x1293F4u;
label_1293f4:
    // 0x1293f4: 0x8e4d0004  lw          $t5, 0x4($s2)
    ctx->pc = 0x1293f4u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1293f8: 0x240ffffe  addiu       $t7, $zero, -0x2
    ctx->pc = 0x1293f8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x1293fc: 0x2450fff8  addiu       $s0, $v0, -0x8
    ctx->pc = 0x1293fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967288));
    // 0x129400: 0x1af7824  and         $t7, $t5, $t7
    ctx->pc = 0x129400u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 13) & GPR_U64(ctx, 15));
    // 0x129404: 0x24f7821  addu        $t7, $s2, $t7
    ctx->pc = 0x129404u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 15)));
    // 0x129408: 0x160f0008  bne         $s0, $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x129408u;
    {
        const bool branch_taken_0x129408 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 15));
        ctx->pc = 0x12940Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129408u;
        // 0x12940c: 0x2626fffc  addiu       $a2, $s1, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129408) {
            ctx->pc = 0x12942Cu;
            goto label_12942c;
        }
    }
    ctx->pc = 0x129410u;
    // 0x129410: 0x8e0e0004  lw          $t6, 0x4($s0)
    ctx->pc = 0x129410u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x129414: 0x240ffffc  addiu       $t7, $zero, -0x4
    ctx->pc = 0x129414u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x129418: 0x1cf7024  and         $t6, $t6, $t7
    ctx->pc = 0x129418u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) & GPR_U64(ctx, 15));
    // 0x12941c: 0x240802d  daddu       $s0, $s2, $zero
    ctx->pc = 0x12941cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129420: 0x22e9821  addu        $s3, $s1, $t6
    ctx->pc = 0x129420u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 14)));
label_129424:
    // 0x129424: 0x1000ffca  b           . + 4 + (-0x36 << 2)
    ctx->pc = 0x129424u;
    {
        const bool branch_taken_0x129424 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x129428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129424u;
        // 0x129428: 0x26510008  addiu       $s1, $s2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129424) {
            ctx->pc = 0x129350u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_129350;
        }
    }
    ctx->pc = 0x12942Cu;
label_12942c:
    // 0x12942c: 0x2ccf0025  sltiu       $t7, $a2, 0x25
    ctx->pc = 0x12942cu;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)37) ? 1 : 0);
    // 0x129430: 0x11e00027  beqz        $t7, . + 4 + (0x27 << 2)
    ctx->pc = 0x129430u;
    {
        const bool branch_taken_0x129430 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x129434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129430u;
        // 0x129434: 0x280582d  daddu       $t3, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129430) {
            ctx->pc = 0x1294D0u;
            goto label_1294d0;
        }
    }
    ctx->pc = 0x129438u;
    // 0x129438: 0x2ccf0014  sltiu       $t7, $a2, 0x14
    ctx->pc = 0x129438u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)20) ? 1 : 0);
    // 0x12943c: 0x15e00017  bnez        $t7, . + 4 + (0x17 << 2)
    ctx->pc = 0x12943Cu;
    {
        const bool branch_taken_0x12943c = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x129440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12943Cu;
        // 0x129440: 0x40602d  daddu       $t4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12943c) {
            ctx->pc = 0x12949Cu;
            goto label_12949c;
        }
    }
    ctx->pc = 0x129444u;
    // 0x129444: 0x8e8f0000  lw          $t7, 0x0($s4)
    ctx->pc = 0x129444u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x129448: 0x268b0008  addiu       $t3, $s4, 0x8
    ctx->pc = 0x129448u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
    // 0x12944c: 0x244c0008  addiu       $t4, $v0, 0x8
    ctx->pc = 0x12944cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x129450: 0x2ccd001c  sltiu       $t5, $a2, 0x1C
    ctx->pc = 0x129450u;
    SET_GPR_U64(ctx, 13, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)28) ? 1 : 0);
    // 0x129454: 0xac4f0000  sw          $t7, 0x0($v0)
    ctx->pc = 0x129454u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 15));
    // 0x129458: 0x8e8e0004  lw          $t6, 0x4($s4)
    ctx->pc = 0x129458u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x12945c: 0x15a0000f  bnez        $t5, . + 4 + (0xF << 2)
    ctx->pc = 0x12945Cu;
    {
        const bool branch_taken_0x12945c = (GPR_U64(ctx, 13) != GPR_U64(ctx, 0));
        ctx->pc = 0x129460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12945Cu;
        // 0x129460: 0xac4e0004  sw          $t6, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12945c) {
            ctx->pc = 0x12949Cu;
            goto label_12949c;
        }
    }
    ctx->pc = 0x129464u;
    // 0x129464: 0x8e8f0008  lw          $t7, 0x8($s4)
    ctx->pc = 0x129464u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x129468: 0x2ccd0024  sltiu       $t5, $a2, 0x24
    ctx->pc = 0x129468u;
    SET_GPR_U64(ctx, 13, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)36) ? 1 : 0);
    // 0x12946c: 0x268b0010  addiu       $t3, $s4, 0x10
    ctx->pc = 0x12946cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    // 0x129470: 0x244c0010  addiu       $t4, $v0, 0x10
    ctx->pc = 0x129470u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x129474: 0xac4f0008  sw          $t7, 0x8($v0)
    ctx->pc = 0x129474u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 15));
    // 0x129478: 0x8e8e000c  lw          $t6, 0xC($s4)
    ctx->pc = 0x129478u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x12947c: 0x15a00007  bnez        $t5, . + 4 + (0x7 << 2)
    ctx->pc = 0x12947Cu;
    {
        const bool branch_taken_0x12947c = (GPR_U64(ctx, 13) != GPR_U64(ctx, 0));
        ctx->pc = 0x129480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12947Cu;
        // 0x129480: 0xac4e000c  sw          $t6, 0xC($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12947c) {
            ctx->pc = 0x12949Cu;
            goto label_12949c;
        }
    }
    ctx->pc = 0x129484u;
    // 0x129484: 0x8e8e0010  lw          $t6, 0x10($s4)
    ctx->pc = 0x129484u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x129488: 0x268b0018  addiu       $t3, $s4, 0x18
    ctx->pc = 0x129488u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 20), 24));
    // 0x12948c: 0x244c0018  addiu       $t4, $v0, 0x18
    ctx->pc = 0x12948cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
    // 0x129490: 0xac4e0010  sw          $t6, 0x10($v0)
    ctx->pc = 0x129490u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 14));
    // 0x129494: 0x8e8f0014  lw          $t7, 0x14($s4)
    ctx->pc = 0x129494u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
    // 0x129498: 0xac4f0014  sw          $t7, 0x14($v0)
    ctx->pc = 0x129498u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 15));
label_12949c:
    // 0x12949c: 0x8d6f0000  lw          $t7, 0x0($t3)
    ctx->pc = 0x12949cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x1294a0: 0xad8f0000  sw          $t7, 0x0($t4)
    ctx->pc = 0x1294a0u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 15));
    // 0x1294a4: 0x256b0004  addiu       $t3, $t3, 0x4
    ctx->pc = 0x1294a4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4));
    // 0x1294a8: 0x8d6e0000  lw          $t6, 0x0($t3)
    ctx->pc = 0x1294a8u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x1294ac: 0x258c0004  addiu       $t4, $t4, 0x4
    ctx->pc = 0x1294acu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4));
    // 0x1294b0: 0xad8e0000  sw          $t6, 0x0($t4)
    ctx->pc = 0x1294b0u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 14));
    // 0x1294b4: 0x8d6f0004  lw          $t7, 0x4($t3)
    ctx->pc = 0x1294b4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 4)));
    // 0x1294b8: 0xad8f0004  sw          $t7, 0x4($t4)
    ctx->pc = 0x1294b8u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 4), GPR_U32(ctx, 15));
    // 0x1294bc: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x1294bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_1294c0:
    // 0x1294c0: 0xc04943c  jal         func_1250F0
    ctx->pc = 0x1294C0u;
    SET_GPR_U32(ctx, 31, 0x1294C8u);
    ctx->pc = 0x1294C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1294C0u;
    // 0x1294c4: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1250F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1250F0u, 0x1294C0u, 0x1294C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1294C8u;
label_1294c8:
    // 0x1294c8: 0x1000ff65  b           . + 4 + (-0x9B << 2)
    ctx->pc = 0x1294C8u;
    {
        const bool branch_taken_0x1294c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1294CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1294C8u;
        // 0x1294cc: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1294c8) {
            ctx->pc = 0x129260u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_129260;
        }
    }
    ctx->pc = 0x1294D0u;
label_1294d0:
    // 0x1294d0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1294d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1294d4: 0xc049c48  jal         func_127120
    ctx->pc = 0x1294D4u;
    SET_GPR_U32(ctx, 31, 0x1294DCu);
    ctx->pc = 0x1294D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1294D4u;
    // 0x1294d8: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127120u, 0x1294D4u, 0x1294DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1294DCu;
label_1294dc:
    // 0x1294dc: 0x1000fff8  b           . + 4 + (-0x8 << 2)
    ctx->pc = 0x1294DCu;
    {
        const bool branch_taken_0x1294dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1294E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1294DCu;
        // 0x1294e0: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1294dc) {
            ctx->pc = 0x1294C0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1294c0;
        }
    }
    ctx->pc = 0x1294E4u;
label_1294e4:
    // 0x1294e4: 0x1f17821  addu        $t7, $t7, $s1
    ctx->pc = 0x1294e4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 17)));
    // 0x1294e8: 0x1f6702b  sltu        $t6, $t7, $s6
    ctx->pc = 0x1294e8u;
    SET_GPR_U64(ctx, 14, ((uint64_t)GPR_U64(ctx, 15) < (uint64_t)GPR_U64(ctx, 22)) ? 1 : 0);
    // 0x1294ec: 0x15c0ff66  bnez        $t6, . + 4 + (-0x9A << 2)
    ctx->pc = 0x1294ECu;
    {
        const bool branch_taken_0x1294ec = (GPR_U64(ctx, 14) != GPR_U64(ctx, 0));
        ctx->pc = 0x1294F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1294ECu;
        // 0x1294f0: 0x2626fffc  addiu       $a2, $s1, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1294ec) {
            ctx->pc = 0x129288u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_129288;
        }
    }
    ctx->pc = 0x1294F4u;
    // 0x1294f4: 0x8d6a0008  lw          $t2, 0x8($t3)
    ctx->pc = 0x1294f4u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 8)));
    // 0x1294f8: 0x8d6c000c  lw          $t4, 0xC($t3)
    ctx->pc = 0x1294f8u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 12)));
    // 0x1294fc: 0x1e0982d  daddu       $s3, $t7, $zero
    ctx->pc = 0x1294fcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129500: 0x2e0802d  daddu       $s0, $s7, $zero
    ctx->pc = 0x129500u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129504: 0x26f10008  addiu       $s1, $s7, 0x8
    ctx->pc = 0x129504u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 23), 8));
    // 0x129508: 0xad8a0008  sw          $t2, 0x8($t4)
    ctx->pc = 0x129508u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 8), GPR_U32(ctx, 10));
    // 0x12950c: 0x2ccf0025  sltiu       $t7, $a2, 0x25
    ctx->pc = 0x12950cu;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)37) ? 1 : 0);
    // 0x129510: 0xad4c000c  sw          $t4, 0xC($t2)
    ctx->pc = 0x129510u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 12), GPR_U32(ctx, 12));
    // 0x129514: 0x8eea0008  lw          $t2, 0x8($s7)
    ctx->pc = 0x129514u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 8)));
    // 0x129518: 0x8eec000c  lw          $t4, 0xC($s7)
    ctx->pc = 0x129518u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 12)));
    // 0x12951c: 0x1000ff67  b           . + 4 + (-0x99 << 2)
    ctx->pc = 0x12951Cu;
    {
        const bool branch_taken_0x12951c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x129520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12951Cu;
        // 0x129520: 0xad8a0008  sw          $t2, 0x8($t4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 12), 8), GPR_U32(ctx, 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12951c) {
            ctx->pc = 0x1292BCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1292bc;
        }
    }
    ctx->pc = 0x129524u;
label_129524:
    // 0x129524: 0x1917021  addu        $t6, $t4, $s1
    ctx->pc = 0x129524u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 17)));
    // 0x129528: 0x1d6782b  sltu        $t7, $t6, $s6
    ctx->pc = 0x129528u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)GPR_U64(ctx, 22)) ? 1 : 0);
    // 0x12952c: 0x55e0ff02  bnel        $t7, $zero, . + 4 + (-0xFE << 2)
    ctx->pc = 0x12952Cu;
    {
        const bool branch_taken_0x12952c = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        if (branch_taken_0x12952c) {
            ctx->pc = 0x129530u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12952Cu;
            // 0x129530: 0x8e4f0004  lw          $t7, 0x4($s2) (Delay Slot)
            SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x129138u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_129138;
        }
    }
    ctx->pc = 0x129534u;
    // 0x129534: 0x8d6a0008  lw          $t2, 0x8($t3)
    ctx->pc = 0x129534u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 8)));
    // 0x129538: 0x1c0982d  daddu       $s3, $t6, $zero
    ctx->pc = 0x129538u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12953c: 0x8d6c000c  lw          $t4, 0xC($t3)
    ctx->pc = 0x12953cu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 12)));
    // 0x129540: 0x26510008  addiu       $s1, $s2, 0x8
    ctx->pc = 0x129540u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
    // 0x129544: 0xad8a0008  sw          $t2, 0x8($t4)
    ctx->pc = 0x129544u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 8), GPR_U32(ctx, 10));
    // 0x129548: 0x1000ff81  b           . + 4 + (-0x7F << 2)
    ctx->pc = 0x129548u;
    {
        const bool branch_taken_0x129548 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12954Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129548u;
        // 0x12954c: 0xad4c000c  sw          $t4, 0xC($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 12), GPR_U32(ctx, 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129548) {
            ctx->pc = 0x129350u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_129350;
        }
    }
    ctx->pc = 0x129550u;
label_129550:
    // 0x129550: 0x1000fef8  b           . + 4 + (-0x108 << 2)
    ctx->pc = 0x129550u;
    {
        const bool branch_taken_0x129550 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x129554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129550u;
        // 0x129554: 0x602d  daddu       $t4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129550) {
            ctx->pc = 0x129134u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_129134;
        }
    }
    ctx->pc = 0x129558u;
label_129558:
    // 0x129558: 0x1000fed6  b           . + 4 + (-0x12A << 2)
    ctx->pc = 0x129558u;
    {
        const bool branch_taken_0x129558 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12955Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129558u;
        // 0x12955c: 0x8d6c0004  lw          $t4, 0x4($t3) (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129558) {
            ctx->pc = 0x1290B4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1290b4;
        }
    }
    ctx->pc = 0x129560u;
label_129560:
    // 0x129560: 0x1000fec5  b           . + 4 + (-0x13B << 2)
    ctx->pc = 0x129560u;
    {
        const bool branch_taken_0x129560 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x129564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129560u;
        // 0x129564: 0x24160010  addiu       $s6, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129560) {
            ctx->pc = 0x129078u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_129078;
        }
    }
    ctx->pc = 0x129568u;
    // 0x129568: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x129568u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x12956c: 0x240f0009  addiu       $t7, $zero, 0x9
    ctx->pc = 0x12956cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x129570: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x129570u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x129574: 0x948e000c  lhu         $t6, 0xC($a0)
    ctx->pc = 0x129574u;
    SET_GPR_U32(ctx, 14, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x129578: 0x31ce0009  andi        $t6, $t6, 0x9
    ctx->pc = 0x129578u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)9);
    // 0x12957c: 0x15cf0003  bne         $t6, $t7, . + 4 + (0x3 << 2)
    ctx->pc = 0x12957Cu;
    {
        const bool branch_taken_0x12957c = (GPR_U64(ctx, 14) != GPR_U64(ctx, 15));
        ctx->pc = 0x129580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12957Cu;
        // 0x129580: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12957c) {
            ctx->pc = 0x12958Cu;
            goto label_12958c;
        }
    }
    ctx->pc = 0x129584u;
    // 0x129584: 0x8049258  j           func_124960
    ctx->pc = 0x129584u;
    ctx->pc = 0x129588u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x129584u;
    // 0x129588: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124960u;
    sub_00124960_0x124960(rdram, ctx, runtime); return;
    ctx->pc = 0x12958Cu;
label_12958c:
    // 0x12958c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x12958cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129590: 0x3e00008  jr          $ra
    ctx->pc = 0x129590u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x129594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129590u;
        // 0x129594: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x129590u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x129598u;
}
