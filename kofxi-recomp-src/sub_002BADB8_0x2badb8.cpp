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

// Function: sub_002BADB8
// Address: 0x2badb8 - 0x2bae50
void sub_002BADB8_0x2badb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BADB8_0x2badb8");
#endif

    switch (ctx->pc) {
        case 0x2badccu: goto label_2badcc;
        case 0x2badf0u: goto label_2badf0;
        case 0x2bae04u: goto label_2bae04;
        case 0x2bae18u: goto label_2bae18;
        case 0x2bae38u: goto label_2bae38;
        default: break;
    }

    ctx->pc = 0x2badb8u;

    // 0x2badb8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2badb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2badbc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2badbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2badc0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2badc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2badc4: 0xc0a8bf6  jal         func_2A2FD8
    ctx->pc = 0x2BADC4u;
    SET_GPR_U32(ctx, 31, 0x2BADCCu);
    ctx->pc = 0x2BADC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BADC4u;
    // 0x2badc8: 0x240400d0  addiu       $a0, $zero, 0xD0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A2FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A2FD8u, 0x2BADC4u, 0x2BADCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BADCCu;
label_2badcc:
    // 0x2badcc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2badccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2badd0: 0x16000009  bnez        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2BADD0u;
    {
        const bool branch_taken_0x2badd0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BADD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BADD0u;
        // 0x2badd4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2badd0) {
            ctx->pc = 0x2BADF8u;
            goto label_2badf8;
        }
    }
    ctx->pc = 0x2BADD8u;
    // 0x2badd8: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x2badd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2baddc: 0x240500bd  addiu       $a1, $zero, 0xBD
    ctx->pc = 0x2baddcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 189));
    // 0x2bade0: 0x24060021  addiu       $a2, $zero, 0x21
    ctx->pc = 0x2bade0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x2bade4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2bade4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bade8: 0xc0a5648  jal         func_295920
    ctx->pc = 0x2BADE8u;
    SET_GPR_U32(ctx, 31, 0x2BADF0u);
    ctx->pc = 0x2BADECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BADE8u;
    // 0x2badec: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295920u, 0x2BADE8u, 0x2BADF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BADF0u;
label_2badf0:
    // 0x2badf0: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x2BADF0u;
    {
        const bool branch_taken_0x2badf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BADF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BADF0u;
        // 0x2badf4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2badf0) {
            ctx->pc = 0x2BAE3Cu;
            goto label_2bae3c;
        }
    }
    ctx->pc = 0x2BADF8u;
label_2badf8:
    // 0x2badf8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2badf8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2badfc: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x2BADFCu;
    SET_GPR_U32(ctx, 31, 0x2BAE04u);
    ctx->pc = 0x2BAE00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BADFCu;
    // 0x2bae00: 0x240600d0  addiu       $a2, $zero, 0xD0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1272D8u, 0x2BADFCu, 0x2BAE04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BAE04u;
label_2bae04:
    // 0x2bae04: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2bae04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2bae08: 0x24020130  addiu       $v0, $zero, 0x130
    ctx->pc = 0x2bae08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 304));
    // 0x2bae0c: 0xae030098  sw          $v1, 0x98($s0)
    ctx->pc = 0x2bae0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 152), GPR_U32(ctx, 3));
    // 0x2bae10: 0xc0a8df2  jal         func_2A37C8
    ctx->pc = 0x2BAE10u;
    SET_GPR_U32(ctx, 31, 0x2BAE18u);
    ctx->pc = 0x2BAE14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BAE10u;
    // 0x2bae14: 0xfe0200a0  sd          $v0, 0xA0($s0) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 16), 160), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A37C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A37C8u, 0x2BAE10u, 0x2BAE18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BAE18u;
label_2bae18:
    // 0x2bae18: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x2bae18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x2bae1c: 0xae0000c4  sw          $zero, 0xC4($s0)
    ctx->pc = 0x2bae1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 196), GPR_U32(ctx, 0));
    // 0x2bae20: 0x8c647cd4  lw          $a0, 0x7CD4($v1)
    ctx->pc = 0x2bae20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 31956)));
    // 0x2bae24: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2bae24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bae28: 0xae0000c8  sw          $zero, 0xC8($s0)
    ctx->pc = 0x2bae28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 200), GPR_U32(ctx, 0));
    // 0x2bae2c: 0x260600bc  addiu       $a2, $s0, 0xBC
    ctx->pc = 0x2bae2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 188));
    // 0x2bae30: 0xc0a5d8e  jal         func_297638
    ctx->pc = 0x2BAE30u;
    SET_GPR_U32(ctx, 31, 0x2BAE38u);
    ctx->pc = 0x2BAE34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BAE30u;
    // 0x2bae34: 0xae0200a8  sw          $v0, 0xA8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 168), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x297638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x297638u, 0x2BAE30u, 0x2BAE38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BAE38u;
label_2bae38:
    // 0x2bae38: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2bae38u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2bae3c:
    // 0x2bae3c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2bae3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2bae40: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2bae40u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bae44: 0x3e00008  jr          $ra
    ctx->pc = 0x2BAE44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BAE48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAE44u;
        // 0x2bae48: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BAE44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BAE4Cu;
    // 0x2bae4c: 0x0  nop
    ctx->pc = 0x2bae4cu;
    // NOP
    if (ctx->pc == 0x2bae4cu) { ctx->pc = 0x2bae50u; }
}
