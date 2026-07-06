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

// Function: sub_0011ACC0
// Address: 0x11acc0 - 0x11ad70
void sub_0011ACC0_0x11acc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011ACC0_0x11acc0");
#endif

    switch (ctx->pc) {
        case 0x11ad1cu: goto label_11ad1c;
        case 0x11ad48u: goto label_11ad48;
        case 0x11ad58u: goto label_11ad58;
        default: break;
    }

    ctx->pc = 0x11acc0u;

    // 0x11acc0: 0x3c0f7fff  lui         $t7, 0x7FFF
    ctx->pc = 0x11acc0u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)32767 << 16));
    // 0x11acc4: 0x440b6000  mfc1        $t3, $f12
    ctx->pc = 0x11acc4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[12], sizeof(bits)); SET_GPR_U32(ctx, 11, bits); }
    // 0x11acc8: 0x35efffff  ori         $t7, $t7, 0xFFFF
    ctx->pc = 0x11acc8u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)65535);
    // 0x11accc: 0x440c6000  mfc1        $t4, $f12
    ctx->pc = 0x11acccu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[12], sizeof(bits)); SET_GPR_U32(ctx, 12, bits); }
    // 0x11acd0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x11acd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x11acd4: 0x16f7824  and         $t7, $t3, $t7
    ctx->pc = 0x11acd4u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 11) & GPR_U64(ctx, 15));
    // 0x11acd8: 0x3c0e007f  lui         $t6, 0x7F
    ctx->pc = 0x11acd8u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)127 << 16));
    // 0x11acdc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x11acdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x11ace0: 0x35ceffff  ori         $t6, $t6, 0xFFFF
    ctx->pc = 0x11ace0u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | (uint64_t)(uint16_t)65535);
    // 0x11ace4: 0xe7b40008  swc1        $f20, 0x8($sp)
    ctx->pc = 0x11ace4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x11ace8: 0xf6dc2  srl         $t5, $t7, 23
    ctx->pc = 0x11ace8u;
    SET_GPR_S32(ctx, 13, (int32_t)SRL32(GPR_U32(ctx, 15), 23));
    // 0x11acec: 0x1cf702b  sltu        $t6, $t6, $t7
    ctx->pc = 0x11acecu;
    SET_GPR_U64(ctx, 14, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)GPR_U64(ctx, 15)) ? 1 : 0);
    // 0x11acf0: 0x11c0000a  beqz        $t6, . + 4 + (0xA << 2)
    ctx->pc = 0x11ACF0u;
    {
        const bool branch_taken_0x11acf0 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        ctx->pc = 0x11ACF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11ACF0u;
        // 0x11acf4: 0x1a46821  addu        $t5, $t5, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11acf0) {
            ctx->pc = 0x11AD1Cu;
            goto label_11ad1c;
        }
    }
    ctx->pc = 0x11ACF8u;
    // 0x11acf8: 0x29af0100  slti        $t7, $t5, 0x100
    ctx->pc = 0x11acf8u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 13) < (int64_t)(int32_t)256) ? 1 : 0);
    // 0x11acfc: 0x11e00011  beqz        $t7, . + 4 + (0x11 << 2)
    ctx->pc = 0x11ACFCu;
    {
        const bool branch_taken_0x11acfc = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x11AD00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11ACFCu;
        // 0x11ad00: 0x3c0f003e  lui         $t7, 0x3E (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)62 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11acfc) {
            ctx->pc = 0x11AD44u;
            goto label_11ad44;
        }
    }
    ctx->pc = 0x11AD04u;
    // 0x11ad04: 0x19a0000a  blez        $t5, . + 4 + (0xA << 2)
    ctx->pc = 0x11AD04u;
    {
        const bool branch_taken_0x11ad04 = (GPR_S32(ctx, 13) <= 0);
        ctx->pc = 0x11AD08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11AD04u;
        // 0x11ad08: 0x3c0f807f  lui         $t7, 0x807F (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)32895 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ad04) {
            ctx->pc = 0x11AD30u;
            goto label_11ad30;
        }
    }
    ctx->pc = 0x11AD0Cu;
    // 0x11ad0c: 0xd75c0  sll         $t6, $t5, 23
    ctx->pc = 0x11ad0cu;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 13), 23));
    // 0x11ad10: 0x35efffff  ori         $t7, $t7, 0xFFFF
    ctx->pc = 0x11ad10u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)65535);
    // 0x11ad14: 0x16f7824  and         $t7, $t3, $t7
    ctx->pc = 0x11ad14u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 11) & GPR_U64(ctx, 15));
    // 0x11ad18: 0x1ee6025  or          $t4, $t7, $t6
    ctx->pc = 0x11ad18u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 15) | GPR_U64(ctx, 14));
label_11ad1c:
    // 0x11ad1c: 0x448c0000  mtc1        $t4, $f0
    ctx->pc = 0x11ad1cu;
    { uint32_t bits = GPR_U32(ctx, 12); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11ad20: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x11ad20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11ad24: 0xc7b40008  lwc1        $f20, 0x8($sp)
    ctx->pc = 0x11ad24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x11ad28: 0x3e00008  jr          $ra
    ctx->pc = 0x11AD28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11AD2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11AD28u;
        // 0x11ad2c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11AD28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11AD30u;
label_11ad30:
    // 0x11ad30: 0x340fc350  ori         $t7, $zero, 0xC350
    ctx->pc = 0x11ad30u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)50000);
    // 0x11ad34: 0x1e4782a  slt         $t7, $t7, $a0
    ctx->pc = 0x11ad34u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 15) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x11ad38: 0x11e0000a  beqz        $t7, . + 4 + (0xA << 2)
    ctx->pc = 0x11AD38u;
    {
        const bool branch_taken_0x11ad38 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x11AD3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11AD38u;
        // 0x11ad3c: 0x3c0f003e  lui         $t7, 0x3E (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)62 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ad38) {
            ctx->pc = 0x11AD64u;
            goto label_11ad64;
        }
    }
    ctx->pc = 0x11AD40u;
    // 0x11ad40: 0x3c0f003e  lui         $t7, 0x3E
    ctx->pc = 0x11ad40u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)62 << 16));
label_11ad44:
    // 0x11ad44: 0x25efb180  addiu       $t7, $t7, -0x4E80
    ctx->pc = 0x11ad44u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294947200));
label_11ad48:
    // 0x11ad48: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x11ad48u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x11ad4c: 0xc5f40000  lwc1        $f20, 0x0($t7)
    ctx->pc = 0x11ad4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x11ad50: 0xc046abe  jal         func_11AAF8
    ctx->pc = 0x11AD50u;
    SET_GPR_U32(ctx, 31, 0x11AD58u);
    ctx->pc = 0x11AD54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11AD50u;
    // 0x11ad54: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x11AAF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11AAF8u, 0x11AD50u, 0x11AD58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11AD58u;
label_11ad58:
    // 0x11ad58: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x11ad58u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x11ad5c: 0x1000ffef  b           . + 4 + (-0x11 << 2)
    ctx->pc = 0x11AD5Cu;
    {
        const bool branch_taken_0x11ad5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11AD60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11AD5Cu;
        // 0x11ad60: 0x440c0000  mfc1        $t4, $f0 (Delay Slot)
        { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 12, bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ad5c) {
            ctx->pc = 0x11AD1Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_11ad1c;
        }
    }
    ctx->pc = 0x11AD64u;
label_11ad64:
    // 0x11ad64: 0x1000fff8  b           . + 4 + (-0x8 << 2)
    ctx->pc = 0x11AD64u;
    {
        const bool branch_taken_0x11ad64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11AD68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11AD64u;
        // 0x11ad68: 0x25efb184  addiu       $t7, $t7, -0x4E7C (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294947204));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ad64) {
            ctx->pc = 0x11AD48u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_11ad48;
        }
    }
    ctx->pc = 0x11AD6Cu;
    // 0x11ad6c: 0x0  nop
    ctx->pc = 0x11ad6cu;
    // NOP
    if (ctx->pc == 0x11ad6cu) { ctx->pc = 0x11ad70u; }
}
