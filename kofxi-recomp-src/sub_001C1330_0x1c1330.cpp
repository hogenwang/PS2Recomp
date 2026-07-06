#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001C1330
// Address: 0x1c1330 - 0x1c1418
void sub_001C1330_0x1c1330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C1330_0x1c1330");
#endif

    switch (ctx->pc) {
        case 0x1c1350u: goto label_1c1350;
        case 0x1c1360u: goto label_1c1360;
        case 0x1c1390u: goto label_1c1390;
        case 0x1c13a0u: goto label_1c13a0;
        case 0x1c13b0u: goto label_1c13b0;
        case 0x1c13f8u: goto label_1c13f8;
        case 0x1c1408u: goto label_1c1408;
        default: break;
    }

    ctx->pc = 0x1c1330u;

    // 0x1c1330: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x1c1330u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x1c1334: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1c1334u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x1c1338: 0x2463c83c  addiu       $v1, $v1, -0x37C4
    ctx->pc = 0x1c1338u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953020));
    // 0x1c133c: 0x2442c838  addiu       $v0, $v0, -0x37C8
    ctx->pc = 0x1c133cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953016));
    // 0x1c1340: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x1c1340u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1c1344: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x1c1344u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
    // 0x1c1348: 0x3e00008  jr          $ra
    ctx->pc = 0x1C1348u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C134Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1348u;
            // 0x1c134c: 0xac640000  sw          $a0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C1350u;
label_1c1350:
    // 0x1c1350: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x1c1350u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x1c1354: 0x2463c83c  addiu       $v1, $v1, -0x37C4
    ctx->pc = 0x1c1354u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953020));
    // 0x1c1358: 0x3e00008  jr          $ra
    ctx->pc = 0x1C1358u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C135Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1358u;
            // 0x1c135c: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C1360u;
label_1c1360:
    // 0x1c1360: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c1360u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c1364: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1c1364u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x1c1368: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1c1368u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c136c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c136cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c1370: 0x14830007  bne         $a0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C1370u;
    {
        const bool branch_taken_0x1c1370 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x1C1374u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1370u;
            // 0x1c1374: 0xac44c840  sw          $a0, -0x37C0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294953024), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1370) {
            ctx->pc = 0x1C1390u;
            goto label_1c1390;
        }
    }
    ctx->pc = 0x1C1378u;
    // 0x1c1378: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1c1378u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x1c137c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c137cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c1380: 0x24849978  addiu       $a0, $a0, -0x6688
    ctx->pc = 0x1c1380u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941048));
    // 0x1c1384: 0x8043e52  j           func_10F948
    ctx->pc = 0x1C1384u;
    ctx->pc = 0x1C1388u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1384u;
            // 0x1c1388: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (runtime->hasFunction(0x10F948u)) {
        auto targetFn = runtime->lookupFunction(0x10F948u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_0010F948_0x10f948(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1C138Cu;
    // 0x1c138c: 0x0  nop
    ctx->pc = 0x1c138cu;
    // NOP
label_1c1390:
    // 0x1c1390: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c1390u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c1394: 0x3e00008  jr          $ra
    ctx->pc = 0x1C1394u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C1398u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1394u;
            // 0x1c1398: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C139Cu;
    // 0x1c139c: 0x0  nop
    ctx->pc = 0x1c139cu;
    // NOP
label_1c13a0:
    // 0x1c13a0: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x1c13a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x1c13a4: 0x3e00008  jr          $ra
    ctx->pc = 0x1C13A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C13A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C13A4u;
            // 0x1c13a8: 0x8c62c840  lw          $v0, -0x37C0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294953024)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C13ACu;
    // 0x1c13ac: 0x0  nop
    ctx->pc = 0x1c13acu;
    // NOP
label_1c13b0:
    // 0x1c13b0: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x1c13b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x1c13b4: 0x41600  sll         $v0, $a0, 24
    ctx->pc = 0x1c13b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 24));
    // 0x1c13b8: 0x2463c814  addiu       $v1, $v1, -0x37EC
    ctx->pc = 0x1c13b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294952980));
    // 0x1c13bc: 0x21603  sra         $v0, $v0, 24
    ctx->pc = 0x1c13bcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
    // 0x1c13c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c13c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c13c4: 0x3c060038  lui         $a2, 0x38
    ctx->pc = 0x1c13c4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)56 << 16));
    // 0x1c13c8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c13c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c13cc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1c13ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c13d0: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1c13d0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x1c13d4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1c13d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1c13d8: 0x14850007  bne         $a0, $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C13D8u;
    {
        const bool branch_taken_0x1c13d8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        ctx->pc = 0x1C13DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C13D8u;
            // 0x1c13dc: 0xacc2c844  sw          $v0, -0x37BC($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 4294953028), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c13d8) {
            ctx->pc = 0x1C13F8u;
            goto label_1c13f8;
        }
    }
    ctx->pc = 0x1C13E0u;
    // 0x1c13e0: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1c13e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x1c13e4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c13e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c13e8: 0x24849998  addiu       $a0, $a0, -0x6668
    ctx->pc = 0x1c13e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941080));
    // 0x1c13ec: 0x8043e52  j           func_10F948
    ctx->pc = 0x1C13ECu;
    ctx->pc = 0x1C13F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C13ECu;
            // 0x1c13f0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (runtime->hasFunction(0x10F948u)) {
        auto targetFn = runtime->lookupFunction(0x10F948u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_0010F948_0x10f948(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1C13F4u;
    // 0x1c13f4: 0x0  nop
    ctx->pc = 0x1c13f4u;
    // NOP
label_1c13f8:
    // 0x1c13f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c13f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c13fc: 0x3e00008  jr          $ra
    ctx->pc = 0x1C13FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C1400u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C13FCu;
            // 0x1c1400: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C1404u;
    // 0x1c1404: 0x0  nop
    ctx->pc = 0x1c1404u;
    // NOP
label_1c1408:
    // 0x1c1408: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x1c1408u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x1c140c: 0x3e00008  jr          $ra
    ctx->pc = 0x1C140Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C1410u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C140Cu;
            // 0x1c1410: 0x8c62c844  lw          $v0, -0x37BC($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294953028)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C1414u;
    // 0x1c1414: 0x0  nop
    ctx->pc = 0x1c1414u;
    // NOP
    ctx->pc = 0x1c1418u;
}
