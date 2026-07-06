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

// Function: sub_002A18D8
// Address: 0x2a18d8 - 0x2a19f0
void sub_002A18D8_0x2a18d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A18D8_0x2a18d8");
#endif

    switch (ctx->pc) {
        case 0x2a1928u: goto label_2a1928;
        case 0x2a1980u: goto label_2a1980;
        case 0x2a1990u: goto label_2a1990;
        case 0x2a19acu: goto label_2a19ac;
        default: break;
    }

    ctx->pc = 0x2a18d8u;

    // 0x2a18d8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2a18d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2a18dc: 0xc0482d  daddu       $t1, $a2, $zero
    ctx->pc = 0x2a18dcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a18e0: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x2a18e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x2a18e4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2a18e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2a18e8: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x2a18e8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a18ec: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x2a18ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2a18f0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2a18f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2a18f4: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2a18f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2a18f8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2a18f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2a18fc: 0x12800033  beqz        $s4, . + 4 + (0x33 << 2)
    ctx->pc = 0x2A18FCu;
    {
        const bool branch_taken_0x2a18fc = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A1900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A18FCu;
        // 0x2a1900: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a18fc) {
            ctx->pc = 0x2A19CCu;
            goto label_2a19cc;
        }
    }
    ctx->pc = 0x2A1904u;
    // 0x2a1904: 0x2502000b  addiu       $v0, $t0, 0xB
    ctx->pc = 0x2a1904u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 11));
    // 0x2a1908: 0x122102a  slt         $v0, $t1, $v0
    ctx->pc = 0x2a1908u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2a190c: 0x1440002f  bnez        $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x2A190Cu;
    {
        const bool branch_taken_0x2a190c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A1910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A190Cu;
        // 0x2a1910: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a190c) {
            ctx->pc = 0x2A19CCu;
            goto label_2a19cc;
        }
    }
    ctx->pc = 0x2A1914u;
    // 0x2a1914: 0xa91021  addu        $v0, $a1, $t1
    ctx->pc = 0x2a1914u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
    // 0x2a1918: 0x2510ffff  addiu       $s0, $t0, -0x1
    ctx->pc = 0x2a1918u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x2a191c: 0x600000b  bltz        $s0, . + 4 + (0xB << 2)
    ctx->pc = 0x2A191Cu;
    {
        const bool branch_taken_0x2a191c = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x2A1920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A191Cu;
        // 0x2a1920: 0x488823  subu        $s1, $v0, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a191c) {
            ctx->pc = 0x2A194Cu;
            goto label_2a194c;
        }
    }
    ctx->pc = 0x2A1924u;
    // 0x2a1924: 0x25060003  addiu       $a2, $t0, 0x3
    ctx->pc = 0x2a1924u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), 3));
label_2a1928:
    // 0x2a1928: 0xf01021  addu        $v0, $a3, $s0
    ctx->pc = 0x2a1928u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 16)));
    // 0x2a192c: 0x2302021  addu        $a0, $s1, $s0
    ctx->pc = 0x2a192cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x2a1930: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x2a1930u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a1934: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x2a1934u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x2a1938: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x2a1938u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x2a193c: 0x601fffa  bgez        $s0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2A193Cu;
    {
        const bool branch_taken_0x2a193c = (GPR_S32(ctx, 16) >= 0);
        if (branch_taken_0x2a193c) {
            ctx->pc = 0x2A1928u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2a1928;
        }
    }
    ctx->pc = 0x2A1944u;
    // 0x2a1944: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2A1944u;
    {
        const bool branch_taken_0x2a1944 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A1948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1944u;
        // 0x2a1948: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1944) {
            ctx->pc = 0x2A1954u;
            goto label_2a1954;
        }
    }
    ctx->pc = 0x2A194Cu;
label_2a194c:
    // 0x2a194c: 0x25060003  addiu       $a2, $t0, 0x3
    ctx->pc = 0x2a194cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), 3));
    // 0x2a1950: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2a1950u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2a1954:
    // 0x2a1954: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2a1954u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a1958: 0xa2200000  sb          $zero, 0x0($s1)
    ctx->pc = 0x2a1958u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x2a195c: 0x1269023  subu        $s2, $t1, $a2
    ctx->pc = 0x2a195cu;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 6)));
    // 0x2a1960: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2a1960u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2a1964: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2a1964u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1968: 0xa2220000  sb          $v0, 0x0($s1)
    ctx->pc = 0x2a1968u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x2a196c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2a196cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1970: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2a1970u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2a1974: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2a1974u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1978: 0xc0a8d02  jal         func_2A3408
    ctx->pc = 0x2A1978u;
    SET_GPR_U32(ctx, 31, 0x2A1980u);
    ctx->pc = 0x2A197Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A1978u;
    // 0x2a197c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A3408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A3408u, 0x2A1978u, 0x2A1980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1980u;
label_2a1980:
    // 0x2a1980: 0x1a400010  blez        $s2, . + 4 + (0x10 << 2)
    ctx->pc = 0x2A1980u;
    {
        const bool branch_taken_0x2a1980 = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x2A1984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1980u;
        // 0x2a1984: 0x2329821  addu        $s3, $s1, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1980) {
            ctx->pc = 0x2A19C4u;
            goto label_2a19c4;
        }
    }
    ctx->pc = 0x2A1988u;
    // 0x2a1988: 0x2302821  addu        $a1, $s1, $s0
    ctx->pc = 0x2a1988u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x2a198c: 0x0  nop
    ctx->pc = 0x2a198cu;
    // NOP
label_2a1990:
    // 0x2a1990: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x2a1990u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2a1994: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2A1994u;
    {
        const bool branch_taken_0x2a1994 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a1994) {
            ctx->pc = 0x2A1998u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A1994u;
            // 0x2a1998: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A19B0u;
            goto label_2a19b0;
        }
    }
    ctx->pc = 0x2A199Cu;
    // 0x2a199c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2a199cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a19a0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2a19a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a19a4: 0xc0a8d02  jal         func_2A3408
    ctx->pc = 0x2A19A4u;
    SET_GPR_U32(ctx, 31, 0x2A19ACu);
    ctx->pc = 0x2A19A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A19A4u;
    // 0x2a19a8: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A3408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A3408u, 0x2A19A4u, 0x2A19ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A19ACu;
label_2a19ac:
    // 0x2a19ac: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2a19acu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_2a19b0:
    // 0x2a19b0: 0x212102a  slt         $v0, $s0, $s2
    ctx->pc = 0x2a19b0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x2a19b4: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x2A19B4u;
    {
        const bool branch_taken_0x2a19b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A19B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A19B4u;
        // 0x2a19b8: 0x2302821  addu        $a1, $s1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a19b4) {
            ctx->pc = 0x2A1990u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2a1990;
        }
    }
    ctx->pc = 0x2A19BCu;
    // 0x2a19bc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2A19BCu;
    {
        const bool branch_taken_0x2a19bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A19C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A19BCu;
        // 0x2a19c0: 0xa2600000  sb          $zero, 0x0($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a19bc) {
            ctx->pc = 0x2A19C8u;
            goto label_2a19c8;
        }
    }
    ctx->pc = 0x2A19C4u;
label_2a19c4:
    // 0x2a19c4: 0xa2600000  sb          $zero, 0x0($s3)
    ctx->pc = 0x2a19c4u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 0));
label_2a19c8:
    // 0x2a19c8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2a19c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a19cc:
    // 0x2a19cc: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2a19ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2a19d0: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x2a19d0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2a19d4: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x2a19d4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2a19d8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2a19d8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a19dc: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2a19dcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a19e0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2a19e0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a19e4: 0x3e00008  jr          $ra
    ctx->pc = 0x2A19E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A19E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A19E4u;
        // 0x2a19e8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A19E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A19ECu;
    // 0x2a19ec: 0x0  nop
    ctx->pc = 0x2a19ecu;
    // NOP
}
