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

// Function: sub_001CC8A0
// Address: 0x1cc8a0 - 0x1cca18
void sub_001CC8A0_0x1cc8a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CC8A0_0x1cc8a0");
#endif

    switch (ctx->pc) {
        case 0x1cc8a0u: goto label_1cc8a0;
        case 0x1cc8a4u: goto label_1cc8a4;
        case 0x1cc8a8u: goto label_1cc8a8;
        case 0x1cc8acu: goto label_1cc8ac;
        case 0x1cc8b0u: goto label_1cc8b0;
        case 0x1cc8b4u: goto label_1cc8b4;
        case 0x1cc8b8u: goto label_1cc8b8;
        case 0x1cc8bcu: goto label_1cc8bc;
        case 0x1cc8c0u: goto label_1cc8c0;
        case 0x1cc8c4u: goto label_1cc8c4;
        case 0x1cc8c8u: goto label_1cc8c8;
        case 0x1cc8ccu: goto label_1cc8cc;
        case 0x1cc8d0u: goto label_1cc8d0;
        case 0x1cc8d4u: goto label_1cc8d4;
        case 0x1cc8d8u: goto label_1cc8d8;
        case 0x1cc8dcu: goto label_1cc8dc;
        case 0x1cc8e0u: goto label_1cc8e0;
        case 0x1cc8e4u: goto label_1cc8e4;
        case 0x1cc8e8u: goto label_1cc8e8;
        case 0x1cc8ecu: goto label_1cc8ec;
        case 0x1cc8f0u: goto label_1cc8f0;
        case 0x1cc8f4u: goto label_1cc8f4;
        case 0x1cc8f8u: goto label_1cc8f8;
        case 0x1cc8fcu: goto label_1cc8fc;
        case 0x1cc900u: goto label_1cc900;
        case 0x1cc904u: goto label_1cc904;
        case 0x1cc908u: goto label_1cc908;
        case 0x1cc90cu: goto label_1cc90c;
        case 0x1cc910u: goto label_1cc910;
        case 0x1cc914u: goto label_1cc914;
        case 0x1cc918u: goto label_1cc918;
        case 0x1cc91cu: goto label_1cc91c;
        case 0x1cc920u: goto label_1cc920;
        case 0x1cc924u: goto label_1cc924;
        case 0x1cc928u: goto label_1cc928;
        case 0x1cc92cu: goto label_1cc92c;
        case 0x1cc930u: goto label_1cc930;
        case 0x1cc934u: goto label_1cc934;
        case 0x1cc938u: goto label_1cc938;
        case 0x1cc93cu: goto label_1cc93c;
        case 0x1cc940u: goto label_1cc940;
        case 0x1cc944u: goto label_1cc944;
        case 0x1cc948u: goto label_1cc948;
        case 0x1cc94cu: goto label_1cc94c;
        case 0x1cc950u: goto label_1cc950;
        case 0x1cc954u: goto label_1cc954;
        case 0x1cc958u: goto label_1cc958;
        case 0x1cc95cu: goto label_1cc95c;
        case 0x1cc960u: goto label_1cc960;
        case 0x1cc964u: goto label_1cc964;
        case 0x1cc968u: goto label_1cc968;
        case 0x1cc96cu: goto label_1cc96c;
        case 0x1cc970u: goto label_1cc970;
        case 0x1cc974u: goto label_1cc974;
        case 0x1cc978u: goto label_1cc978;
        case 0x1cc97cu: goto label_1cc97c;
        case 0x1cc980u: goto label_1cc980;
        case 0x1cc984u: goto label_1cc984;
        case 0x1cc988u: goto label_1cc988;
        case 0x1cc98cu: goto label_1cc98c;
        case 0x1cc990u: goto label_1cc990;
        case 0x1cc994u: goto label_1cc994;
        case 0x1cc998u: goto label_1cc998;
        case 0x1cc99cu: goto label_1cc99c;
        case 0x1cc9a0u: goto label_1cc9a0;
        case 0x1cc9a4u: goto label_1cc9a4;
        case 0x1cc9a8u: goto label_1cc9a8;
        case 0x1cc9acu: goto label_1cc9ac;
        case 0x1cc9b0u: goto label_1cc9b0;
        case 0x1cc9b4u: goto label_1cc9b4;
        case 0x1cc9b8u: goto label_1cc9b8;
        case 0x1cc9bcu: goto label_1cc9bc;
        case 0x1cc9c0u: goto label_1cc9c0;
        case 0x1cc9c4u: goto label_1cc9c4;
        case 0x1cc9c8u: goto label_1cc9c8;
        case 0x1cc9ccu: goto label_1cc9cc;
        case 0x1cc9d0u: goto label_1cc9d0;
        case 0x1cc9d4u: goto label_1cc9d4;
        case 0x1cc9d8u: goto label_1cc9d8;
        case 0x1cc9dcu: goto label_1cc9dc;
        case 0x1cc9e0u: goto label_1cc9e0;
        case 0x1cc9e4u: goto label_1cc9e4;
        case 0x1cc9e8u: goto label_1cc9e8;
        case 0x1cc9ecu: goto label_1cc9ec;
        case 0x1cc9f0u: goto label_1cc9f0;
        case 0x1cc9f4u: goto label_1cc9f4;
        case 0x1cc9f8u: goto label_1cc9f8;
        case 0x1cc9fcu: goto label_1cc9fc;
        case 0x1cca00u: goto label_1cca00;
        case 0x1cca04u: goto label_1cca04;
        case 0x1cca08u: goto label_1cca08;
        case 0x1cca0cu: goto label_1cca0c;
        case 0x1cca10u: goto label_1cca10;
        case 0x1cca14u: goto label_1cca14;
        default: break;
    }

    ctx->pc = 0x1cc8a0u;

label_1cc8a0:
    // 0x1cc8a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1cc8a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1cc8a4:
    // 0x1cc8a4: 0x14800008  bnez        $a0, . + 4 + (0x8 << 2)
label_1cc8a8:
    if (ctx->pc == 0x1CC8A8u) {
        ctx->pc = 0x1CC8A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC8A4u;
        // 0x1cc8a8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CC8ACu;
        goto label_1cc8ac;
    }
    ctx->pc = 0x1CC8A4u;
    {
        const bool branch_taken_0x1cc8a4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CC8A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC8A4u;
        // 0x1cc8a8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc8a4) {
            ctx->pc = 0x1CC8C8u;
            goto label_1cc8c8;
        }
    }
    ctx->pc = 0x1CC8ACu;
label_1cc8ac:
    // 0x1cc8ac: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1cc8acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
label_1cc8b0:
    // 0x1cc8b0: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x1cc8b0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
label_1cc8b4:
    // 0x1cc8b4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1cc8b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1cc8b8:
    // 0x1cc8b8: 0x2484bc60  addiu       $a0, $a0, -0x43A0
    ctx->pc = 0x1cc8b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949984));
label_1cc8bc:
    // 0x1cc8bc: 0x24a5bb70  addiu       $a1, $a1, -0x4490
    ctx->pc = 0x1cc8bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949744));
label_1cc8c0:
    // 0x1cc8c0: 0x8073006  j           func_1CC018
label_1cc8c4:
    if (ctx->pc == 0x1CC8C4u) {
        ctx->pc = 0x1CC8C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC8C0u;
        // 0x1cc8c4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CC8C8u;
        goto label_1cc8c8;
    }
    ctx->pc = 0x1CC8C0u;
    ctx->pc = 0x1CC8C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC8C0u;
    // 0x1cc8c4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CC018u;
    sub_001CC018_0x1cc018(rdram, ctx, runtime); return;
    ctx->pc = 0x1CC8C8u;
label_1cc8c8:
    // 0x1cc8c8: 0x80820004  lb          $v0, 0x4($a0)
    ctx->pc = 0x1cc8c8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 4)));
label_1cc8cc:
    // 0x1cc8cc: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_1cc8d0:
    if (ctx->pc == 0x1CC8D0u) {
        ctx->pc = 0x1CC8D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC8CCu;
        // 0x1cc8d0: 0x2ca20004  sltiu       $v0, $a1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CC8D4u;
        goto label_1cc8d4;
    }
    ctx->pc = 0x1CC8CCu;
    {
        const bool branch_taken_0x1cc8cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CC8D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC8CCu;
        // 0x1cc8d0: 0x2ca20004  sltiu       $v0, $a1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc8cc) {
            ctx->pc = 0x1CC8F0u;
            goto label_1cc8f0;
        }
    }
    ctx->pc = 0x1CC8D4u;
label_1cc8d4:
    // 0x1cc8d4: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1cc8d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
label_1cc8d8:
    // 0x1cc8d8: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x1cc8d8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
label_1cc8dc:
    // 0x1cc8dc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1cc8dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1cc8e0:
    // 0x1cc8e0: 0x2484bc70  addiu       $a0, $a0, -0x4390
    ctx->pc = 0x1cc8e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950000));
label_1cc8e4:
    // 0x1cc8e4: 0x24a5bba0  addiu       $a1, $a1, -0x4460
    ctx->pc = 0x1cc8e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949792));
label_1cc8e8:
    // 0x1cc8e8: 0x8073006  j           func_1CC018
label_1cc8ec:
    if (ctx->pc == 0x1CC8ECu) {
        ctx->pc = 0x1CC8ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC8E8u;
        // 0x1cc8ec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CC8F0u;
        goto label_1cc8f0;
    }
    ctx->pc = 0x1CC8E8u;
    ctx->pc = 0x1CC8ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC8E8u;
    // 0x1cc8ec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CC018u;
    sub_001CC018_0x1cc018(rdram, ctx, runtime); return;
    ctx->pc = 0x1CC8F0u;
label_1cc8f0:
    // 0x1cc8f0: 0x50400024  beql        $v0, $zero, . + 4 + (0x24 << 2)
label_1cc8f4:
    if (ctx->pc == 0x1CC8F4u) {
        ctx->pc = 0x1CC8F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC8F0u;
        // 0x1cc8f4: 0x8c820028  lw          $v0, 0x28($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CC8F8u;
        goto label_1cc8f8;
    }
    ctx->pc = 0x1CC8F0u;
    {
        const bool branch_taken_0x1cc8f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cc8f0) {
            ctx->pc = 0x1CC8F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CC8F0u;
            // 0x1cc8f4: 0x8c820028  lw          $v0, 0x28($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CC984u;
            goto label_1cc984;
        }
    }
    ctx->pc = 0x1CC8F8u;
label_1cc8f8:
    // 0x1cc8f8: 0x8cc90004  lw          $t1, 0x4($a2)
    ctx->pc = 0x1cc8f8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_1cc8fc:
    // 0x1cc8fc: 0x19200030  blez        $t1, . + 4 + (0x30 << 2)
label_1cc900:
    if (ctx->pc == 0x1CC900u) {
        ctx->pc = 0x1CC900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC8FCu;
        // 0x1cc900: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CC904u;
        goto label_1cc904;
    }
    ctx->pc = 0x1CC8FCu;
    {
        const bool branch_taken_0x1cc8fc = (GPR_S32(ctx, 9) <= 0);
        ctx->pc = 0x1CC900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC8FCu;
        // 0x1cc900: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc8fc) {
            ctx->pc = 0x1CC9C0u;
            goto label_1cc9c0;
        }
    }
    ctx->pc = 0x1CC904u;
label_1cc904:
    // 0x1cc904: 0x8cc80000  lw          $t0, 0x0($a2)
    ctx->pc = 0x1cc904u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1cc908:
    // 0x1cc908: 0x1100002d  beqz        $t0, . + 4 + (0x2D << 2)
label_1cc90c:
    if (ctx->pc == 0x1CC90Cu) {
        ctx->pc = 0x1CC90Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC908u;
        // 0x1cc90c: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CC910u;
        goto label_1cc910;
    }
    ctx->pc = 0x1CC908u;
    {
        const bool branch_taken_0x1cc908 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CC90Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC908u;
        // 0x1cc90c: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc908) {
            ctx->pc = 0x1CC9C0u;
            goto label_1cc9c0;
        }
    }
    ctx->pc = 0x1CC910u;
label_1cc910:
    // 0x1cc910: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1cc910u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_1cc914:
    // 0x1cc914: 0x24450018  addiu       $a1, $v0, 0x18
    ctx->pc = 0x1cc914u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
label_1cc918:
    // 0x1cc918: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1cc918u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1cc91c:
    // 0x1cc91c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_1cc920:
    if (ctx->pc == 0x1CC920u) {
        ctx->pc = 0x1CC920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC91Cu;
        // 0x1cc920: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CC924u;
        goto label_1cc924;
    }
    ctx->pc = 0x1CC91Cu;
    {
        const bool branch_taken_0x1cc91c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CC920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC91Cu;
        // 0x1cc920: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc91c) {
            ctx->pc = 0x1CC940u;
            goto label_1cc940;
        }
    }
    ctx->pc = 0x1CC924u;
label_1cc924:
    // 0x1cc924: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1cc924u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1cc928:
    // 0x1cc928: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x1cc928u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_1cc92c:
    // 0x1cc92c: 0x0  nop
    ctx->pc = 0x1cc92cu;
    // NOP
label_1cc930:
    // 0x1cc930: 0x0  nop
    ctx->pc = 0x1cc930u;
    // NOP
label_1cc934:
    // 0x1cc934: 0x0  nop
    ctx->pc = 0x1cc934u;
    // NOP
label_1cc938:
    // 0x1cc938: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_1cc93c:
    if (ctx->pc == 0x1CC93Cu) {
        ctx->pc = 0x1CC93Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC938u;
        // 0x1cc93c: 0xe0282d  daddu       $a1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CC940u;
        goto label_1cc940;
    }
    ctx->pc = 0x1CC938u;
    {
        const bool branch_taken_0x1cc938 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CC93Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC938u;
        // 0x1cc93c: 0xe0282d  daddu       $a1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc938) {
            ctx->pc = 0x1CC924u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1cc924;
        }
    }
    ctx->pc = 0x1CC940u;
label_1cc940:
    // 0x1cc940: 0x80830005  lb          $v1, 0x5($a0)
    ctx->pc = 0x1cc940u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 5)));
label_1cc944:
    // 0x1cc944: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1cc944u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1cc948:
    // 0x1cc948: 0x5462000b  bnel        $v1, $v0, . + 4 + (0xB << 2)
label_1cc94c:
    if (ctx->pc == 0x1CC94Cu) {
        ctx->pc = 0x1CC94Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC948u;
        // 0x1cc94c: 0x8c870014  lw          $a3, 0x14($a0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CC950u;
        goto label_1cc950;
    }
    ctx->pc = 0x1CC948u;
    {
        const bool branch_taken_0x1cc948 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1cc948) {
            ctx->pc = 0x1CC94Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CC948u;
            // 0x1cc94c: 0x8c870014  lw          $a3, 0x14($a0) (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CC978u;
            goto label_1cc978;
        }
    }
    ctx->pc = 0x1CC950u;
label_1cc950:
    // 0x1cc950: 0x50e00009  beql        $a3, $zero, . + 4 + (0x9 << 2)
label_1cc954:
    if (ctx->pc == 0x1CC954u) {
        ctx->pc = 0x1CC954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC950u;
        // 0x1cc954: 0x8c870014  lw          $a3, 0x14($a0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CC958u;
        goto label_1cc958;
    }
    ctx->pc = 0x1CC950u;
    {
        const bool branch_taken_0x1cc950 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cc950) {
            ctx->pc = 0x1CC954u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CC950u;
            // 0x1cc954: 0x8c870014  lw          $a3, 0x14($a0) (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CC978u;
            goto label_1cc978;
        }
    }
    ctx->pc = 0x1CC958u;
label_1cc958:
    // 0x1cc958: 0x8ce20008  lw          $v0, 0x8($a3)
    ctx->pc = 0x1cc958u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
label_1cc95c:
    // 0x1cc95c: 0x8ce3000c  lw          $v1, 0xC($a3)
    ctx->pc = 0x1cc95cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
label_1cc960:
    // 0x1cc960: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1cc960u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1cc964:
    // 0x1cc964: 0x54480004  bnel        $v0, $t0, . + 4 + (0x4 << 2)
label_1cc968:
    if (ctx->pc == 0x1CC968u) {
        ctx->pc = 0x1CC968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC964u;
        // 0x1cc968: 0x8c870014  lw          $a3, 0x14($a0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CC96Cu;
        goto label_1cc96c;
    }
    ctx->pc = 0x1CC964u;
    {
        const bool branch_taken_0x1cc964 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 8));
        if (branch_taken_0x1cc964) {
            ctx->pc = 0x1CC968u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CC964u;
            // 0x1cc968: 0x8c870014  lw          $a3, 0x14($a0) (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CC978u;
            goto label_1cc978;
        }
    }
    ctx->pc = 0x1CC96Cu;
label_1cc96c:
    // 0x1cc96c: 0x691021  addu        $v0, $v1, $t1
    ctx->pc = 0x1cc96cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
label_1cc970:
    // 0x1cc970: 0x10000012  b           . + 4 + (0x12 << 2)
label_1cc974:
    if (ctx->pc == 0x1CC974u) {
        ctx->pc = 0x1CC974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC970u;
        // 0x1cc974: 0xace2000c  sw          $v0, 0xC($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CC978u;
        goto label_1cc978;
    }
    ctx->pc = 0x1CC970u;
    {
        const bool branch_taken_0x1cc970 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CC974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC970u;
        // 0x1cc974: 0xace2000c  sw          $v0, 0xC($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc970) {
            ctx->pc = 0x1CC9BCu;
            goto label_1cc9bc;
        }
    }
    ctx->pc = 0x1CC978u;
label_1cc978:
    // 0x1cc978: 0x54e00009  bnel        $a3, $zero, . + 4 + (0x9 << 2)
label_1cc97c:
    if (ctx->pc == 0x1CC97Cu) {
        ctx->pc = 0x1CC97Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC978u;
        // 0x1cc97c: 0x8ce20000  lw          $v0, 0x0($a3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CC980u;
        goto label_1cc980;
    }
    ctx->pc = 0x1CC978u;
    {
        const bool branch_taken_0x1cc978 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cc978) {
            ctx->pc = 0x1CC97Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CC978u;
            // 0x1cc97c: 0x8ce20000  lw          $v0, 0x0($a3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CC9A0u;
            goto label_1cc9a0;
        }
    }
    ctx->pc = 0x1CC980u;
label_1cc980:
    // 0x1cc980: 0x8c820028  lw          $v0, 0x28($a0)
    ctx->pc = 0x1cc980u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_1cc984:
    // 0x1cc984: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_1cc988:
    if (ctx->pc == 0x1CC988u) {
        ctx->pc = 0x1CC988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC984u;
        // 0x1cc988: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CC98Cu;
        goto label_1cc98c;
    }
    ctx->pc = 0x1CC984u;
    {
        const bool branch_taken_0x1cc984 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CC988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC984u;
        // 0x1cc988: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc984) {
            ctx->pc = 0x1CC9C0u;
            goto label_1cc9c0;
        }
    }
    ctx->pc = 0x1CC98Cu;
label_1cc98c:
    // 0x1cc98c: 0x8c84002c  lw          $a0, 0x2C($a0)
    ctx->pc = 0x1cc98cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
label_1cc990:
    // 0x1cc990: 0x40f809  jalr        $v0
label_1cc994:
    if (ctx->pc == 0x1CC994u) {
        ctx->pc = 0x1CC994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC990u;
        // 0x1cc994: 0x2405fffd  addiu       $a1, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CC998u;
        goto label_1cc998;
    }
    ctx->pc = 0x1CC990u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1CC998u);
        ctx->pc = 0x1CC994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC990u;
        // 0x1cc994: 0x2405fffd  addiu       $a1, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CC990u, 0x1CC998u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1CC998u;
label_1cc998:
    // 0x1cc998: 0x10000009  b           . + 4 + (0x9 << 2)
label_1cc99c:
    if (ctx->pc == 0x1CC99Cu) {
        ctx->pc = 0x1CC99Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC998u;
        // 0x1cc99c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CC9A0u;
        goto label_1cc9a0;
    }
    ctx->pc = 0x1CC998u;
    {
        const bool branch_taken_0x1cc998 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CC99Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC998u;
        // 0x1cc99c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc998) {
            ctx->pc = 0x1CC9C0u;
            goto label_1cc9c0;
        }
    }
    ctx->pc = 0x1CC9A0u;
label_1cc9a0:
    // 0x1cc9a0: 0x68c30007  ldl         $v1, 0x7($a2)
    ctx->pc = 0x1cc9a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_1cc9a4:
    // 0x1cc9a4: 0x6cc30000  ldr         $v1, 0x0($a2)
    ctx->pc = 0x1cc9a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_1cc9a8:
    // 0x1cc9a8: 0xb0e3000f  sdl         $v1, 0xF($a3)
    ctx->pc = 0x1cc9a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1cc9ac:
    // 0x1cc9ac: 0xb4e30008  sdr         $v1, 0x8($a3)
    ctx->pc = 0x1cc9acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1cc9b0:
    // 0x1cc9b0: 0xac820014  sw          $v0, 0x14($a0)
    ctx->pc = 0x1cc9b0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 2));
label_1cc9b4:
    // 0x1cc9b4: 0xace00000  sw          $zero, 0x0($a3)
    ctx->pc = 0x1cc9b4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
label_1cc9b8:
    // 0x1cc9b8: 0xaca70000  sw          $a3, 0x0($a1)
    ctx->pc = 0x1cc9b8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 7));
label_1cc9bc:
    // 0x1cc9bc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1cc9bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1cc9c0:
    // 0x1cc9c0: 0x3e00008  jr          $ra
label_1cc9c4:
    if (ctx->pc == 0x1CC9C4u) {
        ctx->pc = 0x1CC9C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC9C0u;
        // 0x1cc9c4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CC9C8u;
        goto label_1cc9c8;
    }
    ctx->pc = 0x1CC9C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CC9C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC9C0u;
        // 0x1cc9c4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CC9C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CC9C8u;
label_1cc9c8:
    // 0x1cc9c8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1cc9c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1cc9cc:
    // 0x1cc9cc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cc9ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1cc9d0:
    // 0x1cc9d0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1cc9d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1cc9d4:
    // 0x1cc9d4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1cc9d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1cc9d8:
    // 0x1cc9d8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1cc9d8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1cc9dc:
    // 0x1cc9dc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1cc9dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_1cc9e0:
    // 0x1cc9e0: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1cc9e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_1cc9e4:
    // 0x1cc9e4: 0xc0729fa  jal         func_1CA7E8
label_1cc9e8:
    if (ctx->pc == 0x1CC9E8u) {
        ctx->pc = 0x1CC9E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC9E4u;
        // 0x1cc9e8: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CC9ECu;
        goto label_1cc9ec;
    }
    ctx->pc = 0x1CC9E4u;
    SET_GPR_U32(ctx, 31, 0x1CC9ECu);
    ctx->pc = 0x1CC9E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC9E4u;
    // 0x1cc9e8: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA7E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA7E8u, 0x1CC9E4u, 0x1CC9ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC9ECu;
label_1cc9ec:
    // 0x1cc9ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cc9ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1cc9f0:
    // 0x1cc9f0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1cc9f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1cc9f4:
    // 0x1cc9f4: 0xc073286  jal         func_1CCA18
label_1cc9f8:
    if (ctx->pc == 0x1CC9F8u) {
        ctx->pc = 0x1CC9F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC9F4u;
        // 0x1cc9f8: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CC9FCu;
        goto label_1cc9fc;
    }
    ctx->pc = 0x1CC9F4u;
    SET_GPR_U32(ctx, 31, 0x1CC9FCu);
    ctx->pc = 0x1CC9F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC9F4u;
    // 0x1cc9f8: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CCA18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CCA18u, 0x1CC9F4u, 0x1CC9FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC9FCu;
label_1cc9fc:
    // 0x1cc9fc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cc9fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1cca00:
    // 0x1cca00: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1cca00u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1cca04:
    // 0x1cca04: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1cca04u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1cca08:
    // 0x1cca08: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1cca08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1cca0c:
    // 0x1cca0c: 0x8072a00  j           func_1CA800
label_1cca10:
    if (ctx->pc == 0x1CCA10u) {
        ctx->pc = 0x1CCA10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCA0Cu;
        // 0x1cca10: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CCA14u;
        goto label_1cca14;
    }
    ctx->pc = 0x1CCA0Cu;
    ctx->pc = 0x1CCA10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCA0Cu;
    // 0x1cca10: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA800u;
    sub_001CA800_0x1ca800(rdram, ctx, runtime); return;
    ctx->pc = 0x1CCA14u;
label_1cca14:
    // 0x1cca14: 0x0  nop
    ctx->pc = 0x1cca14u;
    // NOP
}
