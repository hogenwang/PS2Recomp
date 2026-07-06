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

// Function: sub_00163500
// Address: 0x163500 - 0x1635f0
void sub_00163500_0x163500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00163500_0x163500");
#endif

    switch (ctx->pc) {
        case 0x163530u: goto label_163530;
        case 0x163598u: goto label_163598;
        case 0x1635a0u: goto label_1635a0;
        case 0x1635b4u: goto label_1635b4;
        case 0x1635c0u: goto label_1635c0;
        default: break;
    }

    ctx->pc = 0x163500u;

    // 0x163500: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x163500u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x163504: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x163504u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x163508: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x163508u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x16350c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x16350cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x163510: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x163510u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x163514: 0x8cb10010  lw          $s1, 0x10($a1)
    ctx->pc = 0x163514u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x163518: 0x8c900010  lw          $s0, 0x10($a0)
    ctx->pc = 0x163518u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x16351c: 0x922200dc  lbu         $v0, 0xDC($s1)
    ctx->pc = 0x16351cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 220)));
    // 0x163520: 0x960500ea  lhu         $a1, 0xEA($s0)
    ctx->pc = 0x163520u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 234)));
    // 0x163524: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x163524u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x163528: 0xc062734  jal         func_189CD0
    ctx->pc = 0x163528u;
    SET_GPR_U32(ctx, 31, 0x163530u);
    ctx->pc = 0x16352Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x163528u;
    // 0x16352c: 0x34448000  ori         $a0, $v0, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x189CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x189CD0u, 0x163528u, 0x163530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x163530u;
label_163530:
    // 0x163530: 0xc6210090  lwc1        $f1, 0x90($s1)
    ctx->pc = 0x163530u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x163534: 0x3c023a83  lui         $v0, 0x3A83
    ctx->pc = 0x163534u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14979 << 16));
    // 0x163538: 0x3442126f  ori         $v0, $v0, 0x126F
    ctx->pc = 0x163538u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4719);
    // 0x16353c: 0x2604009c  addiu       $a0, $s0, 0x9C
    ctx->pc = 0x16353cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 156));
    // 0x163540: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x163540u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x163544: 0x0  nop
    ctx->pc = 0x163544u;
    // NOP
    // 0x163548: 0xe6010090  swc1        $f1, 0x90($s0)
    ctx->pc = 0x163548u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
    // 0x16354c: 0xc6210094  lwc1        $f1, 0x94($s1)
    ctx->pc = 0x16354cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x163550: 0xe6010094  swc1        $f1, 0x94($s0)
    ctx->pc = 0x163550u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
    // 0x163554: 0xa60005ec  sh          $zero, 0x5EC($s0)
    ctx->pc = 0x163554u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1516), (uint16_t)GPR_U32(ctx, 0));
    // 0x163558: 0xa60005ee  sh          $zero, 0x5EE($s0)
    ctx->pc = 0x163558u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1518), (uint16_t)GPR_U32(ctx, 0));
    // 0x16355c: 0x9222008c  lbu         $v0, 0x8C($s1)
    ctx->pc = 0x16355cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 140)));
    // 0x163560: 0xa202008c  sb          $v0, 0x8C($s0)
    ctx->pc = 0x163560u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 140), (uint8_t)GPR_U32(ctx, 2));
    // 0x163564: 0x9202008c  lbu         $v0, 0x8C($s0)
    ctx->pc = 0x163564u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 140)));
    // 0x163568: 0x3442003c  ori         $v0, $v0, 0x3C
    ctx->pc = 0x163568u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)60);
    // 0x16356c: 0xa202008c  sb          $v0, 0x8C($s0)
    ctx->pc = 0x16356cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 140), (uint8_t)GPR_U32(ctx, 2));
    // 0x163570: 0x86220000  lh          $v0, 0x0($s1)
    ctx->pc = 0x163570u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x163574: 0xa6020000  sh          $v0, 0x0($s0)
    ctx->pc = 0x163574u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x163578: 0x86220002  lh          $v0, 0x2($s1)
    ctx->pc = 0x163578u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x16357c: 0xa6020002  sh          $v0, 0x2($s0)
    ctx->pc = 0x16357cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x163580: 0xae000048  sw          $zero, 0x48($s0)
    ctx->pc = 0x163580u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 0));
    // 0x163584: 0xae00004c  sw          $zero, 0x4C($s0)
    ctx->pc = 0x163584u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 0));
    // 0x163588: 0xc6210004  lwc1        $f1, 0x4($s1)
    ctx->pc = 0x163588u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16358c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x16358cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x163590: 0xc0c0dbc  jal         func_3036F0
    ctx->pc = 0x163590u;
    SET_GPR_U32(ctx, 31, 0x163598u);
    ctx->pc = 0x163594u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x163590u;
    // 0x163594: 0xe6000004  swc1        $f0, 0x4($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3036F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3036F0u, 0x163590u, 0x163598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x163598u;
label_163598:
    // 0x163598: 0xc0636a4  jal         func_18DA90
    ctx->pc = 0x163598u;
    SET_GPR_U32(ctx, 31, 0x1635A0u);
    ctx->pc = 0x16359Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x163598u;
    // 0x16359c: 0x960400ea  lhu         $a0, 0xEA($s0) (Delay Slot)
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 234)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18DA90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DA90u, 0x163598u, 0x1635A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1635A0u;
label_1635a0:
    // 0x1635a0: 0xae02009c  sw          $v0, 0x9C($s0)
    ctx->pc = 0x1635a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 2));
    // 0x1635a4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1635a4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1635a8: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x1635a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x1635ac: 0x244236e8  addiu       $v0, $v0, 0x36E8
    ctx->pc = 0x1635acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14056));
    // 0x1635b0: 0xae0200a0  sw          $v0, 0xA0($s0)
    ctx->pc = 0x1635b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 2));
label_1635b4:
    // 0x1635b4: 0x2604029c  addiu       $a0, $s0, 0x29C
    ctx->pc = 0x1635b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 668));
    // 0x1635b8: 0xc05cee4  jal         func_173B90
    ctx->pc = 0x1635B8u;
    SET_GPR_U32(ctx, 31, 0x1635C0u);
    ctx->pc = 0x1635BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1635B8u;
    // 0x1635bc: 0x2625029c  addiu       $a1, $s1, 0x29C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 668));
    ctx->in_delay_slot = false;
    ctx->pc = 0x173B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B90u, 0x1635B8u, 0x1635C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1635C0u;
label_1635c0:
    // 0x1635c0: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1635c0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1635c4: 0x26310028  addiu       $s1, $s1, 0x28
    ctx->pc = 0x1635c4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 40));
    // 0x1635c8: 0x2a430003  slti        $v1, $s2, 0x3
    ctx->pc = 0x1635c8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x1635cc: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1635CCu;
    {
        const bool branch_taken_0x1635cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1635D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1635CCu;
        // 0x1635d0: 0x26100028  addiu       $s0, $s0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1635cc) {
            ctx->pc = 0x1635B4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1635b4;
        }
    }
    ctx->pc = 0x1635D4u;
    // 0x1635d4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1635d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1635d8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1635d8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1635dc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1635dcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1635e0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1635e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1635e4: 0x3e00008  jr          $ra
    ctx->pc = 0x1635E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1635E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1635E4u;
        // 0x1635e8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1635E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1635ECu;
    // 0x1635ec: 0x0  nop
    ctx->pc = 0x1635ecu;
    // NOP
    if (ctx->pc == 0x1635ecu) { ctx->pc = 0x1635f0u; }
}
