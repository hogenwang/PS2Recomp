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

// Function: sub_001AE938
// Address: 0x1ae938 - 0x1aea40
void sub_001AE938_0x1ae938(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AE938_0x1ae938");
#endif

    switch (ctx->pc) {
        case 0x1ae990u: goto label_1ae990;
        case 0x1ae9dcu: goto label_1ae9dc;
        case 0x1aea00u: goto label_1aea00;
        default: break;
    }

    ctx->pc = 0x1ae938u;

    // 0x1ae938: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x1ae938u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1ae93c: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1ae93cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1ae940: 0x82001a  div         $zero, $a0, $v0
    ctx->pc = 0x1ae940u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1ae944: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ae944u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1ae948: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x1ae948u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1ae94c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1ae94cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae950: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1ae950u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1ae954: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1ae954u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae958: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1ae958u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1ae95c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ae95cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae960: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1ae960u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1ae964: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1AE964u;
    {
        const bool branch_taken_0x1ae964 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ae964) {
            ctx->pc = 0x1AE968u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AE964u;
            // 0x1ae968: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AE96Cu;
            goto label_1ae96c;
        }
    }
    ctx->pc = 0x1AE96Cu;
label_1ae96c:
    // 0x1ae96c: 0x4012  mflo        $t0
    ctx->pc = 0x1ae96cu;
    SET_GPR_U64(ctx, 8, ctx->lo);
    // 0x1ae970: 0x3810  mfhi        $a3
    ctx->pc = 0x1ae970u;
    SET_GPR_U64(ctx, 7, ctx->hi);
    // 0x1ae974: 0x100202d  daddu       $a0, $t0, $zero
    ctx->pc = 0x1ae974u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae978: 0xa2070000  sb          $a3, 0x0($s0)
    ctx->pc = 0x1ae978u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 7));
    // 0x1ae97c: 0x54800004  bnel        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1AE97Cu;
    {
        const bool branch_taken_0x1ae97c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ae97c) {
            ctx->pc = 0x1AE980u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AE97Cu;
            // 0x1ae980: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AE990u;
            goto label_1ae990;
        }
    }
    ctx->pc = 0x1AE984u;
    // 0x1ae984: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1AE984u;
    {
        const bool branch_taken_0x1ae984 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AE988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE984u;
        // 0x1ae988: 0xa2000000  sb          $zero, 0x0($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae984) {
            ctx->pc = 0x1AE9CCu;
            goto label_1ae9cc;
        }
    }
    ctx->pc = 0x1AE98Cu;
    // 0x1ae98c: 0x0  nop
    ctx->pc = 0x1ae98cu;
    // NOP
label_1ae990:
    // 0x1ae990: 0x28a20020  slti        $v0, $a1, 0x20
    ctx->pc = 0x1ae990u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x1ae994: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1AE994u;
    {
        const bool branch_taken_0x1ae994 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AE998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE994u;
        // 0x1ae998: 0x2053021  addu        $a2, $s0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae994) {
            ctx->pc = 0x1AE9CCu;
            goto label_1ae9cc;
        }
    }
    ctx->pc = 0x1AE99Cu;
    // 0x1ae99c: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x1ae99cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1ae9a0: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x1ae9a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1ae9a4: 0x82001a  div         $zero, $a0, $v0
    ctx->pc = 0x1ae9a4u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1ae9a8: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1AE9A8u;
    {
        const bool branch_taken_0x1ae9a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ae9a8) {
            ctx->pc = 0x1AE9ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AE9A8u;
            // 0x1ae9ac: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AE9B0u;
            goto label_1ae9b0;
        }
    }
    ctx->pc = 0x1AE9B0u;
label_1ae9b0:
    // 0x1ae9b0: 0x4012  mflo        $t0
    ctx->pc = 0x1ae9b0u;
    SET_GPR_U64(ctx, 8, ctx->lo);
    // 0x1ae9b4: 0x3810  mfhi        $a3
    ctx->pc = 0x1ae9b4u;
    SET_GPR_U64(ctx, 7, ctx->hi);
    // 0x1ae9b8: 0x100202d  daddu       $a0, $t0, $zero
    ctx->pc = 0x1ae9b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae9bc: 0xa0c70000  sb          $a3, 0x0($a2)
    ctx->pc = 0x1ae9bcu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 7));
    // 0x1ae9c0: 0x5480fff3  bnel        $a0, $zero, . + 4 + (-0xD << 2)
    ctx->pc = 0x1AE9C0u;
    {
        const bool branch_taken_0x1ae9c0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ae9c0) {
            ctx->pc = 0x1AE9C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AE9C0u;
            // 0x1ae9c4: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AE990u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1ae990;
        }
    }
    ctx->pc = 0x1AE9C8u;
    // 0x1ae9c8: 0xa0c00000  sb          $zero, 0x0($a2)
    ctx->pc = 0x1ae9c8u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 0));
label_1ae9cc:
    // 0x1ae9cc: 0x3c0201bf  lui         $v0, 0x1BF
    ctx->pc = 0x1ae9ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)447 << 16));
    // 0x1ae9d0: 0x245152f0  addiu       $s1, $v0, 0x52F0
    ctx->pc = 0x1ae9d0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 21232));
    // 0x1ae9d4: 0xc04a83e  jal         func_12A0F8
    ctx->pc = 0x1AE9D4u;
    SET_GPR_U32(ctx, 31, 0x1AE9DCu);
    ctx->pc = 0x1AE9D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AE9D4u;
    // 0x1ae9d8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12A0F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A0F8u, 0x1AE9D4u, 0x1AE9DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE9DCu;
label_1ae9dc:
    // 0x1ae9dc: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1ae9dcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae9e0: 0x2642ffff  addiu       $v0, $s2, -0x1
    ctx->pc = 0x1ae9e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x1ae9e4: 0xe2182a  slt         $v1, $a3, $v0
    ctx->pc = 0x1ae9e4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1ae9e8: 0x43380a  movz        $a3, $v0, $v1
    ctx->pc = 0x1ae9e8u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 2));
    // 0x1ae9ec: 0x18e0000b  blez        $a3, . + 4 + (0xB << 2)
    ctx->pc = 0x1AE9ECu;
    {
        const bool branch_taken_0x1ae9ec = (GPR_S32(ctx, 7) <= 0);
        ctx->pc = 0x1AE9F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE9ECu;
        // 0x1ae9f0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae9ec) {
            ctx->pc = 0x1AEA1Cu;
            goto label_1aea1c;
        }
    }
    ctx->pc = 0x1AE9F4u;
    // 0x1ae9f4: 0xf11021  addu        $v0, $a3, $s1
    ctx->pc = 0x1ae9f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 17)));
    // 0x1ae9f8: 0x2446ffff  addiu       $a2, $v0, -0x1
    ctx->pc = 0x1ae9f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1ae9fc: 0x0  nop
    ctx->pc = 0x1ae9fcu;
    // NOP
label_1aea00:
    // 0x1aea00: 0x2052021  addu        $a0, $s0, $a1
    ctx->pc = 0x1aea00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x1aea04: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1aea04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1aea08: 0x90c30000  lbu         $v1, 0x0($a2)
    ctx->pc = 0x1aea08u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1aea0c: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x1aea0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x1aea10: 0xa7102a  slt         $v0, $a1, $a3
    ctx->pc = 0x1aea10u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x1aea14: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1AEA14u;
    {
        const bool branch_taken_0x1aea14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AEA18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEA14u;
        // 0x1aea18: 0xa0830000  sb          $v1, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aea14) {
            ctx->pc = 0x1AEA00u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1aea00;
        }
    }
    ctx->pc = 0x1AEA1Cu;
label_1aea1c:
    // 0x1aea1c: 0x2051021  addu        $v0, $s0, $a1
    ctx->pc = 0x1aea1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x1aea20: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1aea20u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1aea24: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1aea24u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1aea28: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1aea28u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1aea2c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1aea2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1aea30: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x1aea30u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x1aea34: 0x3e00008  jr          $ra
    ctx->pc = 0x1AEA34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AEA38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEA34u;
        // 0x1aea38: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AEA34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AEA3Cu;
    // 0x1aea3c: 0x0  nop
    ctx->pc = 0x1aea3cu;
    // NOP
    if (ctx->pc == 0x1aea3cu) { ctx->pc = 0x1aea40u; }
}
