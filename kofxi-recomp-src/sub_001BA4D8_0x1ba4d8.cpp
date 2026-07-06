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

// Function: sub_001BA4D8
// Address: 0x1ba4d8 - 0x1ba5b8
void sub_001BA4D8_0x1ba4d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BA4D8_0x1ba4d8");
#endif

    switch (ctx->pc) {
        case 0x1ba57cu: goto label_1ba57c;
        case 0x1ba59cu: goto label_1ba59c;
        case 0x1ba5a4u: goto label_1ba5a4;
        default: break;
    }

    ctx->pc = 0x1ba4d8u;

    // 0x1ba4d8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ba4d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1ba4dc: 0x80482d  daddu       $t1, $a0, $zero
    ctx->pc = 0x1ba4dcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ba4e0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ba4e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ba4e4: 0x15200006  bnez        $t1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1BA4E4u;
    {
        const bool branch_taken_0x1ba4e4 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BA4E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA4E4u;
        // 0x1ba4e8: 0xa0502d  daddu       $t2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba4e4) {
            ctx->pc = 0x1BA500u;
            goto label_1ba500;
        }
    }
    ctx->pc = 0x1BA4ECu;
    // 0x1ba4ec: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1ba4ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x1ba4f0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ba4f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ba4f4: 0x248483b8  addiu       $a0, $a0, -0x7C48
    ctx->pc = 0x1ba4f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294935480));
    // 0x1ba4f8: 0x806ba0a  j           func_1AE828
    ctx->pc = 0x1BA4F8u;
    ctx->pc = 0x1BA4FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BA4F8u;
    // 0x1ba4fc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE828u;
    sub_001AE828_0x1ae828(rdram, ctx, runtime); return;
    ctx->pc = 0x1BA500u;
label_1ba500:
    // 0x1ba500: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x1ba500u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ba504: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1ba504u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1ba508: 0x8527003c  lh          $a3, 0x3C($t1)
    ctx->pc = 0x1ba508u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 60)));
    // 0x1ba50c: 0x8d280008  lw          $t0, 0x8($t1)
    ctx->pc = 0x1ba50cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 8)));
    // 0x1ba510: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x1ba510u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ba514: 0x100202d  daddu       $a0, $t0, $zero
    ctx->pc = 0x1ba514u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ba518: 0x632c0  sll         $a2, $a2, 11
    ctx->pc = 0x1ba518u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 11));
    // 0x1ba51c: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x1ba51cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x1ba520: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1ba520u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1ba524: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x1ba524u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1ba528: 0x2465001f  addiu       $a1, $v1, 0x1F
    ctx->pc = 0x1ba528u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 31));
    // 0x1ba52c: 0x28620000  slti        $v0, $v1, 0x0
    ctx->pc = 0x1ba52cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x1ba530: 0xa2180b  movn        $v1, $a1, $v0
    ctx->pc = 0x1ba530u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 5));
    // 0x1ba534: 0x31943  sra         $v1, $v1, 5
    ctx->pc = 0x1ba534u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 5));
    // 0x1ba538: 0x6a1818  mult        $v1, $v1, $t2
    ctx->pc = 0x1ba538u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 10); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1ba53c: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x1ba53cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1ba540: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1ba540u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1ba544: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x1ba544u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1ba548: 0x244507ff  addiu       $a1, $v0, 0x7FF
    ctx->pc = 0x1ba548u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 2047));
    // 0x1ba54c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1ba54cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ba550: 0x28420000  slti        $v0, $v0, 0x0
    ctx->pc = 0x1ba550u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x1ba554: 0xa2180b  movn        $v1, $a1, $v0
    ctx->pc = 0x1ba554u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 5));
    // 0x1ba558: 0x31ac3  sra         $v1, $v1, 11
    ctx->pc = 0x1ba558u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 11));
    // 0x1ba55c: 0x67102a  slt         $v0, $v1, $a3
    ctx->pc = 0x1ba55cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x1ba560: 0x62380b  movn        $a3, $v1, $v0
    ctx->pc = 0x1ba560u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 3));
    // 0x1ba564: 0x72c00  sll         $a1, $a3, 16
    ctx->pc = 0x1ba564u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
    // 0x1ba568: 0xa527003e  sh          $a3, 0x3E($t1)
    ctx->pc = 0x1ba568u;
    WRITE16(ADD32(GPR_U32(ctx, 9), 62), (uint16_t)GPR_U32(ctx, 7));
    // 0x1ba56c: 0x11000003  beqz        $t0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1BA56Cu;
    {
        const bool branch_taken_0x1ba56c = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA56Cu;
        // 0x1ba570: 0x52943  sra         $a1, $a1, 5 (Delay Slot)
        SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba56c) {
            ctx->pc = 0x1BA57Cu;
            goto label_1ba57c;
        }
    }
    ctx->pc = 0x1BA574u;
    // 0x1ba574: 0xc06de5a  jal         func_1B7968
    ctx->pc = 0x1BA574u;
    SET_GPR_U32(ctx, 31, 0x1BA57Cu);
    ctx->pc = 0x1B7968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7968u, 0x1BA574u, 0x1BA57Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BA57Cu;
label_1ba57c:
    // 0x1ba57c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ba57cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ba580: 0x3e00008  jr          $ra
    ctx->pc = 0x1BA580u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BA584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA580u;
        // 0x1ba584: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BA580u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BA588u;
    // 0x1ba588: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ba588u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1ba58c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ba58cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1ba590: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1ba590u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1ba594: 0xc06b49a  jal         func_1AD268
    ctx->pc = 0x1BA594u;
    SET_GPR_U32(ctx, 31, 0x1BA59Cu);
    ctx->pc = 0x1BA598u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BA594u;
    // 0x1ba598: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AD268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AD268u, 0x1BA594u, 0x1BA59Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BA59Cu;
label_1ba59c:
    // 0x1ba59c: 0xc06e96e  jal         func_1BA5B8
    ctx->pc = 0x1BA59Cu;
    SET_GPR_U32(ctx, 31, 0x1BA5A4u);
    ctx->pc = 0x1BA5A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BA59Cu;
    // 0x1ba5a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BA5B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BA5B8u, 0x1BA59Cu, 0x1BA5A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BA5A4u;
label_1ba5a4:
    // 0x1ba5a4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ba5a4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ba5a8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1ba5a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ba5ac: 0x806b49c  j           func_1AD270
    ctx->pc = 0x1BA5ACu;
    ctx->pc = 0x1BA5B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BA5ACu;
    // 0x1ba5b0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AD270u;
    sub_001AD270_0x1ad270(rdram, ctx, runtime); return;
    ctx->pc = 0x1BA5B4u;
    // 0x1ba5b4: 0x0  nop
    ctx->pc = 0x1ba5b4u;
    // NOP
    if (ctx->pc == 0x1ba5b4u) { ctx->pc = 0x1ba5b8u; }
}
