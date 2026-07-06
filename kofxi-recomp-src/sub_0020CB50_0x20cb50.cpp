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

// Function: sub_0020CB50
// Address: 0x20cb50 - 0x20cc40
void sub_0020CB50_0x20cb50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020CB50_0x20cb50");
#endif

    switch (ctx->pc) {
        case 0x20cb98u: goto label_20cb98;
        case 0x20cba4u: goto label_20cba4;
        case 0x20cc14u: goto label_20cc14;
        case 0x20cc28u: goto label_20cc28;
        default: break;
    }

    ctx->pc = 0x20cb50u;

    // 0x20cb50: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x20cb50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x20cb54: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x20cb54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x20cb58: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x20cb58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x20cb5c: 0x246300c0  addiu       $v1, $v1, 0xC0
    ctx->pc = 0x20cb5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 192));
    // 0x20cb60: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x20cb60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x20cb64: 0x3c0201c1  lui         $v0, 0x1C1
    ctx->pc = 0x20cb64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)449 << 16));
    // 0x20cb68: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x20cb68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x20cb6c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x20cb6cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20cb70: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x20cb70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x20cb74: 0x24640010  addiu       $a0, $v1, 0x10
    ctx->pc = 0x20cb74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x20cb78: 0xac43a488  sw          $v1, -0x5B78($v0)
    ctx->pc = 0x20cb78u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294943880), GPR_U32(ctx, 3));
    // 0x20cb7c: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x20cb7cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20cb80: 0x3c0201c1  lui         $v0, 0x1C1
    ctx->pc = 0x20cb80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)449 << 16));
    // 0x20cb84: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x20cb84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x20cb88: 0xac44a480  sw          $a0, -0x5B80($v0)
    ctx->pc = 0x20cb88u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294943872), GPR_U32(ctx, 4));
    // 0x20cb8c: 0x94c60000  lhu         $a2, 0x0($a2)
    ctx->pc = 0x20cb8cu;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x20cb90: 0x10c30009  beq         $a2, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x20CB90u;
    {
        const bool branch_taken_0x20cb90 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        ctx->pc = 0x20CB94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CB90u;
        // 0x20cb94: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20cb90) {
            ctx->pc = 0x20CBB8u;
            goto label_20cbb8;
        }
    }
    ctx->pc = 0x20CB98u;
label_20cb98:
    // 0x20cb98: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x20cb98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20cb9c: 0xc0831d8  jal         func_20C760
    ctx->pc = 0x20CB9Cu;
    SET_GPR_U32(ctx, 31, 0x20CBA4u);
    ctx->pc = 0x20CBA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20CB9Cu;
    // 0x20cba0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20C760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20C760u, 0x20CB9Cu, 0x20CBA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20CBA4u;
label_20cba4:
    // 0x20cba4: 0x26100002  addiu       $s0, $s0, 0x2
    ctx->pc = 0x20cba4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x20cba8: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x20cba8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x20cbac: 0x96060000  lhu         $a2, 0x0($s0)
    ctx->pc = 0x20cbacu;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x20cbb0: 0x14c2fff9  bne         $a2, $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x20CBB0u;
    {
        const bool branch_taken_0x20cbb0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x20CBB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CBB0u;
        // 0x20cbb4: 0x26520010  addiu       $s2, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20cbb0) {
            ctx->pc = 0x20CB98u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_20cb98;
        }
    }
    ctx->pc = 0x20CBB8u;
label_20cbb8:
    // 0x20cbb8: 0x3c0201c1  lui         $v0, 0x1C1
    ctx->pc = 0x20cbb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)449 << 16));
    // 0x20cbbc: 0x8c46a488  lw          $a2, -0x5B78($v0)
    ctx->pc = 0x20cbbcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294943880)));
    // 0x20cbc0: 0x3c0201c1  lui         $v0, 0x1C1
    ctx->pc = 0x20cbc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)449 << 16));
    // 0x20cbc4: 0x7cc00000  sq          $zero, 0x0($a2)
    ctx->pc = 0x20cbc4u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 0));
    // 0x20cbc8: 0x8c42a480  lw          $v0, -0x5B80($v0)
    ctx->pc = 0x20cbc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294943872)));
    // 0x20cbcc: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x20cbccu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x20cbd0: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x20CBD0u;
    {
        const bool branch_taken_0x20cbd0 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x20CBD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CBD0u;
        // 0x20cbd4: 0x22103  sra         $a0, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20cbd0) {
            ctx->pc = 0x20CBE0u;
            goto label_20cbe0;
        }
    }
    ctx->pc = 0x20CBD8u;
    // 0x20cbd8: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x20cbd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x20cbdc: 0x22103  sra         $a0, $v0, 4
    ctx->pc = 0x20cbdcu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 4));
label_20cbe0:
    // 0x20cbe0: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x20cbe0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
    // 0x20cbe4: 0x42900  sll         $a1, $a0, 4
    ctx->pc = 0x20cbe4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x20cbe8: 0x3443ffff  ori         $v1, $v0, 0xFFFF
    ctx->pc = 0x20cbe8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x20cbec: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x20cbecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x20cbf0: 0x3c0201c1  lui         $v0, 0x1C1
    ctx->pc = 0x20cbf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)449 << 16));
    // 0x20cbf4: 0xacc40000  sw          $a0, 0x0($a2)
    ctx->pc = 0x20cbf4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
    // 0x20cbf8: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x20cbf8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x20cbfc: 0x8c42a488  lw          $v0, -0x5B78($v0)
    ctx->pc = 0x20cbfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294943880)));
    // 0x20cc00: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x20cc00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20cc04: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x20cc04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x20cc08: 0x7c400000  sq          $zero, 0x0($v0)
    ctx->pc = 0x20cc08u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 0));
    // 0x20cc0c: 0xc0433b8  jal         func_10CEE0
    ctx->pc = 0x20CC0Cu;
    SET_GPR_U32(ctx, 31, 0x20CC14u);
    ctx->pc = 0x20CC10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20CC0Cu;
    // 0x20cc10: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CEE0u, 0x20CC0Cu, 0x20CC14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20CC14u;
label_20cc14:
    // 0x20cc14: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x20cc14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x20cc18: 0x3c0201c1  lui         $v0, 0x1C1
    ctx->pc = 0x20cc18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)449 << 16));
    // 0x20cc1c: 0x8c45a488  lw          $a1, -0x5B78($v0)
    ctx->pc = 0x20cc1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294943880)));
    // 0x20cc20: 0xc040a04  jal         func_102810
    ctx->pc = 0x20CC20u;
    SET_GPR_U32(ctx, 31, 0x20CC28u);
    ctx->pc = 0x20CC24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20CC20u;
    // 0x20cc24: 0x8c64e688  lw          $a0, -0x1978($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960776)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x102810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102810u, 0x20CC20u, 0x20CC28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20CC28u;
label_20cc28:
    // 0x20cc28: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x20cc28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x20cc2c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x20cc2cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20cc30: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x20cc30u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20cc34: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x20cc34u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20cc38: 0x3e00008  jr          $ra
    ctx->pc = 0x20CC38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20CC3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CC38u;
        // 0x20cc3c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20CC38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20CC40u;
}
