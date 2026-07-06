#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00141B90
// Address: 0x141b90 - 0x141c70
void sub_00141B90_0x141b90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00141B90_0x141b90");
#endif

    switch (ctx->pc) {
        case 0x141bc8u: goto label_141bc8;
        default: break;
    }

    ctx->pc = 0x141b90u;

    // 0x141b90: 0x3405ffff  ori         $a1, $zero, 0xFFFF
    ctx->pc = 0x141b90u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x141b94: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x141b94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x141b98: 0xa48500f2  sh          $a1, 0xF2($a0)
    ctx->pc = 0x141b98u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 242), (uint16_t)GPR_U32(ctx, 5));
    // 0x141b9c: 0x248603f0  addiu       $a2, $a0, 0x3F0
    ctx->pc = 0x141b9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 1008));
    // 0x141ba0: 0xa0830438  sb          $v1, 0x438($a0)
    ctx->pc = 0x141ba0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1080), (uint8_t)GPR_U32(ctx, 3));
    // 0x141ba4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x141ba4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x141ba8: 0xac8003f8  sw          $zero, 0x3F8($a0)
    ctx->pc = 0x141ba8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1016), GPR_U32(ctx, 0));
    // 0x141bac: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x141bacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x141bb0: 0xac8003fc  sw          $zero, 0x3FC($a0)
    ctx->pc = 0x141bb0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1020), GPR_U32(ctx, 0));
    // 0x141bb4: 0xa480042e  sh          $zero, 0x42E($a0)
    ctx->pc = 0x141bb4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 1070), (uint16_t)GPR_U32(ctx, 0));
    // 0x141bb8: 0xa4800430  sh          $zero, 0x430($a0)
    ctx->pc = 0x141bb8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 1072), (uint16_t)GPR_U32(ctx, 0));
    // 0x141bbc: 0xa4800432  sh          $zero, 0x432($a0)
    ctx->pc = 0x141bbcu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 1074), (uint16_t)GPR_U32(ctx, 0));
    // 0x141bc0: 0xa4800434  sh          $zero, 0x434($a0)
    ctx->pc = 0x141bc0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 1076), (uint16_t)GPR_U32(ctx, 0));
    // 0x141bc4: 0xa4800436  sh          $zero, 0x436($a0)
    ctx->pc = 0x141bc4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 1078), (uint16_t)GPR_U32(ctx, 0));
label_141bc8:
    // 0x141bc8: 0xa4a00024  sh          $zero, 0x24($a1)
    ctx->pc = 0x141bc8u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 36), (uint16_t)GPR_U32(ctx, 0));
    // 0x141bcc: 0x24e70006  addiu       $a3, $a3, 0x6
    ctx->pc = 0x141bccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 6));
    // 0x141bd0: 0xa4a00026  sh          $zero, 0x26($a1)
    ctx->pc = 0x141bd0u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 38), (uint16_t)GPR_U32(ctx, 0));
    // 0x141bd4: 0x28e30007  slti        $v1, $a3, 0x7
    ctx->pc = 0x141bd4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)7) ? 1 : 0);
    // 0x141bd8: 0xa4a00028  sh          $zero, 0x28($a1)
    ctx->pc = 0x141bd8u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 40), (uint16_t)GPR_U32(ctx, 0));
    // 0x141bdc: 0xa4a0002a  sh          $zero, 0x2A($a1)
    ctx->pc = 0x141bdcu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 42), (uint16_t)GPR_U32(ctx, 0));
    // 0x141be0: 0xa4a0002c  sh          $zero, 0x2C($a1)
    ctx->pc = 0x141be0u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 44), (uint16_t)GPR_U32(ctx, 0));
    // 0x141be4: 0xa4a0002e  sh          $zero, 0x2E($a1)
    ctx->pc = 0x141be4u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 46), (uint16_t)GPR_U32(ctx, 0));
    // 0x141be8: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x141BE8u;
    {
        const bool branch_taken_0x141be8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x141BECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x141BE8u;
            // 0x141bec: 0x24a5000c  addiu       $a1, $a1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x141be8) {
            ctx->pc = 0x141BC8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_141bc8;
        }
    }
    ctx->pc = 0x141BF0u;
    // 0x141bf0: 0x71840  sll         $v1, $a3, 1
    ctx->pc = 0x141bf0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x141bf4: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x141bf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x141bf8: 0xa4600024  sh          $zero, 0x24($v1)
    ctx->pc = 0x141bf8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 36), (uint16_t)GPR_U32(ctx, 0));
    // 0x141bfc: 0xacc00020  sw          $zero, 0x20($a2)
    ctx->pc = 0x141bfcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 32), GPR_U32(ctx, 0));
    // 0x141c00: 0xa4c0007c  sh          $zero, 0x7C($a2)
    ctx->pc = 0x141c00u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 124), (uint16_t)GPR_U32(ctx, 0));
    // 0x141c04: 0xa4c0004c  sh          $zero, 0x4C($a2)
    ctx->pc = 0x141c04u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 76), (uint16_t)GPR_U32(ctx, 0));
    // 0x141c08: 0xa4c0004e  sh          $zero, 0x4E($a2)
    ctx->pc = 0x141c08u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 78), (uint16_t)GPR_U32(ctx, 0));
    // 0x141c0c: 0xa4c00050  sh          $zero, 0x50($a2)
    ctx->pc = 0x141c0cu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 80), (uint16_t)GPR_U32(ctx, 0));
    // 0x141c10: 0xa4c00052  sh          $zero, 0x52($a2)
    ctx->pc = 0x141c10u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 82), (uint16_t)GPR_U32(ctx, 0));
    // 0x141c14: 0xa4c00054  sh          $zero, 0x54($a2)
    ctx->pc = 0x141c14u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 84), (uint16_t)GPR_U32(ctx, 0));
    // 0x141c18: 0xa4c00056  sh          $zero, 0x56($a2)
    ctx->pc = 0x141c18u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 86), (uint16_t)GPR_U32(ctx, 0));
    // 0x141c1c: 0xa4c00058  sh          $zero, 0x58($a2)
    ctx->pc = 0x141c1cu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 88), (uint16_t)GPR_U32(ctx, 0));
    // 0x141c20: 0xa4c0005a  sh          $zero, 0x5A($a2)
    ctx->pc = 0x141c20u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 90), (uint16_t)GPR_U32(ctx, 0));
    // 0x141c24: 0xa4c0005c  sh          $zero, 0x5C($a2)
    ctx->pc = 0x141c24u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 92), (uint16_t)GPR_U32(ctx, 0));
    // 0x141c28: 0xa4c0005e  sh          $zero, 0x5E($a2)
    ctx->pc = 0x141c28u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 94), (uint16_t)GPR_U32(ctx, 0));
    // 0x141c2c: 0xa4c00060  sh          $zero, 0x60($a2)
    ctx->pc = 0x141c2cu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 96), (uint16_t)GPR_U32(ctx, 0));
    // 0x141c30: 0xa4c00062  sh          $zero, 0x62($a2)
    ctx->pc = 0x141c30u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 98), (uint16_t)GPR_U32(ctx, 0));
    // 0x141c34: 0xa4c00064  sh          $zero, 0x64($a2)
    ctx->pc = 0x141c34u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 100), (uint16_t)GPR_U32(ctx, 0));
    // 0x141c38: 0xa4c00066  sh          $zero, 0x66($a2)
    ctx->pc = 0x141c38u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 102), (uint16_t)GPR_U32(ctx, 0));
    // 0x141c3c: 0xa4c00068  sh          $zero, 0x68($a2)
    ctx->pc = 0x141c3cu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 104), (uint16_t)GPR_U32(ctx, 0));
    // 0x141c40: 0xa4c0006a  sh          $zero, 0x6A($a2)
    ctx->pc = 0x141c40u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 106), (uint16_t)GPR_U32(ctx, 0));
    // 0x141c44: 0xa4c0006c  sh          $zero, 0x6C($a2)
    ctx->pc = 0x141c44u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 108), (uint16_t)GPR_U32(ctx, 0));
    // 0x141c48: 0xa4c0006e  sh          $zero, 0x6E($a2)
    ctx->pc = 0x141c48u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 110), (uint16_t)GPR_U32(ctx, 0));
    // 0x141c4c: 0xa4c00070  sh          $zero, 0x70($a2)
    ctx->pc = 0x141c4cu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 112), (uint16_t)GPR_U32(ctx, 0));
    // 0x141c50: 0xa4c00072  sh          $zero, 0x72($a2)
    ctx->pc = 0x141c50u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 114), (uint16_t)GPR_U32(ctx, 0));
    // 0x141c54: 0xa4c00074  sh          $zero, 0x74($a2)
    ctx->pc = 0x141c54u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 116), (uint16_t)GPR_U32(ctx, 0));
    // 0x141c58: 0xa4c00076  sh          $zero, 0x76($a2)
    ctx->pc = 0x141c58u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 118), (uint16_t)GPR_U32(ctx, 0));
    // 0x141c5c: 0xa4c00078  sh          $zero, 0x78($a2)
    ctx->pc = 0x141c5cu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 120), (uint16_t)GPR_U32(ctx, 0));
    // 0x141c60: 0x3e00008  jr          $ra
    ctx->pc = 0x141C60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x141C64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x141C60u;
            // 0x141c64: 0xa4c0007a  sh          $zero, 0x7A($a2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 6), 122), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x141C68u;
    // 0x141c68: 0x0  nop
    ctx->pc = 0x141c68u;
    // NOP
    // 0x141c6c: 0x0  nop
    ctx->pc = 0x141c6cu;
    // NOP
    ctx->pc = 0x141c70u;
}
