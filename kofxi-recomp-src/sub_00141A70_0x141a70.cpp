#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00141A70
// Address: 0x141a70 - 0x141b90
void sub_00141A70_0x141a70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00141A70_0x141a70");
#endif

    switch (ctx->pc) {
        case 0x141a84u: goto label_141a84;
        default: break;
    }

    ctx->pc = 0x141a70u;

    // 0x141a70: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x141a70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x141a74: 0x248503f0  addiu       $a1, $a0, 0x3F0
    ctx->pc = 0x141a74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 1008));
    // 0x141a78: 0xa48300f2  sh          $v1, 0xF2($a0)
    ctx->pc = 0x141a78u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 242), (uint16_t)GPR_U32(ctx, 3));
    // 0x141a7c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x141a7cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x141a80: 0xa480043a  sh          $zero, 0x43A($a0)
    ctx->pc = 0x141a80u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 1082), (uint16_t)GPR_U32(ctx, 0));
label_141a84:
    // 0x141a84: 0x30c400ff  andi        $a0, $a2, 0xFF
    ctx->pc = 0x141a84u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x141a88: 0x24c30006  addiu       $v1, $a2, 0x6
    ctx->pc = 0x141a88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 6));
    // 0x141a8c: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x141a8cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x141a90: 0x306600ff  andi        $a2, $v1, 0xFF
    ctx->pc = 0x141a90u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x141a94: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x141a94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x141a98: 0x28c30007  slti        $v1, $a2, 0x7
    ctx->pc = 0x141a98u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)7) ? 1 : 0);
    // 0x141a9c: 0xa4800024  sh          $zero, 0x24($a0)
    ctx->pc = 0x141a9cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 36), (uint16_t)GPR_U32(ctx, 0));
    // 0x141aa0: 0xa4800026  sh          $zero, 0x26($a0)
    ctx->pc = 0x141aa0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 38), (uint16_t)GPR_U32(ctx, 0));
    // 0x141aa4: 0xa4800028  sh          $zero, 0x28($a0)
    ctx->pc = 0x141aa4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 40), (uint16_t)GPR_U32(ctx, 0));
    // 0x141aa8: 0xa480002a  sh          $zero, 0x2A($a0)
    ctx->pc = 0x141aa8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 42), (uint16_t)GPR_U32(ctx, 0));
    // 0x141aac: 0xa480002c  sh          $zero, 0x2C($a0)
    ctx->pc = 0x141aacu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 44), (uint16_t)GPR_U32(ctx, 0));
    // 0x141ab0: 0x1460fff4  bnez        $v1, . + 4 + (-0xC << 2)
    ctx->pc = 0x141AB0u;
    {
        const bool branch_taken_0x141ab0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x141AB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x141AB0u;
            // 0x141ab4: 0xa480002e  sh          $zero, 0x2E($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 46), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x141ab0) {
            ctx->pc = 0x141A84u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_141a84;
        }
    }
    ctx->pc = 0x141AB8u;
    // 0x141ab8: 0x62040  sll         $a0, $a2, 1
    ctx->pc = 0x141ab8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x141abc: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x141abcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x141ac0: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x141ac0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x141ac4: 0xa4800024  sh          $zero, 0x24($a0)
    ctx->pc = 0x141ac4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 36), (uint16_t)GPR_U32(ctx, 0));
    // 0x141ac8: 0xaca00020  sw          $zero, 0x20($a1)
    ctx->pc = 0x141ac8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 32), GPR_U32(ctx, 0));
    // 0x141acc: 0xa4a00016  sh          $zero, 0x16($a1)
    ctx->pc = 0x141accu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 22), (uint16_t)GPR_U32(ctx, 0));
    // 0x141ad0: 0xa4a00018  sh          $zero, 0x18($a1)
    ctx->pc = 0x141ad0u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 24), (uint16_t)GPR_U32(ctx, 0));
    // 0x141ad4: 0xa4a0001a  sh          $zero, 0x1A($a1)
    ctx->pc = 0x141ad4u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 26), (uint16_t)GPR_U32(ctx, 0));
    // 0x141ad8: 0xa4a0001c  sh          $zero, 0x1C($a1)
    ctx->pc = 0x141ad8u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 28), (uint16_t)GPR_U32(ctx, 0));
    // 0x141adc: 0xa0a30048  sb          $v1, 0x48($a1)
    ctx->pc = 0x141adcu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 72), (uint8_t)GPR_U32(ctx, 3));
    // 0x141ae0: 0xaca00008  sw          $zero, 0x8($a1)
    ctx->pc = 0x141ae0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 0));
    // 0x141ae4: 0xa4a00040  sh          $zero, 0x40($a1)
    ctx->pc = 0x141ae4u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 64), (uint16_t)GPR_U32(ctx, 0));
    // 0x141ae8: 0xa4a00042  sh          $zero, 0x42($a1)
    ctx->pc = 0x141ae8u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 66), (uint16_t)GPR_U32(ctx, 0));
    // 0x141aec: 0xaca0000c  sw          $zero, 0xC($a1)
    ctx->pc = 0x141aecu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 0));
    // 0x141af0: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x141af0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x141af4: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x141af4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
    // 0x141af8: 0xa4a0003e  sh          $zero, 0x3E($a1)
    ctx->pc = 0x141af8u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 62), (uint16_t)GPR_U32(ctx, 0));
    // 0x141afc: 0xa4a00014  sh          $zero, 0x14($a1)
    ctx->pc = 0x141afcu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 20), (uint16_t)GPR_U32(ctx, 0));
    // 0x141b00: 0xa4a00010  sh          $zero, 0x10($a1)
    ctx->pc = 0x141b00u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 16), (uint16_t)GPR_U32(ctx, 0));
    // 0x141b04: 0xa4a00012  sh          $zero, 0x12($a1)
    ctx->pc = 0x141b04u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 18), (uint16_t)GPR_U32(ctx, 0));
    // 0x141b08: 0xa4a00044  sh          $zero, 0x44($a1)
    ctx->pc = 0x141b08u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 68), (uint16_t)GPR_U32(ctx, 0));
    // 0x141b0c: 0xa4a00046  sh          $zero, 0x46($a1)
    ctx->pc = 0x141b0cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 70), (uint16_t)GPR_U32(ctx, 0));
    // 0x141b10: 0xa4a0007c  sh          $zero, 0x7C($a1)
    ctx->pc = 0x141b10u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 124), (uint16_t)GPR_U32(ctx, 0));
    // 0x141b14: 0xa4a0004c  sh          $zero, 0x4C($a1)
    ctx->pc = 0x141b14u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 76), (uint16_t)GPR_U32(ctx, 0));
    // 0x141b18: 0xa4a0004e  sh          $zero, 0x4E($a1)
    ctx->pc = 0x141b18u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 78), (uint16_t)GPR_U32(ctx, 0));
    // 0x141b1c: 0xa4a00050  sh          $zero, 0x50($a1)
    ctx->pc = 0x141b1cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 80), (uint16_t)GPR_U32(ctx, 0));
    // 0x141b20: 0xa4a00052  sh          $zero, 0x52($a1)
    ctx->pc = 0x141b20u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 82), (uint16_t)GPR_U32(ctx, 0));
    // 0x141b24: 0xa4a00054  sh          $zero, 0x54($a1)
    ctx->pc = 0x141b24u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 84), (uint16_t)GPR_U32(ctx, 0));
    // 0x141b28: 0xa4a00056  sh          $zero, 0x56($a1)
    ctx->pc = 0x141b28u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 86), (uint16_t)GPR_U32(ctx, 0));
    // 0x141b2c: 0xa4a00058  sh          $zero, 0x58($a1)
    ctx->pc = 0x141b2cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 88), (uint16_t)GPR_U32(ctx, 0));
    // 0x141b30: 0xa4a0005a  sh          $zero, 0x5A($a1)
    ctx->pc = 0x141b30u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 90), (uint16_t)GPR_U32(ctx, 0));
    // 0x141b34: 0xa4a0005c  sh          $zero, 0x5C($a1)
    ctx->pc = 0x141b34u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 92), (uint16_t)GPR_U32(ctx, 0));
    // 0x141b38: 0xa4a0005e  sh          $zero, 0x5E($a1)
    ctx->pc = 0x141b38u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 94), (uint16_t)GPR_U32(ctx, 0));
    // 0x141b3c: 0xa4a00060  sh          $zero, 0x60($a1)
    ctx->pc = 0x141b3cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 96), (uint16_t)GPR_U32(ctx, 0));
    // 0x141b40: 0xa4a00062  sh          $zero, 0x62($a1)
    ctx->pc = 0x141b40u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 98), (uint16_t)GPR_U32(ctx, 0));
    // 0x141b44: 0xa4a00064  sh          $zero, 0x64($a1)
    ctx->pc = 0x141b44u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 100), (uint16_t)GPR_U32(ctx, 0));
    // 0x141b48: 0xa4a00066  sh          $zero, 0x66($a1)
    ctx->pc = 0x141b48u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 102), (uint16_t)GPR_U32(ctx, 0));
    // 0x141b4c: 0xa4a00068  sh          $zero, 0x68($a1)
    ctx->pc = 0x141b4cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 104), (uint16_t)GPR_U32(ctx, 0));
    // 0x141b50: 0xa4a0006a  sh          $zero, 0x6A($a1)
    ctx->pc = 0x141b50u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 106), (uint16_t)GPR_U32(ctx, 0));
    // 0x141b54: 0xa4a0006c  sh          $zero, 0x6C($a1)
    ctx->pc = 0x141b54u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 108), (uint16_t)GPR_U32(ctx, 0));
    // 0x141b58: 0xa4a0006e  sh          $zero, 0x6E($a1)
    ctx->pc = 0x141b58u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 110), (uint16_t)GPR_U32(ctx, 0));
    // 0x141b5c: 0xa4a00070  sh          $zero, 0x70($a1)
    ctx->pc = 0x141b5cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 112), (uint16_t)GPR_U32(ctx, 0));
    // 0x141b60: 0xa4a00072  sh          $zero, 0x72($a1)
    ctx->pc = 0x141b60u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 114), (uint16_t)GPR_U32(ctx, 0));
    // 0x141b64: 0xa4a00074  sh          $zero, 0x74($a1)
    ctx->pc = 0x141b64u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 116), (uint16_t)GPR_U32(ctx, 0));
    // 0x141b68: 0xa4a00076  sh          $zero, 0x76($a1)
    ctx->pc = 0x141b68u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 118), (uint16_t)GPR_U32(ctx, 0));
    // 0x141b6c: 0xa4a00078  sh          $zero, 0x78($a1)
    ctx->pc = 0x141b6cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 120), (uint16_t)GPR_U32(ctx, 0));
    // 0x141b70: 0xa4a0007a  sh          $zero, 0x7A($a1)
    ctx->pc = 0x141b70u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 122), (uint16_t)GPR_U32(ctx, 0));
    // 0x141b74: 0xaca00080  sw          $zero, 0x80($a1)
    ctx->pc = 0x141b74u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 128), GPR_U32(ctx, 0));
    // 0x141b78: 0xaca00084  sw          $zero, 0x84($a1)
    ctx->pc = 0x141b78u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 132), GPR_U32(ctx, 0));
    // 0x141b7c: 0xaca00088  sw          $zero, 0x88($a1)
    ctx->pc = 0x141b7cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 136), GPR_U32(ctx, 0));
    // 0x141b80: 0x3e00008  jr          $ra
    ctx->pc = 0x141B80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x141B84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x141B80u;
            // 0x141b84: 0xaca0008c  sw          $zero, 0x8C($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 140), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x141B88u;
    // 0x141b88: 0x0  nop
    ctx->pc = 0x141b88u;
    // NOP
    // 0x141b8c: 0x0  nop
    ctx->pc = 0x141b8cu;
    // NOP
    ctx->pc = 0x141b90u;
}
