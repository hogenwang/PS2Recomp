#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00335BF0
// Address: 0x335bf0 - 0x335d40
void sub_00335BF0_0x335bf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00335BF0_0x335bf0");
#endif

    switch (ctx->pc) {
        case 0x335c34u: goto label_335c34;
        case 0x335c48u: goto label_335c48;
        case 0x335d00u: goto label_335d00;
        default: break;
    }

    ctx->pc = 0x335bf0u;

    // 0x335bf0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x335bf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x335bf4: 0x24070080  addiu       $a3, $zero, 0x80
    ctx->pc = 0x335bf4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x335bf8: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x335bf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x335bfc: 0x24080010  addiu       $t0, $zero, 0x10
    ctx->pc = 0x335bfcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x335c00: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x335c00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x335c04: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x335c04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x335c08: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x335c08u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x335c0c: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x335c0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x335c10: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x335c10u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x335c14: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x335c14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x335c18: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x335c18u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x335c1c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x335c1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x335c20: 0x24842620  addiu       $a0, $a0, 0x2620
    ctx->pc = 0x335c20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9760));
    // 0x335c24: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x335c24u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x335c28: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x335c28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x335c2c: 0xc0c0b80  jal         func_302E00
    ctx->pc = 0x335C2Cu;
    SET_GPR_U32(ctx, 31, 0x335C34u);
    ctx->pc = 0x335C30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x335C2Cu;
            // 0x335c30: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x302E00u;
    if (runtime->hasFunction(0x302E00u)) {
        auto targetFn = runtime->lookupFunction(0x302E00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x335C34u; }
        if (ctx->pc != 0x335C34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00302E00_0x302e00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x335C34u; }
        if (ctx->pc != 0x335C34u) { return; }
    }
    ctx->pc = 0x335C34u;
label_335c34:
    // 0x335c34: 0x3c030098  lui         $v1, 0x98
    ctx->pc = 0x335c34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)152 << 16));
    // 0x335c38: 0x2610fff2  addiu       $s0, $s0, -0xE
    ctx->pc = 0x335c38u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967282));
    // 0x335c3c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x335c3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x335c40: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x335c40u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x335c44: 0x34719680  ori         $s1, $v1, 0x9680
    ctx->pc = 0x335c44u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)38528);
label_335c48:
    // 0x335c48: 0x16200002  bnez        $s1, . + 4 + (0x2 << 2)
    ctx->pc = 0x335C48u;
    {
        const bool branch_taken_0x335c48 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x335C4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x335C48u;
            // 0x335c4c: 0x271001a  div         $zero, $s3, $s1 (Delay Slot)
        { int32_t divisor = GPR_S32(ctx, 17);    int32_t dividend = GPR_S32(ctx, 19);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
        ctx->in_delay_slot = false;
        if (branch_taken_0x335c48) {
            ctx->pc = 0x335C54u;
            goto label_335c54;
        }
    }
    ctx->pc = 0x335C50u;
    // 0x335c50: 0x1cd  break       0, 7
    ctx->pc = 0x335c50u;
    runtime->handleBreak(rdram, ctx);
label_335c54:
    // 0x335c54: 0x3012  mflo        $a2
    ctx->pc = 0x335c54u;
    SET_GPR_U64(ctx, 6, ctx->lo);
    // 0x335c58: 0x16200002  bnez        $s1, . + 4 + (0x2 << 2)
    ctx->pc = 0x335C58u;
    {
        const bool branch_taken_0x335c58 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x335C5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x335C58u;
            // 0x335c5c: 0x271001a  div         $zero, $s3, $s1 (Delay Slot)
        { int32_t divisor = GPR_S32(ctx, 17);    int32_t dividend = GPR_S32(ctx, 19);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
        ctx->in_delay_slot = false;
        if (branch_taken_0x335c58) {
            ctx->pc = 0x335C64u;
            goto label_335c64;
        }
    }
    ctx->pc = 0x335C60u;
    // 0x335c60: 0x1cd  break       0, 7
    ctx->pc = 0x335c60u;
    runtime->handleBreak(rdram, ctx);
label_335c64:
    // 0x335c64: 0x3c036666  lui         $v1, 0x6666
    ctx->pc = 0x335c64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)26214 << 16));
    // 0x335c68: 0x1127c2  srl         $a0, $s1, 31
    ctx->pc = 0x335c68u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 17), 31));
    // 0x335c6c: 0x9810  mfhi        $s3
    ctx->pc = 0x335c6cu;
    SET_GPR_U64(ctx, 19, ctx->hi);
    // 0x335c70: 0x34636667  ori         $v1, $v1, 0x6667
    ctx->pc = 0x335c70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)26215);
    // 0x335c74: 0x710018  mult        $zero, $v1, $s1
    ctx->pc = 0x335c74u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x335c78: 0x1810  mfhi        $v1
    ctx->pc = 0x335c78u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x335c7c: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x335c7cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
    // 0x335c80: 0x14c00005  bnez        $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x335C80u;
    {
        const bool branch_taken_0x335c80 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x335C84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x335C80u;
            // 0x335c84: 0x648821  addu        $s1, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x335c80) {
            ctx->pc = 0x335C98u;
            goto label_335c98;
        }
    }
    ctx->pc = 0x335C88u;
    // 0x335c88: 0x14c0001f  bnez        $a2, . + 4 + (0x1F << 2)
    ctx->pc = 0x335C88u;
    {
        const bool branch_taken_0x335c88 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x335c88) {
            ctx->pc = 0x335D08u;
            goto label_335d08;
        }
    }
    ctx->pc = 0x335C90u;
    // 0x335c90: 0x10a0001d  beqz        $a1, . + 4 + (0x1D << 2)
    ctx->pc = 0x335C90u;
    {
        const bool branch_taken_0x335c90 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x335c90) {
            ctx->pc = 0x335D08u;
            goto label_335d08;
        }
    }
    ctx->pc = 0x335C98u;
label_335c98:
    // 0x335c98: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x335c98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x335c9c: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x335c9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x335ca0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x335ca0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x335ca4: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x335ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x335ca8: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x335ca8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
    // 0x335cac: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x335cacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
    // 0x335cb0: 0x30c2000f  andi        $v0, $a2, 0xF
    ctx->pc = 0x335cb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)15);
    // 0x335cb4: 0x4c10004  bgez        $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x335CB4u;
    {
        const bool branch_taken_0x335cb4 = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x335CB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x335CB4u;
            // 0x335cb8: 0xffa30018  sd          $v1, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x335cb4) {
            ctx->pc = 0x335CC8u;
            goto label_335cc8;
        }
    }
    ctx->pc = 0x335CBCu;
    // 0x335cbc: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x335CBCu;
    {
        const bool branch_taken_0x335cbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x335cbc) {
            ctx->pc = 0x335CC0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x335CBCu;
            // 0x335cc0: 0x24900  sll         $t1, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
            ctx->pc = 0x335CCCu;
            goto label_335ccc;
        }
    }
    ctx->pc = 0x335CC4u;
    // 0x335cc4: 0x2442fff0  addiu       $v0, $v0, -0x10
    ctx->pc = 0x335cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
label_335cc8:
    // 0x335cc8: 0x24900  sll         $t1, $v0, 4
    ctx->pc = 0x335cc8u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_335ccc:
    // 0x335ccc: 0x4c10003  bgez        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x335CCCu;
    {
        const bool branch_taken_0x335ccc = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x335CD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x335CCCu;
            // 0x335cd0: 0x61103  sra         $v0, $a2, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x335ccc) {
            ctx->pc = 0x335CDCu;
            goto label_335cdc;
        }
    }
    ctx->pc = 0x335CD4u;
    // 0x335cd4: 0x24c2000f  addiu       $v0, $a2, 0xF
    ctx->pc = 0x335cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 15));
    // 0x335cd8: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x335cd8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_335cdc:
    // 0x335cdc: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x335cdcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x335ce0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x335ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x335ce4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x335ce4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x335ce8: 0x244a0150  addiu       $t2, $v0, 0x150
    ctx->pc = 0x335ce8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), 336));
    // 0x335cec: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x335cecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x335cf0: 0x2406a833  addiu       $a2, $zero, -0x57CD
    ctx->pc = 0x335cf0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294944819));
    // 0x335cf4: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x335cf4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x335cf8: 0xc0c0ba8  jal         func_302EA0
    ctx->pc = 0x335CF8u;
    SET_GPR_U32(ctx, 31, 0x335D00u);
    ctx->pc = 0x335CFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x335CF8u;
            // 0x335cfc: 0xe0582d  daddu       $t3, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x302EA0u;
    if (runtime->hasFunction(0x302EA0u)) {
        auto targetFn = runtime->lookupFunction(0x302EA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x335D00u; }
        if (ctx->pc != 0x335D00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00302EA0_0x302ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x335D00u; }
        if (ctx->pc != 0x335D00u) { return; }
    }
    ctx->pc = 0x335D00u;
label_335d00:
    // 0x335d00: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x335d00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x335d04: 0x0  nop
    ctx->pc = 0x335d04u;
    // NOP
label_335d08:
    // 0x335d08: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x335d08u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x335d0c: 0x2a430008  slti        $v1, $s2, 0x8
    ctx->pc = 0x335d0cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x335d10: 0x1460ffcd  bnez        $v1, . + 4 + (-0x33 << 2)
    ctx->pc = 0x335D10u;
    {
        const bool branch_taken_0x335d10 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x335D14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x335D10u;
            // 0x335d14: 0x26940010  addiu       $s4, $s4, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x335d10) {
            ctx->pc = 0x335C48u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_335c48;
        }
    }
    ctx->pc = 0x335D18u;
    // 0x335d18: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x335d18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x335d1c: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x335d1cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x335d20: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x335d20u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x335d24: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x335d24u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x335d28: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x335d28u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x335d2c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x335d2cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x335d30: 0x3e00008  jr          $ra
    ctx->pc = 0x335D30u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x335D34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x335D30u;
            // 0x335d34: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x335D38u;
    // 0x335d38: 0x0  nop
    ctx->pc = 0x335d38u;
    // NOP
    // 0x335d3c: 0x0  nop
    ctx->pc = 0x335d3cu;
    // NOP
    ctx->pc = 0x335d40u;
}
