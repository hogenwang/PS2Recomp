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

// Function: sub_0019EC00
// Address: 0x19ec00 - 0x19ecc0
void sub_0019EC00_0x19ec00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019EC00_0x19ec00");
#endif

    switch (ctx->pc) {
        case 0x19ec3cu: goto label_19ec3c;
        case 0x19ec60u: goto label_19ec60;
        default: break;
    }

    ctx->pc = 0x19ec00u;

    // 0x19ec00: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x19ec00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x19ec04: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x19ec04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x19ec08: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x19ec08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x19ec0c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x19ec0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x19ec10: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x19ec10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x19ec14: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x19ec14u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ec18: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x19ec18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x19ec1c: 0x3c11009c  lui         $s1, 0x9C
    ctx->pc = 0x19ec1cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)156 << 16));
    // 0x19ec20: 0x9464da88  lhu         $a0, -0x2578($v1)
    ctx->pc = 0x19ec20u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294957704)));
    // 0x19ec24: 0x3c10009c  lui         $s0, 0x9C
    ctx->pc = 0x19ec24u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)156 << 16));
    // 0x19ec28: 0x2631db50  addiu       $s1, $s1, -0x24B0
    ctx->pc = 0x19ec28u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294957904));
    // 0x19ec2c: 0x2610b828  addiu       $s0, $s0, -0x47D8
    ctx->pc = 0x19ec2cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294948904));
    // 0x19ec30: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x19ec30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x19ec34: 0x3084fffe  andi        $a0, $a0, 0xFFFE
    ctx->pc = 0x19ec34u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65534);
    // 0x19ec38: 0xa464da88  sh          $a0, -0x2578($v1)
    ctx->pc = 0x19ec38u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4294957704), (uint16_t)GPR_U32(ctx, 4));
label_19ec3c:
    // 0x19ec3c: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x19ec3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x19ec40: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x19ec40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19ec44: 0x9065db10  lbu         $a1, -0x24F0($v1)
    ctx->pc = 0x19ec44u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294957840)));
    // 0x19ec48: 0x2441804  sllv        $v1, $a0, $s2
    ctx->pc = 0x19ec48u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 18) & 0x1F));
    // 0x19ec4c: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x19ec4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x19ec50: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x19EC50u;
    {
        const bool branch_taken_0x19ec50 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x19ec50) {
            ctx->pc = 0x19EC90u;
            goto label_19ec90;
        }
    }
    ctx->pc = 0x19EC58u;
    // 0x19ec58: 0xc05f0cc  jal         func_17C330
    ctx->pc = 0x19EC58u;
    SET_GPR_U32(ctx, 31, 0x19EC60u);
    ctx->pc = 0x19EC5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19EC58u;
    // 0x19ec5c: 0x8e240044  lw          $a0, 0x44($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17C330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17C330u, 0x19EC58u, 0x19EC60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19EC60u;
label_19ec60:
    // 0x19ec60: 0x2841000a  slti        $at, $v0, 0xA
    ctx->pc = 0x19ec60u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x19ec64: 0x1020000a  beqz        $at, . + 4 + (0xA << 2)
    ctx->pc = 0x19EC64u;
    {
        const bool branch_taken_0x19ec64 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x19ec64) {
            ctx->pc = 0x19EC90u;
            goto label_19ec90;
        }
    }
    ctx->pc = 0x19EC6Cu;
    // 0x19ec6c: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x19ec6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x19ec70: 0x24450001  addiu       $a1, $v0, 0x1
    ctx->pc = 0x19ec70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x19ec74: 0x9466da88  lhu         $a2, -0x2578($v1)
    ctx->pc = 0x19ec74u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294957704)));
    // 0x19ec78: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x19ec78u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x19ec7c: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x19ec7cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x19ec80: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x19ec80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x19ec84: 0xa06555d8  sb          $a1, 0x55D8($v1)
    ctx->pc = 0x19ec84u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 21976), (uint8_t)GPR_U32(ctx, 5));
    // 0x19ec88: 0x34c30001  ori         $v1, $a2, 0x1
    ctx->pc = 0x19ec88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)1);
    // 0x19ec8c: 0xa483da88  sh          $v1, -0x2578($a0)
    ctx->pc = 0x19ec8cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4294957704), (uint16_t)GPR_U32(ctx, 3));
label_19ec90:
    // 0x19ec90: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x19ec90u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x19ec94: 0x2a430004  slti        $v1, $s2, 0x4
    ctx->pc = 0x19ec94u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x19ec98: 0x26310248  addiu       $s1, $s1, 0x248
    ctx->pc = 0x19ec98u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 584));
    // 0x19ec9c: 0x1460ffe7  bnez        $v1, . + 4 + (-0x19 << 2)
    ctx->pc = 0x19EC9Cu;
    {
        const bool branch_taken_0x19ec9c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x19ECA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EC9Cu;
        // 0x19eca0: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ec9c) {
            ctx->pc = 0x19EC3Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_19ec3c;
        }
    }
    ctx->pc = 0x19ECA4u;
    // 0x19eca4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x19eca4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19eca8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x19eca8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19ecac: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x19ecacu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19ecb0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x19ecb0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19ecb4: 0x3e00008  jr          $ra
    ctx->pc = 0x19ECB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19ECB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19ECB4u;
        // 0x19ecb8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19ECB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19ECBCu;
    // 0x19ecbc: 0x0  nop
    ctx->pc = 0x19ecbcu;
    // NOP
}
