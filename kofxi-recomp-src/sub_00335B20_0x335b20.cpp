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

// Function: sub_00335B20
// Address: 0x335b20 - 0x335bf0
void sub_00335B20_0x335b20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00335B20_0x335b20");
#endif

    switch (ctx->pc) {
        case 0x335b48u: goto label_335b48;
        case 0x335bbcu: goto label_335bbc;
        default: break;
    }

    ctx->pc = 0x335b20u;

    // 0x335b20: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x335b20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x335b24: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x335b24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x335b28: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x335b28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x335b2c: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x335b2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x335b30: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x335b30u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x335b34: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x335b34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x335b38: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x335b38u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x335b3c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x335b3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x335b40: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x335b40u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x335b44: 0x24b0fff0  addiu       $s0, $a1, -0x10
    ctx->pc = 0x335b44u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967280));
label_335b48:
    // 0x335b48: 0x82450000  lb          $a1, 0x0($s2)
    ctx->pc = 0x335b48u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x335b4c: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x335b4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x335b50: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x335b50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x335b54: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x335b54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x335b58: 0xffa30000  sd          $v1, 0x0($sp)
    ctx->pc = 0x335b58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    // 0x335b5c: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x335b5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
    // 0x335b60: 0x24a3ffe0  addiu       $v1, $a1, -0x20
    ctx->pc = 0x335b60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967264));
    // 0x335b64: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x335b64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
    // 0x335b68: 0x3062000f  andi        $v0, $v1, 0xF
    ctx->pc = 0x335b68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x335b6c: 0x4610004  bgez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x335B6Cu;
    {
        const bool branch_taken_0x335b6c = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x335B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335B6Cu;
        // 0x335b70: 0xffa40018  sd          $a0, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x335b6c) {
            ctx->pc = 0x335B80u;
            goto label_335b80;
        }
    }
    ctx->pc = 0x335B74u;
    // 0x335b74: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x335B74u;
    {
        const bool branch_taken_0x335b74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x335b74) {
            ctx->pc = 0x335B78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x335B74u;
            // 0x335b78: 0x24900  sll         $t1, $v0, 4 (Delay Slot)
            SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x335B84u;
            goto label_335b84;
        }
    }
    ctx->pc = 0x335B7Cu;
    // 0x335b7c: 0x2442fff0  addiu       $v0, $v0, -0x10
    ctx->pc = 0x335b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
label_335b80:
    // 0x335b80: 0x24900  sll         $t1, $v0, 4
    ctx->pc = 0x335b80u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_335b84:
    // 0x335b84: 0x24a3ffe0  addiu       $v1, $a1, -0x20
    ctx->pc = 0x335b84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967264));
    // 0x335b88: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x335B88u;
    {
        const bool branch_taken_0x335b88 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x335B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335B88u;
        // 0x335b8c: 0x31103  sra         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x335b88) {
            ctx->pc = 0x335B98u;
            goto label_335b98;
        }
    }
    ctx->pc = 0x335B90u;
    // 0x335b90: 0x2462000f  addiu       $v0, $v1, 0xF
    ctx->pc = 0x335b90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x335b94: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x335b94u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_335b98:
    // 0x335b98: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x335b98u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x335b9c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x335b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x335ba0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x335ba0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x335ba4: 0x244a0140  addiu       $t2, $v0, 0x140
    ctx->pc = 0x335ba4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), 320));
    // 0x335ba8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x335ba8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x335bac: 0x2406a833  addiu       $a2, $zero, -0x57CD
    ctx->pc = 0x335bacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294944819));
    // 0x335bb0: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x335bb0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x335bb4: 0xc0c0ba8  jal         func_302EA0
    ctx->pc = 0x335BB4u;
    SET_GPR_U32(ctx, 31, 0x335BBCu);
    ctx->pc = 0x335BB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x335BB4u;
    // 0x335bb8: 0xe0582d  daddu       $t3, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302EA0u, 0x335BB4u, 0x335BBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x335BBCu;
label_335bbc:
    // 0x335bbc: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x335bbcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x335bc0: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x335bc0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x335bc4: 0x2a230003  slti        $v1, $s1, 0x3
    ctx->pc = 0x335bc4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x335bc8: 0x1460ffdf  bnez        $v1, . + 4 + (-0x21 << 2)
    ctx->pc = 0x335BC8u;
    {
        const bool branch_taken_0x335bc8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x335BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335BC8u;
        // 0x335bcc: 0x26730010  addiu       $s3, $s3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x335bc8) {
            ctx->pc = 0x335B48u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_335b48;
        }
    }
    ctx->pc = 0x335BD0u;
    // 0x335bd0: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x335bd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x335bd4: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x335bd4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x335bd8: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x335bd8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x335bdc: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x335bdcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x335be0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x335be0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x335be4: 0x3e00008  jr          $ra
    ctx->pc = 0x335BE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x335BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335BE4u;
        // 0x335be8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x335BE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x335BECu;
    // 0x335bec: 0x0  nop
    ctx->pc = 0x335becu;
    // NOP
    if (ctx->pc == 0x335becu) { ctx->pc = 0x335bf0u; }
}
