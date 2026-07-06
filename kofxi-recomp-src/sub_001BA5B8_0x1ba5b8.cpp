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

// Function: sub_001BA5B8
// Address: 0x1ba5b8 - 0x1ba638
void sub_001BA5B8_0x1ba5b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BA5B8_0x1ba5b8");
#endif

    switch (ctx->pc) {
        case 0x1ba628u: goto label_1ba628;
        default: break;
    }

    ctx->pc = 0x1ba5b8u;

    // 0x1ba5b8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ba5b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1ba5bc: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x1ba5bcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ba5c0: 0x14e00007  bnez        $a3, . + 4 + (0x7 << 2)
    ctx->pc = 0x1BA5C0u;
    {
        const bool branch_taken_0x1ba5c0 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BA5C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA5C0u;
        // 0x1ba5c4: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba5c0) {
            ctx->pc = 0x1BA5E0u;
            goto label_1ba5e0;
        }
    }
    ctx->pc = 0x1BA5C8u;
    // 0x1ba5c8: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1ba5c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x1ba5cc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ba5ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ba5d0: 0x248483e8  addiu       $a0, $a0, -0x7C18
    ctx->pc = 0x1ba5d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294935528));
    // 0x1ba5d4: 0x806ba0a  j           func_1AE828
    ctx->pc = 0x1BA5D4u;
    ctx->pc = 0x1BA5D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BA5D4u;
    // 0x1ba5d8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE828u;
    sub_001AE828_0x1ae828(rdram, ctx, runtime); return;
    ctx->pc = 0x1BA5DCu;
    // 0x1ba5dc: 0x0  nop
    ctx->pc = 0x1ba5dcu;
    // NOP
label_1ba5e0:
    // 0x1ba5e0: 0x84e6003c  lh          $a2, 0x3C($a3)
    ctx->pc = 0x1ba5e0u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 60)));
    // 0x1ba5e4: 0x3c013f59  lui         $at, 0x3F59
    ctx->pc = 0x1ba5e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16217 << 16));
    // 0x1ba5e8: 0x34219999  ori         $at, $at, 0x9999
    ctx->pc = 0x1ba5e8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39321);
    // 0x1ba5ec: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1ba5ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ba5f0: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x1ba5f0u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ba5f4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1ba5f4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1ba5f8: 0x632c0  sll         $a2, $a2, 11
    ctx->pc = 0x1ba5f8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 11));
    // 0x1ba5fc: 0x8ce30008  lw          $v1, 0x8($a3)
    ctx->pc = 0x1ba5fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x1ba600: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x1ba600u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ba604: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1ba604u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1ba608: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1ba608u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1ba60c: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x1ba60cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1ba610: 0x22c00  sll         $a1, $v0, 16
    ctx->pc = 0x1ba610u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x1ba614: 0xa4e2003e  sh          $v0, 0x3E($a3)
    ctx->pc = 0x1ba614u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 62), (uint16_t)GPR_U32(ctx, 2));
    // 0x1ba618: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1BA618u;
    {
        const bool branch_taken_0x1ba618 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA61Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA618u;
        // 0x1ba61c: 0x52943  sra         $a1, $a1, 5 (Delay Slot)
        SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba618) {
            ctx->pc = 0x1BA628u;
            goto label_1ba628;
        }
    }
    ctx->pc = 0x1BA620u;
    // 0x1ba620: 0xc06de5a  jal         func_1B7968
    ctx->pc = 0x1BA620u;
    SET_GPR_U32(ctx, 31, 0x1BA628u);
    ctx->pc = 0x1B7968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7968u, 0x1BA620u, 0x1BA628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BA628u;
label_1ba628:
    // 0x1ba628: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ba628u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ba62c: 0x3e00008  jr          $ra
    ctx->pc = 0x1BA62Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BA630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA62Cu;
        // 0x1ba630: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BA62Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BA634u;
    // 0x1ba634: 0x0  nop
    ctx->pc = 0x1ba634u;
    // NOP
    if (ctx->pc == 0x1ba634u) { ctx->pc = 0x1ba638u; }
}
