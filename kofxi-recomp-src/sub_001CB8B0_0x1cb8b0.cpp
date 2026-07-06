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

// Function: sub_001CB8B0
// Address: 0x1cb8b0 - 0x1cbaa0
void sub_001CB8B0_0x1cb8b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CB8B0_0x1cb8b0");
#endif

    switch (ctx->pc) {
        case 0x1cb8b0u: goto label_1cb8b0;
        case 0x1cb8b4u: goto label_1cb8b4;
        case 0x1cb8b8u: goto label_1cb8b8;
        case 0x1cb8bcu: goto label_1cb8bc;
        case 0x1cb8c0u: goto label_1cb8c0;
        case 0x1cb8c4u: goto label_1cb8c4;
        case 0x1cb8c8u: goto label_1cb8c8;
        case 0x1cb8ccu: goto label_1cb8cc;
        case 0x1cb8d0u: goto label_1cb8d0;
        case 0x1cb8d4u: goto label_1cb8d4;
        case 0x1cb8d8u: goto label_1cb8d8;
        case 0x1cb8dcu: goto label_1cb8dc;
        case 0x1cb8e0u: goto label_1cb8e0;
        case 0x1cb8e4u: goto label_1cb8e4;
        case 0x1cb8e8u: goto label_1cb8e8;
        case 0x1cb8ecu: goto label_1cb8ec;
        case 0x1cb8f0u: goto label_1cb8f0;
        case 0x1cb8f4u: goto label_1cb8f4;
        case 0x1cb8f8u: goto label_1cb8f8;
        case 0x1cb8fcu: goto label_1cb8fc;
        case 0x1cb900u: goto label_1cb900;
        case 0x1cb904u: goto label_1cb904;
        case 0x1cb908u: goto label_1cb908;
        case 0x1cb90cu: goto label_1cb90c;
        case 0x1cb910u: goto label_1cb910;
        case 0x1cb914u: goto label_1cb914;
        case 0x1cb918u: goto label_1cb918;
        case 0x1cb91cu: goto label_1cb91c;
        case 0x1cb920u: goto label_1cb920;
        case 0x1cb924u: goto label_1cb924;
        case 0x1cb928u: goto label_1cb928;
        case 0x1cb92cu: goto label_1cb92c;
        case 0x1cb930u: goto label_1cb930;
        case 0x1cb934u: goto label_1cb934;
        case 0x1cb938u: goto label_1cb938;
        case 0x1cb93cu: goto label_1cb93c;
        case 0x1cb940u: goto label_1cb940;
        case 0x1cb944u: goto label_1cb944;
        case 0x1cb948u: goto label_1cb948;
        case 0x1cb94cu: goto label_1cb94c;
        case 0x1cb950u: goto label_1cb950;
        case 0x1cb954u: goto label_1cb954;
        case 0x1cb958u: goto label_1cb958;
        case 0x1cb95cu: goto label_1cb95c;
        case 0x1cb960u: goto label_1cb960;
        case 0x1cb964u: goto label_1cb964;
        case 0x1cb968u: goto label_1cb968;
        case 0x1cb96cu: goto label_1cb96c;
        case 0x1cb970u: goto label_1cb970;
        case 0x1cb974u: goto label_1cb974;
        case 0x1cb978u: goto label_1cb978;
        case 0x1cb97cu: goto label_1cb97c;
        case 0x1cb980u: goto label_1cb980;
        case 0x1cb984u: goto label_1cb984;
        case 0x1cb988u: goto label_1cb988;
        case 0x1cb98cu: goto label_1cb98c;
        case 0x1cb990u: goto label_1cb990;
        case 0x1cb994u: goto label_1cb994;
        case 0x1cb998u: goto label_1cb998;
        case 0x1cb99cu: goto label_1cb99c;
        case 0x1cb9a0u: goto label_1cb9a0;
        case 0x1cb9a4u: goto label_1cb9a4;
        case 0x1cb9a8u: goto label_1cb9a8;
        case 0x1cb9acu: goto label_1cb9ac;
        case 0x1cb9b0u: goto label_1cb9b0;
        case 0x1cb9b4u: goto label_1cb9b4;
        case 0x1cb9b8u: goto label_1cb9b8;
        case 0x1cb9bcu: goto label_1cb9bc;
        case 0x1cb9c0u: goto label_1cb9c0;
        case 0x1cb9c4u: goto label_1cb9c4;
        case 0x1cb9c8u: goto label_1cb9c8;
        case 0x1cb9ccu: goto label_1cb9cc;
        case 0x1cb9d0u: goto label_1cb9d0;
        case 0x1cb9d4u: goto label_1cb9d4;
        case 0x1cb9d8u: goto label_1cb9d8;
        case 0x1cb9dcu: goto label_1cb9dc;
        case 0x1cb9e0u: goto label_1cb9e0;
        case 0x1cb9e4u: goto label_1cb9e4;
        case 0x1cb9e8u: goto label_1cb9e8;
        case 0x1cb9ecu: goto label_1cb9ec;
        case 0x1cb9f0u: goto label_1cb9f0;
        case 0x1cb9f4u: goto label_1cb9f4;
        case 0x1cb9f8u: goto label_1cb9f8;
        case 0x1cb9fcu: goto label_1cb9fc;
        case 0x1cba00u: goto label_1cba00;
        case 0x1cba04u: goto label_1cba04;
        case 0x1cba08u: goto label_1cba08;
        case 0x1cba0cu: goto label_1cba0c;
        case 0x1cba10u: goto label_1cba10;
        case 0x1cba14u: goto label_1cba14;
        case 0x1cba18u: goto label_1cba18;
        case 0x1cba1cu: goto label_1cba1c;
        case 0x1cba20u: goto label_1cba20;
        case 0x1cba24u: goto label_1cba24;
        case 0x1cba28u: goto label_1cba28;
        case 0x1cba2cu: goto label_1cba2c;
        case 0x1cba30u: goto label_1cba30;
        case 0x1cba34u: goto label_1cba34;
        case 0x1cba38u: goto label_1cba38;
        case 0x1cba3cu: goto label_1cba3c;
        case 0x1cba40u: goto label_1cba40;
        case 0x1cba44u: goto label_1cba44;
        case 0x1cba48u: goto label_1cba48;
        case 0x1cba4cu: goto label_1cba4c;
        case 0x1cba50u: goto label_1cba50;
        case 0x1cba54u: goto label_1cba54;
        case 0x1cba58u: goto label_1cba58;
        case 0x1cba5cu: goto label_1cba5c;
        case 0x1cba60u: goto label_1cba60;
        case 0x1cba64u: goto label_1cba64;
        case 0x1cba68u: goto label_1cba68;
        case 0x1cba6cu: goto label_1cba6c;
        case 0x1cba70u: goto label_1cba70;
        case 0x1cba74u: goto label_1cba74;
        case 0x1cba78u: goto label_1cba78;
        case 0x1cba7cu: goto label_1cba7c;
        case 0x1cba80u: goto label_1cba80;
        case 0x1cba84u: goto label_1cba84;
        case 0x1cba88u: goto label_1cba88;
        case 0x1cba8cu: goto label_1cba8c;
        case 0x1cba90u: goto label_1cba90;
        case 0x1cba94u: goto label_1cba94;
        case 0x1cba98u: goto label_1cba98;
        case 0x1cba9cu: goto label_1cba9c;
        default: break;
    }

    ctx->pc = 0x1cb8b0u;

label_1cb8b0:
    // 0x1cb8b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1cb8b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1cb8b4:
    // 0x1cb8b4: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x1cb8b4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1cb8b8:
    // 0x1cb8b8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1cb8b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1cb8bc:
    // 0x1cb8bc: 0x15000008  bnez        $t0, . + 4 + (0x8 << 2)
label_1cb8c0:
    if (ctx->pc == 0x1CB8C0u) {
        ctx->pc = 0x1CB8C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB8BCu;
        // 0x1cb8c0: 0xc0482d  daddu       $t1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CB8C4u;
        goto label_1cb8c4;
    }
    ctx->pc = 0x1CB8BCu;
    {
        const bool branch_taken_0x1cb8bc = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CB8C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB8BCu;
        // 0x1cb8c0: 0xc0482d  daddu       $t1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb8bc) {
            ctx->pc = 0x1CB8E0u;
            goto label_1cb8e0;
        }
    }
    ctx->pc = 0x1CB8C4u;
label_1cb8c4:
    // 0x1cb8c4: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1cb8c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
label_1cb8c8:
    // 0x1cb8c8: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x1cb8c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
label_1cb8cc:
    // 0x1cb8cc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1cb8ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1cb8d0:
    // 0x1cb8d0: 0x2484ba88  addiu       $a0, $a0, -0x4578
    ctx->pc = 0x1cb8d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949512));
label_1cb8d4:
    // 0x1cb8d4: 0x24a5b9c8  addiu       $a1, $a1, -0x4638
    ctx->pc = 0x1cb8d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949320));
label_1cb8d8:
    // 0x1cb8d8: 0x8072c9a  j           func_1CB268
label_1cb8dc:
    if (ctx->pc == 0x1CB8DCu) {
        ctx->pc = 0x1CB8DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB8D8u;
        // 0x1cb8dc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CB8E0u;
        goto label_1cb8e0;
    }
    ctx->pc = 0x1CB8D8u;
    ctx->pc = 0x1CB8DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB8D8u;
    // 0x1cb8dc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CB268u;
    sub_001CB268_0x1cb268(rdram, ctx, runtime); return;
    ctx->pc = 0x1CB8E0u;
label_1cb8e0:
    // 0x1cb8e0: 0x8d020004  lw          $v0, 0x4($t0)
    ctx->pc = 0x1cb8e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
label_1cb8e4:
    // 0x1cb8e4: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
label_1cb8e8:
    if (ctx->pc == 0x1CB8E8u) {
        ctx->pc = 0x1CB8E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB8E4u;
        // 0x1cb8e8: 0x8d040020  lw          $a0, 0x20($t0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CB8ECu;
        goto label_1cb8ec;
    }
    ctx->pc = 0x1CB8E4u;
    {
        const bool branch_taken_0x1cb8e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cb8e4) {
            ctx->pc = 0x1CB8E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CB8E4u;
            // 0x1cb8e8: 0x8d040020  lw          $a0, 0x20($t0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CB908u;
            goto label_1cb908;
        }
    }
    ctx->pc = 0x1CB8ECu;
label_1cb8ec:
    // 0x1cb8ec: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1cb8ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
label_1cb8f0:
    // 0x1cb8f0: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x1cb8f0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
label_1cb8f4:
    // 0x1cb8f4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1cb8f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1cb8f8:
    // 0x1cb8f8: 0x2484ba98  addiu       $a0, $a0, -0x4568
    ctx->pc = 0x1cb8f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949528));
label_1cb8fc:
    // 0x1cb8fc: 0x24a5ba48  addiu       $a1, $a1, -0x45B8
    ctx->pc = 0x1cb8fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949448));
label_1cb900:
    // 0x1cb900: 0x8072c9a  j           func_1CB268
label_1cb904:
    if (ctx->pc == 0x1CB904u) {
        ctx->pc = 0x1CB904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB900u;
        // 0x1cb904: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CB908u;
        goto label_1cb908;
    }
    ctx->pc = 0x1CB900u;
    ctx->pc = 0x1CB904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB900u;
    // 0x1cb904: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CB268u;
    sub_001CB268_0x1cb268(rdram, ctx, runtime); return;
    ctx->pc = 0x1CB908u;
label_1cb908:
    // 0x1cb908: 0x14800007  bnez        $a0, . + 4 + (0x7 << 2)
label_1cb90c:
    if (ctx->pc == 0x1CB90Cu) {
        ctx->pc = 0x1CB90Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB908u;
        // 0x1cb90c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CB910u;
        goto label_1cb910;
    }
    ctx->pc = 0x1CB908u;
    {
        const bool branch_taken_0x1cb908 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CB90Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB908u;
        // 0x1cb90c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb908) {
            ctx->pc = 0x1CB928u;
            goto label_1cb928;
        }
    }
    ctx->pc = 0x1CB910u;
label_1cb910:
    // 0x1cb910: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1cb910u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
label_1cb914:
    // 0x1cb914: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x1cb914u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
label_1cb918:
    // 0x1cb918: 0x2484baa8  addiu       $a0, $a0, -0x4558
    ctx->pc = 0x1cb918u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949544));
label_1cb91c:
    // 0x1cb91c: 0x24a5bab8  addiu       $a1, $a1, -0x4548
    ctx->pc = 0x1cb91cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949560));
label_1cb920:
    // 0x1cb920: 0x8072c9a  j           func_1CB268
label_1cb924:
    if (ctx->pc == 0x1CB924u) {
        ctx->pc = 0x1CB924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB920u;
        // 0x1cb924: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CB928u;
        goto label_1cb928;
    }
    ctx->pc = 0x1CB920u;
    ctx->pc = 0x1CB924u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB920u;
    // 0x1cb924: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CB268u;
    sub_001CB268_0x1cb268(rdram, ctx, runtime); return;
    ctx->pc = 0x1CB928u;
label_1cb928:
    // 0x1cb928: 0x14a0001f  bnez        $a1, . + 4 + (0x1F << 2)
label_1cb92c:
    if (ctx->pc == 0x1CB92Cu) {
        ctx->pc = 0x1CB92Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB928u;
        // 0x1cb92c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CB930u;
        goto label_1cb930;
    }
    ctx->pc = 0x1CB928u;
    {
        const bool branch_taken_0x1cb928 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CB92Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB928u;
        // 0x1cb92c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb928) {
            ctx->pc = 0x1CB9A8u;
            goto label_1cb9a8;
        }
    }
    ctx->pc = 0x1CB930u;
label_1cb930:
    // 0x1cb930: 0x8d020014  lw          $v0, 0x14($t0)
    ctx->pc = 0x1cb930u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 20)));
label_1cb934:
    // 0x1cb934: 0x8d030024  lw          $v1, 0x24($t0)
    ctx->pc = 0x1cb934u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 36)));
label_1cb938:
    // 0x1cb938: 0x8d050010  lw          $a1, 0x10($t0)
    ctx->pc = 0x1cb938u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 16)));
label_1cb93c:
    // 0x1cb93c: 0x821023  subu        $v0, $a0, $v0
    ctx->pc = 0x1cb93cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_1cb940:
    // 0x1cb940: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1cb940u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1cb944:
    // 0x1cb944: 0x8d06001c  lw          $a2, 0x1C($t0)
    ctx->pc = 0x1cb944u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 28)));
label_1cb948:
    // 0x1cb948: 0xa2182a  slt         $v1, $a1, $v0
    ctx->pc = 0x1cb948u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1cb94c:
    // 0x1cb94c: 0xa3100b  movn        $v0, $a1, $v1
    ctx->pc = 0x1cb94cu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 5));
label_1cb950:
    // 0x1cb950: 0x49202a  slt         $a0, $v0, $t1
    ctx->pc = 0x1cb950u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
label_1cb954:
    // 0x1cb954: 0x124100a  movz        $v0, $t1, $a0
    ctx->pc = 0x1cb954u;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 9));
label_1cb958:
    // 0x1cb958: 0xace20004  sw          $v0, 0x4($a3)
    ctx->pc = 0x1cb958u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 2));
label_1cb95c:
    // 0x1cb95c: 0x8d040014  lw          $a0, 0x14($t0)
    ctx->pc = 0x1cb95cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 20)));
label_1cb960:
    // 0x1cb960: 0x8d030020  lw          $v1, 0x20($t0)
    ctx->pc = 0x1cb960u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 32)));
label_1cb964:
    // 0x1cb964: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1cb964u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_1cb968:
    // 0x1cb968: 0xc43021  addu        $a2, $a2, $a0
    ctx->pc = 0x1cb968u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
label_1cb96c:
    // 0x1cb96c: 0x43001a  div         $zero, $v0, $v1
    ctx->pc = 0x1cb96cu;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_1cb970:
    // 0x1cb970: 0xace60000  sw          $a2, 0x0($a3)
    ctx->pc = 0x1cb970u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 6));
label_1cb974:
    // 0x1cb974: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
label_1cb978:
    if (ctx->pc == 0x1CB978u) {
        ctx->pc = 0x1CB978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB974u;
        // 0x1cb978: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CB97Cu;
        goto label_1cb97c;
    }
    ctx->pc = 0x1CB974u;
    {
        const bool branch_taken_0x1cb974 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cb974) {
            ctx->pc = 0x1CB978u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CB974u;
            // 0x1cb978: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CB97Cu;
            goto label_1cb97c;
        }
    }
    ctx->pc = 0x1CB97Cu;
label_1cb97c:
    // 0x1cb97c: 0x8d040010  lw          $a0, 0x10($t0)
    ctx->pc = 0x1cb97cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 16)));
label_1cb980:
    // 0x1cb980: 0x8d030028  lw          $v1, 0x28($t0)
    ctx->pc = 0x1cb980u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 40)));
label_1cb984:
    // 0x1cb984: 0x2810  mfhi        $a1
    ctx->pc = 0x1cb984u;
    SET_GPR_U64(ctx, 5, ctx->hi);
label_1cb988:
    // 0x1cb988: 0xad050014  sw          $a1, 0x14($t0)
    ctx->pc = 0x1cb988u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 20), GPR_U32(ctx, 5));
label_1cb98c:
    // 0x1cb98c: 0x8ce20004  lw          $v0, 0x4($a3)
    ctx->pc = 0x1cb98cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
label_1cb990:
    // 0x1cb990: 0x822023  subu        $a0, $a0, $v0
    ctx->pc = 0x1cb990u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_1cb994:
    // 0x1cb994: 0xad040010  sw          $a0, 0x10($t0)
    ctx->pc = 0x1cb994u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 16), GPR_U32(ctx, 4));
label_1cb998:
    // 0x1cb998: 0x8ce20004  lw          $v0, 0x4($a3)
    ctx->pc = 0x1cb998u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
label_1cb99c:
    // 0x1cb99c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1cb99cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1cb9a0:
    // 0x1cb9a0: 0x10000027  b           . + 4 + (0x27 << 2)
label_1cb9a4:
    if (ctx->pc == 0x1CB9A4u) {
        ctx->pc = 0x1CB9A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB9A0u;
        // 0x1cb9a4: 0xad030028  sw          $v1, 0x28($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 40), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CB9A8u;
        goto label_1cb9a8;
    }
    ctx->pc = 0x1CB9A0u;
    {
        const bool branch_taken_0x1cb9a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB9A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB9A0u;
        // 0x1cb9a4: 0xad030028  sw          $v1, 0x28($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 40), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb9a0) {
            ctx->pc = 0x1CBA40u;
            goto label_1cba40;
        }
    }
    ctx->pc = 0x1CB9A8u;
label_1cb9a8:
    // 0x1cb9a8: 0x54a2001f  bnel        $a1, $v0, . + 4 + (0x1F << 2)
label_1cb9ac:
    if (ctx->pc == 0x1CB9ACu) {
        ctx->pc = 0x1CB9ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB9A8u;
        // 0x1cb9ac: 0x8d020038  lw          $v0, 0x38($t0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 56)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CB9B0u;
        goto label_1cb9b0;
    }
    ctx->pc = 0x1CB9A8u;
    {
        const bool branch_taken_0x1cb9a8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x1cb9a8) {
            ctx->pc = 0x1CB9ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CB9A8u;
            // 0x1cb9ac: 0x8d020038  lw          $v0, 0x38($t0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 56)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CBA28u;
            goto label_1cba28;
        }
    }
    ctx->pc = 0x1CB9B0u;
label_1cb9b0:
    // 0x1cb9b0: 0x8d020018  lw          $v0, 0x18($t0)
    ctx->pc = 0x1cb9b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 24)));
label_1cb9b4:
    // 0x1cb9b4: 0x8d030024  lw          $v1, 0x24($t0)
    ctx->pc = 0x1cb9b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 36)));
label_1cb9b8:
    // 0x1cb9b8: 0x8d05000c  lw          $a1, 0xC($t0)
    ctx->pc = 0x1cb9b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 12)));
label_1cb9bc:
    // 0x1cb9bc: 0x821023  subu        $v0, $a0, $v0
    ctx->pc = 0x1cb9bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_1cb9c0:
    // 0x1cb9c0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1cb9c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1cb9c4:
    // 0x1cb9c4: 0x8d06001c  lw          $a2, 0x1C($t0)
    ctx->pc = 0x1cb9c4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 28)));
label_1cb9c8:
    // 0x1cb9c8: 0xa2182a  slt         $v1, $a1, $v0
    ctx->pc = 0x1cb9c8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1cb9cc:
    // 0x1cb9cc: 0xa3100b  movn        $v0, $a1, $v1
    ctx->pc = 0x1cb9ccu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 5));
label_1cb9d0:
    // 0x1cb9d0: 0x49202a  slt         $a0, $v0, $t1
    ctx->pc = 0x1cb9d0u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
label_1cb9d4:
    // 0x1cb9d4: 0x124100a  movz        $v0, $t1, $a0
    ctx->pc = 0x1cb9d4u;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 9));
label_1cb9d8:
    // 0x1cb9d8: 0xace20004  sw          $v0, 0x4($a3)
    ctx->pc = 0x1cb9d8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 2));
label_1cb9dc:
    // 0x1cb9dc: 0x8d040018  lw          $a0, 0x18($t0)
    ctx->pc = 0x1cb9dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 24)));
label_1cb9e0:
    // 0x1cb9e0: 0x8d030020  lw          $v1, 0x20($t0)
    ctx->pc = 0x1cb9e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 32)));
label_1cb9e4:
    // 0x1cb9e4: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1cb9e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_1cb9e8:
    // 0x1cb9e8: 0xc43021  addu        $a2, $a2, $a0
    ctx->pc = 0x1cb9e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
label_1cb9ec:
    // 0x1cb9ec: 0x43001a  div         $zero, $v0, $v1
    ctx->pc = 0x1cb9ecu;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_1cb9f0:
    // 0x1cb9f0: 0xace60000  sw          $a2, 0x0($a3)
    ctx->pc = 0x1cb9f0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 6));
label_1cb9f4:
    // 0x1cb9f4: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
label_1cb9f8:
    if (ctx->pc == 0x1CB9F8u) {
        ctx->pc = 0x1CB9F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB9F4u;
        // 0x1cb9f8: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CB9FCu;
        goto label_1cb9fc;
    }
    ctx->pc = 0x1CB9F4u;
    {
        const bool branch_taken_0x1cb9f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cb9f4) {
            ctx->pc = 0x1CB9F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CB9F4u;
            // 0x1cb9f8: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CB9FCu;
            goto label_1cb9fc;
        }
    }
    ctx->pc = 0x1CB9FCu;
label_1cb9fc:
    // 0x1cb9fc: 0x8d04000c  lw          $a0, 0xC($t0)
    ctx->pc = 0x1cb9fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 12)));
label_1cba00:
    // 0x1cba00: 0x8d030030  lw          $v1, 0x30($t0)
    ctx->pc = 0x1cba00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 48)));
label_1cba04:
    // 0x1cba04: 0x2810  mfhi        $a1
    ctx->pc = 0x1cba04u;
    SET_GPR_U64(ctx, 5, ctx->hi);
label_1cba08:
    // 0x1cba08: 0xad050018  sw          $a1, 0x18($t0)
    ctx->pc = 0x1cba08u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 24), GPR_U32(ctx, 5));
label_1cba0c:
    // 0x1cba0c: 0x8ce20004  lw          $v0, 0x4($a3)
    ctx->pc = 0x1cba0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
label_1cba10:
    // 0x1cba10: 0x822023  subu        $a0, $a0, $v0
    ctx->pc = 0x1cba10u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_1cba14:
    // 0x1cba14: 0xad04000c  sw          $a0, 0xC($t0)
    ctx->pc = 0x1cba14u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 12), GPR_U32(ctx, 4));
label_1cba18:
    // 0x1cba18: 0x8ce20004  lw          $v0, 0x4($a3)
    ctx->pc = 0x1cba18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
label_1cba1c:
    // 0x1cba1c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1cba1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1cba20:
    // 0x1cba20: 0x10000007  b           . + 4 + (0x7 << 2)
label_1cba24:
    if (ctx->pc == 0x1CBA24u) {
        ctx->pc = 0x1CBA24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBA20u;
        // 0x1cba24: 0xad030030  sw          $v1, 0x30($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 48), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CBA28u;
        goto label_1cba28;
    }
    ctx->pc = 0x1CBA20u;
    {
        const bool branch_taken_0x1cba20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CBA24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBA20u;
        // 0x1cba24: 0xad030030  sw          $v1, 0x30($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 48), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cba20) {
            ctx->pc = 0x1CBA40u;
            goto label_1cba40;
        }
    }
    ctx->pc = 0x1CBA28u;
label_1cba28:
    // 0x1cba28: 0xace00000  sw          $zero, 0x0($a3)
    ctx->pc = 0x1cba28u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
label_1cba2c:
    // 0x1cba2c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1cba30:
    if (ctx->pc == 0x1CBA30u) {
        ctx->pc = 0x1CBA30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBA2Cu;
        // 0x1cba30: 0xace00004  sw          $zero, 0x4($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CBA34u;
        goto label_1cba34;
    }
    ctx->pc = 0x1CBA2Cu;
    {
        const bool branch_taken_0x1cba2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CBA30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBA2Cu;
        // 0x1cba30: 0xace00004  sw          $zero, 0x4($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cba2c) {
            ctx->pc = 0x1CBA40u;
            goto label_1cba40;
        }
    }
    ctx->pc = 0x1CBA34u;
label_1cba34:
    // 0x1cba34: 0x8d04003c  lw          $a0, 0x3C($t0)
    ctx->pc = 0x1cba34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 60)));
label_1cba38:
    // 0x1cba38: 0x40f809  jalr        $v0
label_1cba3c:
    if (ctx->pc == 0x1CBA3Cu) {
        ctx->pc = 0x1CBA3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBA38u;
        // 0x1cba3c: 0x2405fffd  addiu       $a1, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CBA40u;
        goto label_1cba40;
    }
    ctx->pc = 0x1CBA38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1CBA40u);
        ctx->pc = 0x1CBA3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBA38u;
        // 0x1cba3c: 0x2405fffd  addiu       $a1, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CBA38u, 0x1CBA40u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1CBA40u;
label_1cba40:
    // 0x1cba40: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1cba40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1cba44:
    // 0x1cba44: 0x3e00008  jr          $ra
label_1cba48:
    if (ctx->pc == 0x1CBA48u) {
        ctx->pc = 0x1CBA48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBA44u;
        // 0x1cba48: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CBA4Cu;
        goto label_1cba4c;
    }
    ctx->pc = 0x1CBA44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CBA48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBA44u;
        // 0x1cba48: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CBA44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CBA4Cu;
label_1cba4c:
    // 0x1cba4c: 0x0  nop
    ctx->pc = 0x1cba4cu;
    // NOP
label_1cba50:
    // 0x1cba50: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1cba50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1cba54:
    // 0x1cba54: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cba54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1cba58:
    // 0x1cba58: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1cba58u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1cba5c:
    // 0x1cba5c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1cba5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1cba60:
    // 0x1cba60: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1cba60u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1cba64:
    // 0x1cba64: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1cba64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_1cba68:
    // 0x1cba68: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1cba68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_1cba6c:
    // 0x1cba6c: 0xc0729fa  jal         func_1CA7E8
label_1cba70:
    if (ctx->pc == 0x1CBA70u) {
        ctx->pc = 0x1CBA70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBA6Cu;
        // 0x1cba70: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CBA74u;
        goto label_1cba74;
    }
    ctx->pc = 0x1CBA6Cu;
    SET_GPR_U32(ctx, 31, 0x1CBA74u);
    ctx->pc = 0x1CBA70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CBA6Cu;
    // 0x1cba70: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA7E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA7E8u, 0x1CBA6Cu, 0x1CBA74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CBA74u;
label_1cba74:
    // 0x1cba74: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cba74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1cba78:
    // 0x1cba78: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1cba78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1cba7c:
    // 0x1cba7c: 0xc072ea8  jal         func_1CBAA0
label_1cba80:
    if (ctx->pc == 0x1CBA80u) {
        ctx->pc = 0x1CBA80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBA7Cu;
        // 0x1cba80: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CBA84u;
        goto label_1cba84;
    }
    ctx->pc = 0x1CBA7Cu;
    SET_GPR_U32(ctx, 31, 0x1CBA84u);
    ctx->pc = 0x1CBA80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CBA7Cu;
    // 0x1cba80: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CBAA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CBAA0u, 0x1CBA7Cu, 0x1CBA84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CBA84u;
label_1cba84:
    // 0x1cba84: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cba84u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1cba88:
    // 0x1cba88: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1cba88u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1cba8c:
    // 0x1cba8c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1cba8cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1cba90:
    // 0x1cba90: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1cba90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1cba94:
    // 0x1cba94: 0x8072a00  j           func_1CA800
label_1cba98:
    if (ctx->pc == 0x1CBA98u) {
        ctx->pc = 0x1CBA98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBA94u;
        // 0x1cba98: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CBA9Cu;
        goto label_1cba9c;
    }
    ctx->pc = 0x1CBA94u;
    ctx->pc = 0x1CBA98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CBA94u;
    // 0x1cba98: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA800u;
    sub_001CA800_0x1ca800(rdram, ctx, runtime); return;
    ctx->pc = 0x1CBA9Cu;
label_1cba9c:
    // 0x1cba9c: 0x0  nop
    ctx->pc = 0x1cba9cu;
    // NOP
}
