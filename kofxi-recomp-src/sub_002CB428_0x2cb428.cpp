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

// Function: sub_002CB428
// Address: 0x2cb428 - 0x2cb508
void sub_002CB428_0x2cb428(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CB428_0x2cb428");
#endif

    switch (ctx->pc) {
        case 0x2cb478u: goto label_2cb478;
        case 0x2cb4d0u: goto label_2cb4d0;
        case 0x2cb4f0u: goto label_2cb4f0;
        default: break;
    }

    ctx->pc = 0x2cb428u;

    // 0x2cb428: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2cb428u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2cb42c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2cb42cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2cb430: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2cb430u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb434: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x2cb434u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x2cb438: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2cb438u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb43c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2cb43cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2cb440: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2cb440u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb444: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x2cb444u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x2cb448: 0x68e20007  ldl         $v0, 0x7($a3)
    ctx->pc = 0x2cb448u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x2cb44c: 0x6ce20000  ldr         $v0, 0x0($a3)
    ctx->pc = 0x2cb44cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x2cb450: 0xb3a20007  sdl         $v0, 0x7($sp)
    ctx->pc = 0x2cb450u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2cb454: 0xb7a20000  sdr         $v0, 0x0($sp)
    ctx->pc = 0x2cb454u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2cb458: 0x8fa80004  lw          $t0, 0x4($sp)
    ctx->pc = 0x2cb458u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2cb45c: 0x11000015  beqz        $t0, . + 4 + (0x15 << 2)
    ctx->pc = 0x2CB45Cu;
    {
        const bool branch_taken_0x2cb45c = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CB460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB45Cu;
        // 0x2cb460: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb45c) {
            ctx->pc = 0x2CB4B4u;
            goto label_2cb4b4;
        }
    }
    ctx->pc = 0x2CB464u;
    // 0x2cb464: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x2cb464u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cb468: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x2cb468u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2cb46c: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2CB46Cu;
    {
        const bool branch_taken_0x2cb46c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2cb46c) {
            ctx->pc = 0x2CB49Cu;
            goto label_2cb49c;
        }
    }
    ctx->pc = 0x2CB474u;
    // 0x2cb474: 0x2488ffff  addiu       $t0, $a0, -0x1
    ctx->pc = 0x2cb474u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_2cb478:
    // 0x2cb478: 0x24670001  addiu       $a3, $v1, 0x1
    ctx->pc = 0x2cb478u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2cb47c: 0xe0182d  daddu       $v1, $a3, $zero
    ctx->pc = 0x2cb47cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb480: 0xafa80004  sw          $t0, 0x4($sp)
    ctx->pc = 0x2cb480u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 8));
    // 0x2cb484: 0xafa70000  sw          $a3, 0x0($sp)
    ctx->pc = 0x2cb484u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 7));
    // 0x2cb488: 0x1100000a  beqz        $t0, . + 4 + (0xA << 2)
    ctx->pc = 0x2CB488u;
    {
        const bool branch_taken_0x2cb488 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CB48Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB488u;
        // 0x2cb48c: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb488) {
            ctx->pc = 0x2CB4B4u;
            goto label_2cb4b4;
        }
    }
    ctx->pc = 0x2CB490u;
    // 0x2cb490: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x2cb490u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2cb494: 0x5040fff8  beql        $v0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x2CB494u;
    {
        const bool branch_taken_0x2cb494 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cb494) {
            ctx->pc = 0x2CB498u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CB494u;
            // 0x2cb498: 0x2488ffff  addiu       $t0, $a0, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CB478u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2cb478;
        }
    }
    ctx->pc = 0x2CB49Cu;
label_2cb49c:
    // 0x2cb49c: 0x11000005  beqz        $t0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2CB49Cu;
    {
        const bool branch_taken_0x2cb49c = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CB4A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB49Cu;
        // 0x2cb4a0: 0x8fa70000  lw          $a3, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb49c) {
            ctx->pc = 0x2CB4B4u;
            goto label_2cb4b4;
        }
    }
    ctx->pc = 0x2CB4A4u;
    // 0x2cb4a4: 0x90e20000  lbu         $v0, 0x0($a3)
    ctx->pc = 0x2cb4a4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2cb4a8: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x2cb4a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x2cb4ac: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2CB4ACu;
    {
        const bool branch_taken_0x2cb4ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CB4B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB4ACu;
        // 0x2cb4b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb4ac) {
            ctx->pc = 0x2CB4E4u;
            goto label_2cb4e4;
        }
    }
    ctx->pc = 0x2CB4B4u;
label_2cb4b4:
    // 0x2cb4b4: 0x3c07003c  lui         $a3, 0x3C
    ctx->pc = 0x2cb4b4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)60 << 16));
    // 0x2cb4b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2cb4b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb4bc: 0x24e78588  addiu       $a3, $a3, -0x7A78
    ctx->pc = 0x2cb4bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294935944));
    // 0x2cb4c0: 0x36250800  ori         $a1, $s1, 0x800
    ctx->pc = 0x2cb4c0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)2048);
    // 0x2cb4c4: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2cb4c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb4c8: 0xc0b266e  jal         func_2C99B8
    ctx->pc = 0x2CB4C8u;
    SET_GPR_U32(ctx, 31, 0x2CB4D0u);
    ctx->pc = 0x2CB4CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CB4C8u;
    // 0x2cb4cc: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C99B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C99B8u, 0x2CB4C8u, 0x2CB4D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB4D0u;
label_2cb4d0:
    // 0x2cb4d0: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x2CB4D0u;
    {
        const bool branch_taken_0x2cb4d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2cb4d0) {
            ctx->pc = 0x2CB4D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CB4D0u;
            // 0x2cb4d4: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CB4F4u;
            goto label_2cb4f4;
        }
    }
    ctx->pc = 0x2CB4D8u;
    // 0x2cb4d8: 0x8fa80004  lw          $t0, 0x4($sp)
    ctx->pc = 0x2cb4d8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2cb4dc: 0x8fa70000  lw          $a3, 0x0($sp)
    ctx->pc = 0x2cb4dcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cb4e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2cb4e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2cb4e4:
    // 0x2cb4e4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2cb4e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb4e8: 0xc0b266e  jal         func_2C99B8
    ctx->pc = 0x2CB4E8u;
    SET_GPR_U32(ctx, 31, 0x2CB4F0u);
    ctx->pc = 0x2CB4ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CB4E8u;
    // 0x2cb4ec: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C99B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C99B8u, 0x2CB4E8u, 0x2CB4F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB4F0u;
label_2cb4f0:
    // 0x2cb4f0: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2cb4f0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2cb4f4:
    // 0x2cb4f4: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x2cb4f4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2cb4f8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2cb4f8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2cb4fc: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x2cb4fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2cb500: 0x3e00008  jr          $ra
    ctx->pc = 0x2CB500u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CB504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB500u;
        // 0x2cb504: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CB500u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CB508u;
}
