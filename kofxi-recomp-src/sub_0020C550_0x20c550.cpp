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

// Function: sub_0020C550
// Address: 0x20c550 - 0x20c600
void sub_0020C550_0x20c550(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020C550_0x20c550");
#endif

    switch (ctx->pc) {
        case 0x20c560u: goto label_20c560;
        case 0x20c56cu: goto label_20c56c;
        case 0x20c5d8u: goto label_20c5d8;
        case 0x20c5ecu: goto label_20c5ec;
        default: break;
    }

    ctx->pc = 0x20c550u;

    // 0x20c550: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x20c550u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x20c554: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x20c554u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x20c558: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x20c558u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x20c55c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x20c55cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20c560:
    // 0x20c560: 0x26050001  addiu       $a1, $s0, 0x1
    ctx->pc = 0x20c560u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x20c564: 0xc083110  jal         func_20C440
    ctx->pc = 0x20C564u;
    SET_GPR_U32(ctx, 31, 0x20C56Cu);
    ctx->pc = 0x20C568u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20C564u;
    // 0x20c568: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20C440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20C440u, 0x20C564u, 0x20C56Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C56Cu;
label_20c56c:
    // 0x20c56c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x20c56cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x20c570: 0x2a020003  slti        $v0, $s0, 0x3
    ctx->pc = 0x20c570u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x20c574: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x20C574u;
    {
        const bool branch_taken_0x20c574 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20c574) {
            ctx->pc = 0x20C560u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_20c560;
        }
    }
    ctx->pc = 0x20C57Cu;
    // 0x20c57c: 0x3c0301c1  lui         $v1, 0x1C1
    ctx->pc = 0x20c57cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)449 << 16));
    // 0x20c580: 0x3c0201c1  lui         $v0, 0x1C1
    ctx->pc = 0x20c580u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)449 << 16));
    // 0x20c584: 0x8c66a488  lw          $a2, -0x5B78($v1)
    ctx->pc = 0x20c584u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294943880)));
    // 0x20c588: 0x7cc00000  sq          $zero, 0x0($a2)
    ctx->pc = 0x20c588u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 0));
    // 0x20c58c: 0x8c42a480  lw          $v0, -0x5B80($v0)
    ctx->pc = 0x20c58cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294943872)));
    // 0x20c590: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x20c590u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x20c594: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x20C594u;
    {
        const bool branch_taken_0x20c594 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x20C598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C594u;
        // 0x20c598: 0x22103  sra         $a0, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c594) {
            ctx->pc = 0x20C5A4u;
            goto label_20c5a4;
        }
    }
    ctx->pc = 0x20C59Cu;
    // 0x20c59c: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x20c59cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x20c5a0: 0x22103  sra         $a0, $v0, 4
    ctx->pc = 0x20c5a0u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 4));
label_20c5a4:
    // 0x20c5a4: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x20c5a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
    // 0x20c5a8: 0x42900  sll         $a1, $a0, 4
    ctx->pc = 0x20c5a8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x20c5ac: 0x3443ffff  ori         $v1, $v0, 0xFFFF
    ctx->pc = 0x20c5acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x20c5b0: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x20c5b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x20c5b4: 0x3c0201c1  lui         $v0, 0x1C1
    ctx->pc = 0x20c5b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)449 << 16));
    // 0x20c5b8: 0xacc40000  sw          $a0, 0x0($a2)
    ctx->pc = 0x20c5b8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
    // 0x20c5bc: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x20c5bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x20c5c0: 0x8c42a488  lw          $v0, -0x5B78($v0)
    ctx->pc = 0x20c5c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294943880)));
    // 0x20c5c4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x20c5c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20c5c8: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x20c5c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x20c5cc: 0x7c400000  sq          $zero, 0x0($v0)
    ctx->pc = 0x20c5ccu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 0));
    // 0x20c5d0: 0xc0433b8  jal         func_10CEE0
    ctx->pc = 0x20C5D0u;
    SET_GPR_U32(ctx, 31, 0x20C5D8u);
    ctx->pc = 0x20C5D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20C5D0u;
    // 0x20c5d4: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CEE0u, 0x20C5D0u, 0x20C5D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C5D8u;
label_20c5d8:
    // 0x20c5d8: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x20c5d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x20c5dc: 0x3c0201c1  lui         $v0, 0x1C1
    ctx->pc = 0x20c5dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)449 << 16));
    // 0x20c5e0: 0x8c45a488  lw          $a1, -0x5B78($v0)
    ctx->pc = 0x20c5e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294943880)));
    // 0x20c5e4: 0xc040a04  jal         func_102810
    ctx->pc = 0x20C5E4u;
    SET_GPR_U32(ctx, 31, 0x20C5ECu);
    ctx->pc = 0x20C5E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20C5E4u;
    // 0x20c5e8: 0x8c64e688  lw          $a0, -0x1978($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960776)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x102810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102810u, 0x20C5E4u, 0x20C5ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C5ECu;
label_20c5ec:
    // 0x20c5ec: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x20c5ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20c5f0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x20c5f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20c5f4: 0x3e00008  jr          $ra
    ctx->pc = 0x20C5F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20C5F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C5F4u;
        // 0x20c5f8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20C5F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20C5FCu;
    // 0x20c5fc: 0x0  nop
    ctx->pc = 0x20c5fcu;
    // NOP
    if (ctx->pc == 0x20c5fcu) { ctx->pc = 0x20c600u; }
}
