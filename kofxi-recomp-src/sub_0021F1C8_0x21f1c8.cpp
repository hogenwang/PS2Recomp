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

// Function: sub_0021F1C8
// Address: 0x21f1c8 - 0x21f2c8
void sub_0021F1C8_0x21f1c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021F1C8_0x21f1c8");
#endif

    switch (ctx->pc) {
        case 0x21f1fcu: goto label_21f1fc;
        case 0x21f230u: goto label_21f230;
        case 0x21f240u: goto label_21f240;
        case 0x21f254u: goto label_21f254;
        case 0x21f264u: goto label_21f264;
        case 0x21f274u: goto label_21f274;
        case 0x21f28cu: goto label_21f28c;
        case 0x21f298u: goto label_21f298;
        case 0x21f2a8u: goto label_21f2a8;
        default: break;
    }

    ctx->pc = 0x21f1c8u;

    // 0x21f1c8: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x21f1c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x21f1cc: 0x3c0f003f  lui         $t7, 0x3F
    ctx->pc = 0x21f1ccu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)63 << 16));
    // 0x21f1d0: 0xffb10068  sd          $s1, 0x68($sp)
    ctx->pc = 0x21f1d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 17));
    // 0x21f1d4: 0x25ef2040  addiu       $t7, $t7, 0x2040
    ctx->pc = 0x21f1d4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 8256));
    // 0x21f1d8: 0xffb20070  sd          $s2, 0x70($sp)
    ctx->pc = 0x21f1d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 18));
    // 0x21f1dc: 0x3a0702d  daddu       $t6, $sp, $zero
    ctx->pc = 0x21f1dcu;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f1e0: 0xffb30078  sd          $s3, 0x78($sp)
    ctx->pc = 0x21f1e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 19));
    // 0x21f1e4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x21f1e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f1e8: 0xffb00060  sd          $s0, 0x60($sp)
    ctx->pc = 0x21f1e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 16));
    // 0x21f1ec: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x21f1ecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f1f0: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x21f1f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x21f1f4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x21f1f4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f1f8: 0x25ed0060  addiu       $t5, $t7, 0x60
    ctx->pc = 0x21f1f8u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 15), 96));
label_21f1fc:
    // 0x21f1fc: 0x69e90007  ldl         $t1, 0x7($t7)
    ctx->pc = 0x21f1fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 15), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
    // 0x21f200: 0x6de90000  ldr         $t1, 0x0($t7)
    ctx->pc = 0x21f200u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 15), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x21f204: 0x69ea000f  ldl         $t2, 0xF($t7)
    ctx->pc = 0x21f204u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 15), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem << shift)); }
    // 0x21f208: 0x6dea0008  ldr         $t2, 0x8($t7)
    ctx->pc = 0x21f208u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 15), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem >> shift)); }
    // 0x21f20c: 0xb1c90007  sdl         $t1, 0x7($t6)
    ctx->pc = 0x21f20cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 14), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x21f210: 0xb5c90000  sdr         $t1, 0x0($t6)
    ctx->pc = 0x21f210u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 14), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x21f214: 0xb1ca000f  sdl         $t2, 0xF($t6)
    ctx->pc = 0x21f214u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 14), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x21f218: 0xb5ca0008  sdr         $t2, 0x8($t6)
    ctx->pc = 0x21f218u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 14), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x21f21c: 0x25ef0010  addiu       $t7, $t7, 0x10
    ctx->pc = 0x21f21cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 16));
    // 0x21f220: 0x15edfff6  bne         $t7, $t5, . + 4 + (-0xA << 2)
    ctx->pc = 0x21F220u;
    {
        const bool branch_taken_0x21f220 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 13));
        ctx->pc = 0x21F224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F220u;
        // 0x21f224: 0x25ce0010  addiu       $t6, $t6, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f220) {
            ctx->pc = 0x21F1FCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_21f1fc;
        }
    }
    ctx->pc = 0x21F228u;
    // 0x21f228: 0xc089eae  jal         func_227AB8
    ctx->pc = 0x21F228u;
    SET_GPR_U32(ctx, 31, 0x21F230u);
    ctx->pc = 0x227AB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227AB8u, 0x21F228u, 0x21F230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F230u;
label_21f230:
    // 0x21f230: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x21F230u;
    {
        const bool branch_taken_0x21f230 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F230u;
        // 0x21f234: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f230) {
            ctx->pc = 0x21F2A8u;
            goto label_21f2a8;
        }
    }
    ctx->pc = 0x21F238u;
    // 0x21f238: 0xc087bee  jal         func_21EFB8
    ctx->pc = 0x21F238u;
    SET_GPR_U32(ctx, 31, 0x21F240u);
    ctx->pc = 0x21F23Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21F238u;
    // 0x21f23c: 0x3c10003a  lui         $s0, 0x3A (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)58 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21EFB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21EFB8u, 0x21F238u, 0x21F240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F240u;
label_21f240:
    // 0x21f240: 0x2610bc46  addiu       $s0, $s0, -0x43BA
    ctx->pc = 0x21f240u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294949958));
    // 0x21f244: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x21f244u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f248: 0x240600a1  addiu       $a2, $zero, 0xA1
    ctx->pc = 0x21f248u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 161));
    // 0x21f24c: 0xc0898da  jal         func_226368
    ctx->pc = 0x21F24Cu;
    SET_GPR_U32(ctx, 31, 0x21F254u);
    ctx->pc = 0x21F250u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21F24Cu;
    // 0x21f250: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226368u, 0x21F24Cu, 0x21F254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F254u;
label_21f254:
    // 0x21f254: 0x2604fbae  addiu       $a0, $s0, -0x452
    ctx->pc = 0x21f254u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294966190));
    // 0x21f258: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x21f258u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f25c: 0xc0898da  jal         func_226368
    ctx->pc = 0x21F25Cu;
    SET_GPR_U32(ctx, 31, 0x21F264u);
    ctx->pc = 0x21F260u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21F25Cu;
    // 0x21f260: 0x2406000f  addiu       $a2, $zero, 0xF (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226368u, 0x21F25Cu, 0x21F264u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F264u;
label_21f264:
    // 0x21f264: 0x2604fbbd  addiu       $a0, $s0, -0x443
    ctx->pc = 0x21f264u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294966205));
    // 0x21f268: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x21f268u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f26c: 0xc0898da  jal         func_226368
    ctx->pc = 0x21F26Cu;
    SET_GPR_U32(ctx, 31, 0x21F274u);
    ctx->pc = 0x21F270u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21F26Cu;
    // 0x21f270: 0x2406000d  addiu       $a2, $zero, 0xD (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226368u, 0x21F26Cu, 0x21F274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F274u;
label_21f274:
    // 0x21f274: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x21f274u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
    // 0x21f278: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x21f278u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f27c: 0x8de4c258  lw          $a0, -0x3DA8($t7)
    ctx->pc = 0x21f27cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 4294951512)));
    // 0x21f280: 0x240600a1  addiu       $a2, $zero, 0xA1
    ctx->pc = 0x21f280u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 161));
    // 0x21f284: 0xc0898da  jal         func_226368
    ctx->pc = 0x21F284u;
    SET_GPR_U32(ctx, 31, 0x21F28Cu);
    ctx->pc = 0x21F288u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21F284u;
    // 0x21f288: 0x24840080  addiu       $a0, $a0, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226368u, 0x21F284u, 0x21F28Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F28Cu;
label_21f28c:
    // 0x21f28c: 0x2604ff5f  addiu       $a0, $s0, -0xA1
    ctx->pc = 0x21f28cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967135));
    // 0x21f290: 0xc087a42  jal         func_21E908
    ctx->pc = 0x21F290u;
    SET_GPR_U32(ctx, 31, 0x21F298u);
    ctx->pc = 0x21F294u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21F290u;
    // 0x21f294: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21E908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21E908u, 0x21F290u, 0x21F298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F298u;
label_21f298:
    // 0x21f298: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x21f298u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
    // 0x21f29c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x21f29cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f2a0: 0xc089eb4  jal         func_227AD0
    ctx->pc = 0x21F2A0u;
    SET_GPR_U32(ctx, 31, 0x21F2A8u);
    ctx->pc = 0x21F2A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21F2A0u;
    // 0x21f2a4: 0x34a55f90  ori         $a1, $a1, 0x5F90 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)24464);
    ctx->in_delay_slot = false;
    ctx->pc = 0x227AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227AD0u, 0x21F2A0u, 0x21F2A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F2A8u;
label_21f2a8:
    // 0x21f2a8: 0xdfb00060  ld          $s0, 0x60($sp)
    ctx->pc = 0x21f2a8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x21f2ac: 0xdfb10068  ld          $s1, 0x68($sp)
    ctx->pc = 0x21f2acu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x21f2b0: 0xdfb20070  ld          $s2, 0x70($sp)
    ctx->pc = 0x21f2b0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x21f2b4: 0xdfb30078  ld          $s3, 0x78($sp)
    ctx->pc = 0x21f2b4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x21f2b8: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x21f2b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x21f2bc: 0x3e00008  jr          $ra
    ctx->pc = 0x21F2BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21F2C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F2BCu;
        // 0x21f2c0: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21F2BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21F2C4u;
    // 0x21f2c4: 0x0  nop
    ctx->pc = 0x21f2c4u;
    // NOP
    if (ctx->pc == 0x21f2c4u) { ctx->pc = 0x21f2c8u; }
}
