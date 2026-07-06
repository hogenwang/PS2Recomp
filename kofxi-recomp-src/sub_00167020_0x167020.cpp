#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00167020
// Address: 0x167020 - 0x167260
void sub_00167020_0x167020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00167020_0x167020");
#endif

    switch (ctx->pc) {
        case 0x167054u: goto label_167054;
        case 0x1670d8u: goto label_1670d8;
        case 0x167148u: goto label_167148;
        case 0x1671a0u: goto label_1671a0;
        case 0x167220u: goto label_167220;
        case 0x167238u: goto label_167238;
        case 0x167248u: goto label_167248;
        default: break;
    }

    ctx->pc = 0x167020u;

    // 0x167020: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x167020u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x167024: 0x3c070036  lui         $a3, 0x36
    ctx->pc = 0x167024u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)54 << 16));
    // 0x167028: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x167028u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x16702c: 0x24e73050  addiu       $a3, $a3, 0x3050
    ctx->pc = 0x16702cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 12368));
    // 0x167030: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x167030u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x167034: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x167034u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x167038: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x167038u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x16703c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x16703cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x167040: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x167040u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167044: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x167044u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167048: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x167048u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x16704c: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x16704cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x167050: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x167050u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_167054:
    // 0x167054: 0x84e30000  lh          $v1, 0x0($a3)
    ctx->pc = 0x167054u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x167058: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x167058u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x16705c: 0x84e20002  lh          $v0, 0x2($a3)
    ctx->pc = 0x16705cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 2)));
    // 0x167060: 0xa4a30000  sh          $v1, 0x0($a1)
    ctx->pc = 0x167060u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x167064: 0xa4a20002  sh          $v0, 0x2($a1)
    ctx->pc = 0x167064u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x167068: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x167068u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x16706c: 0x1c80fff9  bgtz        $a0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x16706Cu;
    {
        const bool branch_taken_0x16706c = (GPR_S32(ctx, 4) > 0);
        ctx->pc = 0x167070u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16706Cu;
            // 0x167070: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16706c) {
            ctx->pc = 0x167054u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_167054;
        }
    }
    ctx->pc = 0x167074u;
    // 0x167074: 0x30c300ff  andi        $v1, $a2, 0xFF
    ctx->pc = 0x167074u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x167078: 0x54600003  bnel        $v1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x167078u;
    {
        const bool branch_taken_0x167078 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x167078) {
            ctx->pc = 0x16707Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x167078u;
            // 0x16707c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x167088u;
            goto label_167088;
        }
    }
    ctx->pc = 0x167080u;
    // 0x167080: 0x1000005c  b           . + 4 + (0x5C << 2)
    ctx->pc = 0x167080u;
    {
        const bool branch_taken_0x167080 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x167084u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x167080u;
            // 0x167084: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167080) {
            ctx->pc = 0x1671F4u;
            goto label_1671f4;
        }
    }
    ctx->pc = 0x167088u;
label_167088:
    // 0x167088: 0x54620003  bnel        $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x167088u;
    {
        const bool branch_taken_0x167088 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x167088) {
            ctx->pc = 0x16708Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x167088u;
            // 0x16708c: 0x28610012  slti        $at, $v1, 0x12 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)18) ? 1 : 0);
        ctx->in_delay_slot = false;
            ctx->pc = 0x167098u;
            goto label_167098;
        }
    }
    ctx->pc = 0x167090u;
    // 0x167090: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x167090u;
    {
        const bool branch_taken_0x167090 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x167094u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x167090u;
            // 0x167094: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167090) {
            ctx->pc = 0x1670D0u;
            goto label_1670d0;
        }
    }
    ctx->pc = 0x167098u;
label_167098:
    // 0x167098: 0x50200005  beql        $at, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x167098u;
    {
        const bool branch_taken_0x167098 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x167098) {
            ctx->pc = 0x16709Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x167098u;
            // 0x16709c: 0x24020012  addiu       $v0, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1670B0u;
            goto label_1670b0;
        }
    }
    ctx->pc = 0x1670A0u;
    // 0x1670a0: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x1670a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1670a4: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x1670a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x1670a8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1670A8u;
    {
        const bool branch_taken_0x1670a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1670ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1670A8u;
            // 0x1670ac: 0x9450005c  lhu         $s0, 0x5C($v0) (Delay Slot)
        SET_GPR_U32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 92)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1670a8) {
            ctx->pc = 0x1670D0u;
            goto label_1670d0;
        }
    }
    ctx->pc = 0x1670B0u;
label_1670b0:
    // 0x1670b0: 0x54620003  bnel        $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1670B0u;
    {
        const bool branch_taken_0x1670b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1670b0) {
            ctx->pc = 0x1670B4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1670B0u;
            // 0x1670b4: 0x31040  sll         $v0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1670C0u;
            goto label_1670c0;
        }
    }
    ctx->pc = 0x1670B8u;
    // 0x1670b8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1670B8u;
    {
        const bool branch_taken_0x1670b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1670BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1670B8u;
            // 0x1670bc: 0x641000ff  daddiu      $s0, $zero, 0xFF (Delay Slot)
        SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1670b8) {
            ctx->pc = 0x1670D0u;
            goto label_1670d0;
        }
    }
    ctx->pc = 0x1670C0u;
label_1670c0:
    // 0x1670c0: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x1670c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x1670c4: 0x9442003a  lhu         $v0, 0x3A($v0)
    ctx->pc = 0x1670c4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 58)));
    // 0x1670c8: 0x401027  not         $v0, $v0
    ctx->pc = 0x1670c8u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 2) | GPR_U64(ctx, 0)));
    // 0x1670cc: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x1670ccu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1670d0:
    // 0x1670d0: 0xc0635c0  jal         func_18D700
    ctx->pc = 0x1670D0u;
    SET_GPR_U32(ctx, 31, 0x1670D8u);
    ctx->pc = 0x18D700u;
    if (runtime->hasFunction(0x18D700u)) {
        auto targetFn = runtime->lookupFunction(0x18D700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1670D8u; }
        if (ctx->pc != 0x1670D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018D700_0x18d700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1670D8u; }
        if (ctx->pc != 0x1670D8u) { return; }
    }
    ctx->pc = 0x1670D8u;
label_1670d8:
    // 0x1670d8: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x1670D8u;
    {
        const bool branch_taken_0x1670d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1670d8) {
            ctx->pc = 0x1670DCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1670D8u;
            // 0x1670dc: 0x94440000  lhu         $a0, 0x0($v0) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1670E8u;
            goto label_1670e8;
        }
    }
    ctx->pc = 0x1670E0u;
    // 0x1670e0: 0x10000044  b           . + 4 + (0x44 << 2)
    ctx->pc = 0x1670E0u;
    {
        const bool branch_taken_0x1670e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1670E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1670E0u;
            // 0x1670e4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1670e0) {
            ctx->pc = 0x1671F4u;
            goto label_1671f4;
        }
    }
    ctx->pc = 0x1670E8u;
label_1670e8:
    // 0x1670e8: 0x322300ff  andi        $v1, $s1, 0xFF
    ctx->pc = 0x1670e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x1670ec: 0x64082a  slt         $at, $v1, $a0
    ctx->pc = 0x1670ecu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x1670f0: 0x54200003  bnel        $at, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x1670F0u;
    {
        const bool branch_taken_0x1670f0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1670f0) {
            ctx->pc = 0x1670F4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1670F0u;
            // 0x1670f4: 0x31840  sll         $v1, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x167100u;
            goto label_167100;
        }
    }
    ctx->pc = 0x1670F8u;
    // 0x1670f8: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x1670F8u;
    {
        const bool branch_taken_0x1670f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1670FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1670F8u;
            // 0x1670fc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1670f8) {
            ctx->pc = 0x1671F4u;
            goto label_1671f4;
        }
    }
    ctx->pc = 0x167100u;
label_167100:
    // 0x167100: 0x122140  sll         $a0, $s2, 5
    ctx->pc = 0x167100u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), 5));
    // 0x167104: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x167104u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x167108: 0x923023  subu        $a2, $a0, $s2
    ctx->pc = 0x167108u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
    // 0x16710c: 0x94630002  lhu         $v1, 0x2($v1)
    ctx->pc = 0x16710cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x167110: 0x628c0  sll         $a1, $a2, 3
    ctx->pc = 0x167110u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x167114: 0x3c04009b  lui         $a0, 0x9B
    ctx->pc = 0x167114u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)155 << 16));
    // 0x167118: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x167118u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x16711c: 0x248448c0  addiu       $a0, $a0, 0x48C0
    ctx->pc = 0x16711cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18624));
    // 0x167120: 0x52840  sll         $a1, $a1, 1
    ctx->pc = 0x167120u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x167124: 0x31842  srl         $v1, $v1, 1
    ctx->pc = 0x167124u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x167128: 0x3210ffff  andi        $s0, $s0, 0xFFFF
    ctx->pc = 0x167128u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x16712c: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x16712cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x167130: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x167130u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167134: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x167134u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x167138: 0x858821  addu        $s1, $a0, $a1
    ctx->pc = 0x167138u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x16713c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x16713cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x167140: 0x94420002  lhu         $v0, 0x2($v0)
    ctx->pc = 0x167140u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x167144: 0x3052001f  andi        $s2, $v0, 0x1F
    ctx->pc = 0x167144u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
label_167148:
    // 0x167148: 0x5260000a  beql        $s3, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x167148u;
    {
        const bool branch_taken_0x167148 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x167148) {
            ctx->pc = 0x16714Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x167148u;
            // 0x16714c: 0x9622001a  lhu         $v0, 0x1A($s1) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 26)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x167174u;
            goto label_167174;
        }
    }
    ctx->pc = 0x167150u;
    // 0x167150: 0x141080  sll         $v0, $s4, 2
    ctx->pc = 0x167150u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
    // 0x167154: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x167154u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x167158: 0x9442001c  lhu         $v0, 0x1C($v0)
    ctx->pc = 0x167158u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x16715c: 0x2429023  subu        $s2, $s2, $v0
    ctx->pc = 0x16715cu;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x167160: 0x6410003  bgez        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x167160u;
    {
        const bool branch_taken_0x167160 = (GPR_S32(ctx, 18) >= 0);
        if (branch_taken_0x167160) {
            ctx->pc = 0x167170u;
            goto label_167170;
        }
    }
    ctx->pc = 0x167168u;
    // 0x167168: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x167168u;
    {
        const bool branch_taken_0x167168 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16716Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x167168u;
            // 0x16716c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167168) {
            ctx->pc = 0x1671F4u;
            goto label_1671f4;
        }
    }
    ctx->pc = 0x167170u;
label_167170:
    // 0x167170: 0x9622001a  lhu         $v0, 0x1A($s1)
    ctx->pc = 0x167170u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 26)));
label_167174:
    // 0x167174: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x167174u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x167178: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x167178u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x16717c: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x16717Cu;
    {
        const bool branch_taken_0x16717c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x167180u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16717Cu;
            // 0x167180: 0x3054003f  andi        $s4, $v0, 0x3F (Delay Slot)
        SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
        ctx->in_delay_slot = false;
        if (branch_taken_0x16717c) {
            ctx->pc = 0x167190u;
            goto label_167190;
        }
    }
    ctx->pc = 0x167184u;
    // 0x167184: 0x52800003  beql        $s4, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x167184u;
    {
        const bool branch_taken_0x167184 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x167184) {
            ctx->pc = 0x167188u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x167184u;
            // 0x167188: 0x141080  sll         $v0, $s4, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x167194u;
            goto label_167194;
        }
    }
    ctx->pc = 0x16718Cu;
    // 0x16718c: 0x2694ffc0  addiu       $s4, $s4, -0x40
    ctx->pc = 0x16718cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967232));
label_167190:
    // 0x167190: 0x141080  sll         $v0, $s4, 2
    ctx->pc = 0x167190u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
label_167194:
    // 0x167194: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x167194u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x167198: 0xc05a0a0  jal         func_168280
    ctx->pc = 0x167198u;
    SET_GPR_U32(ctx, 31, 0x1671A0u);
    ctx->pc = 0x16719Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x167198u;
            // 0x16719c: 0x9444001e  lhu         $a0, 0x1E($v0) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 30)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x168280u;
    if (runtime->hasFunction(0x168280u)) {
        auto targetFn = runtime->lookupFunction(0x168280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1671A0u; }
        if (ctx->pc != 0x1671A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00168280_0x168280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1671A0u; }
        if (ctx->pc != 0x1671A0u) { return; }
    }
    ctx->pc = 0x1671A0u;
label_1671a0:
    // 0x1671a0: 0x16000006  bnez        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1671A0u;
    {
        const bool branch_taken_0x1671a0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1671A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1671A0u;
            // 0x1671a4: 0x304300ff  andi        $v1, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1671a0) {
            ctx->pc = 0x1671BCu;
            goto label_1671bc;
        }
    }
    ctx->pc = 0x1671A8u;
    // 0x1671a8: 0x3062ffff  andi        $v0, $v1, 0xFFFF
    ctx->pc = 0x1671a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1671ac: 0x54500004  bnel        $v0, $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1671ACu;
    {
        const bool branch_taken_0x1671ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x1671ac) {
            ctx->pc = 0x1671B0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1671ACu;
            // 0x1671b0: 0x3063ffff  andi        $v1, $v1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1671C0u;
            goto label_1671c0;
        }
    }
    ctx->pc = 0x1671B4u;
    // 0x1671b4: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1671B4u;
    {
        const bool branch_taken_0x1671b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1671B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1671B4u;
            // 0x1671b8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1671b4) {
            ctx->pc = 0x1671F4u;
            goto label_1671f4;
        }
    }
    ctx->pc = 0x1671BCu;
label_1671bc:
    // 0x1671bc: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x1671bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_1671c0:
    // 0x1671c0: 0x701024  and         $v0, $v1, $s0
    ctx->pc = 0x1671c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 16));
    // 0x1671c4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1671C4u;
    {
        const bool branch_taken_0x1671c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1671c4) {
            ctx->pc = 0x1671D4u;
            goto label_1671d4;
        }
    }
    ctx->pc = 0x1671CCu;
    // 0x1671cc: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1671CCu;
    {
        const bool branch_taken_0x1671cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1671D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1671CCu;
            // 0x1671d0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1671cc) {
            ctx->pc = 0x1671F4u;
            goto label_1671f4;
        }
    }
    ctx->pc = 0x1671D4u;
label_1671d4:
    // 0x1671d4: 0x50600003  beql        $v1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x1671D4u;
    {
        const bool branch_taken_0x1671d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1671d4) {
            ctx->pc = 0x1671D8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1671D4u;
            // 0x1671d8: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1671E4u;
            goto label_1671e4;
        }
    }
    ctx->pc = 0x1671DCu;
    // 0x1671dc: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1671DCu;
    {
        const bool branch_taken_0x1671dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1671E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1671DCu;
            // 0x1671e0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1671dc) {
            ctx->pc = 0x1671F4u;
            goto label_1671f4;
        }
    }
    ctx->pc = 0x1671E4u;
label_1671e4:
    // 0x1671e4: 0x2a620040  slti        $v0, $s3, 0x40
    ctx->pc = 0x1671e4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)64) ? 1 : 0);
    // 0x1671e8: 0x1440ffd7  bnez        $v0, . + 4 + (-0x29 << 2)
    ctx->pc = 0x1671E8u;
    {
        const bool branch_taken_0x1671e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1671e8) {
            ctx->pc = 0x167148u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_167148;
        }
    }
    ctx->pc = 0x1671F0u;
    // 0x1671f0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1671f0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1671f4:
    // 0x1671f4: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1671f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1671f8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1671f8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1671fc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1671fcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x167200: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x167200u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x167204: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x167204u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x167208: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x167208u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16720c: 0x3e00008  jr          $ra
    ctx->pc = 0x16720Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x167210u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16720Cu;
            // 0x167210: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x167214u;
    // 0x167214: 0x0  nop
    ctx->pc = 0x167214u;
    // NOP
    // 0x167218: 0x0  nop
    ctx->pc = 0x167218u;
    // NOP
    // 0x16721c: 0x0  nop
    ctx->pc = 0x16721cu;
    // NOP
label_167220:
    // 0x167220: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x167220u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x167224: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x167224u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x167228: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x167228u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x16722c: 0x8c8400dc  lw          $a0, 0xDC($a0)
    ctx->pc = 0x16722cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 220)));
    // 0x167230: 0xc05c6ac  jal         func_171AB0
    ctx->pc = 0x167230u;
    SET_GPR_U32(ctx, 31, 0x167238u);
    ctx->pc = 0x167234u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x167230u;
            // 0x167234: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x171AB0u;
    if (runtime->hasFunction(0x171AB0u)) {
        auto targetFn = runtime->lookupFunction(0x171AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x167238u; }
        if (ctx->pc != 0x167238u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00171AB0_0x171ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x167238u; }
        if (ctx->pc != 0x167238u) { return; }
    }
    ctx->pc = 0x167238u;
label_167238:
    // 0x167238: 0x96050004  lhu         $a1, 0x4($s0)
    ctx->pc = 0x167238u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x16723c: 0x9606000e  lhu         $a2, 0xE($s0)
    ctx->pc = 0x16723cu;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
    // 0x167240: 0xc059c98  jal         func_167260
    ctx->pc = 0x167240u;
    SET_GPR_U32(ctx, 31, 0x167248u);
    ctx->pc = 0x167244u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x167240u;
            // 0x167244: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x167260u;
    if (runtime->hasFunction(0x167260u)) {
        auto targetFn = runtime->lookupFunction(0x167260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x167248u; }
        if (ctx->pc != 0x167248u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00167260_0x167260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x167248u; }
        if (ctx->pc != 0x167248u) { return; }
    }
    ctx->pc = 0x167248u;
label_167248:
    // 0x167248: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x167248u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16724c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x16724cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x167250: 0x3e00008  jr          $ra
    ctx->pc = 0x167250u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x167254u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x167250u;
            // 0x167254: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x167258u;
    // 0x167258: 0x0  nop
    ctx->pc = 0x167258u;
    // NOP
    // 0x16725c: 0x0  nop
    ctx->pc = 0x16725cu;
    // NOP
    ctx->pc = 0x167260u;
}
