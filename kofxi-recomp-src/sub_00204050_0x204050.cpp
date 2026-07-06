#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00204050
// Address: 0x204050 - 0x204120
void sub_00204050_0x204050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00204050_0x204050");
#endif

    ctx->pc = 0x204050u;

    // 0x204050: 0x3c0301c1  lui         $v1, 0x1C1
    ctx->pc = 0x204050u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)449 << 16));
    // 0x204054: 0x8c659bf8  lw          $a1, -0x6408($v1)
    ctx->pc = 0x204054u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294941688)));
    // 0x204058: 0x3c030009  lui         $v1, 0x9
    ctx->pc = 0x204058u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)9 << 16));
    // 0x20405c: 0x34642400  ori         $a0, $v1, 0x2400
    ctx->pc = 0x20405cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)9216);
    // 0x204060: 0x24a30824  addiu       $v1, $a1, 0x824
    ctx->pc = 0x204060u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 2084));
    // 0x204064: 0x8ca50a94  lw          $a1, 0xA94($a1)
    ctx->pc = 0x204064u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 2708)));
    // 0x204068: 0xa42024  and         $a0, $a1, $a0
    ctx->pc = 0x204068u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
    // 0x20406c: 0x54800026  bnel        $a0, $zero, . + 4 + (0x26 << 2)
    ctx->pc = 0x20406Cu;
    {
        const bool branch_taken_0x20406c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x20406c) {
            ctx->pc = 0x204070u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x20406Cu;
            // 0x204070: 0x84640000  lh          $a0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x204108u;
            goto label_204108;
        }
    }
    ctx->pc = 0x204074u;
    // 0x204074: 0x90640030  lbu         $a0, 0x30($v1)
    ctx->pc = 0x204074u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x204078: 0x30840004  andi        $a0, $a0, 0x4
    ctx->pc = 0x204078u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4);
    // 0x20407c: 0x50800010  beql        $a0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x20407Cu;
    {
        const bool branch_taken_0x20407c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x20407c) {
            ctx->pc = 0x204080u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x20407Cu;
            // 0x204080: 0x90640031  lbu         $a0, 0x31($v1) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 49)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2040C0u;
            goto label_2040c0;
        }
    }
    ctx->pc = 0x204084u;
    // 0x204084: 0x9064008c  lbu         $a0, 0x8C($v1)
    ctx->pc = 0x204084u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 140)));
    // 0x204088: 0x30840002  andi        $a0, $a0, 0x2
    ctx->pc = 0x204088u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2);
    // 0x20408c: 0x50800007  beql        $a0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x20408Cu;
    {
        const bool branch_taken_0x20408c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x20408c) {
            ctx->pc = 0x204090u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x20408Cu;
            // 0x204090: 0x8c640040  lw          $a0, 0x40($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2040ACu;
            goto label_2040ac;
        }
    }
    ctx->pc = 0x204094u;
    // 0x204094: 0x8c640040  lw          $a0, 0x40($v1)
    ctx->pc = 0x204094u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
    // 0x204098: 0x8465003c  lh          $a1, 0x3C($v1)
    ctx->pc = 0x204098u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 60)));
    // 0x20409c: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x20409cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x2040a0: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x2040a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x2040a4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2040A4u;
    {
        const bool branch_taken_0x2040a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2040A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2040A4u;
            // 0x2040a8: 0xa4640000  sh          $a0, 0x0($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2040a4) {
            ctx->pc = 0x2040BCu;
            goto label_2040bc;
        }
    }
    ctx->pc = 0x2040ACu;
label_2040ac:
    // 0x2040ac: 0x8465003c  lh          $a1, 0x3C($v1)
    ctx->pc = 0x2040acu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 60)));
    // 0x2040b0: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x2040b0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x2040b4: 0xa42023  subu        $a0, $a1, $a0
    ctx->pc = 0x2040b4u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x2040b8: 0xa4640000  sh          $a0, 0x0($v1)
    ctx->pc = 0x2040b8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 4));
label_2040bc:
    // 0x2040bc: 0x90640031  lbu         $a0, 0x31($v1)
    ctx->pc = 0x2040bcu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 49)));
label_2040c0:
    // 0x2040c0: 0x30840004  andi        $a0, $a0, 0x4
    ctx->pc = 0x2040c0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4);
    // 0x2040c4: 0x1080000f  beqz        $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x2040C4u;
    {
        const bool branch_taken_0x2040c4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2040c4) {
            ctx->pc = 0x204104u;
            goto label_204104;
        }
    }
    ctx->pc = 0x2040CCu;
    // 0x2040cc: 0x9064008c  lbu         $a0, 0x8C($v1)
    ctx->pc = 0x2040ccu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 140)));
    // 0x2040d0: 0x30840001  andi        $a0, $a0, 0x1
    ctx->pc = 0x2040d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x2040d4: 0x50800007  beql        $a0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x2040D4u;
    {
        const bool branch_taken_0x2040d4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2040d4) {
            ctx->pc = 0x2040D8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2040D4u;
            // 0x2040d8: 0x8c640044  lw          $a0, 0x44($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2040F4u;
            goto label_2040f4;
        }
    }
    ctx->pc = 0x2040DCu;
    // 0x2040dc: 0x8c640044  lw          $a0, 0x44($v1)
    ctx->pc = 0x2040dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
    // 0x2040e0: 0x8465003e  lh          $a1, 0x3E($v1)
    ctx->pc = 0x2040e0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 62)));
    // 0x2040e4: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x2040e4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x2040e8: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x2040e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x2040ec: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2040ECu;
    {
        const bool branch_taken_0x2040ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2040F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2040ECu;
            // 0x2040f0: 0xa4640002  sh          $a0, 0x2($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 2), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2040ec) {
            ctx->pc = 0x204104u;
            goto label_204104;
        }
    }
    ctx->pc = 0x2040F4u;
label_2040f4:
    // 0x2040f4: 0x8465003e  lh          $a1, 0x3E($v1)
    ctx->pc = 0x2040f4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 62)));
    // 0x2040f8: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x2040f8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x2040fc: 0xa42023  subu        $a0, $a1, $a0
    ctx->pc = 0x2040fcu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x204100: 0xa4640002  sh          $a0, 0x2($v1)
    ctx->pc = 0x204100u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 2), (uint16_t)GPR_U32(ctx, 4));
label_204104:
    // 0x204104: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x204104u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_204108:
    // 0x204108: 0xa464000e  sh          $a0, 0xE($v1)
    ctx->pc = 0x204108u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 14), (uint16_t)GPR_U32(ctx, 4));
    // 0x20410c: 0x84640002  lh          $a0, 0x2($v1)
    ctx->pc = 0x20410cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x204110: 0x3e00008  jr          $ra
    ctx->pc = 0x204110u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x204114u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x204110u;
            // 0x204114: 0xa4640010  sh          $a0, 0x10($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 16), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x204118u;
    // 0x204118: 0x0  nop
    ctx->pc = 0x204118u;
    // NOP
    // 0x20411c: 0x0  nop
    ctx->pc = 0x20411cu;
    // NOP
    ctx->pc = 0x204120u;
}
