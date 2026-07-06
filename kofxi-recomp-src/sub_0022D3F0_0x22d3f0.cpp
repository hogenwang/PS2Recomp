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

// Function: sub_0022D3F0
// Address: 0x22d3f0 - 0x22d4e0
void sub_0022D3F0_0x22d3f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022D3F0_0x22d3f0");
#endif

    switch (ctx->pc) {
        case 0x22d430u: goto label_22d430;
        default: break;
    }

    ctx->pc = 0x22d3f0u;

    // 0x22d3f0: 0xa44023  subu        $t0, $a1, $a0
    ctx->pc = 0x22d3f0u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x22d3f4: 0x29010009  slti        $at, $t0, 0x9
    ctx->pc = 0x22d3f4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x22d3f8: 0x10200039  beqz        $at, . + 4 + (0x39 << 2)
    ctx->pc = 0x22D3F8u;
    {
        const bool branch_taken_0x22d3f8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x22d3f8) {
            ctx->pc = 0x22D4E0u;
            return;
        }
    }
    ctx->pc = 0x22D400u;
    // 0x22d400: 0x1d00007f  bgtz        $t0, . + 4 + (0x7F << 2)
    ctx->pc = 0x22D400u;
    {
        const bool branch_taken_0x22d400 = (GPR_S32(ctx, 8) > 0);
        ctx->pc = 0x22D404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D400u;
        // 0x22d404: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d400) {
            ctx->pc = 0x22D600u;
            return;
        }
    }
    ctx->pc = 0x22D408u;
    // 0x22d408: 0xc84021  addu        $t0, $a2, $t0
    ctx->pc = 0x22d408u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x22d40c: 0x5000034  bltz        $t0, . + 4 + (0x34 << 2)
    ctx->pc = 0x22D40Cu;
    {
        const bool branch_taken_0x22d40c = (GPR_S32(ctx, 8) < 0);
        ctx->pc = 0x22D410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D40Cu;
        // 0x22d410: 0x854026  xor         $t0, $a0, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d40c) {
            ctx->pc = 0x22D4E0u;
            return;
        }
    }
    ctx->pc = 0x22D414u;
    // 0x22d414: 0x110000a4  beqz        $t0, . + 4 + (0xA4 << 2)
    ctx->pc = 0x22D414u;
    {
        const bool branch_taken_0x22d414 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x22D418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D414u;
        // 0x22d418: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d414) {
            ctx->pc = 0x22D6A8u;
            return;
        }
    }
    ctx->pc = 0x22D41Cu;
    // 0x22d41c: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x22d41cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x22d420: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x22d420u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x22d424: 0x24cafff8  addiu       $t2, $a2, -0x8
    ctx->pc = 0x22d424u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967288));
    // 0x22d428: 0x540000a  bltz        $t2, . + 4 + (0xA << 2)
    ctx->pc = 0x22D428u;
    {
        const bool branch_taken_0x22d428 = (GPR_S32(ctx, 10) < 0);
        if (branch_taken_0x22d428) {
            ctx->pc = 0x22D454u;
            goto label_22d454;
        }
    }
    ctx->pc = 0x22D430u;
label_22d430:
    // 0x22d430: 0x68a8ffff  ldl         $t0, -0x1($a1)
    ctx->pc = 0x22d430u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 4294967295); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x22d434: 0x6ca8fff8  ldr         $t0, -0x8($a1)
    ctx->pc = 0x22d434u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 4294967288); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x22d438: 0x254afff8  addiu       $t2, $t2, -0x8
    ctx->pc = 0x22d438u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967288));
    // 0x22d43c: 0xb088ffff  sdl         $t0, -0x1($a0)
    ctx->pc = 0x22d43cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 4294967295); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x22d440: 0xb488fff8  sdr         $t0, -0x8($a0)
    ctx->pc = 0x22d440u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 4294967288); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x22d444: 0x24a5fff8  addiu       $a1, $a1, -0x8
    ctx->pc = 0x22d444u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967288));
    // 0x22d448: 0x541fff9  bgez        $t2, . + 4 + (-0x7 << 2)
    ctx->pc = 0x22D448u;
    {
        const bool branch_taken_0x22d448 = (GPR_S32(ctx, 10) >= 0);
        ctx->pc = 0x22D44Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D448u;
        // 0x22d44c: 0x2484fff8  addiu       $a0, $a0, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d448) {
            ctx->pc = 0x22D430u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_22d430;
        }
    }
    ctx->pc = 0x22D450u;
    // 0x22d450: 0x25460008  addiu       $a2, $t2, 0x8
    ctx->pc = 0x22d450u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 10), 8));
label_22d454:
    // 0x22d454: 0x10c00094  beqz        $a2, . + 4 + (0x94 << 2)
    ctx->pc = 0x22D454u;
    {
        const bool branch_taken_0x22d454 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x22d454) {
            ctx->pc = 0x22D6A8u;
            return;
        }
    }
    ctx->pc = 0x22D45Cu;
    // 0x22d45c: 0x80a8ffff  lb          $t0, -0x1($a1)
    ctx->pc = 0x22d45cu;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 4294967295)));
    // 0x22d460: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x22d460u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x22d464: 0x10c00090  beqz        $a2, . + 4 + (0x90 << 2)
    ctx->pc = 0x22D464u;
    {
        const bool branch_taken_0x22d464 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x22D468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D464u;
        // 0x22d468: 0xa088ffff  sb          $t0, -0x1($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 4294967295), (uint8_t)GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d464) {
            ctx->pc = 0x22D6A8u;
            return;
        }
    }
    ctx->pc = 0x22D46Cu;
    // 0x22d46c: 0x80a8fffe  lb          $t0, -0x2($a1)
    ctx->pc = 0x22d46cu;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 4294967294)));
    // 0x22d470: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x22d470u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x22d474: 0x10c0008c  beqz        $a2, . + 4 + (0x8C << 2)
    ctx->pc = 0x22D474u;
    {
        const bool branch_taken_0x22d474 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x22D478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D474u;
        // 0x22d478: 0xa088fffe  sb          $t0, -0x2($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 4294967294), (uint8_t)GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d474) {
            ctx->pc = 0x22D6A8u;
            return;
        }
    }
    ctx->pc = 0x22D47Cu;
    // 0x22d47c: 0x80a8fffd  lb          $t0, -0x3($a1)
    ctx->pc = 0x22d47cu;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 4294967293)));
    // 0x22d480: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x22d480u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x22d484: 0x10c00088  beqz        $a2, . + 4 + (0x88 << 2)
    ctx->pc = 0x22D484u;
    {
        const bool branch_taken_0x22d484 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x22D488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D484u;
        // 0x22d488: 0xa088fffd  sb          $t0, -0x3($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 4294967293), (uint8_t)GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d484) {
            ctx->pc = 0x22D6A8u;
            return;
        }
    }
    ctx->pc = 0x22D48Cu;
    // 0x22d48c: 0x80a8fffc  lb          $t0, -0x4($a1)
    ctx->pc = 0x22d48cu;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 4294967292)));
    // 0x22d490: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x22d490u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x22d494: 0x10c00084  beqz        $a2, . + 4 + (0x84 << 2)
    ctx->pc = 0x22D494u;
    {
        const bool branch_taken_0x22d494 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x22D498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D494u;
        // 0x22d498: 0xa088fffc  sb          $t0, -0x4($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 4294967292), (uint8_t)GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d494) {
            ctx->pc = 0x22D6A8u;
            return;
        }
    }
    ctx->pc = 0x22D49Cu;
    // 0x22d49c: 0x80a8fffb  lb          $t0, -0x5($a1)
    ctx->pc = 0x22d49cu;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 4294967291)));
    // 0x22d4a0: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x22d4a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x22d4a4: 0x10c00080  beqz        $a2, . + 4 + (0x80 << 2)
    ctx->pc = 0x22D4A4u;
    {
        const bool branch_taken_0x22d4a4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x22D4A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D4A4u;
        // 0x22d4a8: 0xa088fffb  sb          $t0, -0x5($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 4294967291), (uint8_t)GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d4a4) {
            ctx->pc = 0x22D6A8u;
            return;
        }
    }
    ctx->pc = 0x22D4ACu;
    // 0x22d4ac: 0x80a8fffa  lb          $t0, -0x6($a1)
    ctx->pc = 0x22d4acu;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 4294967290)));
    // 0x22d4b0: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x22d4b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x22d4b4: 0x10c0007c  beqz        $a2, . + 4 + (0x7C << 2)
    ctx->pc = 0x22D4B4u;
    {
        const bool branch_taken_0x22d4b4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x22D4B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D4B4u;
        // 0x22d4b8: 0xa088fffa  sb          $t0, -0x6($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 4294967290), (uint8_t)GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d4b4) {
            ctx->pc = 0x22D6A8u;
            return;
        }
    }
    ctx->pc = 0x22D4BCu;
    // 0x22d4bc: 0x80a8fff9  lb          $t0, -0x7($a1)
    ctx->pc = 0x22d4bcu;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 4294967289)));
    // 0x22d4c0: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x22d4c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x22d4c4: 0x10c00078  beqz        $a2, . + 4 + (0x78 << 2)
    ctx->pc = 0x22D4C4u;
    {
        const bool branch_taken_0x22d4c4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x22D4C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D4C4u;
        // 0x22d4c8: 0xa088fff9  sb          $t0, -0x7($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 4294967289), (uint8_t)GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d4c4) {
            ctx->pc = 0x22D6A8u;
            return;
        }
    }
    ctx->pc = 0x22D4CCu;
    // 0x22d4cc: 0x3e00008  jr          $ra
    ctx->pc = 0x22D4CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22D4CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22D4D4u;
    // 0x22d4d4: 0x0  nop
    ctx->pc = 0x22d4d4u;
    // NOP
    // 0x22d4d8: 0x0  nop
    ctx->pc = 0x22d4d8u;
    // NOP
    // 0x22d4dc: 0x0  nop
    ctx->pc = 0x22d4dcu;
    // NOP
    if (ctx->pc == 0x22d4dcu) { ctx->pc = 0x22d4e0u; }
}
