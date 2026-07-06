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

// Function: sub_0013C870
// Address: 0x13c870 - 0x13c980
void sub_0013C870_0x13c870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013C870_0x13c870");
#endif

    switch (ctx->pc) {
        case 0x13c884u: goto label_13c884;
        case 0x13c908u: goto label_13c908;
        default: break;
    }

    ctx->pc = 0x13c870u;

    // 0x13c870: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x13c870u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x13c874: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x13c874u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x13c878: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x13c878u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x13c87c: 0xc067c48  jal         func_19F120
    ctx->pc = 0x13C87Cu;
    SET_GPR_U32(ctx, 31, 0x13C884u);
    ctx->pc = 0x13C880u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13C87Cu;
    // 0x13c880: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F120u, 0x13C87Cu, 0x13C884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13C884u;
label_13c884:
    // 0x13c884: 0x3c034080  lui         $v1, 0x4080
    ctx->pc = 0x13c884u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16512 << 16));
    // 0x13c888: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x13c888u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x13c88c: 0x0  nop
    ctx->pc = 0x13c88cu;
    // NOP
    // 0x13c890: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x13c890u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x13c894: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x13c894u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x13c898: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x13c898u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x13c89c: 0x0  nop
    ctx->pc = 0x13c89cu;
    // NOP
    // 0x13c8a0: 0x54600033  bnel        $v1, $zero, . + 4 + (0x33 << 2)
    ctx->pc = 0x13C8A0u;
    {
        const bool branch_taken_0x13c8a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x13c8a0) {
            ctx->pc = 0x13C8A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13C8A0u;
            // 0x13c8a4: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13C970u;
            goto label_13c970;
        }
    }
    ctx->pc = 0x13C8A8u;
    // 0x13c8a8: 0x8e0700dc  lw          $a3, 0xDC($s0)
    ctx->pc = 0x13c8a8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 220)));
    // 0x13c8ac: 0x3c05009c  lui         $a1, 0x9C
    ctx->pc = 0x13c8acu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)156 << 16));
    // 0x13c8b0: 0x3c06009c  lui         $a2, 0x9C
    ctx->pc = 0x13c8b0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)156 << 16));
    // 0x13c8b4: 0x24a5db55  addiu       $a1, $a1, -0x24AB
    ctx->pc = 0x13c8b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957909));
    // 0x13c8b8: 0x24c6db53  addiu       $a2, $a2, -0x24AD
    ctx->pc = 0x13c8b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294957907));
    // 0x13c8bc: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x13c8bcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c8c0: 0x30e7000c  andi        $a3, $a3, 0xC
    ctx->pc = 0x13c8c0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)12);
    // 0x13c8c4: 0x74082  srl         $t0, $a3, 2
    ctx->pc = 0x13c8c4u;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 7), 2));
    // 0x13c8c8: 0x838c0  sll         $a3, $t0, 3
    ctx->pc = 0x13c8c8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x13c8cc: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x13c8ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x13c8d0: 0x738c0  sll         $a3, $a3, 3
    ctx->pc = 0x13c8d0u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x13c8d4: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x13c8d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x13c8d8: 0x738c0  sll         $a3, $a3, 3
    ctx->pc = 0x13c8d8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x13c8dc: 0xa72821  addu        $a1, $a1, $a3
    ctx->pc = 0x13c8dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x13c8e0: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x13c8e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x13c8e4: 0x90a50000  lbu         $a1, 0x0($a1)
    ctx->pc = 0x13c8e4u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x13c8e8: 0x90ca0000  lbu         $t2, 0x0($a2)
    ctx->pc = 0x13c8e8u;
    SET_GPR_U32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x13c8ec: 0x18a00016  blez        $a1, . + 4 + (0x16 << 2)
    ctx->pc = 0x13C8ECu;
    {
        const bool branch_taken_0x13c8ec = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x13C8F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C8ECu;
        // 0x13c8f0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c8ec) {
            ctx->pc = 0x13C948u;
            goto label_13c948;
        }
    }
    ctx->pc = 0x13C8F4u;
    // 0x13c8f4: 0x3c05009c  lui         $a1, 0x9C
    ctx->pc = 0x13c8f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)156 << 16));
    // 0x13c8f8: 0x24a5db50  addiu       $a1, $a1, -0x24B0
    ctx->pc = 0x13c8f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957904));
    // 0x13c8fc: 0xa73021  addu        $a2, $a1, $a3
    ctx->pc = 0x13c8fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x13c900: 0xc0482d  daddu       $t1, $a2, $zero
    ctx->pc = 0x13c900u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c904: 0x24c80005  addiu       $t0, $a2, 0x5
    ctx->pc = 0x13c904u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), 5));
label_13c908:
    // 0x13c908: 0x91250028  lbu         $a1, 0x28($t1)
    ctx->pc = 0x13c908u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 40)));
    // 0x13c90c: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x13c90cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x13c910: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x13c910u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x13c914: 0x84a50154  lh          $a1, 0x154($a1)
    ctx->pc = 0x13c914u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 340)));
    // 0x13c918: 0x65082a  slt         $at, $v1, $a1
    ctx->pc = 0x13c918u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x13c91c: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x13C91Cu;
    {
        const bool branch_taken_0x13c91c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x13c91c) {
            ctx->pc = 0x13C930u;
            goto label_13c930;
        }
    }
    ctx->pc = 0x13C924u;
    // 0x13c924: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x13c924u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c928: 0x80502d  daddu       $t2, $a0, $zero
    ctx->pc = 0x13c928u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c92c: 0x0  nop
    ctx->pc = 0x13c92cu;
    // NOP
label_13c930:
    // 0x13c930: 0x91050000  lbu         $a1, 0x0($t0)
    ctx->pc = 0x13c930u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x13c934: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x13c934u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x13c938: 0x85282a  slt         $a1, $a0, $a1
    ctx->pc = 0x13c938u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x13c93c: 0x14a0fff2  bnez        $a1, . + 4 + (-0xE << 2)
    ctx->pc = 0x13C93Cu;
    {
        const bool branch_taken_0x13c93c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x13C940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C93Cu;
        // 0x13c940: 0x25290001  addiu       $t1, $t1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c93c) {
            ctx->pc = 0x13C908u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_13c908;
        }
    }
    ctx->pc = 0x13C944u;
    // 0x13c944: 0x0  nop
    ctx->pc = 0x13c944u;
    // NOP
label_13c948:
    // 0x13c948: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x13c948u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x13c94c: 0x2463db78  addiu       $v1, $v1, -0x2488
    ctx->pc = 0x13c94cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957944));
    // 0x13c950: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x13c950u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x13c954: 0x1431821  addu        $v1, $t2, $v1
    ctx->pc = 0x13c954u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 3)));
    // 0x13c958: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x13c958u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x13c95c: 0xa203025d  sb          $v1, 0x25D($s0)
    ctx->pc = 0x13c95cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 605), (uint8_t)GPR_U32(ctx, 3));
    // 0x13c960: 0x8e03023c  lw          $v1, 0x23C($s0)
    ctx->pc = 0x13c960u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 572)));
    // 0x13c964: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x13c964u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x13c968: 0xae03023c  sw          $v1, 0x23C($s0)
    ctx->pc = 0x13c968u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 572), GPR_U32(ctx, 3));
    // 0x13c96c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x13c96cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_13c970:
    // 0x13c970: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x13c970u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13c974: 0x3e00008  jr          $ra
    ctx->pc = 0x13C974u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13C978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C974u;
        // 0x13c978: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13C974u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13C97Cu;
    // 0x13c97c: 0x0  nop
    ctx->pc = 0x13c97cu;
    // NOP
}
