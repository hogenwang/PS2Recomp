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

// Function: sub_0012FE90
// Address: 0x12fe90 - 0x12fff0
void sub_0012FE90_0x12fe90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012FE90_0x12fe90");
#endif

    switch (ctx->pc) {
        case 0x12fedcu: goto label_12fedc;
        case 0x12fee0u: goto label_12fee0;
        case 0x12ffa8u: goto label_12ffa8;
        case 0x12ffb0u: goto label_12ffb0;
        default: break;
    }

    ctx->pc = 0x12fe90u;

    // 0x12fe90: 0x3083000c  andi        $v1, $a0, 0xC
    ctx->pc = 0x12fe90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)12);
    // 0x12fe94: 0x33082  srl         $a2, $v1, 2
    ctx->pc = 0x12fe94u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 3), 2));
    // 0x12fe98: 0x30830030  andi        $v1, $a0, 0x30
    ctx->pc = 0x12fe98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)48);
    // 0x12fe9c: 0x62040  sll         $a0, $a2, 1
    ctx->pc = 0x12fe9cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x12fea0: 0x31902  srl         $v1, $v1, 4
    ctx->pc = 0x12fea0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x12fea4: 0x863021  addu        $a2, $a0, $a2
    ctx->pc = 0x12fea4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x12fea8: 0x3c040041  lui         $a0, 0x41
    ctx->pc = 0x12fea8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65 << 16));
    // 0x12feac: 0x248455b0  addiu       $a0, $a0, 0x55B0
    ctx->pc = 0x12feacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21936));
    // 0x12feb0: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x12feb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x12feb4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x12feb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x12feb8: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x12feb8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x12febc: 0x4a10002  bgez        $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x12FEBCu;
    {
        const bool branch_taken_0x12febc = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x12FEC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12FEBCu;
        // 0x12fec0: 0x30a900ff  andi        $t1, $a1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 9, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12febc) {
            ctx->pc = 0x12FEC8u;
            goto label_12fec8;
        }
    }
    ctx->pc = 0x12FEC4u;
    // 0x12fec4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x12fec4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_12fec8:
    // 0x12fec8: 0x3c080041  lui         $t0, 0x41
    ctx->pc = 0x12fec8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)65 << 16));
    // 0x12fecc: 0x306600ff  andi        $a2, $v1, 0xFF
    ctx->pc = 0x12feccu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x12fed0: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x12fed0u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12fed4: 0x250855b0  addiu       $t0, $t0, 0x55B0
    ctx->pc = 0x12fed4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 21936));
    // 0x12fed8: 0x312700ff  andi        $a3, $t1, 0xFF
    ctx->pc = 0x12fed8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)255);
label_12fedc:
    // 0x12fedc: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x12fedcu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_12fee0:
    // 0x12fee0: 0xe6082a  slt         $at, $a3, $a2
    ctx->pc = 0x12fee0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x12fee4: 0x10200010  beqz        $at, . + 4 + (0x10 << 2)
    ctx->pc = 0x12FEE4u;
    {
        const bool branch_taken_0x12fee4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x12fee4) {
            ctx->pc = 0x12FF28u;
            goto label_12ff28;
        }
    }
    ctx->pc = 0x12FEECu;
    // 0x12feec: 0x10a2821  addu        $a1, $t0, $t2
    ctx->pc = 0x12feecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 10)));
    // 0x12fef0: 0x90a40000  lbu         $a0, 0x0($a1)
    ctx->pc = 0x12fef0u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x12fef4: 0x87182a  slt         $v1, $a0, $a3
    ctx->pc = 0x12fef4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x12fef8: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x12FEF8u;
    {
        const bool branch_taken_0x12fef8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x12fef8) {
            ctx->pc = 0x12FF18u;
            goto label_12ff18;
        }
    }
    ctx->pc = 0x12FF00u;
    // 0x12ff00: 0x86082a  slt         $at, $a0, $a2
    ctx->pc = 0x12ff00u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x12ff04: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x12FF04u;
    {
        const bool branch_taken_0x12ff04 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x12ff04) {
            ctx->pc = 0x12FF18u;
            goto label_12ff18;
        }
    }
    ctx->pc = 0x12FF0Cu;
    // 0x12ff0c: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x12ff0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x12ff10: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x12FF10u;
    {
        const bool branch_taken_0x12ff10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12FF14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12FF10u;
        // 0x12ff14: 0xa0a30000  sb          $v1, 0x0($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ff10) {
            ctx->pc = 0x12FF70u;
            goto label_12ff70;
        }
    }
    ctx->pc = 0x12FF18u;
label_12ff18:
    // 0x12ff18: 0x14c40015  bne         $a2, $a0, . + 4 + (0x15 << 2)
    ctx->pc = 0x12FF18u;
    {
        const bool branch_taken_0x12ff18 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 4));
        if (branch_taken_0x12ff18) {
            ctx->pc = 0x12FF70u;
            goto label_12ff70;
        }
    }
    ctx->pc = 0x12FF20u;
    // 0x12ff20: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x12FF20u;
    {
        const bool branch_taken_0x12ff20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12FF24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12FF20u;
        // 0x12ff24: 0xa0a90000  sb          $t1, 0x0($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ff20) {
            ctx->pc = 0x12FF70u;
            goto label_12ff70;
        }
    }
    ctx->pc = 0x12FF28u;
label_12ff28:
    // 0x12ff28: 0xc7082a  slt         $at, $a2, $a3
    ctx->pc = 0x12ff28u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x12ff2c: 0x10200010  beqz        $at, . + 4 + (0x10 << 2)
    ctx->pc = 0x12FF2Cu;
    {
        const bool branch_taken_0x12ff2c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x12ff2c) {
            ctx->pc = 0x12FF70u;
            goto label_12ff70;
        }
    }
    ctx->pc = 0x12FF34u;
    // 0x12ff34: 0x10a2021  addu        $a0, $t0, $t2
    ctx->pc = 0x12ff34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 10)));
    // 0x12ff38: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x12ff38u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x12ff3c: 0xe3082a  slt         $at, $a3, $v1
    ctx->pc = 0x12ff3cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x12ff40: 0x14200007  bnez        $at, . + 4 + (0x7 << 2)
    ctx->pc = 0x12FF40u;
    {
        const bool branch_taken_0x12ff40 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x12ff40) {
            ctx->pc = 0x12FF60u;
            goto label_12ff60;
        }
    }
    ctx->pc = 0x12FF48u;
    // 0x12ff48: 0xc3082a  slt         $at, $a2, $v1
    ctx->pc = 0x12ff48u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x12ff4c: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x12FF4Cu;
    {
        const bool branch_taken_0x12ff4c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x12ff4c) {
            ctx->pc = 0x12FF60u;
            goto label_12ff60;
        }
    }
    ctx->pc = 0x12FF54u;
    // 0x12ff54: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x12ff54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x12ff58: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x12FF58u;
    {
        const bool branch_taken_0x12ff58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12FF5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12FF58u;
        // 0x12ff5c: 0xa0830000  sb          $v1, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ff58) {
            ctx->pc = 0x12FF70u;
            goto label_12ff70;
        }
    }
    ctx->pc = 0x12FF60u;
label_12ff60:
    // 0x12ff60: 0x14c30003  bne         $a2, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x12FF60u;
    {
        const bool branch_taken_0x12ff60 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        if (branch_taken_0x12ff60) {
            ctx->pc = 0x12FF70u;
            goto label_12ff70;
        }
    }
    ctx->pc = 0x12FF68u;
    // 0x12ff68: 0xa0890000  sb          $t1, 0x0($a0)
    ctx->pc = 0x12ff68u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 9));
    // 0x12ff6c: 0x0  nop
    ctx->pc = 0x12ff6cu;
    // NOP
label_12ff70:
    // 0x12ff70: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x12ff70u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x12ff74: 0x29430003  slti        $v1, $t2, 0x3
    ctx->pc = 0x12ff74u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x12ff78: 0x1460ffd9  bnez        $v1, . + 4 + (-0x27 << 2)
    ctx->pc = 0x12FF78u;
    {
        const bool branch_taken_0x12ff78 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x12ff78) {
            ctx->pc = 0x12FEE0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12fee0;
        }
    }
    ctx->pc = 0x12FF80u;
    // 0x12ff80: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x12ff80u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x12ff84: 0x29630004  slti        $v1, $t3, 0x4
    ctx->pc = 0x12ff84u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 11) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x12ff88: 0x1460ffd4  bnez        $v1, . + 4 + (-0x2C << 2)
    ctx->pc = 0x12FF88u;
    {
        const bool branch_taken_0x12ff88 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x12FF8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12FF88u;
        // 0x12ff8c: 0x25080003  addiu       $t0, $t0, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ff88) {
            ctx->pc = 0x12FEDCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12fedc;
        }
    }
    ctx->pc = 0x12FF90u;
    // 0x12ff90: 0x3c070041  lui         $a3, 0x41
    ctx->pc = 0x12ff90u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65 << 16));
    // 0x12ff94: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x12ff94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12ff98: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x12ff98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x12ff9c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x12ff9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ffa0: 0xa0645598  sb          $a0, 0x5598($v1)
    ctx->pc = 0x12ffa0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 21912), (uint8_t)GPR_U32(ctx, 4));
    // 0x12ffa4: 0x24e75510  addiu       $a3, $a3, 0x5510
    ctx->pc = 0x12ffa4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 21776));
label_12ffa8:
    // 0x12ffa8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x12ffa8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ffac: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x12ffacu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_12ffb0:
    // 0x12ffb0: 0xa0c00000  sb          $zero, 0x0($a2)
    ctx->pc = 0x12ffb0u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x12ffb4: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x12ffb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x12ffb8: 0xa0c00001  sb          $zero, 0x1($a2)
    ctx->pc = 0x12ffb8u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x12ffbc: 0x28830009  slti        $v1, $a0, 0x9
    ctx->pc = 0x12ffbcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x12ffc0: 0x24c60002  addiu       $a2, $a2, 0x2
    ctx->pc = 0x12ffc0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
    // 0x12ffc4: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x12FFC4u;
    {
        const bool branch_taken_0x12ffc4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x12ffc4) {
            ctx->pc = 0x12FFB0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12ffb0;
        }
    }
    ctx->pc = 0x12FFCCu;
    // 0x12ffcc: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x12ffccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x12ffd0: 0x28a30006  slti        $v1, $a1, 0x6
    ctx->pc = 0x12ffd0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x12ffd4: 0x1460fff4  bnez        $v1, . + 4 + (-0xC << 2)
    ctx->pc = 0x12FFD4u;
    {
        const bool branch_taken_0x12ffd4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x12FFD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12FFD4u;
        // 0x12ffd8: 0x24e70016  addiu       $a3, $a3, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ffd4) {
            ctx->pc = 0x12FFA8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12ffa8;
        }
    }
    ctx->pc = 0x12FFDCu;
    // 0x12ffdc: 0x3e00008  jr          $ra
    ctx->pc = 0x12FFDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12FFDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12FFE4u;
    // 0x12ffe4: 0x0  nop
    ctx->pc = 0x12ffe4u;
    // NOP
    // 0x12ffe8: 0x0  nop
    ctx->pc = 0x12ffe8u;
    // NOP
    // 0x12ffec: 0x0  nop
    ctx->pc = 0x12ffecu;
    // NOP
    if (ctx->pc == 0x12ffecu) { ctx->pc = 0x12fff0u; }
}
