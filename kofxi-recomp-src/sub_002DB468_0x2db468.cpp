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

// Function: sub_002DB468
// Address: 0x2db468 - 0x2db588
void sub_002DB468_0x2db468(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DB468_0x2db468");
#endif

    switch (ctx->pc) {
        case 0x2db4ccu: goto label_2db4cc;
        case 0x2db514u: goto label_2db514;
        case 0x2db534u: goto label_2db534;
        case 0x2db53cu: goto label_2db53c;
        case 0x2db568u: goto label_2db568;
        default: break;
    }

    ctx->pc = 0x2db468u;

    // 0x2db468: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2db468u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2db46c: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2db46cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x2db470: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2db470u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2db474: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2db474u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2db478: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x2db478u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x2db47c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x2db47cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2db480: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2db480u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2db484: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2db484u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2db488: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x2db488u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x2db48c: 0x2448f050  addiu       $t0, $v0, -0xFB0
    ctx->pc = 0x2db48cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963280));
    // 0x2db490: 0x69030007  ldl         $v1, 0x7($t0)
    ctx->pc = 0x2db490u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x2db494: 0x6d030000  ldr         $v1, 0x0($t0)
    ctx->pc = 0x2db494u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x2db498: 0xb3a30007  sdl         $v1, 0x7($sp)
    ctx->pc = 0x2db498u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2db49c: 0xb7a30000  sdr         $v1, 0x0($sp)
    ctx->pc = 0x2db49cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2db4a0: 0x3c03002e  lui         $v1, 0x2E
    ctx->pc = 0x2db4a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)46 << 16));
    // 0x2db4a4: 0x2463b4ec  addiu       $v1, $v1, -0x4B14
    ctx->pc = 0x2db4a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294948076));
    // 0x2db4a8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2db4a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2db4ac: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2DB4ACu;
    {
        const bool branch_taken_0x2db4ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2db4ac) {
            ctx->pc = 0x2DB4CCu;
            goto label_2db4cc;
        }
    }
    ctx->pc = 0x2DB4B4u;
    // 0x2db4b4: 0x3c04002e  lui         $a0, 0x2E
    ctx->pc = 0x2db4b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)46 << 16));
    // 0x2db4b8: 0x2484b500  addiu       $a0, $a0, -0x4B00
    ctx->pc = 0x2db4b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948096));
    // 0x2db4bc: 0x8c670008  lw          $a3, 0x8($v1)
    ctx->pc = 0x2db4bcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2db4c0: 0x8c65000c  lw          $a1, 0xC($v1)
    ctx->pc = 0x2db4c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x2db4c4: 0xc0b63f0  jal         func_2D8FC0
    ctx->pc = 0x2DB4C4u;
    SET_GPR_U32(ctx, 31, 0x2DB4CCu);
    ctx->pc = 0x2DB4C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DB4C4u;
    // 0x2db4c8: 0x8c660004  lw          $a2, 0x4($v1) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D8FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8FC0u, 0x2DB4C4u, 0x2DB4CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DB4CCu;
label_2db4cc:
    // 0x2db4cc: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2DB4CCu;
    {
        const bool branch_taken_0x2db4cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2db4cc) {
            ctx->pc = 0x2DB500u;
            goto label_2db500;
        }
    }
    ctx->pc = 0x2DB4D4u;
    // 0x2db4d4: 0xdfc27ec7  ld          $v0, 0x7EC7($fp)
    ctx->pc = 0x2db4d4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 30), 32455)));
    // 0x2db4d8: 0xff7dcb5a  sd          $sp, -0x34A6($k1)
    ctx->pc = 0x2db4d8u;
    WRITE64(ADD32(GPR_U32(ctx, 27), 4294953818), GPR_U64(ctx, 29));
    // 0x2db4dc: 0x1d64020  add         $t0, $t6, $s6
    ctx->pc = 0x2db4dcu;
    {     int32_t rs_val = GPR_S32(ctx, 14);     int32_t rt_val = GPR_S32(ctx, 22);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 8, (int32_t)result);     } }
    // 0x2db4e0: 0xa32dd431  sb          $t5, -0x2BCF($t9)
    ctx->pc = 0x2db4e0u;
    WRITE8(ADD32(GPR_U32(ctx, 25), 4294956081), (uint8_t)GPR_U32(ctx, 13));
    // 0x2db4e4: 0xfef15c82  sd          $s1, 0x5C82($s7)
    ctx->pc = 0x2db4e4u;
    WRITE64(ADD32(GPR_U32(ctx, 23), 23682), GPR_U64(ctx, 17));
    // 0x2db4e8: 0x266d0d68  addiu       $t5, $s3, 0xD68
    ctx->pc = 0x2db4e8u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 19), 3432));
    // 0x2db4ec: 0x0  nop
    ctx->pc = 0x2db4ecu;
    // NOP
    // 0x2db4f0: 0xa6a6d9b6  sh          $a2, -0x264A($s5)
    ctx->pc = 0x2db4f0u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 4294957494), (uint16_t)GPR_U32(ctx, 6));
    // 0x2db4f4: 0xc712e3f2  lwc1        $f18, -0x1C0E($t8)
    ctx->pc = 0x2db4f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 24), 4294960114)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[18] = f; }
    // 0x2db4f8: 0xa6a6d9ae  sh          $a2, -0x2652($s5)
    ctx->pc = 0x2db4f8u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 4294957486), (uint16_t)GPR_U32(ctx, 6));
    // 0x2db4fc: 0x0  nop
    ctx->pc = 0x2db4fcu;
    // NOP
label_2db500:
    // 0x2db500: 0x7cc3992a  sq          $v1, -0x66D6($a2)
    ctx->pc = 0x2db500u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 4294940970), GPR_VEC(ctx, 3));
    // 0x2db504: 0x7c83892a  sq          $v1, -0x76D6($a0)
    ctx->pc = 0x2db504u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 4294936874), GPR_VEC(ctx, 3));
    // 0x2db508: 0x7ce3912a  sq          $v1, -0x6ED6($a3)
    ctx->pc = 0x2db508u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 4294938922), GPR_VEC(ctx, 3));
    // 0x2db50c: 0xc0b8126  jal         func_2E0498
    ctx->pc = 0x2DB50Cu;
    SET_GPR_U32(ctx, 31, 0x2DB514u);
    ctx->pc = 0x2DB510u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DB50Cu;
    // 0x2db510: 0x7c63812b  sq          $v1, -0x7ED5($v1) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 3), 4294934827), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0498u, 0x2DB50Cu, 0x2DB514u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DB514u;
label_2db514:
    // 0x2db514: 0x7c832928  sq          $v1, 0x2928($a0)
    ctx->pc = 0x2db514u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 10536), GPR_VEC(ctx, 3));
    // 0x2db518: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2DB518u;
    {
        const bool branch_taken_0x2db518 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2db518) {
            ctx->pc = 0x2DB548u;
            goto label_2db548;
        }
    }
    ctx->pc = 0x2DB520u;
    // 0x2db520: 0x24eb3d90  addiu       $t3, $a3, 0x3D90
    ctx->pc = 0x2db520u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 7), 15760));
    // 0x2db524: 0x868bd27b  lh          $t3, -0x2D85($s4)
    ctx->pc = 0x2db524u;
    SET_GPR_S32(ctx, 11, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 4294955643)));
    // 0x2db528: 0xa29143f9  sb          $s1, 0x43F9($s4)
    ctx->pc = 0x2db528u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 17401), (uint8_t)GPR_U32(ctx, 17));
    // 0x2db52c: 0xc530f4c  jal         func_14C3D30
    ctx->pc = 0x2DB52Cu;
    SET_GPR_U32(ctx, 31, 0x2DB534u);
    ctx->pc = 0x2DB530u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DB52Cu;
    // 0x2db530: 0xff624b72  sd          $v0, 0x4B72($k1) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 27), 19314), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14C3D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14C3D30u, 0x2DB52Cu, 0x2DB534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DB534u;
label_2db534:
    // 0x2db534: 0xca31f04  jal         func_28C7C10
    ctx->pc = 0x2DB534u;
    SET_GPR_U32(ctx, 31, 0x2DB53Cu);
    ctx->pc = 0x2DB538u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DB534u;
    // 0x2db538: 0xa6a6d96b  sh          $a2, -0x2695($s5) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 21), 4294957419), (uint16_t)GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28C7C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28C7C10u, 0x2DB534u, 0x2DB53Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DB53Cu;
label_2db53c:
    // 0x2db53c: 0xc712e3f3  lwc1        $f18, -0x1C0D($t8)
    ctx->pc = 0x2db53cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 24), 4294960115)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[18] = f; }
    // 0x2db540: 0xa6a6d973  sh          $a2, -0x268D($s5)
    ctx->pc = 0x2db540u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 4294957427), (uint16_t)GPR_U32(ctx, 6));
    // 0x2db544: 0x0  nop
    ctx->pc = 0x2db544u;
    // NOP
label_2db548:
    // 0x2db548: 0x3c02002e  lui         $v0, 0x2E
    ctx->pc = 0x2db548u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)46 << 16));
    // 0x2db54c: 0x2442b538  addiu       $v0, $v0, -0x4AC8
    ctx->pc = 0x2db54cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948152));
    // 0x2db550: 0x3c04002e  lui         $a0, 0x2E
    ctx->pc = 0x2db550u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)46 << 16));
    // 0x2db554: 0x2484b518  addiu       $a0, $a0, -0x4AE8
    ctx->pc = 0x2db554u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948120));
    // 0x2db558: 0x8c470004  lw          $a3, 0x4($v0)
    ctx->pc = 0x2db558u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2db55c: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x2db55cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2db560: 0xc0b63f0  jal         func_2D8FC0
    ctx->pc = 0x2DB560u;
    SET_GPR_U32(ctx, 31, 0x2DB568u);
    ctx->pc = 0x2DB564u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DB560u;
    // 0x2db564: 0x8c460000  lw          $a2, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D8FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8FC0u, 0x2DB560u, 0x2DB568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DB568u;
label_2db568:
    // 0x2db568: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2db568u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2db56c: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x2db56cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2db570: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2db570u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2db574: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2db574u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2db578: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x2db578u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2db57c: 0x3e00008  jr          $ra
    ctx->pc = 0x2DB57Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DB580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB57Cu;
        // 0x2db580: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DB57Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DB584u;
    // 0x2db584: 0x0  nop
    ctx->pc = 0x2db584u;
    // NOP
}
