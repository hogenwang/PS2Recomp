#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00203BA0
// Address: 0x203ba0 - 0x203c50
void sub_00203BA0_0x203ba0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00203BA0_0x203ba0");
#endif

    ctx->pc = 0x203ba0u;

    // 0x203ba0: 0x30c300ff  andi        $v1, $a2, 0xFF
    ctx->pc = 0x203ba0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x203ba4: 0x3c0a003a  lui         $t2, 0x3A
    ctx->pc = 0x203ba4u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)58 << 16));
    // 0x203ba8: 0x3066001f  andi        $a2, $v1, 0x1F
    ctx->pc = 0x203ba8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
    // 0x203bac: 0x3c09009c  lui         $t1, 0x9C
    ctx->pc = 0x203bacu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)156 << 16));
    // 0x203bb0: 0x30a300ff  andi        $v1, $a1, 0xFF
    ctx->pc = 0x203bb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x203bb4: 0x254a98a0  addiu       $t2, $t2, -0x6760
    ctx->pc = 0x203bb4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294940832));
    // 0x203bb8: 0x3065001f  andi        $a1, $v1, 0x1F
    ctx->pc = 0x203bb8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
    // 0x203bbc: 0x2529f240  addiu       $t1, $t1, -0xDC0
    ctx->pc = 0x203bbcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294963776));
    // 0x203bc0: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x203bc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x203bc4: 0x52140  sll         $a0, $a1, 5
    ctx->pc = 0x203bc4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x203bc8: 0x3063001f  andi        $v1, $v1, 0x1F
    ctx->pc = 0x203bc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
    // 0x203bcc: 0x3085ffff  andi        $a1, $a0, 0xFFFF
    ctx->pc = 0x203bccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x203bd0: 0x31a80  sll         $v1, $v1, 10
    ctx->pc = 0x203bd0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 10));
    // 0x203bd4: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x203bd4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x203bd8: 0x3c0301c1  lui         $v1, 0x1C1
    ctx->pc = 0x203bd8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)449 << 16));
    // 0x203bdc: 0x8c6d9bf8  lw          $t5, -0x6408($v1)
    ctx->pc = 0x203bdcu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294941688)));
    // 0x203be0: 0x8dac0000  lw          $t4, 0x0($t5)
    ctx->pc = 0x203be0u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x203be4: 0xed5821  addu        $t3, $a3, $t5
    ctx->pc = 0x203be4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 13)));
    // 0x203be8: 0x8da70020  lw          $a3, 0x20($t5)
    ctx->pc = 0x203be8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 32)));
    // 0x203bec: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x203becu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x203bf0: 0x14c5021  addu        $t2, $t2, $t4
    ctx->pc = 0x203bf0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 12)));
    // 0x203bf4: 0x914c0000  lbu         $t4, 0x0($t2)
    ctx->pc = 0x203bf4u;
    SET_GPR_U32(ctx, 12, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x203bf8: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x203bf8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x203bfc: 0x1074021  addu        $t0, $t0, $a3
    ctx->pc = 0x203bfcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
    // 0x203c00: 0xc5100  sll         $t2, $t4, 4
    ctx->pc = 0x203c00u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 12), 4));
    // 0x203c04: 0xc3a80  sll         $a3, $t4, 10
    ctx->pc = 0x203c04u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 12), 10));
    // 0x203c08: 0x14b5021  addu        $t2, $t2, $t3
    ctx->pc = 0x203c08u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 11)));
    // 0x203c0c: 0x1273821  addu        $a3, $t1, $a3
    ctx->pc = 0x203c0cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 7)));
    // 0x203c10: 0x91490524  lbu         $t1, 0x524($t2)
    ctx->pc = 0x203c10u;
    SET_GPR_U32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 1316)));
    // 0x203c14: 0x94900  sll         $t1, $t1, 4
    ctx->pc = 0x203c14u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 4));
    // 0x203c18: 0x1094021  addu        $t0, $t0, $t1
    ctx->pc = 0x203c18u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
    // 0x203c1c: 0x84040  sll         $t0, $t0, 1
    ctx->pc = 0x203c1cu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
    // 0x203c20: 0x1073821  addu        $a3, $t0, $a3
    ctx->pc = 0x203c20u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
    // 0x203c24: 0xa4e30000  sh          $v1, 0x0($a3)
    ctx->pc = 0x203c24u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x203c28: 0x94e30000  lhu         $v1, 0x0($a3)
    ctx->pc = 0x203c28u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x203c2c: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x203c2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x203c30: 0xa4e30000  sh          $v1, 0x0($a3)
    ctx->pc = 0x203c30u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x203c34: 0x94e30000  lhu         $v1, 0x0($a3)
    ctx->pc = 0x203c34u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x203c38: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x203c38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x203c3c: 0xa4e30000  sh          $v1, 0x0($a3)
    ctx->pc = 0x203c3cu;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x203c40: 0x94e30000  lhu         $v1, 0x0($a3)
    ctx->pc = 0x203c40u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x203c44: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x203c44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x203c48: 0x3e00008  jr          $ra
    ctx->pc = 0x203C48u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x203C4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x203C48u;
            // 0x203c4c: 0xa4e30000  sh          $v1, 0x0($a3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x203C50u;
    ctx->pc = 0x203c50u;
}
