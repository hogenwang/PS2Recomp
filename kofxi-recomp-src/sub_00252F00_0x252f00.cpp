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

// Function: sub_00252F00
// Address: 0x252f00 - 0x252fa8
void sub_00252F00_0x252f00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00252F00_0x252f00");
#endif

    switch (ctx->pc) {
        case 0x252f64u: goto label_252f64;
        case 0x252f74u: goto label_252f74;
        default: break;
    }

    ctx->pc = 0x252f00u;

    // 0x252f00: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x252f00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x252f04: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x252f04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x252f08: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x252f08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x252f0c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x252f0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x252f10: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x252f10u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x252f14: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x252f14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x252f18: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x252f18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x252f1c: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x252f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x252f20: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x252F20u;
    {
        const bool branch_taken_0x252f20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x252F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252F20u;
        // 0x252f24: 0x8cb10008  lw          $s1, 0x8($a1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252f20) {
            ctx->pc = 0x252F30u;
            goto label_252f30;
        }
    }
    ctx->pc = 0x252F28u;
    // 0x252f28: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x252F28u;
    {
        const bool branch_taken_0x252f28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x252F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252F28u;
        // 0x252f2c: 0x24020016  addiu       $v0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252f28) {
            ctx->pc = 0x252F90u;
            goto label_252f90;
        }
    }
    ctx->pc = 0x252F30u;
label_252f30:
    // 0x252f30: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x252f30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x252f34: 0x8c43fcd0  lw          $v1, -0x330($v0)
    ctx->pc = 0x252f34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294966480)));
    // 0x252f38: 0x10600015  beqz        $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x252F38u;
    {
        const bool branch_taken_0x252f38 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x252F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252F38u;
        // 0x252f3c: 0x2402007d  addiu       $v0, $zero, 0x7D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 125));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252f38) {
            ctx->pc = 0x252F90u;
            goto label_252f90;
        }
    }
    ctx->pc = 0x252F40u;
    // 0x252f40: 0x92220001  lbu         $v0, 0x1($s1)
    ctx->pc = 0x252f40u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
    // 0x252f44: 0x2442fffe  addiu       $v0, $v0, -0x2
    ctx->pc = 0x252f44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
    // 0x252f48: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x252f48u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x252f4c: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x252F4Cu;
    {
        const bool branch_taken_0x252f4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x252F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252F4Cu;
        // 0x252f50: 0x2402006a  addiu       $v0, $zero, 0x6A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 106));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252f4c) {
            ctx->pc = 0x252F90u;
            goto label_252f90;
        }
    }
    ctx->pc = 0x252F54u;
    // 0x252f54: 0x8a300007  lwl         $s0, 0x7($s1)
    ctx->pc = 0x252f54u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 7); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 16) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 16, (int32_t)merged); }
    // 0x252f58: 0x9a300004  lwr         $s0, 0x4($s1)
    ctx->pc = 0x252f58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 4); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 16) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 16) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 16, merged64); }
    // 0x252f5c: 0xc08a254  jal         func_228950
    ctx->pc = 0x252F5Cu;
    SET_GPR_U32(ctx, 31, 0x252F64u);
    ctx->pc = 0x252F60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x252F5Cu;
    // 0x252f60: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228950u, 0x252F5Cu, 0x252F64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x252F64u;
label_252f64:
    // 0x252f64: 0x12020005  beq         $s0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x252F64u;
    {
        const bool branch_taken_0x252f64 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x252f64) {
            ctx->pc = 0x252F7Cu;
            goto label_252f7c;
        }
    }
    ctx->pc = 0x252F6Cu;
    // 0x252f6c: 0xc08d360  jal         func_234D80
    ctx->pc = 0x252F6Cu;
    SET_GPR_U32(ctx, 31, 0x252F74u);
    ctx->pc = 0x252F70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x252F6Cu;
    // 0x252f70: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x234D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x234D80u, 0x252F6Cu, 0x252F74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x252F74u;
label_252f74:
    // 0x252f74: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x252F74u;
    {
        const bool branch_taken_0x252f74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x252F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252F74u;
        // 0x252f78: 0x2402007d  addiu       $v0, $zero, 0x7D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 125));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252f74) {
            ctx->pc = 0x252F90u;
            goto label_252f90;
        }
    }
    ctx->pc = 0x252F7Cu;
label_252f7c:
    // 0x252f7c: 0x8a220007  lwl         $v0, 0x7($s1)
    ctx->pc = 0x252f7cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 7); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 2) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 2, (int32_t)merged); }
    // 0x252f80: 0x9a220004  lwr         $v0, 0x4($s1)
    ctx->pc = 0x252f80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 4); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 2) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 2) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 2, merged64); }
    // 0x252f84: 0xaa420047  swl         $v0, 0x47($s2)
    ctx->pc = 0x252f84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 71); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x252f88: 0xba420044  swr         $v0, 0x44($s2)
    ctx->pc = 0x252f88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 68); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x252f8c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x252f8cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_252f90:
    // 0x252f90: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x252f90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x252f94: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x252f94u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x252f98: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x252f98u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x252f9c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x252f9cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x252fa0: 0x3e00008  jr          $ra
    ctx->pc = 0x252FA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x252FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252FA0u;
        // 0x252fa4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x252FA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x252FA8u;
}
