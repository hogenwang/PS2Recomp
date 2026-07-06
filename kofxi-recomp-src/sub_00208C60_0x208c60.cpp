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

// Function: sub_00208C60
// Address: 0x208c60 - 0x209730
void sub_00208C60_0x208c60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00208C60_0x208c60");
#endif

    switch (ctx->pc) {
        case 0x208cd4u: goto label_208cd4;
        case 0x208d68u: goto label_208d68;
        case 0x208de4u: goto label_208de4;
        case 0x208e14u: goto label_208e14;
        case 0x208e3cu: goto label_208e3c;
        case 0x208e68u: goto label_208e68;
        case 0x208ed0u: goto label_208ed0;
        case 0x208ee0u: goto label_208ee0;
        case 0x208f04u: goto label_208f04;
        case 0x208f6cu: goto label_208f6c;
        case 0x208f88u: goto label_208f88;
        case 0x209008u: goto label_209008;
        case 0x209024u: goto label_209024;
        case 0x20905cu: goto label_20905c;
        case 0x20908cu: goto label_20908c;
        case 0x2090a8u: goto label_2090a8;
        case 0x2090e4u: goto label_2090e4;
        case 0x209118u: goto label_209118;
        case 0x20919cu: goto label_20919c;
        case 0x2091a8u: goto label_2091a8;
        case 0x2091b4u: goto label_2091b4;
        case 0x209208u: goto label_209208;
        case 0x209224u: goto label_209224;
        case 0x209260u: goto label_209260;
        case 0x209270u: goto label_209270;
        case 0x209278u: goto label_209278;
        case 0x20928cu: goto label_20928c;
        case 0x2092a4u: goto label_2092a4;
        case 0x2092acu: goto label_2092ac;
        case 0x2092ccu: goto label_2092cc;
        case 0x2092e8u: goto label_2092e8;
        case 0x209304u: goto label_209304;
        case 0x209318u: goto label_209318;
        case 0x209324u: goto label_209324;
        case 0x209388u: goto label_209388;
        case 0x209460u: goto label_209460;
        case 0x209488u: goto label_209488;
        case 0x209510u: goto label_209510;
        case 0x20954cu: goto label_20954c;
        case 0x20959cu: goto label_20959c;
        case 0x2095c8u: goto label_2095c8;
        case 0x2095d8u: goto label_2095d8;
        case 0x209614u: goto label_209614;
        case 0x20961cu: goto label_20961c;
        case 0x209628u: goto label_209628;
        case 0x209644u: goto label_209644;
        case 0x2096a0u: goto label_2096a0;
        case 0x2096a8u: goto label_2096a8;
        case 0x2096b0u: goto label_2096b0;
        case 0x2096bcu: goto label_2096bc;
        case 0x209704u: goto label_209704;
        case 0x209710u: goto label_209710;
        case 0x209718u: goto label_209718;
        default: break;
    }

    ctx->pc = 0x208c60u;

label_208c60:
    // 0x208c60: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x208c60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x208c64: 0x30c3ffff  andi        $v1, $a2, 0xFFFF
    ctx->pc = 0x208c64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x208c68: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x208c68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x208c6c: 0x30620080  andi        $v0, $v1, 0x80
    ctx->pc = 0x208c6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x208c70: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x208c70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x208c74: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x208c74u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208c78: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x208C78u;
    {
        const bool branch_taken_0x208c78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x208C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208C78u;
        // 0x208c7c: 0x320500ff  andi        $a1, $s0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x208c78) {
            ctx->pc = 0x208C94u;
            goto label_208c94;
        }
    }
    ctx->pc = 0x208C80u;
    // 0x208c80: 0x50a0000e  beql        $a1, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x208C80u;
    {
        const bool branch_taken_0x208c80 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x208c80) {
            ctx->pc = 0x208C84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x208C80u;
            // 0x208c84: 0x30a200ff  andi        $v0, $a1, 0xFF (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
            ctx->in_delay_slot = false;
            ctx->pc = 0x208CBCu;
            goto label_208cbc;
        }
    }
    ctx->pc = 0x208C88u;
    // 0x208c88: 0x2602ffff  addiu       $v0, $s0, -0x1
    ctx->pc = 0x208c88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x208c8c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x208C8Cu;
    {
        const bool branch_taken_0x208c8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x208C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208C8Cu;
        // 0x208c90: 0x305000ff  andi        $s0, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x208c8c) {
            ctx->pc = 0x208CB8u;
            goto label_208cb8;
        }
    }
    ctx->pc = 0x208C94u;
label_208c94:
    // 0x208c94: 0x30620020  andi        $v0, $v1, 0x20
    ctx->pc = 0x208c94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
    // 0x208c98: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x208C98u;
    {
        const bool branch_taken_0x208c98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x208c98) {
            ctx->pc = 0x208CB8u;
            goto label_208cb8;
        }
    }
    ctx->pc = 0x208CA0u;
    // 0x208ca0: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x208ca0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x208ca4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x208ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x208ca8: 0x10a20003  beq         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x208CA8u;
    {
        const bool branch_taken_0x208ca8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x208ca8) {
            ctx->pc = 0x208CB8u;
            goto label_208cb8;
        }
    }
    ctx->pc = 0x208CB0u;
    // 0x208cb0: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x208cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x208cb4: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x208cb4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_208cb8:
    // 0x208cb8: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x208cb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_208cbc:
    // 0x208cbc: 0x320300ff  andi        $v1, $s0, 0xFF
    ctx->pc = 0x208cbcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x208cc0: 0x50620005  beql        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x208CC0u;
    {
        const bool branch_taken_0x208cc0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x208cc0) {
            ctx->pc = 0x208CC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x208CC0u;
            // 0x208cc4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x208CD8u;
            goto label_208cd8;
        }
    }
    ctx->pc = 0x208CC8u;
    // 0x208cc8: 0x24040125  addiu       $a0, $zero, 0x125
    ctx->pc = 0x208cc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 293));
    // 0x208ccc: 0xc0538fc  jal         func_14E3F0
    ctx->pc = 0x208CCCu;
    SET_GPR_U32(ctx, 31, 0x208CD4u);
    ctx->pc = 0x208CD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x208CCCu;
    // 0x208cd0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E3F0u, 0x208CCCu, 0x208CD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208CD4u;
label_208cd4:
    // 0x208cd4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x208cd4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_208cd8:
    // 0x208cd8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x208cd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x208cdc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x208cdcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x208ce0: 0x3e00008  jr          $ra
    ctx->pc = 0x208CE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x208CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208CE0u;
        // 0x208ce4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x208CE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x208CE8u;
    // 0x208ce8: 0x0  nop
    ctx->pc = 0x208ce8u;
    // NOP
    // 0x208cec: 0x0  nop
    ctx->pc = 0x208cecu;
    // NOP
    // 0x208cf0: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x208cf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x208cf4: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x208cf4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x208cf8: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x208cf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x208cfc: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x208cfcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x208d00: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x208d00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x208d04: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x208d04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x208d08: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x208d08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x208d0c: 0x2484ea20  addiu       $a0, $a0, -0x15E0
    ctx->pc = 0x208d0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961696));
    // 0x208d10: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x208d10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x208d14: 0x2463ea22  addiu       $v1, $v1, -0x15DE
    ctx->pc = 0x208d14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961698));
    // 0x208d18: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x208d18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x208d1c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x208d1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x208d20: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x208d20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x208d24: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x208d24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x208d28: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x208d28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x208d2c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x208d2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x208d30: 0x90469480  lbu         $a2, -0x6B80($v0)
    ctx->pc = 0x208d30u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294939776)));
    // 0x208d34: 0x62840  sll         $a1, $a2, 1
    ctx->pc = 0x208d34u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x208d38: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x208d38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x208d3c: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x208d3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x208d40: 0x2442ea26  addiu       $v0, $v0, -0x15DA
    ctx->pc = 0x208d40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961702));
    // 0x208d44: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x208d44u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x208d48: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x208d48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x208d4c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x208d4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x208d50: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x208d50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x208d54: 0x94970000  lhu         $s7, 0x0($a0)
    ctx->pc = 0x208d54u;
    SET_GPR_U32(ctx, 23, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x208d58: 0x947e0000  lhu         $fp, 0x0($v1)
    ctx->pc = 0x208d58u;
    SET_GPR_U32(ctx, 30, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x208d5c: 0x94550000  lhu         $s5, 0x0($v0)
    ctx->pc = 0x208d5cu;
    SET_GPR_U32(ctx, 21, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x208d60: 0xc08152c  jal         func_2054B0
    ctx->pc = 0x208D60u;
    SET_GPR_U32(ctx, 31, 0x208D68u);
    ctx->pc = 0x208D64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x208D60u;
    // 0x208d64: 0xafa000bc  sw          $zero, 0xBC($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2054B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2054B0u, 0x208D60u, 0x208D68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208D68u;
label_208d68:
    // 0x208d68: 0x3c0301c1  lui         $v1, 0x1C1
    ctx->pc = 0x208d68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)449 << 16));
    // 0x208d6c: 0x8c659bf8  lw          $a1, -0x6408($v1)
    ctx->pc = 0x208d6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294941688)));
    // 0x208d70: 0x8ca3001c  lw          $v1, 0x1C($a1)
    ctx->pc = 0x208d70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
    // 0x208d74: 0x50600008  beql        $v1, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x208D74u;
    {
        const bool branch_taken_0x208d74 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x208d74) {
            ctx->pc = 0x208D78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x208D74u;
            // 0x208d78: 0x90b60502  lbu         $s6, 0x502($a1) (Delay Slot)
            SET_GPR_U32(ctx, 22, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1282)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x208D98u;
            goto label_208d98;
        }
    }
    ctx->pc = 0x208D7Cu;
    // 0x208d7c: 0x24b40066  addiu       $s4, $a1, 0x66
    ctx->pc = 0x208d7cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 5), 102));
    // 0x208d80: 0x24b30067  addiu       $s3, $a1, 0x67
    ctx->pc = 0x208d80u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 5), 103));
    // 0x208d84: 0x24b20064  addiu       $s2, $a1, 0x64
    ctx->pc = 0x208d84u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 5), 100));
    // 0x208d88: 0x24b10065  addiu       $s1, $a1, 0x65
    ctx->pc = 0x208d88u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 5), 101));
    // 0x208d8c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x208D8Cu;
    {
        const bool branch_taken_0x208d8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x208D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208D8Cu;
        // 0x208d90: 0x6416000c  daddiu      $s6, $zero, 0xC (Delay Slot)
        SET_GPR_S64(ctx, 22, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)12);
        ctx->in_delay_slot = false;
        if (branch_taken_0x208d8c) {
            ctx->pc = 0x208DA8u;
            goto label_208da8;
        }
    }
    ctx->pc = 0x208D94u;
    // 0x208d94: 0x90b60502  lbu         $s6, 0x502($a1)
    ctx->pc = 0x208d94u;
    SET_GPR_U32(ctx, 22, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1282)));
label_208d98:
    // 0x208d98: 0x24b40064  addiu       $s4, $a1, 0x64
    ctx->pc = 0x208d98u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 5), 100));
    // 0x208d9c: 0x24b30065  addiu       $s3, $a1, 0x65
    ctx->pc = 0x208d9cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 5), 101));
    // 0x208da0: 0x24b20066  addiu       $s2, $a1, 0x66
    ctx->pc = 0x208da0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 5), 102));
    // 0x208da4: 0x24b10067  addiu       $s1, $a1, 0x67
    ctx->pc = 0x208da4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 5), 103));
label_208da8:
    // 0x208da8: 0x92630000  lbu         $v1, 0x0($s3)
    ctx->pc = 0x208da8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x208dac: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x208dacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x208db0: 0x7fa300a0  sq          $v1, 0xA0($sp)
    ctx->pc = 0x208db0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 3));
    // 0x208db4: 0x90a304f0  lbu         $v1, 0x4F0($a1)
    ctx->pc = 0x208db4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1264)));
    // 0x208db8: 0x14640018  bne         $v1, $a0, . + 4 + (0x18 << 2)
    ctx->pc = 0x208DB8u;
    {
        const bool branch_taken_0x208db8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x208DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208DB8u;
        // 0x208dbc: 0x92900000  lbu         $s0, 0x0($s4) (Delay Slot)
        SET_GPR_U32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208db8) {
            ctx->pc = 0x208E1Cu;
            goto label_208e1c;
        }
    }
    ctx->pc = 0x208DC0u;
    // 0x208dc0: 0x90a30061  lbu         $v1, 0x61($a1)
    ctx->pc = 0x208dc0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 97)));
    // 0x208dc4: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x208dc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x208dc8: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x208DC8u;
    {
        const bool branch_taken_0x208dc8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x208dc8) {
            ctx->pc = 0x208DE8u;
            goto label_208de8;
        }
    }
    ctx->pc = 0x208DD0u;
    // 0x208dd0: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x208dd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x208dd4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x208dd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208dd8: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x208dd8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208ddc: 0xc082318  jal         func_208C60
    ctx->pc = 0x208DDCu;
    SET_GPR_U32(ctx, 31, 0x208DE4u);
    ctx->pc = 0x208DE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x208DDCu;
    // 0x208de0: 0x27a700bc  addiu       $a3, $sp, 0xBC (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 188));
    ctx->in_delay_slot = false;
    ctx->pc = 0x208C60u;
    goto label_208c60;
    ctx->pc = 0x208DE4u;
label_208de4:
    // 0x208de4: 0xa2820000  sb          $v0, 0x0($s4)
    ctx->pc = 0x208de4u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 0), (uint8_t)GPR_U32(ctx, 2));
label_208de8:
    // 0x208de8: 0x3c0301c1  lui         $v1, 0x1C1
    ctx->pc = 0x208de8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)449 << 16));
    // 0x208dec: 0x8c639bf8  lw          $v1, -0x6408($v1)
    ctx->pc = 0x208decu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294941688)));
    // 0x208df0: 0x90630061  lbu         $v1, 0x61($v1)
    ctx->pc = 0x208df0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 97)));
    // 0x208df4: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x208df4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x208df8: 0x1460001c  bnez        $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x208DF8u;
    {
        const bool branch_taken_0x208df8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x208df8) {
            ctx->pc = 0x208E6Cu;
            goto label_208e6c;
        }
    }
    ctx->pc = 0x208E00u;
    // 0x208e00: 0x92650000  lbu         $a1, 0x0($s3)
    ctx->pc = 0x208e00u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x208e04: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x208e04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208e08: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x208e08u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208e0c: 0xc0822f4  jal         func_208BD0
    ctx->pc = 0x208E0Cu;
    SET_GPR_U32(ctx, 31, 0x208E14u);
    ctx->pc = 0x208E10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x208E0Cu;
    // 0x208e10: 0x27a700bc  addiu       $a3, $sp, 0xBC (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 188));
    ctx->in_delay_slot = false;
    ctx->pc = 0x208BD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208BD0u, 0x208E0Cu, 0x208E14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208E14u;
label_208e14:
    // 0x208e14: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x208E14u;
    {
        const bool branch_taken_0x208e14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x208E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208E14u;
        // 0x208e18: 0xa2620000  sb          $v0, 0x0($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208e14) {
            ctx->pc = 0x208E6Cu;
            goto label_208e6c;
        }
    }
    ctx->pc = 0x208E1Cu;
label_208e1c:
    // 0x208e1c: 0x90a30061  lbu         $v1, 0x61($a1)
    ctx->pc = 0x208e1cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 97)));
    // 0x208e20: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x208e20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x208e24: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x208E24u;
    {
        const bool branch_taken_0x208e24 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x208e24) {
            ctx->pc = 0x208E40u;
            goto label_208e40;
        }
    }
    ctx->pc = 0x208E2Cu;
    // 0x208e2c: 0x32a6ffff  andi        $a2, $s5, 0xFFFF
    ctx->pc = 0x208e2cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)65535);
    // 0x208e30: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x208e30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x208e34: 0xc0d0ae0  jal         func_342B80
    ctx->pc = 0x208E34u;
    SET_GPR_U32(ctx, 31, 0x208E3Cu);
    ctx->pc = 0x208E38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x208E34u;
    // 0x208e38: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x342B80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x342B80u, 0x208E34u, 0x208E3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208E3Cu;
label_208e3c:
    // 0x208e3c: 0xa2820000  sb          $v0, 0x0($s4)
    ctx->pc = 0x208e3cu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 0), (uint8_t)GPR_U32(ctx, 2));
label_208e40:
    // 0x208e40: 0x3c0301c1  lui         $v1, 0x1C1
    ctx->pc = 0x208e40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)449 << 16));
    // 0x208e44: 0x8c639bf8  lw          $v1, -0x6408($v1)
    ctx->pc = 0x208e44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294941688)));
    // 0x208e48: 0x90630061  lbu         $v1, 0x61($v1)
    ctx->pc = 0x208e48u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 97)));
    // 0x208e4c: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x208e4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x208e50: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x208E50u;
    {
        const bool branch_taken_0x208e50 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x208e50) {
            ctx->pc = 0x208E6Cu;
            goto label_208e6c;
        }
    }
    ctx->pc = 0x208E58u;
    // 0x208e58: 0x92650000  lbu         $a1, 0x0($s3)
    ctx->pc = 0x208e58u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x208e5c: 0x32c400ff  andi        $a0, $s6, 0xFF
    ctx->pc = 0x208e5cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)255);
    // 0x208e60: 0xc0d0abc  jal         func_342AF0
    ctx->pc = 0x208E60u;
    SET_GPR_U32(ctx, 31, 0x208E68u);
    ctx->pc = 0x208E64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x208E60u;
    // 0x208e64: 0x32a6ffff  andi        $a2, $s5, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x342AF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x342AF0u, 0x208E60u, 0x208E68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208E68u;
label_208e68:
    // 0x208e68: 0xa2620000  sb          $v0, 0x0($s3)
    ctx->pc = 0x208e68u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 2));
label_208e6c:
    // 0x208e6c: 0x56000006  bnel        $s0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x208E6Cu;
    {
        const bool branch_taken_0x208e6c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x208e6c) {
            ctx->pc = 0x208E70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x208E6Cu;
            // 0x208e70: 0x2403000e  addiu       $v1, $zero, 0xE (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
            ctx->in_delay_slot = false;
            ctx->pc = 0x208E88u;
            goto label_208e88;
        }
    }
    ctx->pc = 0x208E74u;
    // 0x208e74: 0x92840000  lbu         $a0, 0x0($s4)
    ctx->pc = 0x208e74u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x208e78: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x208e78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x208e7c: 0x50830008  beql        $a0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x208E7Cu;
    {
        const bool branch_taken_0x208e7c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x208e7c) {
            ctx->pc = 0x208E80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x208E7Cu;
            // 0x208e80: 0x8fa300bc  lw          $v1, 0xBC($sp) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x208EA0u;
            goto label_208ea0;
        }
    }
    ctx->pc = 0x208E84u;
    // 0x208e84: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x208e84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_208e88:
    // 0x208e88: 0x16030007  bne         $s0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x208E88u;
    {
        const bool branch_taken_0x208e88 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        if (branch_taken_0x208e88) {
            ctx->pc = 0x208EA8u;
            goto label_208ea8;
        }
    }
    ctx->pc = 0x208E90u;
    // 0x208e90: 0x92830000  lbu         $v1, 0x0($s4)
    ctx->pc = 0x208e90u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x208e94: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x208E94u;
    {
        const bool branch_taken_0x208e94 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x208e94) {
            ctx->pc = 0x208EA8u;
            goto label_208ea8;
        }
    }
    ctx->pc = 0x208E9Cu;
    // 0x208e9c: 0x8fa300bc  lw          $v1, 0xBC($sp)
    ctx->pc = 0x208e9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
label_208ea0:
    // 0x208ea0: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x208ea0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x208ea4: 0xafa300bc  sw          $v1, 0xBC($sp)
    ctx->pc = 0x208ea4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 3));
label_208ea8:
    // 0x208ea8: 0x3c0301c1  lui         $v1, 0x1C1
    ctx->pc = 0x208ea8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)449 << 16));
    // 0x208eac: 0x8c639bf8  lw          $v1, -0x6408($v1)
    ctx->pc = 0x208eacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294941688)));
    // 0x208eb0: 0x8c630018  lw          $v1, 0x18($v1)
    ctx->pc = 0x208eb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x208eb4: 0x1060005b  beqz        $v1, . + 4 + (0x5B << 2)
    ctx->pc = 0x208EB4u;
    {
        const bool branch_taken_0x208eb4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x208eb4) {
            ctx->pc = 0x209024u;
            goto label_209024;
        }
    }
    ctx->pc = 0x208EBCu;
    // 0x208ebc: 0x32b5ffff  andi        $s5, $s5, 0xFFFF
    ctx->pc = 0x208ebcu;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)65535);
    // 0x208ec0: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x208ec0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x208ec4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x208ec4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208ec8: 0xc0d0abc  jal         func_342AF0
    ctx->pc = 0x208EC8u;
    SET_GPR_U32(ctx, 31, 0x208ED0u);
    ctx->pc = 0x208ECCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x208EC8u;
    // 0x208ecc: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x342AF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x342AF0u, 0x208EC8u, 0x208ED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208ED0u;
label_208ed0:
    // 0x208ed0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x208ED0u;
    {
        const bool branch_taken_0x208ed0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x208ed0) {
            ctx->pc = 0x208EE0u;
            goto label_208ee0;
        }
    }
    ctx->pc = 0x208ED8u;
    // 0x208ed8: 0xc081504  jal         func_205410
    ctx->pc = 0x208ED8u;
    SET_GPR_U32(ctx, 31, 0x208EE0u);
    ctx->pc = 0x205410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205410u, 0x208ED8u, 0x208EE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208EE0u;
label_208ee0:
    // 0x208ee0: 0x3c0301c1  lui         $v1, 0x1C1
    ctx->pc = 0x208ee0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)449 << 16));
    // 0x208ee4: 0x8c639bf8  lw          $v1, -0x6408($v1)
    ctx->pc = 0x208ee4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294941688)));
    // 0x208ee8: 0x8c63000c  lw          $v1, 0xC($v1)
    ctx->pc = 0x208ee8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x208eec: 0x5060002e  beql        $v1, $zero, . + 4 + (0x2E << 2)
    ctx->pc = 0x208EECu;
    {
        const bool branch_taken_0x208eec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x208eec) {
            ctx->pc = 0x208EF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x208EECu;
            // 0x208ef0: 0x8fa300bc  lw          $v1, 0xBC($sp) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x208FA8u;
            goto label_208fa8;
        }
    }
    ctx->pc = 0x208EF4u;
    // 0x208ef4: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x208ef4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208ef8: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x208ef8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x208efc: 0xc0d0ae0  jal         func_342B80
    ctx->pc = 0x208EFCu;
    SET_GPR_U32(ctx, 31, 0x208F04u);
    ctx->pc = 0x208F00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x208EFCu;
    // 0x208f00: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x342B80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x342B80u, 0x208EFCu, 0x208F04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208F04u;
label_208f04:
    // 0x208f04: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x208F04u;
    {
        const bool branch_taken_0x208f04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x208f04) {
            ctx->pc = 0x208FA4u;
            goto label_208fa4;
        }
    }
    ctx->pc = 0x208F0Cu;
    // 0x208f0c: 0x3c0301c1  lui         $v1, 0x1C1
    ctx->pc = 0x208f0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)449 << 16));
    // 0x208f10: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x208f10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x208f14: 0x8c639bf8  lw          $v1, -0x6408($v1)
    ctx->pc = 0x208f14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294941688)));
    // 0x208f18: 0x906304f0  lbu         $v1, 0x4F0($v1)
    ctx->pc = 0x208f18u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1264)));
    // 0x208f1c: 0x10640021  beq         $v1, $a0, . + 4 + (0x21 << 2)
    ctx->pc = 0x208F1Cu;
    {
        const bool branch_taken_0x208f1c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x208f1c) {
            ctx->pc = 0x208FA4u;
            goto label_208fa4;
        }
    }
    ctx->pc = 0x208F24u;
    // 0x208f24: 0xa2400000  sb          $zero, 0x0($s2)
    ctx->pc = 0x208f24u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x208f28: 0x3c0201c1  lui         $v0, 0x1C1
    ctx->pc = 0x208f28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)449 << 16));
    // 0x208f2c: 0xa2800000  sb          $zero, 0x0($s4)
    ctx->pc = 0x208f2cu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x208f30: 0x8c439bf8  lw          $v1, -0x6408($v0)
    ctx->pc = 0x208f30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294941688)));
    // 0x208f34: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x208f34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x208f38: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x208F38u;
    {
        const bool branch_taken_0x208f38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x208f38) {
            ctx->pc = 0x208F64u;
            goto label_208f64;
        }
    }
    ctx->pc = 0x208F40u;
    // 0x208f40: 0x906204f0  lbu         $v0, 0x4F0($v1)
    ctx->pc = 0x208f40u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1264)));
    // 0x208f44: 0x10440007  beq         $v0, $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x208F44u;
    {
        const bool branch_taken_0x208f44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x208f44) {
            ctx->pc = 0x208F64u;
            goto label_208f64;
        }
    }
    ctx->pc = 0x208F4Cu;
    // 0x208f4c: 0x92620000  lbu         $v0, 0x0($s3)
    ctx->pc = 0x208f4cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x208f50: 0x2841000c  slti        $at, $v0, 0xC
    ctx->pc = 0x208f50u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)12) ? 1 : 0);
    // 0x208f54: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x208F54u;
    {
        const bool branch_taken_0x208f54 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x208f54) {
            ctx->pc = 0x208F60u;
            goto label_208f60;
        }
    }
    ctx->pc = 0x208F5Cu;
    // 0x208f5c: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x208f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_208f60:
    // 0x208f60: 0xa2220000  sb          $v0, 0x0($s1)
    ctx->pc = 0x208f60u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
label_208f64:
    // 0x208f64: 0xc081504  jal         func_205410
    ctx->pc = 0x208F64u;
    SET_GPR_U32(ctx, 31, 0x208F6Cu);
    ctx->pc = 0x205410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205410u, 0x208F64u, 0x208F6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208F6Cu;
label_208f6c:
    // 0x208f6c: 0x3c0201c1  lui         $v0, 0x1C1
    ctx->pc = 0x208f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)449 << 16));
    // 0x208f70: 0x8c439bf8  lw          $v1, -0x6408($v0)
    ctx->pc = 0x208f70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294941688)));
    // 0x208f74: 0x90620065  lbu         $v0, 0x65($v1)
    ctx->pc = 0x208f74u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 101)));
    // 0x208f78: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x208f78u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x208f7c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x208f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x208f80: 0xc080f90  jal         func_203E40
    ctx->pc = 0x208F80u;
    SET_GPR_U32(ctx, 31, 0x208F88u);
    ctx->pc = 0x208F84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x208F80u;
    // 0x208f84: 0x94440504  lhu         $a0, 0x504($v0) (Delay Slot)
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 1284)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203E40u, 0x208F80u, 0x208F88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208F88u;
label_208f88:
    // 0x208f88: 0x3c0301c1  lui         $v1, 0x1C1
    ctx->pc = 0x208f88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)449 << 16));
    // 0x208f8c: 0x8c649bf8  lw          $a0, -0x6408($v1)
    ctx->pc = 0x208f8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294941688)));
    // 0x208f90: 0x8c83001c  lw          $v1, 0x1C($a0)
    ctx->pc = 0x208f90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x208f94: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x208f94u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x208f98: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x208f98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x208f9c: 0x1000013a  b           . + 4 + (0x13A << 2)
    ctx->pc = 0x208F9Cu;
    {
        const bool branch_taken_0x208f9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x208FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208F9Cu;
        // 0x208fa0: 0xac83001c  sw          $v1, 0x1C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208f9c) {
            ctx->pc = 0x209488u;
            goto label_209488;
        }
    }
    ctx->pc = 0x208FA4u;
label_208fa4:
    // 0x208fa4: 0x8fa300bc  lw          $v1, 0xBC($sp)
    ctx->pc = 0x208fa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
label_208fa8:
    // 0x208fa8: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x208fa8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x208fac: 0x1060001d  beqz        $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x208FACu;
    {
        const bool branch_taken_0x208fac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x208fac) {
            ctx->pc = 0x209024u;
            goto label_209024;
        }
    }
    ctx->pc = 0x208FB4u;
    // 0x208fb4: 0x92830000  lbu         $v1, 0x0($s4)
    ctx->pc = 0x208fb4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x208fb8: 0x3c0201c1  lui         $v0, 0x1C1
    ctx->pc = 0x208fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)449 << 16));
    // 0x208fbc: 0xa2430000  sb          $v1, 0x0($s2)
    ctx->pc = 0x208fbcu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x208fc0: 0xa2900000  sb          $s0, 0x0($s4)
    ctx->pc = 0x208fc0u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 0), (uint8_t)GPR_U32(ctx, 16));
    // 0x208fc4: 0x8c429bf8  lw          $v0, -0x6408($v0)
    ctx->pc = 0x208fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294941688)));
    // 0x208fc8: 0x8c42001c  lw          $v0, 0x1C($v0)
    ctx->pc = 0x208fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x208fcc: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x208FCCu;
    {
        const bool branch_taken_0x208fcc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x208fcc) {
            ctx->pc = 0x208FECu;
            goto label_208fec;
        }
    }
    ctx->pc = 0x208FD4u;
    // 0x208fd4: 0x92620000  lbu         $v0, 0x0($s3)
    ctx->pc = 0x208fd4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x208fd8: 0x2841000c  slti        $at, $v0, 0xC
    ctx->pc = 0x208fd8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)12) ? 1 : 0);
    // 0x208fdc: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x208FDCu;
    {
        const bool branch_taken_0x208fdc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x208fdc) {
            ctx->pc = 0x208FE8u;
            goto label_208fe8;
        }
    }
    ctx->pc = 0x208FE4u;
    // 0x208fe4: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x208fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_208fe8:
    // 0x208fe8: 0xa2220000  sb          $v0, 0x0($s1)
    ctx->pc = 0x208fe8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
label_208fec:
    // 0x208fec: 0x3c0201c1  lui         $v0, 0x1C1
    ctx->pc = 0x208fecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)449 << 16));
    // 0x208ff0: 0x8c439bf8  lw          $v1, -0x6408($v0)
    ctx->pc = 0x208ff0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294941688)));
    // 0x208ff4: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x208ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x208ff8: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x208ff8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x208ffc: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x208ffcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x209000: 0xc081504  jal         func_205410
    ctx->pc = 0x209000u;
    SET_GPR_U32(ctx, 31, 0x209008u);
    ctx->pc = 0x209004u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209000u;
    // 0x209004: 0xac62001c  sw          $v0, 0x1C($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205410u, 0x209000u, 0x209008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209008u;
label_209008:
    // 0x209008: 0x3c0201c1  lui         $v0, 0x1C1
    ctx->pc = 0x209008u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)449 << 16));
    // 0x20900c: 0x8c439bf8  lw          $v1, -0x6408($v0)
    ctx->pc = 0x20900cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294941688)));
    // 0x209010: 0x90620065  lbu         $v0, 0x65($v1)
    ctx->pc = 0x209010u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 101)));
    // 0x209014: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x209014u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x209018: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x209018u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x20901c: 0xc080f90  jal         func_203E40
    ctx->pc = 0x20901Cu;
    SET_GPR_U32(ctx, 31, 0x209024u);
    ctx->pc = 0x209020u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20901Cu;
    // 0x209020: 0x94440504  lhu         $a0, 0x504($v0) (Delay Slot)
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 1284)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203E40u, 0x20901Cu, 0x209024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209024u;
label_209024:
    // 0x209024: 0x3c0301c1  lui         $v1, 0x1C1
    ctx->pc = 0x209024u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)449 << 16));
    // 0x209028: 0x8c659bf8  lw          $a1, -0x6408($v1)
    ctx->pc = 0x209028u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294941688)));
    // 0x20902c: 0x8ca3001c  lw          $v1, 0x1C($a1)
    ctx->pc = 0x20902cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
    // 0x209030: 0x5460000b  bnel        $v1, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x209030u;
    {
        const bool branch_taken_0x209030 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x209030) {
            ctx->pc = 0x209034u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x209030u;
            // 0x209034: 0x33c7ffff  andi        $a3, $fp, 0xFFFF (Delay Slot)
            SET_GPR_U64(ctx, 7, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)65535);
            ctx->in_delay_slot = false;
            ctx->pc = 0x209060u;
            goto label_209060;
        }
    }
    ctx->pc = 0x209038u;
    // 0x209038: 0x92640000  lbu         $a0, 0x0($s3)
    ctx->pc = 0x209038u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x20903c: 0x7ba300a0  lq          $v1, 0xA0($sp)
    ctx->pc = 0x20903cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x209040: 0x10640006  beq         $v1, $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x209040u;
    {
        const bool branch_taken_0x209040 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x209040) {
            ctx->pc = 0x20905Cu;
            goto label_20905c;
        }
    }
    ctx->pc = 0x209048u;
    // 0x209048: 0x90a20065  lbu         $v0, 0x65($a1)
    ctx->pc = 0x209048u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 101)));
    // 0x20904c: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x20904cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x209050: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x209050u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x209054: 0xc080f90  jal         func_203E40
    ctx->pc = 0x209054u;
    SET_GPR_U32(ctx, 31, 0x20905Cu);
    ctx->pc = 0x209058u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209054u;
    // 0x209058: 0x94440504  lhu         $a0, 0x504($v0) (Delay Slot)
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 1284)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203E40u, 0x209054u, 0x20905Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20905Cu;
label_20905c:
    // 0x20905c: 0x33c7ffff  andi        $a3, $fp, 0xFFFF
    ctx->pc = 0x20905cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)65535);
label_209060:
    // 0x209060: 0x30e38000  andi        $v1, $a3, 0x8000
    ctx->pc = 0x209060u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)32768);
    // 0x209064: 0x50600013  beql        $v1, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x209064u;
    {
        const bool branch_taken_0x209064 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x209064) {
            ctx->pc = 0x209068u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x209064u;
            // 0x209068: 0x32e6ffff  andi        $a2, $s7, 0xFFFF (Delay Slot)
            SET_GPR_U64(ctx, 6, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)65535);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2090B4u;
            goto label_2090b4;
        }
    }
    ctx->pc = 0x20906Cu;
    // 0x20906c: 0x3c0301c1  lui         $v1, 0x1C1
    ctx->pc = 0x20906cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)449 << 16));
    // 0x209070: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x209070u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x209074: 0x8c639bf8  lw          $v1, -0x6408($v1)
    ctx->pc = 0x209074u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294941688)));
    // 0x209078: 0x906304f0  lbu         $v1, 0x4F0($v1)
    ctx->pc = 0x209078u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1264)));
    // 0x20907c: 0x50640103  beql        $v1, $a0, . + 4 + (0x103 << 2)
    ctx->pc = 0x20907Cu;
    {
        const bool branch_taken_0x20907c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x20907c) {
            ctx->pc = 0x209080u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20907Cu;
            // 0x209080: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20948Cu;
            goto label_20948c;
        }
    }
    ctx->pc = 0x209084u;
    // 0x209084: 0xc081074  jal         func_2041D0
    ctx->pc = 0x209084u;
    SET_GPR_U32(ctx, 31, 0x20908Cu);
    ctx->pc = 0x2041D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2041D0u, 0x209084u, 0x20908Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20908Cu;
label_20908c:
    // 0x20908c: 0x3c0201c1  lui         $v0, 0x1C1
    ctx->pc = 0x20908cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)449 << 16));
    // 0x209090: 0x8c429bf8  lw          $v0, -0x6408($v0)
    ctx->pc = 0x209090u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294941688)));
    // 0x209094: 0x92670000  lbu         $a3, 0x0($s3)
    ctx->pc = 0x209094u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x209098: 0x90440000  lbu         $a0, 0x0($v0)
    ctx->pc = 0x209098u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x20909c: 0x90450020  lbu         $a1, 0x20($v0)
    ctx->pc = 0x20909cu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x2090a0: 0xc081720  jal         func_205C80
    ctx->pc = 0x2090A0u;
    SET_GPR_U32(ctx, 31, 0x2090A8u);
    ctx->pc = 0x2090A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2090A0u;
    // 0x2090a4: 0x92860000  lbu         $a2, 0x0($s4) (Delay Slot)
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205C80u, 0x2090A0u, 0x2090A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2090A8u;
label_2090a8:
    // 0x2090a8: 0x100000f7  b           . + 4 + (0xF7 << 2)
    ctx->pc = 0x2090A8u;
    {
        const bool branch_taken_0x2090a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2090a8) {
            ctx->pc = 0x209488u;
            goto label_209488;
        }
    }
    ctx->pc = 0x2090B0u;
    // 0x2090b0: 0x32e6ffff  andi        $a2, $s7, 0xFFFF
    ctx->pc = 0x2090b0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)65535);
label_2090b4:
    // 0x2090b4: 0x30c38000  andi        $v1, $a2, 0x8000
    ctx->pc = 0x2090b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)32768);
    // 0x2090b8: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x2090B8u;
    {
        const bool branch_taken_0x2090b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2090b8) {
            ctx->pc = 0x2090ECu;
            goto label_2090ec;
        }
    }
    ctx->pc = 0x2090C0u;
    // 0x2090c0: 0x3c0301c1  lui         $v1, 0x1C1
    ctx->pc = 0x2090c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)449 << 16));
    // 0x2090c4: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2090c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2090c8: 0x8c639bf8  lw          $v1, -0x6408($v1)
    ctx->pc = 0x2090c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294941688)));
    // 0x2090cc: 0x906304f0  lbu         $v1, 0x4F0($v1)
    ctx->pc = 0x2090ccu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1264)));
    // 0x2090d0: 0x146400ed  bne         $v1, $a0, . + 4 + (0xED << 2)
    ctx->pc = 0x2090D0u;
    {
        const bool branch_taken_0x2090d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x2090d0) {
            ctx->pc = 0x209488u;
            goto label_209488;
        }
    }
    ctx->pc = 0x2090D8u;
    // 0x2090d8: 0x92650000  lbu         $a1, 0x0($s3)
    ctx->pc = 0x2090d8u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2090dc: 0xc081758  jal         func_205D60
    ctx->pc = 0x2090DCu;
    SET_GPR_U32(ctx, 31, 0x2090E4u);
    ctx->pc = 0x2090E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2090DCu;
    // 0x2090e0: 0x92840000  lbu         $a0, 0x0($s4) (Delay Slot)
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205D60u, 0x2090DCu, 0x2090E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2090E4u;
label_2090e4:
    // 0x2090e4: 0x100000e8  b           . + 4 + (0xE8 << 2)
    ctx->pc = 0x2090E4u;
    {
        const bool branch_taken_0x2090e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2090e4) {
            ctx->pc = 0x209488u;
            goto label_209488;
        }
    }
    ctx->pc = 0x2090ECu;
label_2090ec:
    // 0x2090ec: 0x3c0301c1  lui         $v1, 0x1C1
    ctx->pc = 0x2090ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)449 << 16));
    // 0x2090f0: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2090f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2090f4: 0x8c639bf8  lw          $v1, -0x6408($v1)
    ctx->pc = 0x2090f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294941688)));
    // 0x2090f8: 0x906504f0  lbu         $a1, 0x4F0($v1)
    ctx->pc = 0x2090f8u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1264)));
    // 0x2090fc: 0x54a40009  bnel        $a1, $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2090FCu;
    {
        const bool branch_taken_0x2090fc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        if (branch_taken_0x2090fc) {
            ctx->pc = 0x209100u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2090FCu;
            // 0x209100: 0x30e42000  andi        $a0, $a3, 0x2000 (Delay Slot)
            SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)8192);
            ctx->in_delay_slot = false;
            ctx->pc = 0x209124u;
            goto label_209124;
        }
    }
    ctx->pc = 0x209104u;
    // 0x209104: 0x38c48000  xori        $a0, $a2, 0x8000
    ctx->pc = 0x209104u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) ^ (uint64_t)(uint16_t)32768);
    // 0x209108: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x209108u;
    {
        const bool branch_taken_0x209108 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x209108) {
            ctx->pc = 0x209120u;
            goto label_209120;
        }
    }
    ctx->pc = 0x209110u;
    // 0x209110: 0xc082064  jal         func_208190
    ctx->pc = 0x209110u;
    SET_GPR_U32(ctx, 31, 0x209118u);
    ctx->pc = 0x208190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208190u, 0x209110u, 0x209118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209118u;
label_209118:
    // 0x209118: 0x100000db  b           . + 4 + (0xDB << 2)
    ctx->pc = 0x209118u;
    {
        const bool branch_taken_0x209118 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x209118) {
            ctx->pc = 0x209488u;
            goto label_209488;
        }
    }
    ctx->pc = 0x209120u;
label_209120:
    // 0x209120: 0x30e42000  andi        $a0, $a3, 0x2000
    ctx->pc = 0x209120u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)8192);
label_209124:
    // 0x209124: 0x50800028  beql        $a0, $zero, . + 4 + (0x28 << 2)
    ctx->pc = 0x209124u;
    {
        const bool branch_taken_0x209124 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x209124) {
            ctx->pc = 0x209128u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x209124u;
            // 0x209128: 0x30e40008  andi        $a0, $a3, 0x8 (Delay Slot)
            SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)8);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2091C8u;
            goto label_2091c8;
        }
    }
    ctx->pc = 0x20912Cu;
    // 0x20912c: 0x906404f1  lbu         $a0, 0x4F1($v1)
    ctx->pc = 0x20912cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1265)));
    // 0x209130: 0x10800024  beqz        $a0, . + 4 + (0x24 << 2)
    ctx->pc = 0x209130u;
    {
        const bool branch_taken_0x209130 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x209130) {
            ctx->pc = 0x2091C4u;
            goto label_2091c4;
        }
    }
    ctx->pc = 0x209138u;
    // 0x209138: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x209138u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
    // 0x20913c: 0x3c0201c1  lui         $v0, 0x1C1
    ctx->pc = 0x20913cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)449 << 16));
    // 0x209140: 0x8c489bf8  lw          $t0, -0x6408($v0)
    ctx->pc = 0x209140u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294941688)));
    // 0x209144: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x209144u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x209148: 0x8d03005c  lw          $v1, 0x5C($t0)
    ctx->pc = 0x209148u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 92)));
    // 0x20914c: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x20914cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x209150: 0x91070065  lbu         $a3, 0x65($t0)
    ctx->pc = 0x209150u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 101)));
    // 0x209154: 0x2442f242  addiu       $v0, $v0, -0xDBE
    ctx->pc = 0x209154u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963778));
    // 0x209158: 0x91050064  lbu         $a1, 0x64($t0)
    ctx->pc = 0x209158u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 100)));
    // 0x20915c: 0x33100  sll         $a2, $v1, 4
    ctx->pc = 0x20915cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x209160: 0x31a80  sll         $v1, $v1, 10
    ctx->pc = 0x209160u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 10));
    // 0x209164: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x209164u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x209168: 0xe81821  addu        $v1, $a3, $t0
    ctx->pc = 0x209168u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x20916c: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x20916cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x209170: 0x8d030020  lw          $v1, 0x20($t0)
    ctx->pc = 0x209170u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 32)));
    // 0x209174: 0x90c60524  lbu         $a2, 0x524($a2)
    ctx->pc = 0x209174u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 1316)));
    // 0x209178: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x209178u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x20917c: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x20917cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x209180: 0x62900  sll         $a1, $a2, 4
    ctx->pc = 0x209180u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x209184: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x209184u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x209188: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x209188u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x20918c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x20918cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x209190: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x209190u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x209194: 0xc081074  jal         func_2041D0
    ctx->pc = 0x209194u;
    SET_GPR_U32(ctx, 31, 0x20919Cu);
    ctx->pc = 0x209198u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209194u;
    // 0x209198: 0xa502006c  sh          $v0, 0x6C($t0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 8), 108), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2041D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2041D0u, 0x209194u, 0x20919Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20919Cu;
label_20919c:
    // 0x20919c: 0x24040126  addiu       $a0, $zero, 0x126
    ctx->pc = 0x20919cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 294));
    // 0x2091a0: 0xc0538fc  jal         func_14E3F0
    ctx->pc = 0x2091A0u;
    SET_GPR_U32(ctx, 31, 0x2091A8u);
    ctx->pc = 0x2091A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2091A0u;
    // 0x2091a4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E3F0u, 0x2091A0u, 0x2091A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2091A8u;
label_2091a8:
    // 0x2091a8: 0x3c040021  lui         $a0, 0x21
    ctx->pc = 0x2091a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)33 << 16));
    // 0x2091ac: 0xc0558e0  jal         func_156380
    ctx->pc = 0x2091ACu;
    SET_GPR_U32(ctx, 31, 0x2091B4u);
    ctx->pc = 0x2091B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2091ACu;
    // 0x2091b0: 0x248494c0  addiu       $a0, $a0, -0x6B40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x156380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156380u, 0x2091ACu, 0x2091B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2091B4u;
label_2091b4:
    // 0x2091b4: 0x3c0301c1  lui         $v1, 0x1C1
    ctx->pc = 0x2091b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)449 << 16));
    // 0x2091b8: 0x8c639bf8  lw          $v1, -0x6408($v1)
    ctx->pc = 0x2091b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294941688)));
    // 0x2091bc: 0x100000b2  b           . + 4 + (0xB2 << 2)
    ctx->pc = 0x2091BCu;
    {
        const bool branch_taken_0x2091bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2091C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2091BCu;
        // 0x2091c0: 0xa0600061  sb          $zero, 0x61($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 97), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2091bc) {
            ctx->pc = 0x209488u;
            goto label_209488;
        }
    }
    ctx->pc = 0x2091C4u;
label_2091c4:
    // 0x2091c4: 0x30e40008  andi        $a0, $a3, 0x8
    ctx->pc = 0x2091c4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)8);
label_2091c8:
    // 0x2091c8: 0x50800019  beql        $a0, $zero, . + 4 + (0x19 << 2)
    ctx->pc = 0x2091C8u;
    {
        const bool branch_taken_0x2091c8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2091c8) {
            ctx->pc = 0x2091CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2091C8u;
            // 0x2091cc: 0x30e40001  andi        $a0, $a3, 0x1 (Delay Slot)
            SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)1);
            ctx->in_delay_slot = false;
            ctx->pc = 0x209230u;
            goto label_209230;
        }
    }
    ctx->pc = 0x2091D0u;
    // 0x2091d0: 0x906504f7  lbu         $a1, 0x4F7($v1)
    ctx->pc = 0x2091d0u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1271)));
    // 0x2091d4: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x2091d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x2091d8: 0x54a4000e  bnel        $a1, $a0, . + 4 + (0xE << 2)
    ctx->pc = 0x2091D8u;
    {
        const bool branch_taken_0x2091d8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        if (branch_taken_0x2091d8) {
            ctx->pc = 0x2091DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2091D8u;
            // 0x2091dc: 0x8c630018  lw          $v1, 0x18($v1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x209214u;
            goto label_209214;
        }
    }
    ctx->pc = 0x2091E0u;
    // 0x2091e0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2091e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2091e4: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x2091e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x2091e8: 0xac620018  sw          $v0, 0x18($v1)
    ctx->pc = 0x2091e8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 2));
    // 0x2091ec: 0x3c0201c1  lui         $v0, 0x1C1
    ctx->pc = 0x2091ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)449 << 16));
    // 0x2091f0: 0x8c439bf8  lw          $v1, -0x6408($v0)
    ctx->pc = 0x2091f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294941688)));
    // 0x2091f4: 0x3c0201c1  lui         $v0, 0x1C1
    ctx->pc = 0x2091f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)449 << 16));
    // 0x2091f8: 0xa06404f7  sb          $a0, 0x4F7($v1)
    ctx->pc = 0x2091f8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1271), (uint8_t)GPR_U32(ctx, 4));
    // 0x2091fc: 0x8c429bf8  lw          $v0, -0x6408($v0)
    ctx->pc = 0x2091fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294941688)));
    // 0x209200: 0xc081504  jal         func_205410
    ctx->pc = 0x209200u;
    SET_GPR_U32(ctx, 31, 0x209208u);
    ctx->pc = 0x209204u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209200u;
    // 0x209204: 0xa04004f1  sb          $zero, 0x4F1($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 1265), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205410u, 0x209200u, 0x209208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209208u;
label_209208:
    // 0x209208: 0x1000009f  b           . + 4 + (0x9F << 2)
    ctx->pc = 0x209208u;
    {
        const bool branch_taken_0x209208 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x209208) {
            ctx->pc = 0x209488u;
            goto label_209488;
        }
    }
    ctx->pc = 0x209210u;
    // 0x209210: 0x8c630018  lw          $v1, 0x18($v1)
    ctx->pc = 0x209210u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_209214:
    // 0x209214: 0x1060009c  beqz        $v1, . + 4 + (0x9C << 2)
    ctx->pc = 0x209214u;
    {
        const bool branch_taken_0x209214 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x209214) {
            ctx->pc = 0x209488u;
            goto label_209488;
        }
    }
    ctx->pc = 0x20921Cu;
    // 0x20921c: 0xc082074  jal         func_2081D0
    ctx->pc = 0x20921Cu;
    SET_GPR_U32(ctx, 31, 0x209224u);
    ctx->pc = 0x2081D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2081D0u, 0x20921Cu, 0x209224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209224u;
label_209224:
    // 0x209224: 0x10000098  b           . + 4 + (0x98 << 2)
    ctx->pc = 0x209224u;
    {
        const bool branch_taken_0x209224 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x209224) {
            ctx->pc = 0x209488u;
            goto label_209488;
        }
    }
    ctx->pc = 0x20922Cu;
    // 0x20922c: 0x30e40001  andi        $a0, $a3, 0x1
    ctx->pc = 0x20922cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)1);
label_209230:
    // 0x209230: 0x50800021  beql        $a0, $zero, . + 4 + (0x21 << 2)
    ctx->pc = 0x209230u;
    {
        const bool branch_taken_0x209230 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x209230) {
            ctx->pc = 0x209234u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x209230u;
            // 0x209234: 0x30e44000  andi        $a0, $a3, 0x4000 (Delay Slot)
            SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)16384);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2092B8u;
            goto label_2092b8;
        }
    }
    ctx->pc = 0x209238u;
    // 0x209238: 0x906504f8  lbu         $a1, 0x4F8($v1)
    ctx->pc = 0x209238u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1272)));
    // 0x20923c: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x20923cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x209240: 0x14a40091  bne         $a1, $a0, . + 4 + (0x91 << 2)
    ctx->pc = 0x209240u;
    {
        const bool branch_taken_0x209240 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        if (branch_taken_0x209240) {
            ctx->pc = 0x209488u;
            goto label_209488;
        }
    }
    ctx->pc = 0x209248u;
    // 0x209248: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x209248u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x20924c: 0x5040000d  beql        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x20924Cu;
    {
        const bool branch_taken_0x20924c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20924c) {
            ctx->pc = 0x209250u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20924Cu;
            // 0x209250: 0x24040126  addiu       $a0, $zero, 0x126 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 294));
            ctx->in_delay_slot = false;
            ctx->pc = 0x209284u;
            goto label_209284;
        }
    }
    ctx->pc = 0x209254u;
    // 0x209254: 0x24040126  addiu       $a0, $zero, 0x126
    ctx->pc = 0x209254u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 294));
    // 0x209258: 0xc0538fc  jal         func_14E3F0
    ctx->pc = 0x209258u;
    SET_GPR_U32(ctx, 31, 0x209260u);
    ctx->pc = 0x20925Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209258u;
    // 0x20925c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E3F0u, 0x209258u, 0x209260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209260u;
label_209260:
    // 0x209260: 0x3c0201c1  lui         $v0, 0x1C1
    ctx->pc = 0x209260u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)449 << 16));
    // 0x209264: 0x8c429bf8  lw          $v0, -0x6408($v0)
    ctx->pc = 0x209264u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294941688)));
    // 0x209268: 0xc0815d4  jal         func_205750
    ctx->pc = 0x209268u;
    SET_GPR_U32(ctx, 31, 0x209270u);
    ctx->pc = 0x20926Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209268u;
    // 0x20926c: 0x90440065  lbu         $a0, 0x65($v0) (Delay Slot)
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 101)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205750u, 0x209268u, 0x209270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209270u;
label_209270:
    // 0x209270: 0xc0814b8  jal         func_2052E0
    ctx->pc = 0x209270u;
    SET_GPR_U32(ctx, 31, 0x209278u);
    ctx->pc = 0x2052E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2052E0u, 0x209270u, 0x209278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209278u;
label_209278:
    // 0x209278: 0x10000083  b           . + 4 + (0x83 << 2)
    ctx->pc = 0x209278u;
    {
        const bool branch_taken_0x209278 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x209278) {
            ctx->pc = 0x209488u;
            goto label_209488;
        }
    }
    ctx->pc = 0x209280u;
    // 0x209280: 0x24040126  addiu       $a0, $zero, 0x126
    ctx->pc = 0x209280u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 294));
label_209284:
    // 0x209284: 0xc0538fc  jal         func_14E3F0
    ctx->pc = 0x209284u;
    SET_GPR_U32(ctx, 31, 0x20928Cu);
    ctx->pc = 0x209288u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209284u;
    // 0x209288: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E3F0u, 0x209284u, 0x20928Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20928Cu;
label_20928c:
    // 0x20928c: 0x3c0201c1  lui         $v0, 0x1C1
    ctx->pc = 0x20928cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)449 << 16));
    // 0x209290: 0x8c429bf8  lw          $v0, -0x6408($v0)
    ctx->pc = 0x209290u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294941688)));
    // 0x209294: 0x90440065  lbu         $a0, 0x65($v0)
    ctx->pc = 0x209294u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 101)));
    // 0x209298: 0x90420064  lbu         $v0, 0x64($v0)
    ctx->pc = 0x209298u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 100)));
    // 0x20929c: 0xc081600  jal         func_205800
    ctx->pc = 0x20929Cu;
    SET_GPR_U32(ctx, 31, 0x2092A4u);
    ctx->pc = 0x2092A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20929Cu;
    // 0x2092a0: 0x24450001  addiu       $a1, $v0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205800u, 0x20929Cu, 0x2092A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2092A4u;
label_2092a4:
    // 0x2092a4: 0xc081494  jal         func_205250
    ctx->pc = 0x2092A4u;
    SET_GPR_U32(ctx, 31, 0x2092ACu);
    ctx->pc = 0x205250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205250u, 0x2092A4u, 0x2092ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2092ACu;
label_2092ac:
    // 0x2092ac: 0x10000076  b           . + 4 + (0x76 << 2)
    ctx->pc = 0x2092ACu;
    {
        const bool branch_taken_0x2092ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2092ac) {
            ctx->pc = 0x209488u;
            goto label_209488;
        }
    }
    ctx->pc = 0x2092B4u;
    // 0x2092b4: 0x30e44000  andi        $a0, $a3, 0x4000
    ctx->pc = 0x2092b4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)16384);
label_2092b8:
    // 0x2092b8: 0x50800036  beql        $a0, $zero, . + 4 + (0x36 << 2)
    ctx->pc = 0x2092B8u;
    {
        const bool branch_taken_0x2092b8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2092b8) {
            ctx->pc = 0x2092BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2092B8u;
            // 0x2092bc: 0x30e40800  andi        $a0, $a3, 0x800 (Delay Slot)
            SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)2048);
            ctx->in_delay_slot = false;
            ctx->pc = 0x209394u;
            goto label_209394;
        }
    }
    ctx->pc = 0x2092C0u;
    // 0x2092c0: 0x2404013e  addiu       $a0, $zero, 0x13E
    ctx->pc = 0x2092c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 318));
    // 0x2092c4: 0xc0538fc  jal         func_14E3F0
    ctx->pc = 0x2092C4u;
    SET_GPR_U32(ctx, 31, 0x2092CCu);
    ctx->pc = 0x2092C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2092C4u;
    // 0x2092c8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E3F0u, 0x2092C4u, 0x2092CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2092CCu;
label_2092cc:
    // 0x2092cc: 0x3c0201c1  lui         $v0, 0x1C1
    ctx->pc = 0x2092ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)449 << 16));
    // 0x2092d0: 0x8c439bf8  lw          $v1, -0x6408($v0)
    ctx->pc = 0x2092d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294941688)));
    // 0x2092d4: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x2092d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x2092d8: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2092D8u;
    {
        const bool branch_taken_0x2092d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2092d8) {
            ctx->pc = 0x2092DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2092D8u;
            // 0x2092dc: 0x8c620018  lw          $v0, 0x18($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2092F4u;
            goto label_2092f4;
        }
    }
    ctx->pc = 0x2092E0u;
    // 0x2092e0: 0xc082054  jal         func_208150
    ctx->pc = 0x2092E0u;
    SET_GPR_U32(ctx, 31, 0x2092E8u);
    ctx->pc = 0x208150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208150u, 0x2092E0u, 0x2092E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2092E8u;
label_2092e8:
    // 0x2092e8: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x2092E8u;
    {
        const bool branch_taken_0x2092e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2092e8) {
            ctx->pc = 0x209388u;
            goto label_209388;
        }
    }
    ctx->pc = 0x2092F0u;
    // 0x2092f0: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x2092f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_2092f4:
    // 0x2092f4: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2092F4u;
    {
        const bool branch_taken_0x2092f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2092f4) {
            ctx->pc = 0x2092F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2092F4u;
            // 0x2092f8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x209310u;
            goto label_209310;
        }
    }
    ctx->pc = 0x2092FCu;
    // 0x2092fc: 0xc082074  jal         func_2081D0
    ctx->pc = 0x2092FCu;
    SET_GPR_U32(ctx, 31, 0x209304u);
    ctx->pc = 0x2081D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2081D0u, 0x2092FCu, 0x209304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209304u;
label_209304:
    // 0x209304: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x209304u;
    {
        const bool branch_taken_0x209304 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x209304) {
            ctx->pc = 0x209388u;
            goto label_209388;
        }
    }
    ctx->pc = 0x20930Cu;
    // 0x20930c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x20930cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_209310:
    // 0x209310: 0xc081074  jal         func_2041D0
    ctx->pc = 0x209310u;
    SET_GPR_U32(ctx, 31, 0x209318u);
    ctx->pc = 0x2041D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2041D0u, 0x209310u, 0x209318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209318u;
label_209318:
    // 0x209318: 0x3c040021  lui         $a0, 0x21
    ctx->pc = 0x209318u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)33 << 16));
    // 0x20931c: 0xc0558e0  jal         func_156380
    ctx->pc = 0x20931Cu;
    SET_GPR_U32(ctx, 31, 0x209324u);
    ctx->pc = 0x209320u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20931Cu;
    // 0x209320: 0x24848770  addiu       $a0, $a0, -0x7890 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936432));
    ctx->in_delay_slot = false;
    ctx->pc = 0x156380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156380u, 0x20931Cu, 0x209324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209324u;
label_209324:
    // 0x209324: 0x3c0201c1  lui         $v0, 0x1C1
    ctx->pc = 0x209324u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)449 << 16));
    // 0x209328: 0x3c07003a  lui         $a3, 0x3A
    ctx->pc = 0x209328u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)58 << 16));
    // 0x20932c: 0x8c489bf8  lw          $t0, -0x6408($v0)
    ctx->pc = 0x20932cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294941688)));
    // 0x209330: 0x3c0601c1  lui         $a2, 0x1C1
    ctx->pc = 0x209330u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)449 << 16));
    // 0x209334: 0x3c0501c1  lui         $a1, 0x1C1
    ctx->pc = 0x209334u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)449 << 16));
    // 0x209338: 0x3c0401c1  lui         $a0, 0x1C1
    ctx->pc = 0x209338u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)449 << 16));
    // 0x20933c: 0x3c0301c1  lui         $v1, 0x1C1
    ctx->pc = 0x20933cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)449 << 16));
    // 0x209340: 0x24e798a0  addiu       $a3, $a3, -0x6760
    ctx->pc = 0x209340u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294940832));
    // 0x209344: 0xa1000061  sb          $zero, 0x61($t0)
    ctx->pc = 0x209344u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 97), (uint8_t)GPR_U32(ctx, 0));
    // 0x209348: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x209348u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x20934c: 0x8cc69bf8  lw          $a2, -0x6408($a2)
    ctx->pc = 0x20934cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294941688)));
    // 0x209350: 0xacc0000c  sw          $zero, 0xC($a2)
    ctx->pc = 0x209350u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 0));
    // 0x209354: 0x8ca59bf8  lw          $a1, -0x6408($a1)
    ctx->pc = 0x209354u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294941688)));
    // 0x209358: 0xa0a00064  sb          $zero, 0x64($a1)
    ctx->pc = 0x209358u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 100), (uint8_t)GPR_U32(ctx, 0));
    // 0x20935c: 0x8c849bf8  lw          $a0, -0x6408($a0)
    ctx->pc = 0x20935cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294941688)));
    // 0x209360: 0xa0800065  sb          $zero, 0x65($a0)
    ctx->pc = 0x209360u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 101), (uint8_t)GPR_U32(ctx, 0));
    // 0x209364: 0x8c639bf8  lw          $v1, -0x6408($v1)
    ctx->pc = 0x209364u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294941688)));
    // 0x209368: 0x8c42b7c8  lw          $v0, -0x4838($v0)
    ctx->pc = 0x209368u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948808)));
    // 0x20936c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x20936cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x209370: 0xe31821  addu        $v1, $a3, $v1
    ctx->pc = 0x209370u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x209374: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x209374u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x209378: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x209378u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x20937c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x20937cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x209380: 0xc080f90  jal         func_203E40
    ctx->pc = 0x209380u;
    SET_GPR_U32(ctx, 31, 0x209388u);
    ctx->pc = 0x209384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209380u;
    // 0x209384: 0x94440000  lhu         $a0, 0x0($v0) (Delay Slot)
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203E40u, 0x209380u, 0x209388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209388u;
label_209388:
    // 0x209388: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x209388u;
    {
        const bool branch_taken_0x209388 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x209388) {
            ctx->pc = 0x209488u;
            goto label_209488;
        }
    }
    ctx->pc = 0x209390u;
    // 0x209390: 0x30e40800  andi        $a0, $a3, 0x800
    ctx->pc = 0x209390u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)2048);
label_209394:
    // 0x209394: 0x5080001d  beql        $a0, $zero, . + 4 + (0x1D << 2)
    ctx->pc = 0x209394u;
    {
        const bool branch_taken_0x209394 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x209394) {
            ctx->pc = 0x209398u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x209394u;
            // 0x209398: 0x30e40400  andi        $a0, $a3, 0x400 (Delay Slot)
            SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)1024);
            ctx->in_delay_slot = false;
            ctx->pc = 0x20940Cu;
            goto label_20940c;
        }
    }
    ctx->pc = 0x20939Cu;
    // 0x20939c: 0x906404f5  lbu         $a0, 0x4F5($v1)
    ctx->pc = 0x20939cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1269)));
    // 0x2093a0: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x2093a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2093a4: 0x5487000e  bnel        $a0, $a3, . + 4 + (0xE << 2)
    ctx->pc = 0x2093A4u;
    {
        const bool branch_taken_0x2093a4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 7));
        if (branch_taken_0x2093a4) {
            ctx->pc = 0x2093A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2093A4u;
            // 0x2093a8: 0x90660061  lbu         $a2, 0x61($v1) (Delay Slot)
            SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 97)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2093E0u;
            goto label_2093e0;
        }
    }
    ctx->pc = 0x2093ACu;
    // 0x2093ac: 0x90680061  lbu         $t0, 0x61($v1)
    ctx->pc = 0x2093acu;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 97)));
    // 0x2093b0: 0x3c0501c1  lui         $a1, 0x1C1
    ctx->pc = 0x2093b0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)449 << 16));
    // 0x2093b4: 0x24070007  addiu       $a3, $zero, 0x7
    ctx->pc = 0x2093b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2093b8: 0x3c0401c1  lui         $a0, 0x1C1
    ctx->pc = 0x2093b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)449 << 16));
    // 0x2093bc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2093bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2093c0: 0x35080002  ori         $t0, $t0, 0x2
    ctx->pc = 0x2093c0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)2);
    // 0x2093c4: 0xa0680061  sb          $t0, 0x61($v1)
    ctx->pc = 0x2093c4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 97), (uint8_t)GPR_U32(ctx, 8));
    // 0x2093c8: 0x8ca39bf8  lw          $v1, -0x6408($a1)
    ctx->pc = 0x2093c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294941688)));
    // 0x2093cc: 0xa06704f5  sb          $a3, 0x4F5($v1)
    ctx->pc = 0x2093ccu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1269), (uint8_t)GPR_U32(ctx, 7));
    // 0x2093d0: 0x8c839bf8  lw          $v1, -0x6408($a0)
    ctx->pc = 0x2093d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294941688)));
    // 0x2093d4: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2093D4u;
    {
        const bool branch_taken_0x2093d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2093D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2093D4u;
        // 0x2093d8: 0xac66000c  sw          $a2, 0xC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2093d4) {
            ctx->pc = 0x209400u;
            goto label_209400;
        }
    }
    ctx->pc = 0x2093DCu;
    // 0x2093dc: 0x90660061  lbu         $a2, 0x61($v1)
    ctx->pc = 0x2093dcu;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 97)));
label_2093e0:
    // 0x2093e0: 0x3c0501c1  lui         $a1, 0x1C1
    ctx->pc = 0x2093e0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)449 << 16));
    // 0x2093e4: 0x3c0401c1  lui         $a0, 0x1C1
    ctx->pc = 0x2093e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)449 << 16));
    // 0x2093e8: 0x38c60002  xori        $a2, $a2, 0x2
    ctx->pc = 0x2093e8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) ^ (uint64_t)(uint16_t)2);
    // 0x2093ec: 0xa0660061  sb          $a2, 0x61($v1)
    ctx->pc = 0x2093ecu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 97), (uint8_t)GPR_U32(ctx, 6));
    // 0x2093f0: 0x8ca39bf8  lw          $v1, -0x6408($a1)
    ctx->pc = 0x2093f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294941688)));
    // 0x2093f4: 0xa06704f5  sb          $a3, 0x4F5($v1)
    ctx->pc = 0x2093f4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1269), (uint8_t)GPR_U32(ctx, 7));
    // 0x2093f8: 0x8c839bf8  lw          $v1, -0x6408($a0)
    ctx->pc = 0x2093f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294941688)));
    // 0x2093fc: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x2093fcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
label_209400:
    // 0x209400: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x209400u;
    {
        const bool branch_taken_0x209400 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x209400) {
            ctx->pc = 0x209488u;
            goto label_209488;
        }
    }
    ctx->pc = 0x209408u;
    // 0x209408: 0x30e40400  andi        $a0, $a3, 0x400
    ctx->pc = 0x209408u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)1024);
label_20940c:
    // 0x20940c: 0x50800017  beql        $a0, $zero, . + 4 + (0x17 << 2)
    ctx->pc = 0x20940Cu;
    {
        const bool branch_taken_0x20940c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x20940c) {
            ctx->pc = 0x209410u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20940Cu;
            // 0x209410: 0x30e31000  andi        $v1, $a3, 0x1000 (Delay Slot)
            SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)4096);
            ctx->in_delay_slot = false;
            ctx->pc = 0x20946Cu;
            goto label_20946c;
        }
    }
    ctx->pc = 0x209414u;
    // 0x209414: 0x906504f6  lbu         $a1, 0x4F6($v1)
    ctx->pc = 0x209414u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1270)));
    // 0x209418: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x209418u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x20941c: 0x54a4000c  bnel        $a1, $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x20941Cu;
    {
        const bool branch_taken_0x20941c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        if (branch_taken_0x20941c) {
            ctx->pc = 0x209420u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20941Cu;
            // 0x209420: 0x8c630014  lw          $v1, 0x14($v1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x209450u;
            goto label_209450;
        }
    }
    ctx->pc = 0x209424u;
    // 0x209424: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x209424u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x209428: 0x3c0401c1  lui         $a0, 0x1C1
    ctx->pc = 0x209428u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)449 << 16));
    // 0x20942c: 0xac650014  sw          $a1, 0x14($v1)
    ctx->pc = 0x20942cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 5));
    // 0x209430: 0x8c849bf8  lw          $a0, -0x6408($a0)
    ctx->pc = 0x209430u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294941688)));
    // 0x209434: 0x3c0301c1  lui         $v1, 0x1C1
    ctx->pc = 0x209434u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)449 << 16));
    // 0x209438: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x209438u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x20943c: 0xa08004f1  sb          $zero, 0x4F1($a0)
    ctx->pc = 0x20943cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1265), (uint8_t)GPR_U32(ctx, 0));
    // 0x209440: 0x8c639bf8  lw          $v1, -0x6408($v1)
    ctx->pc = 0x209440u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294941688)));
    // 0x209444: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x209444u;
    {
        const bool branch_taken_0x209444 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x209448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209444u;
        // 0x209448: 0xa06504f6  sb          $a1, 0x4F6($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 1270), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209444) {
            ctx->pc = 0x209460u;
            goto label_209460;
        }
    }
    ctx->pc = 0x20944Cu;
    // 0x20944c: 0x8c630014  lw          $v1, 0x14($v1)
    ctx->pc = 0x20944cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_209450:
    // 0x209450: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x209450u;
    {
        const bool branch_taken_0x209450 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x209450) {
            ctx->pc = 0x209488u;
            goto label_209488;
        }
    }
    ctx->pc = 0x209458u;
    // 0x209458: 0xc082054  jal         func_208150
    ctx->pc = 0x209458u;
    SET_GPR_U32(ctx, 31, 0x209460u);
    ctx->pc = 0x208150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208150u, 0x209458u, 0x209460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209460u;
label_209460:
    // 0x209460: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x209460u;
    {
        const bool branch_taken_0x209460 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x209460) {
            ctx->pc = 0x209488u;
            goto label_209488;
        }
    }
    ctx->pc = 0x209468u;
    // 0x209468: 0x30e31000  andi        $v1, $a3, 0x1000
    ctx->pc = 0x209468u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)4096);
label_20946c:
    // 0x20946c: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x20946Cu;
    {
        const bool branch_taken_0x20946c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x20946c) {
            ctx->pc = 0x209488u;
            goto label_209488;
        }
    }
    ctx->pc = 0x209474u;
    // 0x209474: 0x3c0201c1  lui         $v0, 0x1C1
    ctx->pc = 0x209474u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)449 << 16));
    // 0x209478: 0x8c429bf8  lw          $v0, -0x6408($v0)
    ctx->pc = 0x209478u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294941688)));
    // 0x20947c: 0x90450065  lbu         $a1, 0x65($v0)
    ctx->pc = 0x20947cu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 101)));
    // 0x209480: 0xc0817a8  jal         func_205EA0
    ctx->pc = 0x209480u;
    SET_GPR_U32(ctx, 31, 0x209488u);
    ctx->pc = 0x209484u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209480u;
    // 0x209484: 0x90440064  lbu         $a0, 0x64($v0) (Delay Slot)
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 100)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205EA0u, 0x209480u, 0x209488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209488u;
label_209488:
    // 0x209488: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x209488u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_20948c:
    // 0x20948c: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x20948cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x209490: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x209490u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x209494: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x209494u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x209498: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x209498u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x20949c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x20949cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2094a0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2094a0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2094a4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2094a4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2094a8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2094a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2094ac: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2094acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2094b0: 0x3e00008  jr          $ra
    ctx->pc = 0x2094B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2094B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2094B0u;
        // 0x2094b4: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2094B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2094B8u;
    // 0x2094b8: 0x0  nop
    ctx->pc = 0x2094b8u;
    // NOP
    // 0x2094bc: 0x0  nop
    ctx->pc = 0x2094bcu;
    // NOP
    // 0x2094c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2094c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2094c4: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x2094c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x2094c8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2094c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2094cc: 0x3c0201c1  lui         $v0, 0x1C1
    ctx->pc = 0x2094ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)449 << 16));
    // 0x2094d0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2094d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2094d4: 0x3c03009f  lui         $v1, 0x9F
    ctx->pc = 0x2094d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)159 << 16));
    // 0x2094d8: 0x8c459bf8  lw          $a1, -0x6408($v0)
    ctx->pc = 0x2094d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294941688)));
    // 0x2094dc: 0x2484ea20  addiu       $a0, $a0, -0x15E0
    ctx->pc = 0x2094dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961696));
    // 0x2094e0: 0xaca00024  sw          $zero, 0x24($a1)
    ctx->pc = 0x2094e0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 36), GPR_U32(ctx, 0));
    // 0x2094e4: 0x3c0201c1  lui         $v0, 0x1C1
    ctx->pc = 0x2094e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)449 << 16));
    // 0x2094e8: 0x90659480  lbu         $a1, -0x6B80($v1)
    ctx->pc = 0x2094e8u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294939776)));
    // 0x2094ec: 0x8c429bf8  lw          $v0, -0x6408($v0)
    ctx->pc = 0x2094ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294941688)));
    // 0x2094f0: 0x51840  sll         $v1, $a1, 1
    ctx->pc = 0x2094f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x2094f4: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2094f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2094f8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2094f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2094fc: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x2094fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x209500: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x209500u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x209504: 0x30630800  andi        $v1, $v1, 0x800
    ctx->pc = 0x209504u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2048);
    // 0x209508: 0xc08152c  jal         func_2054B0
    ctx->pc = 0x209508u;
    SET_GPR_U32(ctx, 31, 0x209510u);
    ctx->pc = 0x20950Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209508u;
    // 0x20950c: 0xac430024  sw          $v1, 0x24($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2054B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2054B0u, 0x209508u, 0x209510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209510u;
label_209510:
    // 0x209510: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x209510u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x209514: 0x3c0301c1  lui         $v1, 0x1C1
    ctx->pc = 0x209514u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)449 << 16));
    // 0x209518: 0x90459480  lbu         $a1, -0x6B80($v0)
    ctx->pc = 0x209518u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294939776)));
    // 0x20951c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x20951cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x209520: 0x8c669bf8  lw          $a2, -0x6408($v1)
    ctx->pc = 0x209520u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294941688)));
    // 0x209524: 0x51040  sll         $v0, $a1, 1
    ctx->pc = 0x209524u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x209528: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x209528u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x20952c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x20952cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x209530: 0x90d00068  lbu         $s0, 0x68($a2)
    ctx->pc = 0x209530u;
    SET_GPR_U32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 104)));
    // 0x209534: 0x2463ea26  addiu       $v1, $v1, -0x15DA
    ctx->pc = 0x209534u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961702));
    // 0x209538: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x209538u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x20953c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x20953cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x209540: 0x94460000  lhu         $a2, 0x0($v0)
    ctx->pc = 0x209540u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x209544: 0xc0d0abc  jal         func_342AF0
    ctx->pc = 0x209544u;
    SET_GPR_U32(ctx, 31, 0x20954Cu);
    ctx->pc = 0x209548u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209544u;
    // 0x209548: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x342AF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x342AF0u, 0x209544u, 0x20954Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20954Cu;
label_20954c:
    // 0x20954c: 0x3c0401c1  lui         $a0, 0x1C1
    ctx->pc = 0x20954cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)449 << 16));
    // 0x209550: 0x3c0301c1  lui         $v1, 0x1C1
    ctx->pc = 0x209550u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)449 << 16));
    // 0x209554: 0x8c849bf8  lw          $a0, -0x6408($a0)
    ctx->pc = 0x209554u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294941688)));
    // 0x209558: 0xa0820068  sb          $v0, 0x68($a0)
    ctx->pc = 0x209558u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 104), (uint8_t)GPR_U32(ctx, 2));
    // 0x20955c: 0x8c639bf8  lw          $v1, -0x6408($v1)
    ctx->pc = 0x20955cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294941688)));
    // 0x209560: 0x90630068  lbu         $v1, 0x68($v1)
    ctx->pc = 0x209560u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 104)));
    // 0x209564: 0x1603001c  bne         $s0, $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x209564u;
    {
        const bool branch_taken_0x209564 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        if (branch_taken_0x209564) {
            ctx->pc = 0x2095D8u;
            goto label_2095d8;
        }
    }
    ctx->pc = 0x20956Cu;
    // 0x20956c: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x20956cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x209570: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x209570u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x209574: 0x90469480  lbu         $a2, -0x6B80($v0)
    ctx->pc = 0x209574u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294939776)));
    // 0x209578: 0x2463ea26  addiu       $v1, $v1, -0x15DA
    ctx->pc = 0x209578u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961702));
    // 0x20957c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x20957cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x209580: 0x61040  sll         $v0, $a2, 1
    ctx->pc = 0x209580u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x209584: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x209584u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x209588: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x209588u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x20958c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x20958cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x209590: 0x94460000  lhu         $a2, 0x0($v0)
    ctx->pc = 0x209590u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x209594: 0xc0d0ae0  jal         func_342B80
    ctx->pc = 0x209594u;
    SET_GPR_U32(ctx, 31, 0x20959Cu);
    ctx->pc = 0x209598u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209594u;
    // 0x209598: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x342B80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x342B80u, 0x209594u, 0x20959Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20959Cu;
label_20959c:
    // 0x20959c: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x20959cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2095a0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2095a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2095a4: 0x1083000c  beq         $a0, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x2095A4u;
    {
        const bool branch_taken_0x2095a4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2095a4) {
            ctx->pc = 0x2095D8u;
            goto label_2095d8;
        }
    }
    ctx->pc = 0x2095ACu;
    // 0x2095ac: 0x3c0201c1  lui         $v0, 0x1C1
    ctx->pc = 0x2095acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)449 << 16));
    // 0x2095b0: 0x8c429bf8  lw          $v0, -0x6408($v0)
    ctx->pc = 0x2095b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294941688)));
    // 0x2095b4: 0x8c420024  lw          $v0, 0x24($v0)
    ctx->pc = 0x2095b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x2095b8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2095B8u;
    {
        const bool branch_taken_0x2095b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2095b8) {
            ctx->pc = 0x2095D0u;
            goto label_2095d0;
        }
    }
    ctx->pc = 0x2095C0u;
    // 0x2095c0: 0xc081594  jal         func_205650
    ctx->pc = 0x2095C0u;
    SET_GPR_U32(ctx, 31, 0x2095C8u);
    ctx->pc = 0x205650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205650u, 0x2095C0u, 0x2095C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2095C8u;
label_2095c8:
    // 0x2095c8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2095C8u;
    {
        const bool branch_taken_0x2095c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2095c8) {
            ctx->pc = 0x2095D8u;
            goto label_2095d8;
        }
    }
    ctx->pc = 0x2095D0u;
label_2095d0:
    // 0x2095d0: 0xc081544  jal         func_205510
    ctx->pc = 0x2095D0u;
    SET_GPR_U32(ctx, 31, 0x2095D8u);
    ctx->pc = 0x205510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205510u, 0x2095D0u, 0x2095D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2095D8u;
label_2095d8:
    // 0x2095d8: 0x3c03009f  lui         $v1, 0x9F
    ctx->pc = 0x2095d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)159 << 16));
    // 0x2095dc: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x2095dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x2095e0: 0x90659480  lbu         $a1, -0x6B80($v1)
    ctx->pc = 0x2095e0u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294939776)));
    // 0x2095e4: 0x2484ea22  addiu       $a0, $a0, -0x15DE
    ctx->pc = 0x2095e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961698));
    // 0x2095e8: 0x51840  sll         $v1, $a1, 1
    ctx->pc = 0x2095e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x2095ec: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2095ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2095f0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2095f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2095f4: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x2095f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2095f8: 0x94640000  lhu         $a0, 0x0($v1)
    ctx->pc = 0x2095f8u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2095fc: 0x30832000  andi        $v1, $a0, 0x2000
    ctx->pc = 0x2095fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)8192);
    // 0x209600: 0x5060000b  beql        $v1, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x209600u;
    {
        const bool branch_taken_0x209600 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x209600) {
            ctx->pc = 0x209604u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x209600u;
            // 0x209604: 0x30834000  andi        $v1, $a0, 0x4000 (Delay Slot)
            SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)16384);
            ctx->in_delay_slot = false;
            ctx->pc = 0x209630u;
            goto label_209630;
        }
    }
    ctx->pc = 0x209608u;
    // 0x209608: 0x24040126  addiu       $a0, $zero, 0x126
    ctx->pc = 0x209608u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 294));
    // 0x20960c: 0xc0538fc  jal         func_14E3F0
    ctx->pc = 0x20960Cu;
    SET_GPR_U32(ctx, 31, 0x209614u);
    ctx->pc = 0x209610u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20960Cu;
    // 0x209610: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E3F0u, 0x20960Cu, 0x209614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209614u;
label_209614:
    // 0x209614: 0xc081074  jal         func_2041D0
    ctx->pc = 0x209614u;
    SET_GPR_U32(ctx, 31, 0x20961Cu);
    ctx->pc = 0x209618u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209614u;
    // 0x209618: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2041D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2041D0u, 0x209614u, 0x20961Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20961Cu;
label_20961c:
    // 0x20961c: 0x3c040021  lui         $a0, 0x21
    ctx->pc = 0x20961cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)33 << 16));
    // 0x209620: 0xc0558e0  jal         func_156380
    ctx->pc = 0x209620u;
    SET_GPR_U32(ctx, 31, 0x209628u);
    ctx->pc = 0x209624u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209620u;
    // 0x209624: 0x24848cf0  addiu       $a0, $a0, -0x7310 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x156380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156380u, 0x209620u, 0x209628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209628u;
label_209628:
    // 0x209628: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x209628u;
    {
        const bool branch_taken_0x209628 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x209628) {
            ctx->pc = 0x2096BCu;
            goto label_2096bc;
        }
    }
    ctx->pc = 0x209630u;
label_209630:
    // 0x209630: 0x10600022  beqz        $v1, . + 4 + (0x22 << 2)
    ctx->pc = 0x209630u;
    {
        const bool branch_taken_0x209630 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x209630) {
            ctx->pc = 0x2096BCu;
            goto label_2096bc;
        }
    }
    ctx->pc = 0x209638u;
    // 0x209638: 0x2404013e  addiu       $a0, $zero, 0x13E
    ctx->pc = 0x209638u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 318));
    // 0x20963c: 0xc0538fc  jal         func_14E3F0
    ctx->pc = 0x20963Cu;
    SET_GPR_U32(ctx, 31, 0x209644u);
    ctx->pc = 0x209640u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20963Cu;
    // 0x209640: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E3F0u, 0x20963Cu, 0x209644u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209644u;
label_209644:
    // 0x209644: 0x3c0201c1  lui         $v0, 0x1C1
    ctx->pc = 0x209644u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)449 << 16));
    // 0x209648: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x209648u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x20964c: 0x8c489bf8  lw          $t0, -0x6408($v0)
    ctx->pc = 0x20964cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294941688)));
    // 0x209650: 0x2463f242  addiu       $v1, $v1, -0xDBE
    ctx->pc = 0x209650u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963778));
    // 0x209654: 0x8d02005c  lw          $v0, 0x5C($t0)
    ctx->pc = 0x209654u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 92)));
    // 0x209658: 0x91060065  lbu         $a2, 0x65($t0)
    ctx->pc = 0x209658u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 101)));
    // 0x20965c: 0x91040064  lbu         $a0, 0x64($t0)
    ctx->pc = 0x20965cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 100)));
    // 0x209660: 0x22900  sll         $a1, $v0, 4
    ctx->pc = 0x209660u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x209664: 0x9507006c  lhu         $a3, 0x6C($t0)
    ctx->pc = 0x209664u;
    SET_GPR_U32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 108)));
    // 0x209668: 0x21280  sll         $v0, $v0, 10
    ctx->pc = 0x209668u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 10));
    // 0x20966c: 0xc83021  addu        $a2, $a2, $t0
    ctx->pc = 0x20966cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x209670: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x209670u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x209674: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x209674u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x209678: 0x8d030020  lw          $v1, 0x20($t0)
    ctx->pc = 0x209678u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 32)));
    // 0x20967c: 0x90a50524  lbu         $a1, 0x524($a1)
    ctx->pc = 0x20967cu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1316)));
    // 0x209680: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x209680u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x209684: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x209684u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x209688: 0x52100  sll         $a0, $a1, 4
    ctx->pc = 0x209688u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x20968c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x20968cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x209690: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x209690u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x209694: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x209694u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x209698: 0xc081494  jal         func_205250
    ctx->pc = 0x209698u;
    SET_GPR_U32(ctx, 31, 0x2096A0u);
    ctx->pc = 0x20969Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209698u;
    // 0x20969c: 0xa4470000  sh          $a3, 0x0($v0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205250u, 0x209698u, 0x2096A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2096A0u;
label_2096a0:
    // 0x2096a0: 0xc08152c  jal         func_2054B0
    ctx->pc = 0x2096A0u;
    SET_GPR_U32(ctx, 31, 0x2096A8u);
    ctx->pc = 0x2054B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2054B0u, 0x2096A0u, 0x2096A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2096A8u;
label_2096a8:
    // 0x2096a8: 0xc081074  jal         func_2041D0
    ctx->pc = 0x2096A8u;
    SET_GPR_U32(ctx, 31, 0x2096B0u);
    ctx->pc = 0x2096ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2096A8u;
    // 0x2096ac: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2041D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2041D0u, 0x2096A8u, 0x2096B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2096B0u;
label_2096b0:
    // 0x2096b0: 0x3c040021  lui         $a0, 0x21
    ctx->pc = 0x2096b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)33 << 16));
    // 0x2096b4: 0xc0558e0  jal         func_156380
    ctx->pc = 0x2096B4u;
    SET_GPR_U32(ctx, 31, 0x2096BCu);
    ctx->pc = 0x2096B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2096B4u;
    // 0x2096b8: 0x24848cf0  addiu       $a0, $a0, -0x7310 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x156380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156380u, 0x2096B4u, 0x2096BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2096BCu;
label_2096bc:
    // 0x2096bc: 0x3c03009f  lui         $v1, 0x9F
    ctx->pc = 0x2096bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)159 << 16));
    // 0x2096c0: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x2096c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x2096c4: 0x90659480  lbu         $a1, -0x6B80($v1)
    ctx->pc = 0x2096c4u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294939776)));
    // 0x2096c8: 0x2484ea22  addiu       $a0, $a0, -0x15DE
    ctx->pc = 0x2096c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961698));
    // 0x2096cc: 0x51840  sll         $v1, $a1, 1
    ctx->pc = 0x2096ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x2096d0: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2096d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2096d4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2096d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2096d8: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x2096d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2096dc: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x2096dcu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2096e0: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2096e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2096e4: 0x5060000d  beql        $v1, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x2096E4u;
    {
        const bool branch_taken_0x2096e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2096e4) {
            ctx->pc = 0x2096E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2096E4u;
            // 0x2096e8: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20971Cu;
            goto label_20971c;
        }
    }
    ctx->pc = 0x2096ECu;
    // 0x2096ec: 0x3c0201c1  lui         $v0, 0x1C1
    ctx->pc = 0x2096ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)449 << 16));
    // 0x2096f0: 0x8c429bf8  lw          $v0, -0x6408($v0)
    ctx->pc = 0x2096f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294941688)));
    // 0x2096f4: 0x90440065  lbu         $a0, 0x65($v0)
    ctx->pc = 0x2096f4u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 101)));
    // 0x2096f8: 0x90420064  lbu         $v0, 0x64($v0)
    ctx->pc = 0x2096f8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 100)));
    // 0x2096fc: 0xc081600  jal         func_205800
    ctx->pc = 0x2096FCu;
    SET_GPR_U32(ctx, 31, 0x209704u);
    ctx->pc = 0x209700u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2096FCu;
    // 0x209700: 0x24450001  addiu       $a1, $v0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205800u, 0x2096FCu, 0x209704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209704u;
label_209704:
    // 0x209704: 0x24040126  addiu       $a0, $zero, 0x126
    ctx->pc = 0x209704u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 294));
    // 0x209708: 0xc0538fc  jal         func_14E3F0
    ctx->pc = 0x209708u;
    SET_GPR_U32(ctx, 31, 0x209710u);
    ctx->pc = 0x20970Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209708u;
    // 0x20970c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E3F0u, 0x209708u, 0x209710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209710u;
label_209710:
    // 0x209710: 0xc081494  jal         func_205250
    ctx->pc = 0x209710u;
    SET_GPR_U32(ctx, 31, 0x209718u);
    ctx->pc = 0x205250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205250u, 0x209710u, 0x209718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209718u;
label_209718:
    // 0x209718: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x209718u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_20971c:
    // 0x20971c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x20971cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x209720: 0x3e00008  jr          $ra
    ctx->pc = 0x209720u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x209724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209720u;
        // 0x209724: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x209720u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x209728u;
    // 0x209728: 0x0  nop
    ctx->pc = 0x209728u;
    // NOP
    // 0x20972c: 0x0  nop
    ctx->pc = 0x20972cu;
    // NOP
}
