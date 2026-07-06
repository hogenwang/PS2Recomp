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

// Function: sub_001852A0
// Address: 0x1852a0 - 0x185330
void sub_001852A0_0x1852a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001852A0_0x1852a0");
#endif

    switch (ctx->pc) {
        case 0x1852bcu: goto label_1852bc;
        case 0x1852d4u: goto label_1852d4;
        case 0x185310u: goto label_185310;
        default: break;
    }

    ctx->pc = 0x1852a0u;

    // 0x1852a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1852a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1852a4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1852a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1852a8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1852a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1852ac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1852acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1852b0: 0x8c900010  lw          $s0, 0x10($a0)
    ctx->pc = 0x1852b0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1852b4: 0xc0614cc  jal         func_185330
    ctx->pc = 0x1852B4u;
    SET_GPR_U32(ctx, 31, 0x1852BCu);
    ctx->pc = 0x1852B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1852B4u;
    // 0x1852b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185330u, 0x1852B4u, 0x1852BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1852BCu;
label_1852bc:
    // 0x1852bc: 0x28c3c  dsll32      $s1, $v0, 16
    ctx->pc = 0x1852bcu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1852c0: 0x118c3f  dsra32      $s1, $s1, 16
    ctx->pc = 0x1852c0u;
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 16));
    // 0x1852c4: 0x6220013  bltzl       $s1, . + 4 + (0x13 << 2)
    ctx->pc = 0x1852C4u;
    {
        const bool branch_taken_0x1852c4 = (GPR_S32(ctx, 17) < 0);
        if (branch_taken_0x1852c4) {
            ctx->pc = 0x1852C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1852C4u;
            // 0x1852c8: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x185314u;
            goto label_185314;
        }
    }
    ctx->pc = 0x1852CCu;
    // 0x1852cc: 0xc062948  jal         func_18A520
    ctx->pc = 0x1852CCu;
    SET_GPR_U32(ctx, 31, 0x1852D4u);
    ctx->pc = 0x1852D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1852CCu;
    // 0x1852d0: 0x92040000  lbu         $a0, 0x0($s0) (Delay Slot)
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A520u, 0x1852CCu, 0x1852D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1852D4u;
label_1852d4:
    // 0x1852d4: 0x92050000  lbu         $a1, 0x0($s0)
    ctx->pc = 0x1852d4u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1852d8: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x1852d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x1852dc: 0x2463db55  addiu       $v1, $v1, -0x24AB
    ctx->pc = 0x1852dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957909));
    // 0x1852e0: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x1852e0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x1852e4: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1852e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1852e8: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x1852e8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x1852ec: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1852ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1852f0: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x1852f0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x1852f4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1852f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1852f8: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x1852f8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1852fc: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1852FCu;
    {
        const bool branch_taken_0x1852fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1852fc) {
            ctx->pc = 0x185310u;
            goto label_185310;
        }
    }
    ctx->pc = 0x185304u;
    // 0x185304: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x185304u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185308: 0xc06153c  jal         func_1854F0
    ctx->pc = 0x185308u;
    SET_GPR_U32(ctx, 31, 0x185310u);
    ctx->pc = 0x18530Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x185308u;
    // 0x18530c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1854F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1854F0u, 0x185308u, 0x185310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x185310u;
label_185310:
    // 0x185310: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x185310u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_185314:
    // 0x185314: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x185314u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x185318: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x185318u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18531c: 0x3e00008  jr          $ra
    ctx->pc = 0x18531Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x185320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18531Cu;
        // 0x185320: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18531Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x185324u;
    // 0x185324: 0x0  nop
    ctx->pc = 0x185324u;
    // NOP
    // 0x185328: 0x0  nop
    ctx->pc = 0x185328u;
    // NOP
    // 0x18532c: 0x0  nop
    ctx->pc = 0x18532cu;
    // NOP
    if (ctx->pc == 0x18532cu) { ctx->pc = 0x185330u; }
}
