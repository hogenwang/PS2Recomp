#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001A0AD0
// Address: 0x1a0ad0 - 0x1a0b80
void sub_001A0AD0_0x1a0ad0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A0AD0_0x1a0ad0");
#endif

    switch (ctx->pc) {
        case 0x1a0af0u: goto label_1a0af0;
        case 0x1a0b50u: goto label_1a0b50;
        default: break;
    }

    ctx->pc = 0x1a0ad0u;

    // 0x1a0ad0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a0ad0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1a0ad4: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x1a0ad4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x1a0ad8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1a0ad8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1a0adc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1a0adcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1a0ae0: 0x9063daa0  lbu         $v1, -0x2560($v1)
    ctx->pc = 0x1a0ae0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294957728)));
    // 0x1a0ae4: 0x18600022  blez        $v1, . + 4 + (0x22 << 2)
    ctx->pc = 0x1A0AE4u;
    {
        const bool branch_taken_0x1a0ae4 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x1A0AE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0AE4u;
            // 0x1a0ae8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0ae4) {
            ctx->pc = 0x1A0B70u;
            goto label_1a0b70;
        }
    }
    ctx->pc = 0x1A0AECu;
    // 0x1a0aec: 0x320400ff  andi        $a0, $s0, 0xFF
    ctx->pc = 0x1a0aecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_1a0af0:
    // 0x1a0af0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1a0af0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a0af4: 0x832004  sllv        $a0, $v1, $a0
    ctx->pc = 0x1a0af4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 4) & 0x1F));
    // 0x1a0af8: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x1a0af8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x1a0afc: 0x9063db00  lbu         $v1, -0x2500($v1)
    ctx->pc = 0x1a0afcu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294957824)));
    // 0x1a0b00: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x1a0b00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x1a0b04: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x1A0B04u;
    {
        const bool branch_taken_0x1a0b04 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a0b04) {
            ctx->pc = 0x1A0B50u;
            goto label_1a0b50;
        }
    }
    ctx->pc = 0x1A0B0Cu;
    // 0x1a0b0c: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x1a0b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1a0b10: 0x801827  not         $v1, $a0
    ctx->pc = 0x1a0b10u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 4) | GPR_U64(ctx, 0)));
    // 0x1a0b14: 0x401027  not         $v0, $v0
    ctx->pc = 0x1a0b14u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 2) | GPR_U64(ctx, 0)));
    // 0x1a0b18: 0x306800ff  andi        $t0, $v1, 0xFF
    ctx->pc = 0x1a0b18u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1a0b1c: 0x304600ff  andi        $a2, $v0, 0xFF
    ctx->pc = 0x1a0b1cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1a0b20: 0x3c05009c  lui         $a1, 0x9C
    ctx->pc = 0x1a0b20u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)156 << 16));
    // 0x1a0b24: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x1a0b24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x1a0b28: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x1a0b28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x1a0b2c: 0x9047daf0  lbu         $a3, -0x2510($v0)
    ctx->pc = 0x1a0b2cu;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294957808)));
    // 0x1a0b30: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a0b30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0b34: 0xe83824  and         $a3, $a3, $t0
    ctx->pc = 0x1a0b34u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 8));
    // 0x1a0b38: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x1a0b38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x1a0b3c: 0xa0a7daf0  sb          $a3, -0x2510($a1)
    ctx->pc = 0x1a0b3cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 4294957808), (uint8_t)GPR_U32(ctx, 7));
    // 0x1a0b40: 0x9063daf0  lbu         $v1, -0x2510($v1)
    ctx->pc = 0x1a0b40u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294957808)));
    // 0x1a0b44: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x1a0b44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x1a0b48: 0xc0682f8  jal         func_1A0BE0
    ctx->pc = 0x1A0B48u;
    SET_GPR_U32(ctx, 31, 0x1A0B50u);
    ctx->pc = 0x1A0B4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0B48u;
            // 0x1a0b4c: 0xa043daf0  sb          $v1, -0x2510($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 4294957808), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A0BE0u;
    if (runtime->hasFunction(0x1A0BE0u)) {
        auto targetFn = runtime->lookupFunction(0x1A0BE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0B50u; }
        if (ctx->pc != 0x1A0B50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A0BE0_0x1a0be0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0B50u; }
        if (ctx->pc != 0x1A0B50u) { return; }
    }
    ctx->pc = 0x1A0B50u;
label_1a0b50:
    // 0x1a0b50: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x1a0b50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1a0b54: 0x307000ff  andi        $s0, $v1, 0xFF
    ctx->pc = 0x1a0b54u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1a0b58: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x1a0b58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x1a0b5c: 0x9063daa0  lbu         $v1, -0x2560($v1)
    ctx->pc = 0x1a0b5cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294957728)));
    // 0x1a0b60: 0x203182a  slt         $v1, $s0, $v1
    ctx->pc = 0x1a0b60u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1a0b64: 0x5460ffe2  bnel        $v1, $zero, . + 4 + (-0x1E << 2)
    ctx->pc = 0x1A0B64u;
    {
        const bool branch_taken_0x1a0b64 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a0b64) {
            ctx->pc = 0x1A0B68u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0B64u;
            // 0x1a0b68: 0x320400ff  andi        $a0, $s0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1A0AF0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1a0af0;
        }
    }
    ctx->pc = 0x1A0B6Cu;
    // 0x1a0b6c: 0x0  nop
    ctx->pc = 0x1a0b6cu;
    // NOP
label_1a0b70:
    // 0x1a0b70: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1a0b70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a0b74: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1a0b74u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a0b78: 0x3e00008  jr          $ra
    ctx->pc = 0x1A0B78u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A0B7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0B78u;
            // 0x1a0b7c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A0B80u;
    ctx->pc = 0x1a0b80u;
}
