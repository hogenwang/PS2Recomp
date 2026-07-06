#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001F4B28
// Address: 0x1f4b28 - 0x1f4d90
void sub_001F4B28_0x1f4b28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F4B28_0x1f4b28");
#endif

    switch (ctx->pc) {
        case 0x1f4b54u: goto label_1f4b54;
        case 0x1f4d30u: goto label_1f4d30;
        case 0x1f4d58u: goto label_1f4d58;
        case 0x1f4d68u: goto label_1f4d68;
        case 0x1f4d74u: goto label_1f4d74;
        default: break;
    }

    ctx->pc = 0x1f4b28u;

    // 0x1f4b28: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1f4b28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1f4b2c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1f4b2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1f4b30: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1f4b30u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4b34: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1f4b34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1f4b38: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1f4b38u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4b3c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1f4b3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1f4b40: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1f4b40u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4b44: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1f4b44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1f4b48: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1f4b48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1f4b4c: 0xc07d48a  jal         func_1F5228
    ctx->pc = 0x1F4B4Cu;
    SET_GPR_U32(ctx, 31, 0x1F4B54u);
    ctx->pc = 0x1F4B50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F4B4Cu;
            // 0x1f4b50: 0x8e112018  lw          $s1, 0x2018($s0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8216)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F5228u;
    if (runtime->hasFunction(0x1F5228u)) {
        auto targetFn = runtime->lookupFunction(0x1F5228u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4B54u; }
        if (ctx->pc != 0x1F4B54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001F5228_0x1f5228(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4B54u; }
        if (ctx->pc != 0x1F4B54u) { return; }
    }
    ctx->pc = 0x1F4B54u;
label_1f4b54:
    // 0x1f4b54: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x1f4b54u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f4b58: 0x2669005c  addiu       $t1, $s3, 0x5C
    ctx->pc = 0x1f4b58u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 19), 92));
    // 0x1f4b5c: 0xac4a0000  sw          $t2, 0x0($v0)
    ctx->pc = 0x1f4b5cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 10));
    // 0x1f4b60: 0x24480008  addiu       $t0, $v0, 0x8
    ctx->pc = 0x1f4b60u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x1f4b64: 0x8d230018  lw          $v1, 0x18($t1)
    ctx->pc = 0x1f4b64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 24)));
    // 0x1f4b68: 0x8d220000  lw          $v0, 0x0($t1)
    ctx->pc = 0x1f4b68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1f4b6c: 0xad030010  sw          $v1, 0x10($t0)
    ctx->pc = 0x1f4b6cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 16), GPR_U32(ctx, 3));
    // 0x1f4b70: 0xad020000  sw          $v0, 0x0($t0)
    ctx->pc = 0x1f4b70u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 2));
    // 0x1f4b74: 0x8e060038  lw          $a2, 0x38($s0)
    ctx->pc = 0x1f4b74u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x1f4b78: 0x8d220004  lw          $v0, 0x4($t1)
    ctx->pc = 0x1f4b78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x1f4b7c: 0x8e640008  lw          $a0, 0x8($s3)
    ctx->pc = 0x1f4b7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x1f4b80: 0xad020004  sw          $v0, 0x4($t0)
    ctx->pc = 0x1f4b80u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 2));
    // 0x1f4b84: 0x8e650054  lw          $a1, 0x54($s3)
    ctx->pc = 0x1f4b84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 84)));
    // 0x1f4b88: 0x8d220008  lw          $v0, 0x8($t1)
    ctx->pc = 0x1f4b88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 8)));
    // 0x1f4b8c: 0x8d270040  lw          $a3, 0x40($t1)
    ctx->pc = 0x1f4b8cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 64)));
    // 0x1f4b90: 0xad020008  sw          $v0, 0x8($t0)
    ctx->pc = 0x1f4b90u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 2));
    // 0x1f4b94: 0xae330070  sw          $s3, 0x70($s1)
    ctx->pc = 0x1f4b94u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 112), GPR_U32(ctx, 19));
    // 0x1f4b98: 0x8d22000c  lw          $v0, 0xC($t1)
    ctx->pc = 0x1f4b98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 12)));
    // 0x1f4b9c: 0xad06001c  sw          $a2, 0x1C($t0)
    ctx->pc = 0x1f4b9cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 28), GPR_U32(ctx, 6));
    // 0x1f4ba0: 0xad02000c  sw          $v0, 0xC($t0)
    ctx->pc = 0x1f4ba0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 12), GPR_U32(ctx, 2));
    // 0x1f4ba4: 0xad040020  sw          $a0, 0x20($t0)
    ctx->pc = 0x1f4ba4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 32), GPR_U32(ctx, 4));
    // 0x1f4ba8: 0x8e620038  lw          $v0, 0x38($s3)
    ctx->pc = 0x1f4ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 56)));
    // 0x1f4bac: 0xad050038  sw          $a1, 0x38($t0)
    ctx->pc = 0x1f4bacu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 56), GPR_U32(ctx, 5));
    // 0x1f4bb0: 0xad020014  sw          $v0, 0x14($t0)
    ctx->pc = 0x1f4bb0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 20), GPR_U32(ctx, 2));
    // 0x1f4bb4: 0xae480000  sw          $t0, 0x0($s2)
    ctx->pc = 0x1f4bb4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 8));
    // 0x1f4bb8: 0x8e62003c  lw          $v0, 0x3C($s3)
    ctx->pc = 0x1f4bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 60)));
    // 0x1f4bbc: 0xad020018  sw          $v0, 0x18($t0)
    ctx->pc = 0x1f4bbcu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 24), GPR_U32(ctx, 2));
    // 0x1f4bc0: 0x8e630040  lw          $v1, 0x40($s3)
    ctx->pc = 0x1f4bc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 64)));
    // 0x1f4bc4: 0xad030024  sw          $v1, 0x24($t0)
    ctx->pc = 0x1f4bc4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 36), GPR_U32(ctx, 3));
    // 0x1f4bc8: 0x8e620044  lw          $v0, 0x44($s3)
    ctx->pc = 0x1f4bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 68)));
    // 0x1f4bcc: 0xad020028  sw          $v0, 0x28($t0)
    ctx->pc = 0x1f4bccu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 40), GPR_U32(ctx, 2));
    // 0x1f4bd0: 0x8e630048  lw          $v1, 0x48($s3)
    ctx->pc = 0x1f4bd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 72)));
    // 0x1f4bd4: 0xad03002c  sw          $v1, 0x2C($t0)
    ctx->pc = 0x1f4bd4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 44), GPR_U32(ctx, 3));
    // 0x1f4bd8: 0x8e62004c  lw          $v0, 0x4C($s3)
    ctx->pc = 0x1f4bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 76)));
    // 0x1f4bdc: 0xad020030  sw          $v0, 0x30($t0)
    ctx->pc = 0x1f4bdcu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 48), GPR_U32(ctx, 2));
    // 0x1f4be0: 0x8e630050  lw          $v1, 0x50($s3)
    ctx->pc = 0x1f4be0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 80)));
    // 0x1f4be4: 0xad030034  sw          $v1, 0x34($t0)
    ctx->pc = 0x1f4be4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 52), GPR_U32(ctx, 3));
    // 0x1f4be8: 0x8d220044  lw          $v0, 0x44($t1)
    ctx->pc = 0x1f4be8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 68)));
    // 0x1f4bec: 0xad07003c  sw          $a3, 0x3C($t0)
    ctx->pc = 0x1f4becu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 60), GPR_U32(ctx, 7));
    // 0x1f4bf0: 0x14e00005  bnez        $a3, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F4BF0u;
    {
        const bool branch_taken_0x1f4bf0 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F4BF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F4BF0u;
            // 0x1f4bf4: 0xad020040  sw          $v0, 0x40($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 64), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f4bf0) {
            ctx->pc = 0x1F4C08u;
            goto label_1f4c08;
        }
    }
    ctx->pc = 0x1F4BF8u;
    // 0x1f4bf8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1f4bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1f4bfc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1F4BFCu;
    {
        const bool branch_taken_0x1f4bfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F4C00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F4BFCu;
            // 0x1f4c00: 0xad020048  sw          $v0, 0x48($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 72), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f4bfc) {
            ctx->pc = 0x1F4C0Cu;
            goto label_1f4c0c;
        }
    }
    ctx->pc = 0x1F4C04u;
    // 0x1f4c04: 0x0  nop
    ctx->pc = 0x1f4c04u;
    // NOP
label_1f4c08:
    // 0x1f4c08: 0xad0a0048  sw          $t2, 0x48($t0)
    ctx->pc = 0x1f4c08u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 72), GPR_U32(ctx, 10));
label_1f4c0c:
    // 0x1f4c0c: 0xde6300e0  ld          $v1, 0xE0($s3)
    ctx->pc = 0x1f4c0cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 19), 224)));
    // 0x1f4c10: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1f4c10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1f4c14: 0xfc430050  sd          $v1, 0x50($v0)
    ctx->pc = 0x1f4c14u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 80), GPR_U64(ctx, 3));
    // 0x1f4c18: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x1f4c18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1f4c1c: 0x8d220038  lw          $v0, 0x38($t1)
    ctx->pc = 0x1f4c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 56)));
    // 0x1f4c20: 0xac820058  sw          $v0, 0x58($a0)
    ctx->pc = 0x1f4c20u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 88), GPR_U32(ctx, 2));
    // 0x1f4c24: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x1f4c24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1f4c28: 0x8d22003c  lw          $v0, 0x3C($t1)
    ctx->pc = 0x1f4c28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 60)));
    // 0x1f4c2c: 0xac62005c  sw          $v0, 0x5C($v1)
    ctx->pc = 0x1f4c2cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 92), GPR_U32(ctx, 2));
    // 0x1f4c30: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x1f4c30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1f4c34: 0x8d220048  lw          $v0, 0x48($t1)
    ctx->pc = 0x1f4c34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 72)));
    // 0x1f4c38: 0xac820060  sw          $v0, 0x60($a0)
    ctx->pc = 0x1f4c38u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 96), GPR_U32(ctx, 2));
    // 0x1f4c3c: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x1f4c3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1f4c40: 0x8d22004c  lw          $v0, 0x4C($t1)
    ctx->pc = 0x1f4c40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 76)));
    // 0x1f4c44: 0xac620064  sw          $v0, 0x64($v1)
    ctx->pc = 0x1f4c44u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 100), GPR_U32(ctx, 2));
    // 0x1f4c48: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x1f4c48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1f4c4c: 0x95220050  lhu         $v0, 0x50($t1)
    ctx->pc = 0x1f4c4cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 80)));
    // 0x1f4c50: 0xa4820068  sh          $v0, 0x68($a0)
    ctx->pc = 0x1f4c50u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 104), (uint16_t)GPR_U32(ctx, 2));
    // 0x1f4c54: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x1f4c54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1f4c58: 0x95220052  lhu         $v0, 0x52($t1)
    ctx->pc = 0x1f4c58u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 82)));
    // 0x1f4c5c: 0xa462006a  sh          $v0, 0x6A($v1)
    ctx->pc = 0x1f4c5cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 106), (uint16_t)GPR_U32(ctx, 2));
    // 0x1f4c60: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x1f4c60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1f4c64: 0x91220055  lbu         $v0, 0x55($t1)
    ctx->pc = 0x1f4c64u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 85)));
    // 0x1f4c68: 0xa082006c  sb          $v0, 0x6C($a0)
    ctx->pc = 0x1f4c68u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 108), (uint8_t)GPR_U32(ctx, 2));
    // 0x1f4c6c: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x1f4c6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1f4c70: 0x91220056  lbu         $v0, 0x56($t1)
    ctx->pc = 0x1f4c70u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 86)));
    // 0x1f4c74: 0xa062006d  sb          $v0, 0x6D($v1)
    ctx->pc = 0x1f4c74u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 109), (uint8_t)GPR_U32(ctx, 2));
    // 0x1f4c78: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x1f4c78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1f4c7c: 0x91220057  lbu         $v0, 0x57($t1)
    ctx->pc = 0x1f4c7cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 87)));
    // 0x1f4c80: 0xa082006e  sb          $v0, 0x6E($a0)
    ctx->pc = 0x1f4c80u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 110), (uint8_t)GPR_U32(ctx, 2));
    // 0x1f4c84: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x1f4c84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1f4c88: 0x91220059  lbu         $v0, 0x59($t1)
    ctx->pc = 0x1f4c88u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 89)));
    // 0x1f4c8c: 0xa062006f  sb          $v0, 0x6F($v1)
    ctx->pc = 0x1f4c8cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 111), (uint8_t)GPR_U32(ctx, 2));
    // 0x1f4c90: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x1f4c90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1f4c94: 0x9122005a  lbu         $v0, 0x5A($t1)
    ctx->pc = 0x1f4c94u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 90)));
    // 0x1f4c98: 0xa0820070  sb          $v0, 0x70($a0)
    ctx->pc = 0x1f4c98u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 112), (uint8_t)GPR_U32(ctx, 2));
    // 0x1f4c9c: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x1f4c9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1f4ca0: 0x9122005b  lbu         $v0, 0x5B($t1)
    ctx->pc = 0x1f4ca0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 91)));
    // 0x1f4ca4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1f4ca4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f4ca8: 0xa0620071  sb          $v0, 0x71($v1)
    ctx->pc = 0x1f4ca8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 113), (uint8_t)GPR_U32(ctx, 2));
    // 0x1f4cac: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1f4cacu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1f4cb0: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x1f4cb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1f4cb4: 0x9122005c  lbu         $v0, 0x5C($t1)
    ctx->pc = 0x1f4cb4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 92)));
    // 0x1f4cb8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1f4cb8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f4cbc: 0xa0820072  sb          $v0, 0x72($a0)
    ctx->pc = 0x1f4cbcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 114), (uint8_t)GPR_U32(ctx, 2));
    // 0x1f4cc0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1f4cc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f4cc4: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x1f4cc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1f4cc8: 0x9122005d  lbu         $v0, 0x5D($t1)
    ctx->pc = 0x1f4cc8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 93)));
    // 0x1f4ccc: 0xa0620073  sb          $v0, 0x73($v1)
    ctx->pc = 0x1f4cccu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 115), (uint8_t)GPR_U32(ctx, 2));
    // 0x1f4cd0: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x1f4cd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1f4cd4: 0x9122005e  lbu         $v0, 0x5E($t1)
    ctx->pc = 0x1f4cd4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 94)));
    // 0x1f4cd8: 0xa0820074  sb          $v0, 0x74($a0)
    ctx->pc = 0x1f4cd8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 116), (uint8_t)GPR_U32(ctx, 2));
    // 0x1f4cdc: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x1f4cdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1f4ce0: 0x9122005f  lbu         $v0, 0x5F($t1)
    ctx->pc = 0x1f4ce0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 95)));
    // 0x1f4ce4: 0xa0620075  sb          $v0, 0x75($v1)
    ctx->pc = 0x1f4ce4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 117), (uint8_t)GPR_U32(ctx, 2));
    // 0x1f4ce8: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x1f4ce8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1f4cec: 0x91220060  lbu         $v0, 0x60($t1)
    ctx->pc = 0x1f4cecu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 96)));
    // 0x1f4cf0: 0xa0820076  sb          $v0, 0x76($a0)
    ctx->pc = 0x1f4cf0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 118), (uint8_t)GPR_U32(ctx, 2));
    // 0x1f4cf4: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x1f4cf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1f4cf8: 0x91220061  lbu         $v0, 0x61($t1)
    ctx->pc = 0x1f4cf8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 97)));
    // 0x1f4cfc: 0xa0620077  sb          $v0, 0x77($v1)
    ctx->pc = 0x1f4cfcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 119), (uint8_t)GPR_U32(ctx, 2));
    // 0x1f4d00: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x1f4d00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1f4d04: 0x91220062  lbu         $v0, 0x62($t1)
    ctx->pc = 0x1f4d04u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 98)));
    // 0x1f4d08: 0xa0820078  sb          $v0, 0x78($a0)
    ctx->pc = 0x1f4d08u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 120), (uint8_t)GPR_U32(ctx, 2));
    // 0x1f4d0c: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x1f4d0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1f4d10: 0x91220063  lbu         $v0, 0x63($t1)
    ctx->pc = 0x1f4d10u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 99)));
    // 0x1f4d14: 0xa0620079  sb          $v0, 0x79($v1)
    ctx->pc = 0x1f4d14u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 121), (uint8_t)GPR_U32(ctx, 2));
    // 0x1f4d18: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x1f4d18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1f4d1c: 0x91220064  lbu         $v0, 0x64($t1)
    ctx->pc = 0x1f4d1cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 100)));
    // 0x1f4d20: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1f4d20u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f4d24: 0xa082007a  sb          $v0, 0x7A($a0)
    ctx->pc = 0x1f4d24u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 122), (uint8_t)GPR_U32(ctx, 2));
    // 0x1f4d28: 0x3e00008  jr          $ra
    ctx->pc = 0x1F4D28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F4D2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F4D28u;
            // 0x1f4d2c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1F4D30u;
label_1f4d30:
    // 0x1f4d30: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1f4d30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1f4d34: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1f4d34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1f4d38: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1f4d38u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4d3c: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1f4d3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x1f4d40: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1f4d40u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4d44: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1f4d44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1f4d48: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1f4d48u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4d4c: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x1f4d4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x1f4d50: 0xc07b670  jal         func_1ED9C0
    ctx->pc = 0x1F4D50u;
    SET_GPR_U32(ctx, 31, 0x1F4D58u);
    ctx->pc = 0x1F4D54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F4D50u;
            // 0x1f4d54: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1ED9C0u;
    if (runtime->hasFunction(0x1ED9C0u)) {
        auto targetFn = runtime->lookupFunction(0x1ED9C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4D58u; }
        if (ctx->pc != 0x1F4D58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001ED9C0_0x1ed9c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4D58u; }
        if (ctx->pc != 0x1F4D58u) { return; }
    }
    ctx->pc = 0x1F4D58u;
label_1f4d58:
    // 0x1f4d58: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1f4d58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4d5c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1f4d5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4d60: 0xc07d364  jal         func_1F4D90
    ctx->pc = 0x1F4D60u;
    SET_GPR_U32(ctx, 31, 0x1F4D68u);
    ctx->pc = 0x1F4D64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F4D60u;
            // 0x1f4d64: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F4D90u;
    if (runtime->hasFunction(0x1F4D90u)) {
        auto targetFn = runtime->lookupFunction(0x1F4D90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4D68u; }
        if (ctx->pc != 0x1F4D68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001F4D90_0x1f4d90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4D68u; }
        if (ctx->pc != 0x1F4D68u) { return; }
    }
    ctx->pc = 0x1F4D68u;
label_1f4d68:
    // 0x1f4d68: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1f4d68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4d6c: 0xc07b676  jal         func_1ED9D8
    ctx->pc = 0x1F4D6Cu;
    SET_GPR_U32(ctx, 31, 0x1F4D74u);
    ctx->pc = 0x1F4D70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F4D6Cu;
            // 0x1f4d70: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1ED9D8u;
    if (runtime->hasFunction(0x1ED9D8u)) {
        auto targetFn = runtime->lookupFunction(0x1ED9D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4D74u; }
        if (ctx->pc != 0x1F4D74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001ED9D8_0x1ed9d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4D74u; }
        if (ctx->pc != 0x1F4D74u) { return; }
    }
    ctx->pc = 0x1F4D74u;
label_1f4d74:
    // 0x1f4d74: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1f4d74u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4d78: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1f4d78u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f4d7c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1f4d7cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f4d80: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1f4d80u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f4d84: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x1f4d84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1f4d88: 0x3e00008  jr          $ra
    ctx->pc = 0x1F4D88u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F4D8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F4D88u;
            // 0x1f4d8c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1F4D90u;
    ctx->pc = 0x1f4d90u;
}
