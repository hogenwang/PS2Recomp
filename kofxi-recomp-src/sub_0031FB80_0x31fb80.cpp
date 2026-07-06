#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0031FB80
// Address: 0x31fb80 - 0x31fd50
void sub_0031FB80_0x31fb80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031FB80_0x31fb80");
#endif

    switch (ctx->pc) {
        case 0x31fbc0u: goto label_31fbc0;
        case 0x31fbccu: goto label_31fbcc;
        default: break;
    }

    ctx->pc = 0x31fb80u;

    // 0x31fb80: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x31fb80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x31fb84: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x31fb84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x31fb88: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x31fb88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x31fb8c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x31fb8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x31fb90: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x31fb90u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31fb94: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x31fb94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x31fb98: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x31fb98u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31fb9c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x31fb9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x31fba0: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x31fba0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31fba4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x31fba4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x31fba8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x31fba8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x31fbac: 0x641200ff  daddiu      $s2, $zero, 0xFF
    ctx->pc = 0x31fbacu;
    SET_GPR_S64(ctx, 18, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)255);
    // 0x31fbb0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x31fbb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x31fbb4: 0x24110280  addiu       $s1, $zero, 0x280
    ctx->pc = 0x31fbb4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
    // 0x31fbb8: 0x2410fd80  addiu       $s0, $zero, -0x280
    ctx->pc = 0x31fbb8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966656));
    // 0x31fbbc: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x31fbbcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_31fbc0:
    // 0x31fbc0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x31fbc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31fbc4: 0xc062828  jal         func_18A0A0
    ctx->pc = 0x31FBC4u;
    SET_GPR_U32(ctx, 31, 0x31FBCCu);
    ctx->pc = 0x31FBC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31FBC4u;
            // 0x31fbc8: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18A0A0u;
    if (runtime->hasFunction(0x18A0A0u)) {
        auto targetFn = runtime->lookupFunction(0x18A0A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31FBCCu; }
        if (ctx->pc != 0x31FBCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018A0A0_0x18a0a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31FBCCu; }
        if (ctx->pc != 0x31FBCCu) { return; }
    }
    ctx->pc = 0x31FBCCu;
label_31fbcc:
    // 0x31fbcc: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x31FBCCu;
    {
        const bool branch_taken_0x31fbcc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x31fbcc) {
            ctx->pc = 0x31FC48u;
            goto label_31fc48;
        }
    }
    ctx->pc = 0x31FBD4u;
    // 0x31fbd4: 0x9043008c  lbu         $v1, 0x8C($v0)
    ctx->pc = 0x31fbd4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 140)));
    // 0x31fbd8: 0x30630008  andi        $v1, $v1, 0x8
    ctx->pc = 0x31fbd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x31fbdc: 0x1460001a  bnez        $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x31FBDCu;
    {
        const bool branch_taken_0x31fbdc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x31fbdc) {
            ctx->pc = 0x31FC48u;
            goto label_31fc48;
        }
    }
    ctx->pc = 0x31FBE4u;
    // 0x31fbe4: 0x84440012  lh          $a0, 0x12($v0)
    ctx->pc = 0x31fbe4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 18)));
    // 0x31fbe8: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x31fbe8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x31fbec: 0x8443db30  lh          $v1, -0x24D0($v0)
    ctx->pc = 0x31fbecu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294957872)));
    // 0x31fbf0: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x31fbf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x31fbf4: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x31fbf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
    // 0x31fbf8: 0x831823  subu        $v1, $a0, $v1
    ctx->pc = 0x31fbf8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x31fbfc: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x31fbfcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x31fc00: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x31fc00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x31fc04: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x31fc04u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x31fc08: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x31fc08u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x31fc0c: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x31FC0Cu;
    {
        const bool branch_taken_0x31fc0c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x31fc0c) {
            ctx->pc = 0x31FC18u;
            goto label_31fc18;
        }
    }
    ctx->pc = 0x31FC14u;
    // 0x31fc14: 0x60882d  daddu       $s1, $v1, $zero
    ctx->pc = 0x31fc14u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_31fc18:
    // 0x31fc18: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x31fc18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x31fc1c: 0x8443db32  lh          $v1, -0x24CE($v0)
    ctx->pc = 0x31fc1cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294957874)));
    // 0x31fc20: 0x2463ffe0  addiu       $v1, $v1, -0x20
    ctx->pc = 0x31fc20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967264));
    // 0x31fc24: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x31fc24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
    // 0x31fc28: 0x831823  subu        $v1, $a0, $v1
    ctx->pc = 0x31fc28u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x31fc2c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x31fc2cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x31fc30: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x31fc30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x31fc34: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x31fc34u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x31fc38: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x31fc38u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x31fc3c: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x31FC3Cu;
    {
        const bool branch_taken_0x31fc3c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x31fc3c) {
            ctx->pc = 0x31FC48u;
            goto label_31fc48;
        }
    }
    ctx->pc = 0x31FC44u;
    // 0x31fc44: 0x60802d  daddu       $s0, $v1, $zero
    ctx->pc = 0x31fc44u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_31fc48:
    // 0x31fc48: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x31fc48u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x31fc4c: 0x2a620003  slti        $v0, $s3, 0x3
    ctx->pc = 0x31fc4cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x31fc50: 0x1440ffdb  bnez        $v0, . + 4 + (-0x25 << 2)
    ctx->pc = 0x31FC50u;
    {
        const bool branch_taken_0x31fc50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x31fc50) {
            ctx->pc = 0x31FBC0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_31fbc0;
        }
    }
    ctx->pc = 0x31FC58u;
    // 0x31fc58: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x31fc58u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x31fc5c: 0x2a820004  slti        $v0, $s4, 0x4
    ctx->pc = 0x31fc5cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x31fc60: 0x5440ffd7  bnel        $v0, $zero, . + 4 + (-0x29 << 2)
    ctx->pc = 0x31FC60u;
    {
        const bool branch_taken_0x31fc60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x31fc60) {
            ctx->pc = 0x31FC64u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x31FC60u;
            // 0x31fc64: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x31FBC0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_31fbc0;
        }
    }
    ctx->pc = 0x31FC68u;
    // 0x31fc68: 0x11243c  dsll32      $a0, $s1, 16
    ctx->pc = 0x31fc68u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) << (32 + 16));
    // 0x31fc6c: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x31fc6cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x31fc70: 0x5c800004  bgtzl       $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x31FC70u;
    {
        const bool branch_taken_0x31fc70 = (GPR_S32(ctx, 4) > 0);
        if (branch_taken_0x31fc70) {
            ctx->pc = 0x31FC74u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x31FC70u;
            // 0x31fc74: 0x102c3c  dsll32      $a1, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x31FC84u;
            goto label_31fc84;
        }
    }
    ctx->pc = 0x31FC78u;
    // 0x31fc78: 0x324200f5  andi        $v0, $s2, 0xF5
    ctx->pc = 0x31fc78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)245);
    // 0x31fc7c: 0x305200ff  andi        $s2, $v0, 0xFF
    ctx->pc = 0x31fc7cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x31fc80: 0x102c3c  dsll32      $a1, $s0, 16
    ctx->pc = 0x31fc80u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) << (32 + 16));
label_31fc84:
    // 0x31fc84: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x31fc84u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    // 0x31fc88: 0x4a00003  bltz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x31FC88u;
    {
        const bool branch_taken_0x31fc88 = (GPR_S32(ctx, 5) < 0);
        if (branch_taken_0x31fc88) {
            ctx->pc = 0x31FC98u;
            goto label_31fc98;
        }
    }
    ctx->pc = 0x31FC90u;
    // 0x31fc90: 0x324200fa  andi        $v0, $s2, 0xFA
    ctx->pc = 0x31fc90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)250);
    // 0x31fc94: 0x305200ff  andi        $s2, $v0, 0xFF
    ctx->pc = 0x31fc94u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_31fc98:
    // 0x31fc98: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x31fc98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x31fc9c: 0x26c3fec0  addiu       $v1, $s6, -0x140
    ctx->pc = 0x31fc9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), 4294966976));
    // 0x31fca0: 0x8442db20  lh          $v0, -0x24E0($v0)
    ctx->pc = 0x31fca0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294957856)));
    // 0x31fca4: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x31fca4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x31fca8: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x31fca8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x31fcac: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x31fcacu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x31fcb0: 0x461000a  bgez        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x31FCB0u;
    {
        const bool branch_taken_0x31fcb0 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x31fcb0) {
            ctx->pc = 0x31FCDCu;
            goto label_31fcdc;
        }
    }
    ctx->pc = 0x31FCB8u;
    // 0x31fcb8: 0x324200ff  andi        $v0, $s2, 0xFF
    ctx->pc = 0x31fcb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
    // 0x31fcbc: 0x30420005  andi        $v0, $v0, 0x5
    ctx->pc = 0x31fcbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)5);
    // 0x31fcc0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x31FCC0u;
    {
        const bool branch_taken_0x31fcc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x31fcc0) {
            ctx->pc = 0x31FCDCu;
            goto label_31fcdc;
        }
    }
    ctx->pc = 0x31FCC8u;
    // 0x31fcc8: 0x65082a  slt         $at, $v1, $a1
    ctx->pc = 0x31fcc8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x31fccc: 0x5020000d  beql        $at, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x31FCCCu;
    {
        const bool branch_taken_0x31fccc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x31fccc) {
            ctx->pc = 0x31FCD0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x31FCCCu;
            // 0x31fcd0: 0x60a82d  daddu       $s5, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x31FD04u;
            goto label_31fd04;
        }
    }
    ctx->pc = 0x31FCD4u;
    // 0x31fcd4: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x31FCD4u;
    {
        const bool branch_taken_0x31fcd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31FCD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31FCD4u;
            // 0x31fcd8: 0xa0a82d  daddu       $s5, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31fcd4) {
            ctx->pc = 0x31FD04u;
            goto label_31fd04;
        }
    }
    ctx->pc = 0x31FCDCu;
label_31fcdc:
    // 0x31fcdc: 0x5860000a  blezl       $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x31FCDCu;
    {
        const bool branch_taken_0x31fcdc = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x31fcdc) {
            ctx->pc = 0x31FCE0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x31FCDCu;
            // 0x31fce0: 0x2aa1ffe1  slti        $at, $s5, -0x1F (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)4294967265) ? 1 : 0);
        ctx->in_delay_slot = false;
            ctx->pc = 0x31FD08u;
            goto label_31fd08;
        }
    }
    ctx->pc = 0x31FCE4u;
    // 0x31fce4: 0x324200ff  andi        $v0, $s2, 0xFF
    ctx->pc = 0x31fce4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
    // 0x31fce8: 0x3042000a  andi        $v0, $v0, 0xA
    ctx->pc = 0x31fce8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)10);
    // 0x31fcec: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x31FCECu;
    {
        const bool branch_taken_0x31fcec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x31fcec) {
            ctx->pc = 0x31FD04u;
            goto label_31fd04;
        }
    }
    ctx->pc = 0x31FCF4u;
    // 0x31fcf4: 0x83082a  slt         $at, $a0, $v1
    ctx->pc = 0x31fcf4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x31fcf8: 0x50200002  beql        $at, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x31FCF8u;
    {
        const bool branch_taken_0x31fcf8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x31fcf8) {
            ctx->pc = 0x31FCFCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x31FCF8u;
            // 0x31fcfc: 0x60a82d  daddu       $s5, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x31FD04u;
            goto label_31fd04;
        }
    }
    ctx->pc = 0x31FD00u;
    // 0x31fd00: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x31fd00u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_31fd04:
    // 0x31fd04: 0x2aa1ffe1  slti        $at, $s5, -0x1F
    ctx->pc = 0x31fd04u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)4294967265) ? 1 : 0);
label_31fd08:
    // 0x31fd08: 0x50200003  beql        $at, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x31FD08u;
    {
        const bool branch_taken_0x31fd08 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x31fd08) {
            ctx->pc = 0x31FD0Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x31FD08u;
            // 0x31fd0c: 0x2aa20020  slti        $v0, $s5, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)32) ? 1 : 0);
        ctx->in_delay_slot = false;
            ctx->pc = 0x31FD18u;
            goto label_31fd18;
        }
    }
    ctx->pc = 0x31FD10u;
    // 0x31fd10: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x31FD10u;
    {
        const bool branch_taken_0x31fd10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31FD14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31FD10u;
            // 0x31fd14: 0x2415ffe0  addiu       $s5, $zero, -0x20 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967264));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31fd10) {
            ctx->pc = 0x31FD24u;
            goto label_31fd24;
        }
    }
    ctx->pc = 0x31FD18u;
label_31fd18:
    // 0x31fd18: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x31FD18u;
    {
        const bool branch_taken_0x31fd18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x31fd18) {
            ctx->pc = 0x31FD1Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x31FD18u;
            // 0x31fd1c: 0x2a0102d  daddu       $v0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x31FD28u;
            goto label_31fd28;
        }
    }
    ctx->pc = 0x31FD20u;
    // 0x31fd20: 0x24150020  addiu       $s5, $zero, 0x20
    ctx->pc = 0x31fd20u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_31fd24:
    // 0x31fd24: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x31fd24u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_31fd28:
    // 0x31fd28: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x31fd28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x31fd2c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x31fd2cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x31fd30: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x31fd30u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x31fd34: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x31fd34u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x31fd38: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x31fd38u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x31fd3c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x31fd3cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x31fd40: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x31fd40u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x31fd44: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x31fd44u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31fd48: 0x3e00008  jr          $ra
    ctx->pc = 0x31FD48u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31FD4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31FD48u;
            // 0x31fd4c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x31FD50u;
    ctx->pc = 0x31fd50u;
}
