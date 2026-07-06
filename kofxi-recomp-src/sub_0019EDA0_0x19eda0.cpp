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

// Function: sub_0019EDA0
// Address: 0x19eda0 - 0x19ee70
void sub_0019EDA0_0x19eda0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019EDA0_0x19eda0");
#endif

    switch (ctx->pc) {
        case 0x19edd8u: goto label_19edd8;
        default: break;
    }

    ctx->pc = 0x19eda0u;

    // 0x19eda0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x19eda0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x19eda4: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x19eda4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x19eda8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x19eda8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x19edac: 0x2442db94  addiu       $v0, $v0, -0x246C
    ctx->pc = 0x19edacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957972));
    // 0x19edb0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x19edb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x19edb4: 0x309000ff  andi        $s0, $a0, 0xFF
    ctx->pc = 0x19edb4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x19edb8: 0x1018c0  sll         $v1, $s0, 3
    ctx->pc = 0x19edb8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x19edbc: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x19edbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x19edc0: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x19edc0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x19edc4: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x19edc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x19edc8: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x19edc8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x19edcc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x19edccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x19edd0: 0xc05f0cc  jal         func_17C330
    ctx->pc = 0x19EDD0u;
    SET_GPR_U32(ctx, 31, 0x19EDD8u);
    ctx->pc = 0x19EDD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19EDD0u;
    // 0x19edd4: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17C330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17C330u, 0x19EDD0u, 0x19EDD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19EDD8u;
label_19edd8:
    // 0x19edd8: 0x2841000a  slti        $at, $v0, 0xA
    ctx->pc = 0x19edd8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x19eddc: 0x50200020  beql        $at, $zero, . + 4 + (0x20 << 2)
    ctx->pc = 0x19EDDCu;
    {
        const bool branch_taken_0x19eddc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x19eddc) {
            ctx->pc = 0x19EDE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19EDDCu;
            // 0x19ede0: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19EE60u;
            goto label_19ee60;
        }
    }
    ctx->pc = 0x19EDE4u;
    // 0x19ede4: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x19ede4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x19ede8: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x19ede8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x19edec: 0x2463b828  addiu       $v1, $v1, -0x47D8
    ctx->pc = 0x19edecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294948904));
    // 0x19edf0: 0x2484da58  addiu       $a0, $a0, -0x25A8
    ctx->pc = 0x19edf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957656));
    // 0x19edf4: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x19edf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x19edf8: 0x904021  addu        $t0, $a0, $s0
    ctx->pc = 0x19edf8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x19edfc: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x19edfcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x19ee00: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x19ee00u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x19ee04: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x19ee04u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x19ee08: 0x91070000  lbu         $a3, 0x0($t0)
    ctx->pc = 0x19ee08u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x19ee0c: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x19ee0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x19ee10: 0x2484b6f4  addiu       $a0, $a0, -0x490C
    ctx->pc = 0x19ee10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948596));
    // 0x19ee14: 0x33100  sll         $a2, $v1, 4
    ctx->pc = 0x19ee14u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x19ee18: 0x102840  sll         $a1, $s0, 1
    ctx->pc = 0x19ee18u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x19ee1c: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x19ee1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x19ee20: 0x863021  addu        $a2, $a0, $a2
    ctx->pc = 0x19ee20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x19ee24: 0x2463b6b0  addiu       $v1, $v1, -0x4950
    ctx->pc = 0x19ee24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294948528));
    // 0x19ee28: 0xa0c00000  sb          $zero, 0x0($a2)
    ctx->pc = 0x19ee28u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x19ee2c: 0x652021  addu        $a0, $v1, $a1
    ctx->pc = 0x19ee2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x19ee30: 0x34e30001  ori         $v1, $a3, 0x1
    ctx->pc = 0x19ee30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)1);
    // 0x19ee34: 0xa4800000  sh          $zero, 0x0($a0)
    ctx->pc = 0x19ee34u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x19ee38: 0xa1030000  sb          $v1, 0x0($t0)
    ctx->pc = 0x19ee38u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x19ee3c: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x19ee3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x19ee40: 0x2463b6b8  addiu       $v1, $v1, -0x4948
    ctx->pc = 0x19ee40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294948536));
    // 0x19ee44: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x19ee44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x19ee48: 0xa4600000  sh          $zero, 0x0($v1)
    ctx->pc = 0x19ee48u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x19ee4c: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x19ee4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x19ee50: 0x2463b6c0  addiu       $v1, $v1, -0x4940
    ctx->pc = 0x19ee50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294948544));
    // 0x19ee54: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x19ee54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x19ee58: 0xa4600000  sh          $zero, 0x0($v1)
    ctx->pc = 0x19ee58u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x19ee5c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x19ee5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_19ee60:
    // 0x19ee60: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x19ee60u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19ee64: 0x3e00008  jr          $ra
    ctx->pc = 0x19EE64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19EE68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EE64u;
        // 0x19ee68: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19EE64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19EE6Cu;
    // 0x19ee6c: 0x0  nop
    ctx->pc = 0x19ee6cu;
    // NOP
    if (ctx->pc == 0x19ee6cu) { ctx->pc = 0x19ee70u; }
}
