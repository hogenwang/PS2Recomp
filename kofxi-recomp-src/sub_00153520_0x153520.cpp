#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00153520
// Address: 0x153520 - 0x153640
void sub_00153520_0x153520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00153520_0x153520");
#endif

    ctx->pc = 0x153520u;

    // 0x153520: 0x8c8500dc  lw          $a1, 0xDC($a0)
    ctx->pc = 0x153520u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 220)));
    // 0x153524: 0x30a38300  andi        $v1, $a1, 0x8300
    ctx->pc = 0x153524u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)33536);
    // 0x153528: 0x50600013  beql        $v1, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x153528u;
    {
        const bool branch_taken_0x153528 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x153528) {
            ctx->pc = 0x15352Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x153528u;
            // 0x15352c: 0x3c030004  lui         $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x153578u;
            goto label_153578;
        }
    }
    ctx->pc = 0x153530u;
    // 0x153530: 0x3c030093  lui         $v1, 0x93
    ctx->pc = 0x153530u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)147 << 16));
    // 0x153534: 0x9063ef50  lbu         $v1, -0x10B0($v1)
    ctx->pc = 0x153534u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294963024)));
    // 0x153538: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x153538u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x15353c: 0x1060003c  beqz        $v1, . + 4 + (0x3C << 2)
    ctx->pc = 0x15353Cu;
    {
        const bool branch_taken_0x15353c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x15353c) {
            ctx->pc = 0x153630u;
            goto label_153630;
        }
    }
    ctx->pc = 0x153544u;
    // 0x153544: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x153544u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x153548: 0x84850000  lh          $a1, 0x0($a0)
    ctx->pc = 0x153548u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x15354c: 0x8463db4a  lh          $v1, -0x24B6($v1)
    ctx->pc = 0x15354cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294957898)));
    // 0x153550: 0xa31823  subu        $v1, $a1, $v1
    ctx->pc = 0x153550u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x153554: 0xa4830000  sh          $v1, 0x0($a0)
    ctx->pc = 0x153554u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x153558: 0xa4830012  sh          $v1, 0x12($a0)
    ctx->pc = 0x153558u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 18), (uint16_t)GPR_U32(ctx, 3));
    // 0x15355c: 0x84830000  lh          $v1, 0x0($a0)
    ctx->pc = 0x15355cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x153560: 0xa483003c  sh          $v1, 0x3C($a0)
    ctx->pc = 0x153560u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 60), (uint16_t)GPR_U32(ctx, 3));
    // 0x153564: 0x84830000  lh          $v1, 0x0($a0)
    ctx->pc = 0x153564u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x153568: 0xa483000a  sh          $v1, 0xA($a0)
    ctx->pc = 0x153568u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 10), (uint16_t)GPR_U32(ctx, 3));
    // 0x15356c: 0x84830000  lh          $v1, 0x0($a0)
    ctx->pc = 0x15356cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x153570: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x153570u;
    {
        const bool branch_taken_0x153570 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x153574u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x153570u;
            // 0x153574: 0xa483000e  sh          $v1, 0xE($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 14), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153570) {
            ctx->pc = 0x153630u;
            goto label_153630;
        }
    }
    ctx->pc = 0x153578u;
label_153578:
    // 0x153578: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x153578u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x15357c: 0x10600013  beqz        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x15357Cu;
    {
        const bool branch_taken_0x15357c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x15357c) {
            ctx->pc = 0x1535CCu;
            goto label_1535cc;
        }
    }
    ctx->pc = 0x153584u;
    // 0x153584: 0x3c030093  lui         $v1, 0x93
    ctx->pc = 0x153584u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)147 << 16));
    // 0x153588: 0x9063ef50  lbu         $v1, -0x10B0($v1)
    ctx->pc = 0x153588u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294963024)));
    // 0x15358c: 0x30630008  andi        $v1, $v1, 0x8
    ctx->pc = 0x15358cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x153590: 0x10600027  beqz        $v1, . + 4 + (0x27 << 2)
    ctx->pc = 0x153590u;
    {
        const bool branch_taken_0x153590 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x153590) {
            ctx->pc = 0x153630u;
            goto label_153630;
        }
    }
    ctx->pc = 0x153598u;
    // 0x153598: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x153598u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x15359c: 0x84850000  lh          $a1, 0x0($a0)
    ctx->pc = 0x15359cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1535a0: 0x8463db4a  lh          $v1, -0x24B6($v1)
    ctx->pc = 0x1535a0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294957898)));
    // 0x1535a4: 0xa31823  subu        $v1, $a1, $v1
    ctx->pc = 0x1535a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1535a8: 0xa4830000  sh          $v1, 0x0($a0)
    ctx->pc = 0x1535a8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x1535ac: 0xa4830012  sh          $v1, 0x12($a0)
    ctx->pc = 0x1535acu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 18), (uint16_t)GPR_U32(ctx, 3));
    // 0x1535b0: 0x84830000  lh          $v1, 0x0($a0)
    ctx->pc = 0x1535b0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1535b4: 0xa483003c  sh          $v1, 0x3C($a0)
    ctx->pc = 0x1535b4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 60), (uint16_t)GPR_U32(ctx, 3));
    // 0x1535b8: 0x84830000  lh          $v1, 0x0($a0)
    ctx->pc = 0x1535b8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1535bc: 0xa483000a  sh          $v1, 0xA($a0)
    ctx->pc = 0x1535bcu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 10), (uint16_t)GPR_U32(ctx, 3));
    // 0x1535c0: 0x84830000  lh          $v1, 0x0($a0)
    ctx->pc = 0x1535c0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1535c4: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x1535C4u;
    {
        const bool branch_taken_0x1535c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1535C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1535C4u;
            // 0x1535c8: 0xa483000e  sh          $v1, 0xE($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 14), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1535c4) {
            ctx->pc = 0x153630u;
            goto label_153630;
        }
    }
    ctx->pc = 0x1535CCu;
label_1535cc:
    // 0x1535cc: 0x3c030093  lui         $v1, 0x93
    ctx->pc = 0x1535ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)147 << 16));
    // 0x1535d0: 0x9063ef50  lbu         $v1, -0x10B0($v1)
    ctx->pc = 0x1535d0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294963024)));
    // 0x1535d4: 0x30630008  andi        $v1, $v1, 0x8
    ctx->pc = 0x1535d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x1535d8: 0x10600015  beqz        $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x1535D8u;
    {
        const bool branch_taken_0x1535d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1535d8) {
            ctx->pc = 0x153630u;
            goto label_153630;
        }
    }
    ctx->pc = 0x1535E0u;
    // 0x1535e0: 0x90830438  lbu         $v1, 0x438($a0)
    ctx->pc = 0x1535e0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1080)));
    // 0x1535e4: 0x30630080  andi        $v1, $v1, 0x80
    ctx->pc = 0x1535e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x1535e8: 0x14600011  bnez        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x1535E8u;
    {
        const bool branch_taken_0x1535e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1535e8) {
            ctx->pc = 0x153630u;
            goto label_153630;
        }
    }
    ctx->pc = 0x1535F0u;
    // 0x1535f0: 0x8c8305dc  lw          $v1, 0x5DC($a0)
    ctx->pc = 0x1535f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1500)));
    // 0x1535f4: 0x84630020  lh          $v1, 0x20($v1)
    ctx->pc = 0x1535f4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1535f8: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x1535F8u;
    {
        const bool branch_taken_0x1535f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1535f8) {
            ctx->pc = 0x153630u;
            goto label_153630;
        }
    }
    ctx->pc = 0x153600u;
    // 0x153600: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x153600u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x153604: 0x84850000  lh          $a1, 0x0($a0)
    ctx->pc = 0x153604u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x153608: 0x8463db4a  lh          $v1, -0x24B6($v1)
    ctx->pc = 0x153608u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294957898)));
    // 0x15360c: 0xa31823  subu        $v1, $a1, $v1
    ctx->pc = 0x15360cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x153610: 0xa4830000  sh          $v1, 0x0($a0)
    ctx->pc = 0x153610u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x153614: 0xa4830012  sh          $v1, 0x12($a0)
    ctx->pc = 0x153614u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 18), (uint16_t)GPR_U32(ctx, 3));
    // 0x153618: 0x84830000  lh          $v1, 0x0($a0)
    ctx->pc = 0x153618u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x15361c: 0xa483003c  sh          $v1, 0x3C($a0)
    ctx->pc = 0x15361cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 60), (uint16_t)GPR_U32(ctx, 3));
    // 0x153620: 0x84830000  lh          $v1, 0x0($a0)
    ctx->pc = 0x153620u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x153624: 0xa483000a  sh          $v1, 0xA($a0)
    ctx->pc = 0x153624u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 10), (uint16_t)GPR_U32(ctx, 3));
    // 0x153628: 0x84830000  lh          $v1, 0x0($a0)
    ctx->pc = 0x153628u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x15362c: 0xa483000e  sh          $v1, 0xE($a0)
    ctx->pc = 0x15362cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 14), (uint16_t)GPR_U32(ctx, 3));
label_153630:
    // 0x153630: 0x3e00008  jr          $ra
    ctx->pc = 0x153630u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x153638u;
    // 0x153638: 0x0  nop
    ctx->pc = 0x153638u;
    // NOP
    // 0x15363c: 0x0  nop
    ctx->pc = 0x15363cu;
    // NOP
    ctx->pc = 0x153640u;
}
