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

// Function: sub_00334C10
// Address: 0x334c10 - 0x335b20
void sub_00334C10_0x334c10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00334C10_0x334c10");
#endif

    switch (ctx->pc) {
        case 0x334c60u: goto label_334c60;
        case 0x334c8cu: goto label_334c8c;
        case 0x334cacu: goto label_334cac;
        case 0x334cfcu: goto label_334cfc;
        case 0x334d3cu: goto label_334d3c;
        case 0x334d54u: goto label_334d54;
        case 0x334da8u: goto label_334da8;
        case 0x334de8u: goto label_334de8;
        case 0x334e44u: goto label_334e44;
        case 0x334e8cu: goto label_334e8c;
        case 0x334ea4u: goto label_334ea4;
        case 0x334ec4u: goto label_334ec4;
        case 0x334f0cu: goto label_334f0c;
        case 0x334f24u: goto label_334f24;
        case 0x334f40u: goto label_334f40;
        case 0x334fb8u: goto label_334fb8;
        case 0x335068u: goto label_335068;
        case 0x33509cu: goto label_33509c;
        case 0x33510cu: goto label_33510c;
        case 0x335128u: goto label_335128;
        case 0x335170u: goto label_335170;
        case 0x3351bcu: goto label_3351bc;
        case 0x33521cu: goto label_33521c;
        case 0x335270u: goto label_335270;
        case 0x3352b8u: goto label_3352b8;
        case 0x3352f8u: goto label_3352f8;
        case 0x335340u: goto label_335340;
        case 0x335358u: goto label_335358;
        case 0x335378u: goto label_335378;
        case 0x3353c0u: goto label_3353c0;
        case 0x3353dcu: goto label_3353dc;
        case 0x335404u: goto label_335404;
        case 0x33546cu: goto label_33546c;
        case 0x3354f0u: goto label_3354f0;
        case 0x335534u: goto label_335534;
        case 0x335574u: goto label_335574;
        case 0x3355a8u: goto label_3355a8;
        case 0x335610u: goto label_335610;
        case 0x335638u: goto label_335638;
        case 0x335684u: goto label_335684;
        case 0x3356e4u: goto label_3356e4;
        case 0x335744u: goto label_335744;
        case 0x335754u: goto label_335754;
        case 0x335788u: goto label_335788;
        case 0x3357b0u: goto label_3357b0;
        case 0x3357c8u: goto label_3357c8;
        case 0x3357d8u: goto label_3357d8;
        case 0x3357ecu: goto label_3357ec;
        case 0x335804u: goto label_335804;
        case 0x335814u: goto label_335814;
        case 0x335838u: goto label_335838;
        case 0x3358a4u: goto label_3358a4;
        case 0x3358b4u: goto label_3358b4;
        case 0x3358c4u: goto label_3358c4;
        case 0x3358d4u: goto label_3358d4;
        case 0x3358e4u: goto label_3358e4;
        case 0x33590cu: goto label_33590c;
        case 0x33591cu: goto label_33591c;
        case 0x33592cu: goto label_33592c;
        case 0x33593cu: goto label_33593c;
        case 0x33594cu: goto label_33594c;
        case 0x335978u: goto label_335978;
        case 0x335988u: goto label_335988;
        case 0x335998u: goto label_335998;
        case 0x3359a8u: goto label_3359a8;
        case 0x3359b8u: goto label_3359b8;
        case 0x3359c8u: goto label_3359c8;
        case 0x3359f0u: goto label_3359f0;
        case 0x335a00u: goto label_335a00;
        case 0x335a10u: goto label_335a10;
        case 0x335a3cu: goto label_335a3c;
        case 0x335a4cu: goto label_335a4c;
        case 0x335a5cu: goto label_335a5c;
        case 0x335a6cu: goto label_335a6c;
        case 0x335a84u: goto label_335a84;
        case 0x335a9cu: goto label_335a9c;
        case 0x335ae4u: goto label_335ae4;
        case 0x335afcu: goto label_335afc;
        default: break;
    }

    ctx->pc = 0x334c10u;

    // 0x334c10: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x334c10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x334c14: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x334c14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x334c18: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x334c18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x334c1c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x334c1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x334c20: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x334c20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x334c24: 0x4863c  dsll32      $s0, $a0, 24
    ctx->pc = 0x334c24u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 4) << (32 + 24));
    // 0x334c28: 0x10863f  dsra32      $s0, $s0, 24
    ctx->pc = 0x334c28u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 24));
    // 0x334c2c: 0x16000019  bnez        $s0, . + 4 + (0x19 << 2)
    ctx->pc = 0x334C2Cu;
    {
        const bool branch_taken_0x334c2c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x334C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334C2Cu;
        // 0x334c30: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x334c2c) {
            ctx->pc = 0x334C94u;
            goto label_334c94;
        }
    }
    ctx->pc = 0x334C34u;
    // 0x334c34: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x334c34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x334c38: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x334c38u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x334c3c: 0x90441e58  lbu         $a0, 0x1E58($v0)
    ctx->pc = 0x334c3cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 7768)));
    // 0x334c40: 0x26450020  addiu       $a1, $s2, 0x20
    ctx->pc = 0x334c40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x334c44: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x334c44u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x334c48: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x334c48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x334c4c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x334c4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x334c50: 0x24421b10  addiu       $v0, $v0, 0x1B10
    ctx->pc = 0x334c50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6928));
    // 0x334c54: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x334c54u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x334c58: 0xc0c0ab8  jal         func_302AE0
    ctx->pc = 0x334C58u;
    SET_GPR_U32(ctx, 31, 0x334C60u);
    ctx->pc = 0x334C5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x334C58u;
    // 0x334c5c: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302AE0u, 0x334C58u, 0x334C60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x334C60u;
label_334c60:
    // 0x334c60: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x334c60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x334c64: 0x3c03003d  lui         $v1, 0x3D
    ctx->pc = 0x334c64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)61 << 16));
    // 0x334c68: 0x90441e58  lbu         $a0, 0x1E58($v0)
    ctx->pc = 0x334c68u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 7768)));
    // 0x334c6c: 0x24631b10  addiu       $v1, $v1, 0x1B10
    ctx->pc = 0x334c6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 6928));
    // 0x334c70: 0x26450038  addiu       $a1, $s2, 0x38
    ctx->pc = 0x334c70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 56));
    // 0x334c74: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x334c74u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x334c78: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x334c78u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x334c7c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x334c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x334c80: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x334c80u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x334c84: 0xc0c0ab8  jal         func_302AE0
    ctx->pc = 0x334C84u;
    SET_GPR_U32(ctx, 31, 0x334C8Cu);
    ctx->pc = 0x334C88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x334C84u;
    // 0x334c88: 0x622021  addu        $a0, $v1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302AE0u, 0x334C84u, 0x334C8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x334C8Cu;
label_334c8c:
    // 0x334c8c: 0x10000057  b           . + 4 + (0x57 << 2)
    ctx->pc = 0x334C8Cu;
    {
        const bool branch_taken_0x334c8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x334C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334C8Cu;
        // 0x334c90: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x334c8c) {
            ctx->pc = 0x334DECu;
            goto label_334dec;
        }
    }
    ctx->pc = 0x334C94u;
label_334c94:
    // 0x334c94: 0x1a00002b  blez        $s0, . + 4 + (0x2B << 2)
    ctx->pc = 0x334C94u;
    {
        const bool branch_taken_0x334c94 = (GPR_S32(ctx, 16) <= 0);
        if (branch_taken_0x334c94) {
            ctx->pc = 0x334D44u;
            goto label_334d44;
        }
    }
    ctx->pc = 0x334C9Cu;
    // 0x334c9c: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x334c9cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x334ca0: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x334ca0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x334ca4: 0xc0c0ab8  jal         func_302AE0
    ctx->pc = 0x334CA4u;
    SET_GPR_U32(ctx, 31, 0x334CACu);
    ctx->pc = 0x334CA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x334CA4u;
    // 0x334ca8: 0x24842160  addiu       $a0, $a0, 0x2160 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8544));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302AE0u, 0x334CA4u, 0x334CACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x334CACu;
label_334cac:
    // 0x334cac: 0x3c026666  lui         $v0, 0x6666
    ctx->pc = 0x334cacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26214 << 16));
    // 0x334cb0: 0x3c03003d  lui         $v1, 0x3D
    ctx->pc = 0x334cb0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)61 << 16));
    // 0x334cb4: 0x34426667  ori         $v0, $v0, 0x6667
    ctx->pc = 0x334cb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26215);
    // 0x334cb8: 0x103fc2  srl         $a3, $s0, 31
    ctx->pc = 0x334cb8u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 16), 31));
    // 0x334cbc: 0x500018  mult        $zero, $v0, $s0
    ctx->pc = 0x334cbcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x334cc0: 0x24631e58  addiu       $v1, $v1, 0x1E58
    ctx->pc = 0x334cc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 7768));
    // 0x334cc4: 0x26450020  addiu       $a1, $s2, 0x20
    ctx->pc = 0x334cc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x334cc8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x334cc8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x334ccc: 0x2010  mfhi        $a0
    ctx->pc = 0x334cccu;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x334cd0: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x334cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x334cd4: 0x42083  sra         $a0, $a0, 2
    ctx->pc = 0x334cd4u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 2));
    // 0x334cd8: 0x24421b10  addiu       $v0, $v0, 0x1B10
    ctx->pc = 0x334cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6928));
    // 0x334cdc: 0x872021  addu        $a0, $a0, $a3
    ctx->pc = 0x334cdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x334ce0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x334ce0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x334ce4: 0x90640000  lbu         $a0, 0x0($v1)
    ctx->pc = 0x334ce4u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x334ce8: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x334ce8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x334cec: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x334cecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x334cf0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x334cf0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x334cf4: 0xc0c0ab8  jal         func_302AE0
    ctx->pc = 0x334CF4u;
    SET_GPR_U32(ctx, 31, 0x334CFCu);
    ctx->pc = 0x334CF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x334CF4u;
    // 0x334cf8: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302AE0u, 0x334CF4u, 0x334CFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x334CFCu;
label_334cfc:
    // 0x334cfc: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x334cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x334d00: 0x3c03003d  lui         $v1, 0x3D
    ctx->pc = 0x334d00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)61 << 16));
    // 0x334d04: 0x202001a  div         $zero, $s0, $v0
    ctx->pc = 0x334d04u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 16);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x334d08: 0x24631e58  addiu       $v1, $v1, 0x1E58
    ctx->pc = 0x334d08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 7768));
    // 0x334d0c: 0x26450038  addiu       $a1, $s2, 0x38
    ctx->pc = 0x334d0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 56));
    // 0x334d10: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x334d10u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x334d14: 0x2010  mfhi        $a0
    ctx->pc = 0x334d14u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x334d18: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x334d18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x334d1c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x334d1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x334d20: 0x24421b10  addiu       $v0, $v0, 0x1B10
    ctx->pc = 0x334d20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6928));
    // 0x334d24: 0x90640000  lbu         $a0, 0x0($v1)
    ctx->pc = 0x334d24u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x334d28: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x334d28u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x334d2c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x334d2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x334d30: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x334d30u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x334d34: 0xc0c0ab8  jal         func_302AE0
    ctx->pc = 0x334D34u;
    SET_GPR_U32(ctx, 31, 0x334D3Cu);
    ctx->pc = 0x334D38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x334D34u;
    // 0x334d38: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302AE0u, 0x334D34u, 0x334D3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x334D3Cu;
label_334d3c:
    // 0x334d3c: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x334D3Cu;
    {
        const bool branch_taken_0x334d3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x334d3c) {
            ctx->pc = 0x334DE8u;
            goto label_334de8;
        }
    }
    ctx->pc = 0x334D44u;
label_334d44:
    // 0x334d44: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x334d44u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x334d48: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x334d48u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x334d4c: 0xc0c0ab8  jal         func_302AE0
    ctx->pc = 0x334D4Cu;
    SET_GPR_U32(ctx, 31, 0x334D54u);
    ctx->pc = 0x334D50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x334D4Cu;
    // 0x334d50: 0x2484216c  addiu       $a0, $a0, 0x216C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8556));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302AE0u, 0x334D4Cu, 0x334D54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x334D54u;
label_334d54:
    // 0x334d54: 0x3c026666  lui         $v0, 0x6666
    ctx->pc = 0x334d54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26214 << 16));
    // 0x334d58: 0x108023  negu        $s0, $s0
    ctx->pc = 0x334d58u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 16)));
    // 0x334d5c: 0x34426667  ori         $v0, $v0, 0x6667
    ctx->pc = 0x334d5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26215);
    // 0x334d60: 0x3c03003d  lui         $v1, 0x3D
    ctx->pc = 0x334d60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)61 << 16));
    // 0x334d64: 0x500018  mult        $zero, $v0, $s0
    ctx->pc = 0x334d64u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x334d68: 0x103fc2  srl         $a3, $s0, 31
    ctx->pc = 0x334d68u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 16), 31));
    // 0x334d6c: 0x24631e58  addiu       $v1, $v1, 0x1E58
    ctx->pc = 0x334d6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 7768));
    // 0x334d70: 0x26450020  addiu       $a1, $s2, 0x20
    ctx->pc = 0x334d70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x334d74: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x334d74u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x334d78: 0x2010  mfhi        $a0
    ctx->pc = 0x334d78u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x334d7c: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x334d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x334d80: 0x42083  sra         $a0, $a0, 2
    ctx->pc = 0x334d80u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 2));
    // 0x334d84: 0x24421b10  addiu       $v0, $v0, 0x1B10
    ctx->pc = 0x334d84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6928));
    // 0x334d88: 0x872021  addu        $a0, $a0, $a3
    ctx->pc = 0x334d88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x334d8c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x334d8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x334d90: 0x90640000  lbu         $a0, 0x0($v1)
    ctx->pc = 0x334d90u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x334d94: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x334d94u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x334d98: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x334d98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x334d9c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x334d9cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x334da0: 0xc0c0ab8  jal         func_302AE0
    ctx->pc = 0x334DA0u;
    SET_GPR_U32(ctx, 31, 0x334DA8u);
    ctx->pc = 0x334DA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x334DA0u;
    // 0x334da4: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302AE0u, 0x334DA0u, 0x334DA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x334DA8u;
label_334da8:
    // 0x334da8: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x334da8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x334dac: 0x3c03003d  lui         $v1, 0x3D
    ctx->pc = 0x334dacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)61 << 16));
    // 0x334db0: 0x202001a  div         $zero, $s0, $v0
    ctx->pc = 0x334db0u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 16);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x334db4: 0x24631e58  addiu       $v1, $v1, 0x1E58
    ctx->pc = 0x334db4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 7768));
    // 0x334db8: 0x26450038  addiu       $a1, $s2, 0x38
    ctx->pc = 0x334db8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 56));
    // 0x334dbc: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x334dbcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x334dc0: 0x2010  mfhi        $a0
    ctx->pc = 0x334dc0u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x334dc4: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x334dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x334dc8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x334dc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x334dcc: 0x24421b10  addiu       $v0, $v0, 0x1B10
    ctx->pc = 0x334dccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6928));
    // 0x334dd0: 0x90640000  lbu         $a0, 0x0($v1)
    ctx->pc = 0x334dd0u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x334dd4: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x334dd4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x334dd8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x334dd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x334ddc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x334ddcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x334de0: 0xc0c0ab8  jal         func_302AE0
    ctx->pc = 0x334DE0u;
    SET_GPR_U32(ctx, 31, 0x334DE8u);
    ctx->pc = 0x334DE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x334DE0u;
    // 0x334de4: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302AE0u, 0x334DE0u, 0x334DE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x334DE8u;
label_334de8:
    // 0x334de8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x334de8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_334dec:
    // 0x334dec: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x334decu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x334df0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x334df0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x334df4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x334df4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x334df8: 0x3e00008  jr          $ra
    ctx->pc = 0x334DF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x334DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334DF8u;
        // 0x334dfc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x334DF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x334E00u;
    // 0x334e00: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x334e00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x334e04: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x334e04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x334e08: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x334e08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x334e0c: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x334e0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x334e10: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x334e10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x334e14: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x334e14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x334e18: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x334e18u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x334e1c: 0x8c44e808  lw          $a0, -0x17F8($v0)
    ctx->pc = 0x334e1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961160)));
    // 0x334e20: 0x41140  sll         $v0, $a0, 5
    ctx->pc = 0x334e20u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x334e24: 0x14830021  bne         $a0, $v1, . + 4 + (0x21 << 2)
    ctx->pc = 0x334E24u;
    {
        const bool branch_taken_0x334e24 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x334E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334E24u;
        // 0x334e28: 0x245000a0  addiu       $s0, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x334e24) {
            ctx->pc = 0x334EACu;
            goto label_334eac;
        }
    }
    ctx->pc = 0x334E2Cu;
    // 0x334e2c: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x334e2cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x334e30: 0x240501e0  addiu       $a1, $zero, 0x1E0
    ctx->pc = 0x334e30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 480));
    // 0x334e34: 0x24841cc0  addiu       $a0, $a0, 0x1CC0
    ctx->pc = 0x334e34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7360));
    // 0x334e38: 0x24060190  addiu       $a2, $zero, 0x190
    ctx->pc = 0x334e38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 400));
    // 0x334e3c: 0xc0c0b14  jal         func_302C50
    ctx->pc = 0x334E3Cu;
    SET_GPR_U32(ctx, 31, 0x334E44u);
    ctx->pc = 0x334E40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x334E3Cu;
    // 0x334e40: 0x2407a829  addiu       $a3, $zero, -0x57D7 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294944809));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302C50u, 0x334E3Cu, 0x334E44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x334E44u;
label_334e44:
    // 0x334e44: 0x3c0b003d  lui         $t3, 0x3D
    ctx->pc = 0x334e44u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)61 << 16));
    // 0x334e48: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x334e48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x334e4c: 0x256b1ccc  addiu       $t3, $t3, 0x1CCC
    ctx->pc = 0x334e4cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 7372));
    // 0x334e50: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x334e50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x334e54: 0x95680006  lhu         $t0, 0x6($t3)
    ctx->pc = 0x334e54u;
    SET_GPR_U32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 6)));
    // 0x334e58: 0x24040200  addiu       $a0, $zero, 0x200
    ctx->pc = 0x334e58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x334e5c: 0x24050180  addiu       $a1, $zero, 0x180
    ctx->pc = 0x334e5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 384));
    // 0x334e60: 0x2406a829  addiu       $a2, $zero, -0x57D7
    ctx->pc = 0x334e60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294944809));
    // 0x334e64: 0x24070040  addiu       $a3, $zero, 0x40
    ctx->pc = 0x334e64u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x334e68: 0xffa80000  sd          $t0, 0x0($sp)
    ctx->pc = 0x334e68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 8));
    // 0x334e6c: 0xffa30008  sd          $v1, 0x8($sp)
    ctx->pc = 0x334e6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 3));
    // 0x334e70: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x334e70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
    // 0x334e74: 0xffa20018  sd          $v0, 0x18($sp)
    ctx->pc = 0x334e74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
    // 0x334e78: 0x95690000  lhu         $t1, 0x0($t3)
    ctx->pc = 0x334e78u;
    SET_GPR_U32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x334e7c: 0x956a0002  lhu         $t2, 0x2($t3)
    ctx->pc = 0x334e7cu;
    SET_GPR_U32(ctx, 10, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 2)));
    // 0x334e80: 0x956b0004  lhu         $t3, 0x4($t3)
    ctx->pc = 0x334e80u;
    SET_GPR_U32(ctx, 11, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 4)));
    // 0x334e84: 0xc0c0ba8  jal         func_302EA0
    ctx->pc = 0x334E84u;
    SET_GPR_U32(ctx, 31, 0x334E8Cu);
    ctx->pc = 0x334E88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x334E84u;
    // 0x334e88: 0x24080020  addiu       $t0, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302EA0u, 0x334E84u, 0x334E8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x334E8Cu;
label_334e8c:
    // 0x334e8c: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x334e8cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x334e90: 0x24050240  addiu       $a1, $zero, 0x240
    ctx->pc = 0x334e90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 576));
    // 0x334e94: 0x24841cd8  addiu       $a0, $a0, 0x1CD8
    ctx->pc = 0x334e94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7384));
    // 0x334e98: 0x24060190  addiu       $a2, $zero, 0x190
    ctx->pc = 0x334e98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 400));
    // 0x334e9c: 0xc0c0b14  jal         func_302C50
    ctx->pc = 0x334E9Cu;
    SET_GPR_U32(ctx, 31, 0x334EA4u);
    ctx->pc = 0x334EA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x334E9Cu;
    // 0x334ea0: 0x2407a829  addiu       $a3, $zero, -0x57D7 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294944809));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302C50u, 0x334E9Cu, 0x334EA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x334EA4u;
label_334ea4:
    // 0x334ea4: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x334EA4u;
    {
        const bool branch_taken_0x334ea4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x334ea4) {
            ctx->pc = 0x334F24u;
            goto label_334f24;
        }
    }
    ctx->pc = 0x334EACu;
label_334eac:
    // 0x334eac: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x334eacu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x334eb0: 0x24050030  addiu       $a1, $zero, 0x30
    ctx->pc = 0x334eb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x334eb4: 0x24841e04  addiu       $a0, $a0, 0x1E04
    ctx->pc = 0x334eb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7684));
    // 0x334eb8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x334eb8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x334ebc: 0xc0c0b14  jal         func_302C50
    ctx->pc = 0x334EBCu;
    SET_GPR_U32(ctx, 31, 0x334EC4u);
    ctx->pc = 0x334EC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x334EBCu;
    // 0x334ec0: 0x2407a829  addiu       $a3, $zero, -0x57D7 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294944809));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302C50u, 0x334EBCu, 0x334EC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x334EC4u;
label_334ec4:
    // 0x334ec4: 0x3c0b003d  lui         $t3, 0x3D
    ctx->pc = 0x334ec4u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)61 << 16));
    // 0x334ec8: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x334ec8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x334ecc: 0x256b1e10  addiu       $t3, $t3, 0x1E10
    ctx->pc = 0x334eccu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 7696));
    // 0x334ed0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x334ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x334ed4: 0x95680006  lhu         $t0, 0x6($t3)
    ctx->pc = 0x334ed4u;
    SET_GPR_U32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 6)));
    // 0x334ed8: 0x2605fff0  addiu       $a1, $s0, -0x10
    ctx->pc = 0x334ed8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967280));
    // 0x334edc: 0x24040050  addiu       $a0, $zero, 0x50
    ctx->pc = 0x334edcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x334ee0: 0x2406a829  addiu       $a2, $zero, -0x57D7
    ctx->pc = 0x334ee0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294944809));
    // 0x334ee4: 0x240700e8  addiu       $a3, $zero, 0xE8
    ctx->pc = 0x334ee4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 232));
    // 0x334ee8: 0xffa80000  sd          $t0, 0x0($sp)
    ctx->pc = 0x334ee8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 8));
    // 0x334eec: 0xffa30008  sd          $v1, 0x8($sp)
    ctx->pc = 0x334eecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 3));
    // 0x334ef0: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x334ef0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
    // 0x334ef4: 0xffa20018  sd          $v0, 0x18($sp)
    ctx->pc = 0x334ef4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
    // 0x334ef8: 0x95690000  lhu         $t1, 0x0($t3)
    ctx->pc = 0x334ef8u;
    SET_GPR_U32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x334efc: 0x956a0002  lhu         $t2, 0x2($t3)
    ctx->pc = 0x334efcu;
    SET_GPR_U32(ctx, 10, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 2)));
    // 0x334f00: 0x956b0004  lhu         $t3, 0x4($t3)
    ctx->pc = 0x334f00u;
    SET_GPR_U32(ctx, 11, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 4)));
    // 0x334f04: 0xc0c0ba8  jal         func_302EA0
    ctx->pc = 0x334F04u;
    SET_GPR_U32(ctx, 31, 0x334F0Cu);
    ctx->pc = 0x334F08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x334F04u;
    // 0x334f08: 0x24080020  addiu       $t0, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302EA0u, 0x334F04u, 0x334F0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x334F0Cu;
label_334f0c:
    // 0x334f0c: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x334f0cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x334f10: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x334f10u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x334f14: 0x24841e1c  addiu       $a0, $a0, 0x1E1C
    ctx->pc = 0x334f14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7708));
    // 0x334f18: 0x24050138  addiu       $a1, $zero, 0x138
    ctx->pc = 0x334f18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 312));
    // 0x334f1c: 0xc0c0b14  jal         func_302C50
    ctx->pc = 0x334F1Cu;
    SET_GPR_U32(ctx, 31, 0x334F24u);
    ctx->pc = 0x334F20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x334F1Cu;
    // 0x334f20: 0x2407a829  addiu       $a3, $zero, -0x57D7 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294944809));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302C50u, 0x334F1Cu, 0x334F24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x334F24u;
label_334f24:
    // 0x334f24: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x334f24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x334f28: 0x9063e818  lbu         $v1, -0x17E8($v1)
    ctx->pc = 0x334f28u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294961176)));
    // 0x334f2c: 0x28630003  slti        $v1, $v1, 0x3
    ctx->pc = 0x334f2cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x334f30: 0x54600004  bnel        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x334F30u;
    {
        const bool branch_taken_0x334f30 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x334f30) {
            ctx->pc = 0x334F34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x334F30u;
            // 0x334f34: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x334F44u;
            goto label_334f44;
        }
    }
    ctx->pc = 0x334F38u;
    // 0x334f38: 0xc055728  jal         func_155CA0
    ctx->pc = 0x334F38u;
    SET_GPR_U32(ctx, 31, 0x334F40u);
    ctx->pc = 0x334F3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x334F38u;
    // 0x334f3c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155CA0u, 0x334F38u, 0x334F40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x334F40u;
label_334f40:
    // 0x334f40: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x334f40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_334f44:
    // 0x334f44: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x334f44u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x334f48: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x334f48u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x334f4c: 0x3e00008  jr          $ra
    ctx->pc = 0x334F4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x334F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334F4Cu;
        // 0x334f50: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x334F4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x334F54u;
    // 0x334f54: 0x0  nop
    ctx->pc = 0x334f54u;
    // NOP
    // 0x334f58: 0x0  nop
    ctx->pc = 0x334f58u;
    // NOP
    // 0x334f5c: 0x0  nop
    ctx->pc = 0x334f5cu;
    // NOP
    // 0x334f60: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x334f60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x334f64: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x334f64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x334f68: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x334f68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x334f6c: 0x9064e818  lbu         $a0, -0x17E8($v1)
    ctx->pc = 0x334f6cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294961176)));
    // 0x334f70: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x334f70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x334f74: 0x1083009e  beq         $a0, $v1, . + 4 + (0x9E << 2)
    ctx->pc = 0x334F74u;
    {
        const bool branch_taken_0x334f74 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x334f74) {
            ctx->pc = 0x3351F0u;
            goto label_3351f0;
        }
    }
    ctx->pc = 0x334F7Cu;
    // 0x334f7c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x334f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x334f80: 0x10830083  beq         $a0, $v1, . + 4 + (0x83 << 2)
    ctx->pc = 0x334F80u;
    {
        const bool branch_taken_0x334f80 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x334f80) {
            ctx->pc = 0x335190u;
            goto label_335190;
        }
    }
    ctx->pc = 0x334F88u;
    // 0x334f88: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x334f88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x334f8c: 0x1083005b  beq         $a0, $v1, . + 4 + (0x5B << 2)
    ctx->pc = 0x334F8Cu;
    {
        const bool branch_taken_0x334f8c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x334f8c) {
            ctx->pc = 0x3350FCu;
            goto label_3350fc;
        }
    }
    ctx->pc = 0x334F94u;
    // 0x334f94: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x334f94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x334f98: 0x10850011  beq         $a0, $a1, . + 4 + (0x11 << 2)
    ctx->pc = 0x334F98u;
    {
        const bool branch_taken_0x334f98 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        if (branch_taken_0x334f98) {
            ctx->pc = 0x334FE0u;
            goto label_334fe0;
        }
    }
    ctx->pc = 0x334FA0u;
    // 0x334fa0: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x334FA0u;
    {
        const bool branch_taken_0x334fa0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x334fa0) {
            ctx->pc = 0x334FB0u;
            goto label_334fb0;
        }
    }
    ctx->pc = 0x334FA8u;
    // 0x334fa8: 0x100000a7  b           . + 4 + (0xA7 << 2)
    ctx->pc = 0x334FA8u;
    {
        const bool branch_taken_0x334fa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x334FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334FA8u;
        // 0x334fac: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x334fa8) {
            ctx->pc = 0x335248u;
            goto label_335248;
        }
    }
    ctx->pc = 0x334FB0u;
label_334fb0:
    // 0x334fb0: 0xc0cbf34  jal         func_32FCD0
    ctx->pc = 0x334FB0u;
    SET_GPR_U32(ctx, 31, 0x334FB8u);
    ctx->pc = 0x32FCD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32FCD0u, 0x334FB0u, 0x334FB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x334FB8u;
label_334fb8:
    // 0x334fb8: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x334fb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x334fbc: 0x3c0401de  lui         $a0, 0x1DE
    ctx->pc = 0x334fbcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)478 << 16));
    // 0x334fc0: 0x8c66e800  lw          $a2, -0x1800($v1)
    ctx->pc = 0x334fc0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961152)));
    // 0x334fc4: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x334fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x334fc8: 0xac86e808  sw          $a2, -0x17F8($a0)
    ctx->pc = 0x334fc8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294961160), GPR_U32(ctx, 6));
    // 0x334fcc: 0x9065e818  lbu         $a1, -0x17E8($v1)
    ctx->pc = 0x334fccu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294961176)));
    // 0x334fd0: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x334fd0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x334fd4: 0x24a40001  addiu       $a0, $a1, 0x1
    ctx->pc = 0x334fd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x334fd8: 0x1000009a  b           . + 4 + (0x9A << 2)
    ctx->pc = 0x334FD8u;
    {
        const bool branch_taken_0x334fd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x334FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334FD8u;
        // 0x334fdc: 0xa064e818  sb          $a0, -0x17E8($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 4294961176), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x334fd8) {
            ctx->pc = 0x335244u;
            goto label_335244;
        }
    }
    ctx->pc = 0x334FE0u;
label_334fe0:
    // 0x334fe0: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x334fe0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x334fe4: 0x8c63e7d0  lw          $v1, -0x1830($v1)
    ctx->pc = 0x334fe4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961104)));
    // 0x334fe8: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x334fe8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x334fec: 0x14600030  bnez        $v1, . + 4 + (0x30 << 2)
    ctx->pc = 0x334FECu;
    {
        const bool branch_taken_0x334fec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x334fec) {
            ctx->pc = 0x3350B0u;
            goto label_3350b0;
        }
    }
    ctx->pc = 0x334FF4u;
    // 0x334ff4: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x334ff4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x334ff8: 0x8c67e7c8  lw          $a3, -0x1838($v1)
    ctx->pc = 0x334ff8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961096)));
    // 0x334ffc: 0x28e10007  slti        $at, $a3, 0x7
    ctx->pc = 0x334ffcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)7) ? 1 : 0);
    // 0x335000: 0x1020002b  beqz        $at, . + 4 + (0x2B << 2)
    ctx->pc = 0x335000u;
    {
        const bool branch_taken_0x335000 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x335000) {
            ctx->pc = 0x3350B0u;
            goto label_3350b0;
        }
    }
    ctx->pc = 0x335008u;
    // 0x335008: 0x2ce10007  sltiu       $at, $a3, 0x7
    ctx->pc = 0x335008u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x33500c: 0x10200028  beqz        $at, . + 4 + (0x28 << 2)
    ctx->pc = 0x33500Cu;
    {
        const bool branch_taken_0x33500c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x33500c) {
            ctx->pc = 0x3350B0u;
            goto label_3350b0;
        }
    }
    ctx->pc = 0x335014u;
    // 0x335014: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x335014u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x335018: 0x71880  sll         $v1, $a3, 2
    ctx->pc = 0x335018u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x33501c: 0x24844910  addiu       $a0, $a0, 0x4910
    ctx->pc = 0x33501cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18704));
    // 0x335020: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x335020u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x335024: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x335024u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x335028: 0x600008  jr          $v1
    ctx->pc = 0x335028u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x335030u: goto label_335030;
            case 0x335040u: goto label_335040;
            case 0x335080u: goto label_335080;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x335028u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x335030u;
label_335030:
    // 0x335030: 0x24e40001  addiu       $a0, $a3, 0x1
    ctx->pc = 0x335030u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x335034: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x335034u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x335038: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x335038u;
    {
        const bool branch_taken_0x335038 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33503Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335038u;
        // 0x33503c: 0xac64e7c8  sw          $a0, -0x1838($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294961096), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x335038) {
            ctx->pc = 0x3350B0u;
            goto label_3350b0;
        }
    }
    ctx->pc = 0x335040u;
label_335040:
    // 0x335040: 0x7363c  dsll32      $a2, $a3, 24
    ctx->pc = 0x335040u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) << (32 + 24));
    // 0x335044: 0x71140  sll         $v0, $a3, 5
    ctx->pc = 0x335044u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 5));
    // 0x335048: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x335048u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
    // 0x33504c: 0x6363f  dsra32      $a2, $a2, 24
    ctx->pc = 0x33504cu;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 24));
    // 0x335050: 0x244800c0  addiu       $t0, $v0, 0xC0
    ctx->pc = 0x335050u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
    // 0x335054: 0x24845250  addiu       $a0, $a0, 0x5250
    ctx->pc = 0x335054u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21072));
    // 0x335058: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x335058u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33505c: 0x2407fee0  addiu       $a3, $zero, -0x120
    ctx->pc = 0x33505cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967008));
    // 0x335060: 0xc0cbfdc  jal         func_32FF70
    ctx->pc = 0x335060u;
    SET_GPR_U32(ctx, 31, 0x335068u);
    ctx->pc = 0x335064u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x335060u;
    // 0x335064: 0x24090020  addiu       $t1, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32FF70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32FF70u, 0x335060u, 0x335068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x335068u;
label_335068:
    // 0x335068: 0x3c0401de  lui         $a0, 0x1DE
    ctx->pc = 0x335068u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)478 << 16));
    // 0x33506c: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x33506cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x335070: 0x8c84e7c8  lw          $a0, -0x1838($a0)
    ctx->pc = 0x335070u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294961096)));
    // 0x335074: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x335074u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x335078: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x335078u;
    {
        const bool branch_taken_0x335078 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33507Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335078u;
        // 0x33507c: 0xac64e7c8  sw          $a0, -0x1838($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294961096), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x335078) {
            ctx->pc = 0x3350B0u;
            goto label_3350b0;
        }
    }
    ctx->pc = 0x335080u;
label_335080:
    // 0x335080: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x335080u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
    // 0x335084: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x335084u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x335088: 0x24845250  addiu       $a0, $a0, 0x5250
    ctx->pc = 0x335088u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21072));
    // 0x33508c: 0x24070280  addiu       $a3, $zero, 0x280
    ctx->pc = 0x33508cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
    // 0x335090: 0x24080190  addiu       $t0, $zero, 0x190
    ctx->pc = 0x335090u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 400));
    // 0x335094: 0xc0cc004  jal         func_330010
    ctx->pc = 0x335094u;
    SET_GPR_U32(ctx, 31, 0x33509Cu);
    ctx->pc = 0x335098u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x335094u;
    // 0x335098: 0x240901e0  addiu       $t1, $zero, 0x1E0 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 480));
    ctx->in_delay_slot = false;
    ctx->pc = 0x330010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x330010u, 0x335094u, 0x33509Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33509Cu;
label_33509c:
    // 0x33509c: 0x3c0401de  lui         $a0, 0x1DE
    ctx->pc = 0x33509cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)478 << 16));
    // 0x3350a0: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x3350a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x3350a4: 0x8c84e7c8  lw          $a0, -0x1838($a0)
    ctx->pc = 0x3350a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294961096)));
    // 0x3350a8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3350a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3350ac: 0xac64e7c8  sw          $a0, -0x1838($v1)
    ctx->pc = 0x3350acu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294961096), GPR_U32(ctx, 4));
label_3350b0:
    // 0x3350b0: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x3350b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x3350b4: 0x9064e810  lbu         $a0, -0x17F0($v1)
    ctx->pc = 0x3350b4u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294961168)));
    // 0x3350b8: 0x30830001  andi        $v1, $a0, 0x1
    ctx->pc = 0x3350b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x3350bc: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x3350BCu;
    {
        const bool branch_taken_0x3350bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3350bc) {
            ctx->pc = 0x3350E4u;
            goto label_3350e4;
        }
    }
    ctx->pc = 0x3350C4u;
    // 0x3350c4: 0x30830002  andi        $v1, $a0, 0x2
    ctx->pc = 0x3350c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2);
    // 0x3350c8: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x3350C8u;
    {
        const bool branch_taken_0x3350c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3350c8) {
            ctx->pc = 0x3350E4u;
            goto label_3350e4;
        }
    }
    ctx->pc = 0x3350D0u;
    // 0x3350d0: 0x3c0401de  lui         $a0, 0x1DE
    ctx->pc = 0x3350d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)478 << 16));
    // 0x3350d4: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x3350d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x3350d8: 0x9084e818  lbu         $a0, -0x17E8($a0)
    ctx->pc = 0x3350d8u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4294961176)));
    // 0x3350dc: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3350dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3350e0: 0xa064e818  sb          $a0, -0x17E8($v1)
    ctx->pc = 0x3350e0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294961176), (uint8_t)GPR_U32(ctx, 4));
label_3350e4:
    // 0x3350e4: 0x3c0401de  lui         $a0, 0x1DE
    ctx->pc = 0x3350e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)478 << 16));
    // 0x3350e8: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x3350e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x3350ec: 0x8c84e7d0  lw          $a0, -0x1830($a0)
    ctx->pc = 0x3350ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294961104)));
    // 0x3350f0: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3350f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3350f4: 0x10000053  b           . + 4 + (0x53 << 2)
    ctx->pc = 0x3350F4u;
    {
        const bool branch_taken_0x3350f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3350F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3350F4u;
        // 0x3350f8: 0xac64e7d0  sw          $a0, -0x1830($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294961104), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3350f4) {
            ctx->pc = 0x335244u;
            goto label_335244;
        }
    }
    ctx->pc = 0x3350FCu;
label_3350fc:
    // 0x3350fc: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x3350fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x335100: 0x8044e808  lb          $a0, -0x17F8($v0)
    ctx->pc = 0x335100u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294961160)));
    // 0x335104: 0xc0cd948  jal         func_336520
    ctx->pc = 0x335104u;
    SET_GPR_U32(ctx, 31, 0x33510Cu);
    ctx->pc = 0x335108u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x335104u;
    // 0x335108: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336520u, 0x335104u, 0x33510Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33510Cu;
label_33510c:
    // 0x33510c: 0x21e3c  dsll32      $v1, $v0, 24
    ctx->pc = 0x33510cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 24));
    // 0x335110: 0x24042000  addiu       $a0, $zero, 0x2000
    ctx->pc = 0x335110u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    // 0x335114: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x335114u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x335118: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x335118u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x33511c: 0xac43e808  sw          $v1, -0x17F8($v0)
    ctx->pc = 0x33511cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294961160), GPR_U32(ctx, 3));
    // 0x335120: 0xc0cdabc  jal         func_336AF0
    ctx->pc = 0x335120u;
    SET_GPR_U32(ctx, 31, 0x335128u);
    ctx->pc = 0x335124u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x335120u;
    // 0x335124: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336AF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336AF0u, 0x335120u, 0x335128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x335128u;
label_335128:
    // 0x335128: 0x5040000f  beql        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x335128u;
    {
        const bool branch_taken_0x335128 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x335128) {
            ctx->pc = 0x33512Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x335128u;
            // 0x33512c: 0x24044000  addiu       $a0, $zero, 0x4000 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
            ctx->in_delay_slot = false;
            ctx->pc = 0x335168u;
            goto label_335168;
        }
    }
    ctx->pc = 0x335130u;
    // 0x335130: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x335130u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x335134: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x335134u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x335138: 0xa064e818  sb          $a0, -0x17E8($v1)
    ctx->pc = 0x335138u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294961176), (uint8_t)GPR_U32(ctx, 4));
    // 0x33513c: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x33513cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x335140: 0x8c64e808  lw          $a0, -0x17F8($v1)
    ctx->pc = 0x335140u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961160)));
    // 0x335144: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x335144u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x335148: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x335148u;
    {
        const bool branch_taken_0x335148 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x335148) {
            ctx->pc = 0x33515Cu;
            goto label_33515c;
        }
    }
    ctx->pc = 0x335150u;
    // 0x335150: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x335150u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x335154: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x335154u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x335158: 0xa064e818  sb          $a0, -0x17E8($v1)
    ctx->pc = 0x335158u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294961176), (uint8_t)GPR_U32(ctx, 4));
label_33515c:
    // 0x33515c: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x33515cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x335160: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x335160u;
    {
        const bool branch_taken_0x335160 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x335164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335160u;
        // 0x335164: 0xa060e810  sb          $zero, -0x17F0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 4294961168), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x335160) {
            ctx->pc = 0x335244u;
            goto label_335244;
        }
    }
    ctx->pc = 0x335168u;
label_335168:
    // 0x335168: 0xc0cdabc  jal         func_336AF0
    ctx->pc = 0x335168u;
    SET_GPR_U32(ctx, 31, 0x335170u);
    ctx->pc = 0x33516Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x335168u;
    // 0x33516c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336AF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336AF0u, 0x335168u, 0x335170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x335170u;
label_335170:
    // 0x335170: 0x10400034  beqz        $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x335170u;
    {
        const bool branch_taken_0x335170 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x335170) {
            ctx->pc = 0x335244u;
            goto label_335244;
        }
    }
    ctx->pc = 0x335178u;
    // 0x335178: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x335178u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x33517c: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x33517cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x335180: 0xa064e818  sb          $a0, -0x17E8($v1)
    ctx->pc = 0x335180u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294961176), (uint8_t)GPR_U32(ctx, 4));
    // 0x335184: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x335184u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x335188: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x335188u;
    {
        const bool branch_taken_0x335188 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33518Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335188u;
        // 0x33518c: 0xa060e810  sb          $zero, -0x17F0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 4294961168), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x335188) {
            ctx->pc = 0x335244u;
            goto label_335244;
        }
    }
    ctx->pc = 0x335190u;
label_335190:
    // 0x335190: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x335190u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x335194: 0x9064e810  lbu         $a0, -0x17F0($v1)
    ctx->pc = 0x335194u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294961168)));
    // 0x335198: 0x30830001  andi        $v1, $a0, 0x1
    ctx->pc = 0x335198u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x33519c: 0x10600029  beqz        $v1, . + 4 + (0x29 << 2)
    ctx->pc = 0x33519Cu;
    {
        const bool branch_taken_0x33519c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x33519c) {
            ctx->pc = 0x335244u;
            goto label_335244;
        }
    }
    ctx->pc = 0x3351A4u;
    // 0x3351a4: 0x30830002  andi        $v1, $a0, 0x2
    ctx->pc = 0x3351a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2);
    // 0x3351a8: 0x10600026  beqz        $v1, . + 4 + (0x26 << 2)
    ctx->pc = 0x3351A8u;
    {
        const bool branch_taken_0x3351a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3351a8) {
            ctx->pc = 0x335244u;
            goto label_335244;
        }
    }
    ctx->pc = 0x3351B0u;
    // 0x3351b0: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x3351b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
    // 0x3351b4: 0xc0558e0  jal         func_156380
    ctx->pc = 0x3351B4u;
    SET_GPR_U32(ctx, 31, 0x3351BCu);
    ctx->pc = 0x3351B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3351B4u;
    // 0x3351b8: 0x24845420  addiu       $a0, $a0, 0x5420 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21536));
    ctx->in_delay_slot = false;
    ctx->pc = 0x156380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156380u, 0x3351B4u, 0x3351BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3351BCu;
label_3351bc:
    // 0x3351bc: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x3351bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x3351c0: 0x3c06003d  lui         $a2, 0x3D
    ctx->pc = 0x3351c0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)61 << 16));
    // 0x3351c4: 0x8c67e808  lw          $a3, -0x17F8($v1)
    ctx->pc = 0x3351c4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961160)));
    // 0x3351c8: 0x3c0401de  lui         $a0, 0x1DE
    ctx->pc = 0x3351c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)478 << 16));
    // 0x3351cc: 0x24c62288  addiu       $a2, $a2, 0x2288
    ctx->pc = 0x3351ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8840));
    // 0x3351d0: 0xa080e818  sb          $zero, -0x17E8($a0)
    ctx->pc = 0x3351d0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4294961176), (uint8_t)GPR_U32(ctx, 0));
    // 0x3351d4: 0x3c0501de  lui         $a1, 0x1DE
    ctx->pc = 0x3351d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)478 << 16));
    // 0x3351d8: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x3351d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x3351dc: 0xc72021  addu        $a0, $a2, $a3
    ctx->pc = 0x3351dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x3351e0: 0xac60e800  sw          $zero, -0x1800($v1)
    ctx->pc = 0x3351e0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294961152), GPR_U32(ctx, 0));
    // 0x3351e4: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x3351e4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3351e8: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x3351E8u;
    {
        const bool branch_taken_0x3351e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3351ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3351E8u;
        // 0x3351ec: 0xa0a3e820  sb          $v1, -0x17E0($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 4294961184), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3351e8) {
            ctx->pc = 0x335244u;
            goto label_335244;
        }
    }
    ctx->pc = 0x3351F0u;
label_3351f0:
    // 0x3351f0: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x3351f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x3351f4: 0x9064e810  lbu         $a0, -0x17F0($v1)
    ctx->pc = 0x3351f4u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294961168)));
    // 0x3351f8: 0x30830001  andi        $v1, $a0, 0x1
    ctx->pc = 0x3351f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x3351fc: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x3351FCu;
    {
        const bool branch_taken_0x3351fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3351fc) {
            ctx->pc = 0x335244u;
            goto label_335244;
        }
    }
    ctx->pc = 0x335204u;
    // 0x335204: 0x30830002  andi        $v1, $a0, 0x2
    ctx->pc = 0x335204u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2);
    // 0x335208: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x335208u;
    {
        const bool branch_taken_0x335208 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x335208) {
            ctx->pc = 0x335244u;
            goto label_335244;
        }
    }
    ctx->pc = 0x335210u;
    // 0x335210: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x335210u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
    // 0x335214: 0xc0558e0  jal         func_156380
    ctx->pc = 0x335214u;
    SET_GPR_U32(ctx, 31, 0x33521Cu);
    ctx->pc = 0x335218u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x335214u;
    // 0x335218: 0x24841760  addiu       $a0, $a0, 0x1760 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5984));
    ctx->in_delay_slot = false;
    ctx->pc = 0x156380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156380u, 0x335214u, 0x33521Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33521Cu;
label_33521c:
    // 0x33521c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x33521cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x335220: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x335220u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x335224: 0xa064e820  sb          $a0, -0x17E0($v1)
    ctx->pc = 0x335224u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294961184), (uint8_t)GPR_U32(ctx, 4));
    // 0x335228: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x335228u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x33522c: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x33522cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x335230: 0x3c0401de  lui         $a0, 0x1DE
    ctx->pc = 0x335230u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)478 << 16));
    // 0x335234: 0xac65e800  sw          $a1, -0x1800($v1)
    ctx->pc = 0x335234u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294961152), GPR_U32(ctx, 5));
    // 0x335238: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x335238u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x33523c: 0xac80e7f8  sw          $zero, -0x1808($a0)
    ctx->pc = 0x33523cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294961144), GPR_U32(ctx, 0));
    // 0x335240: 0xa060e818  sb          $zero, -0x17E8($v1)
    ctx->pc = 0x335240u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294961176), (uint8_t)GPR_U32(ctx, 0));
label_335244:
    // 0x335244: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x335244u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_335248:
    // 0x335248: 0x3e00008  jr          $ra
    ctx->pc = 0x335248u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33524Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335248u;
        // 0x33524c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x335248u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x335250u;
    // 0x335250: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x335250u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x335254: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x335254u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x335258: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x335258u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x33525c: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x33525cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x335260: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x335260u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x335264: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x335264u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x335268: 0xc0cc088  jal         func_330220
    ctx->pc = 0x335268u;
    SET_GPR_U32(ctx, 31, 0x335270u);
    ctx->pc = 0x33526Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x335268u;
    // 0x33526c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x330220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x330220u, 0x335268u, 0x335270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x335270u;
label_335270:
    // 0x335270: 0x8e130010  lw          $s3, 0x10($s0)
    ctx->pc = 0x335270u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x335274: 0x82650000  lb          $a1, 0x0($s3)
    ctx->pc = 0x335274u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x335278: 0x86710004  lh          $s1, 0x4($s3)
    ctx->pc = 0x335278u;
    SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x33527c: 0x2ca10007  sltiu       $at, $a1, 0x7
    ctx->pc = 0x33527cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x335280: 0x10200060  beqz        $at, . + 4 + (0x60 << 2)
    ctx->pc = 0x335280u;
    {
        const bool branch_taken_0x335280 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x335284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335280u;
        // 0x335284: 0x86720002  lh          $s2, 0x2($s3) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x335280) {
            ctx->pc = 0x335404u;
            goto label_335404;
        }
    }
    ctx->pc = 0x335288u;
    // 0x335288: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x335288u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x33528c: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x33528cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x335290: 0x24844930  addiu       $a0, $a0, 0x4930
    ctx->pc = 0x335290u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18736));
    // 0x335294: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x335294u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x335298: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x335298u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x33529c: 0x600008  jr          $v1
    ctx->pc = 0x33529Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x3352A4u: goto label_3352a4;
            case 0x3352C0u: goto label_3352c0;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33529Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x3352A4u;
label_3352a4:
    // 0x3352a4: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x3352a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x3352a8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3352a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3352ac: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x3352acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3352b0: 0xc0c0ab8  jal         func_302AE0
    ctx->pc = 0x3352B0u;
    SET_GPR_U32(ctx, 31, 0x3352B8u);
    ctx->pc = 0x3352B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3352B0u;
    // 0x3352b4: 0x24842230  addiu       $a0, $a0, 0x2230 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8752));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302AE0u, 0x3352B0u, 0x3352B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3352B8u;
label_3352b8:
    // 0x3352b8: 0x10000053  b           . + 4 + (0x53 << 2)
    ctx->pc = 0x3352B8u;
    {
        const bool branch_taken_0x3352b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3352BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3352B8u;
        // 0x3352bc: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3352b8) {
            ctx->pc = 0x335408u;
            goto label_335408;
        }
    }
    ctx->pc = 0x3352C0u;
label_3352c0:
    // 0x3352c0: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x3352c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x3352c4: 0x14a20002  bne         $a1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x3352C4u;
    {
        const bool branch_taken_0x3352c4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x3352C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3352C4u;
        // 0x3352c8: 0x241000c0  addiu       $s0, $zero, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3352c4) {
            ctx->pc = 0x3352D0u;
            goto label_3352d0;
        }
    }
    ctx->pc = 0x3352CCu;
    // 0x3352cc: 0x24100040  addiu       $s0, $zero, 0x40
    ctx->pc = 0x3352ccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_3352d0:
    // 0x3352d0: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x3352d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x3352d4: 0x24a3ffff  addiu       $v1, $a1, -0x1
    ctx->pc = 0x3352d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x3352d8: 0x8c42e808  lw          $v0, -0x17F8($v0)
    ctx->pc = 0x3352d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961160)));
    // 0x3352dc: 0x14430020  bne         $v0, $v1, . + 4 + (0x20 << 2)
    ctx->pc = 0x3352DCu;
    {
        const bool branch_taken_0x3352dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x3352dc) {
            ctx->pc = 0x335360u;
            goto label_335360;
        }
    }
    ctx->pc = 0x3352E4u;
    // 0x3352e4: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x3352e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x3352e8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3352e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3352ec: 0x24841ae4  addiu       $a0, $a0, 0x1AE4
    ctx->pc = 0x3352ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6884));
    // 0x3352f0: 0xc0c0ab8  jal         func_302AE0
    ctx->pc = 0x3352F0u;
    SET_GPR_U32(ctx, 31, 0x3352F8u);
    ctx->pc = 0x3352F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3352F0u;
    // 0x3352f4: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302AE0u, 0x3352F0u, 0x3352F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3352F8u;
label_3352f8:
    // 0x3352f8: 0x3c0b003d  lui         $t3, 0x3D
    ctx->pc = 0x3352f8u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)61 << 16));
    // 0x3352fc: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x3352fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x335300: 0x256b1af0  addiu       $t3, $t3, 0x1AF0
    ctx->pc = 0x335300u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 6896));
    // 0x335304: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x335304u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x335308: 0x95680006  lhu         $t0, 0x6($t3)
    ctx->pc = 0x335308u;
    SET_GPR_U32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 6)));
    // 0x33530c: 0x26440020  addiu       $a0, $s2, 0x20
    ctx->pc = 0x33530cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x335310: 0x2625fff0  addiu       $a1, $s1, -0x10
    ctx->pc = 0x335310u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967280));
    // 0x335314: 0x2406a833  addiu       $a2, $zero, -0x57CD
    ctx->pc = 0x335314u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294944819));
    // 0x335318: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x335318u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33531c: 0xffa80000  sd          $t0, 0x0($sp)
    ctx->pc = 0x33531cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 8));
    // 0x335320: 0xffa30008  sd          $v1, 0x8($sp)
    ctx->pc = 0x335320u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 3));
    // 0x335324: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x335324u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
    // 0x335328: 0xffa20018  sd          $v0, 0x18($sp)
    ctx->pc = 0x335328u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
    // 0x33532c: 0x95690000  lhu         $t1, 0x0($t3)
    ctx->pc = 0x33532cu;
    SET_GPR_U32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x335330: 0x956a0002  lhu         $t2, 0x2($t3)
    ctx->pc = 0x335330u;
    SET_GPR_U32(ctx, 10, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 2)));
    // 0x335334: 0x956b0004  lhu         $t3, 0x4($t3)
    ctx->pc = 0x335334u;
    SET_GPR_U32(ctx, 11, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 4)));
    // 0x335338: 0xc0c0ba8  jal         func_302EA0
    ctx->pc = 0x335338u;
    SET_GPR_U32(ctx, 31, 0x335340u);
    ctx->pc = 0x33533Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x335338u;
    // 0x33533c: 0x24080020  addiu       $t0, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302EA0u, 0x335338u, 0x335340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x335340u;
label_335340:
    // 0x335340: 0x26420020  addiu       $v0, $s2, 0x20
    ctx->pc = 0x335340u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x335344: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x335344u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x335348: 0x24841afc  addiu       $a0, $a0, 0x1AFC
    ctx->pc = 0x335348u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6908));
    // 0x33534c: 0x502821  addu        $a1, $v0, $s0
    ctx->pc = 0x33534cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x335350: 0xc0c0ab8  jal         func_302AE0
    ctx->pc = 0x335350u;
    SET_GPR_U32(ctx, 31, 0x335358u);
    ctx->pc = 0x335354u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x335350u;
    // 0x335354: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302AE0u, 0x335350u, 0x335358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x335358u;
label_335358:
    // 0x335358: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x335358u;
    {
        const bool branch_taken_0x335358 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33535Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335358u;
        // 0x33535c: 0x82640000  lb          $a0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x335358) {
            ctx->pc = 0x3353E0u;
            goto label_3353e0;
        }
    }
    ctx->pc = 0x335360u;
label_335360:
    // 0x335360: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x335360u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x335364: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x335364u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x335368: 0x24841ac0  addiu       $a0, $a0, 0x1AC0
    ctx->pc = 0x335368u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6848));
    // 0x33536c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x33536cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x335370: 0xc0c0ae8  jal         func_302BA0
    ctx->pc = 0x335370u;
    SET_GPR_U32(ctx, 31, 0x335378u);
    ctx->pc = 0x335374u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x335370u;
    // 0x335374: 0x240700a0  addiu       $a3, $zero, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302BA0u, 0x335370u, 0x335378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x335378u;
label_335378:
    // 0x335378: 0x3c0b003d  lui         $t3, 0x3D
    ctx->pc = 0x335378u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)61 << 16));
    // 0x33537c: 0x240300a0  addiu       $v1, $zero, 0xA0
    ctx->pc = 0x33537cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
    // 0x335380: 0x256b1acc  addiu       $t3, $t3, 0x1ACC
    ctx->pc = 0x335380u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 6860));
    // 0x335384: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x335384u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x335388: 0x95680006  lhu         $t0, 0x6($t3)
    ctx->pc = 0x335388u;
    SET_GPR_U32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 6)));
    // 0x33538c: 0x26440020  addiu       $a0, $s2, 0x20
    ctx->pc = 0x33538cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x335390: 0x2625fff0  addiu       $a1, $s1, -0x10
    ctx->pc = 0x335390u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967280));
    // 0x335394: 0x2406a833  addiu       $a2, $zero, -0x57CD
    ctx->pc = 0x335394u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294944819));
    // 0x335398: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x335398u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33539c: 0xffa80000  sd          $t0, 0x0($sp)
    ctx->pc = 0x33539cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 8));
    // 0x3353a0: 0xffa30008  sd          $v1, 0x8($sp)
    ctx->pc = 0x3353a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 3));
    // 0x3353a4: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x3353a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
    // 0x3353a8: 0xffa20018  sd          $v0, 0x18($sp)
    ctx->pc = 0x3353a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
    // 0x3353ac: 0x95690000  lhu         $t1, 0x0($t3)
    ctx->pc = 0x3353acu;
    SET_GPR_U32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x3353b0: 0x956a0002  lhu         $t2, 0x2($t3)
    ctx->pc = 0x3353b0u;
    SET_GPR_U32(ctx, 10, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 2)));
    // 0x3353b4: 0x956b0004  lhu         $t3, 0x4($t3)
    ctx->pc = 0x3353b4u;
    SET_GPR_U32(ctx, 11, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 4)));
    // 0x3353b8: 0xc0c0ba8  jal         func_302EA0
    ctx->pc = 0x3353B8u;
    SET_GPR_U32(ctx, 31, 0x3353C0u);
    ctx->pc = 0x3353BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3353B8u;
    // 0x3353bc: 0x24080020  addiu       $t0, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302EA0u, 0x3353B8u, 0x3353C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3353C0u;
label_3353c0:
    // 0x3353c0: 0x26420020  addiu       $v0, $s2, 0x20
    ctx->pc = 0x3353c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x3353c4: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x3353c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x3353c8: 0x24841ad8  addiu       $a0, $a0, 0x1AD8
    ctx->pc = 0x3353c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6872));
    // 0x3353cc: 0x502821  addu        $a1, $v0, $s0
    ctx->pc = 0x3353ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x3353d0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x3353d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3353d4: 0xc0c0ae8  jal         func_302BA0
    ctx->pc = 0x3353D4u;
    SET_GPR_U32(ctx, 31, 0x3353DCu);
    ctx->pc = 0x3353D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3353D4u;
    // 0x3353d8: 0x240700a0  addiu       $a3, $zero, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302BA0u, 0x3353D4u, 0x3353DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3353DCu;
label_3353dc:
    // 0x3353dc: 0x82640000  lb          $a0, 0x0($s3)
    ctx->pc = 0x3353dcu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
label_3353e0:
    // 0x3353e0: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x3353e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x3353e4: 0x24422230  addiu       $v0, $v0, 0x2230
    ctx->pc = 0x3353e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8752));
    // 0x3353e8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3353e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3353ec: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x3353ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3353f0: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x3353f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x3353f4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3353f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3353f8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3353f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3353fc: 0xc0c0ab8  jal         func_302AE0
    ctx->pc = 0x3353FCu;
    SET_GPR_U32(ctx, 31, 0x335404u);
    ctx->pc = 0x335400u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3353FCu;
    // 0x335400: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302AE0u, 0x3353FCu, 0x335404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x335404u;
label_335404:
    // 0x335404: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x335404u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_335408:
    // 0x335408: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x335408u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x33540c: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x33540cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x335410: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x335410u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x335414: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x335414u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x335418: 0x3e00008  jr          $ra
    ctx->pc = 0x335418u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33541Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335418u;
        // 0x33541c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x335418u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x335420u;
    // 0x335420: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x335420u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x335424: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x335424u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x335428: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x335428u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x33542c: 0x9064e818  lbu         $a0, -0x17E8($v1)
    ctx->pc = 0x33542cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294961176)));
    // 0x335430: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x335430u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x335434: 0x10830088  beq         $a0, $v1, . + 4 + (0x88 << 2)
    ctx->pc = 0x335434u;
    {
        const bool branch_taken_0x335434 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x335434) {
            ctx->pc = 0x335658u;
            goto label_335658;
        }
    }
    ctx->pc = 0x33543Cu;
    // 0x33543c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x33543cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x335440: 0x50830071  beql        $a0, $v1, . + 4 + (0x71 << 2)
    ctx->pc = 0x335440u;
    {
        const bool branch_taken_0x335440 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x335440) {
            ctx->pc = 0x335444u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x335440u;
            // 0x335444: 0x24042000  addiu       $a0, $zero, 0x2000 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
            ctx->in_delay_slot = false;
            ctx->pc = 0x335608u;
            goto label_335608;
        }
    }
    ctx->pc = 0x335448u;
    // 0x335448: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x335448u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x33544c: 0x1085000d  beq         $a0, $a1, . + 4 + (0xD << 2)
    ctx->pc = 0x33544Cu;
    {
        const bool branch_taken_0x33544c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        if (branch_taken_0x33544c) {
            ctx->pc = 0x335484u;
            goto label_335484;
        }
    }
    ctx->pc = 0x335454u;
    // 0x335454: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x335454u;
    {
        const bool branch_taken_0x335454 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x335454) {
            ctx->pc = 0x335464u;
            goto label_335464;
        }
    }
    ctx->pc = 0x33545Cu;
    // 0x33545c: 0x10000093  b           . + 4 + (0x93 << 2)
    ctx->pc = 0x33545Cu;
    {
        const bool branch_taken_0x33545c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x335460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33545Cu;
        // 0x335460: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33545c) {
            ctx->pc = 0x3356ACu;
            goto label_3356ac;
        }
    }
    ctx->pc = 0x335464u;
label_335464:
    // 0x335464: 0xc0cbf34  jal         func_32FCD0
    ctx->pc = 0x335464u;
    SET_GPR_U32(ctx, 31, 0x33546Cu);
    ctx->pc = 0x32FCD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32FCD0u, 0x335464u, 0x33546Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33546Cu;
label_33546c:
    // 0x33546c: 0x3c0401de  lui         $a0, 0x1DE
    ctx->pc = 0x33546cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)478 << 16));
    // 0x335470: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x335470u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x335474: 0x9084e818  lbu         $a0, -0x17E8($a0)
    ctx->pc = 0x335474u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4294961176)));
    // 0x335478: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x335478u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x33547c: 0x1000008a  b           . + 4 + (0x8A << 2)
    ctx->pc = 0x33547Cu;
    {
        const bool branch_taken_0x33547c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x335480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33547Cu;
        // 0x335480: 0xa064e818  sb          $a0, -0x17E8($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 4294961176), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33547c) {
            ctx->pc = 0x3356A8u;
            goto label_3356a8;
        }
    }
    ctx->pc = 0x335484u;
label_335484:
    // 0x335484: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x335484u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x335488: 0x8c63e7d0  lw          $v1, -0x1830($v1)
    ctx->pc = 0x335488u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961104)));
    // 0x33548c: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x33548cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x335490: 0x1460004a  bnez        $v1, . + 4 + (0x4A << 2)
    ctx->pc = 0x335490u;
    {
        const bool branch_taken_0x335490 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x335490) {
            ctx->pc = 0x3355BCu;
            goto label_3355bc;
        }
    }
    ctx->pc = 0x335498u;
    // 0x335498: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x335498u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x33549c: 0x8c67e7c8  lw          $a3, -0x1838($v1)
    ctx->pc = 0x33549cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961096)));
    // 0x3354a0: 0x28e1000c  slti        $at, $a3, 0xC
    ctx->pc = 0x3354a0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)12) ? 1 : 0);
    // 0x3354a4: 0x10200045  beqz        $at, . + 4 + (0x45 << 2)
    ctx->pc = 0x3354A4u;
    {
        const bool branch_taken_0x3354a4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3354a4) {
            ctx->pc = 0x3355BCu;
            goto label_3355bc;
        }
    }
    ctx->pc = 0x3354ACu;
    // 0x3354ac: 0x2ce1000c  sltiu       $at, $a3, 0xC
    ctx->pc = 0x3354acu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)12) ? 1 : 0);
    // 0x3354b0: 0x10200042  beqz        $at, . + 4 + (0x42 << 2)
    ctx->pc = 0x3354B0u;
    {
        const bool branch_taken_0x3354b0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3354b0) {
            ctx->pc = 0x3355BCu;
            goto label_3355bc;
        }
    }
    ctx->pc = 0x3354B8u;
    // 0x3354b8: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x3354b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x3354bc: 0x71880  sll         $v1, $a3, 2
    ctx->pc = 0x3354bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x3354c0: 0x24844950  addiu       $a0, $a0, 0x4950
    ctx->pc = 0x3354c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18768));
    // 0x3354c4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3354c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3354c8: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x3354c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3354cc: 0x600008  jr          $v1
    ctx->pc = 0x3354CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x3354D4u: goto label_3354d4;
            case 0x335508u: goto label_335508;
            case 0x33554Cu: goto label_33554c;
            case 0x33558Cu: goto label_33558c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3354CCu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x3354D4u;
label_3354d4:
    // 0x3354d4: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x3354d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
    // 0x3354d8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3354d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3354dc: 0x248456c0  addiu       $a0, $a0, 0x56C0
    ctx->pc = 0x3354dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22208));
    // 0x3354e0: 0x2407ff80  addiu       $a3, $zero, -0x80
    ctx->pc = 0x3354e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967168));
    // 0x3354e4: 0x24080030  addiu       $t0, $zero, 0x30
    ctx->pc = 0x3354e4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x3354e8: 0xc0cbfdc  jal         func_32FF70
    ctx->pc = 0x3354E8u;
    SET_GPR_U32(ctx, 31, 0x3354F0u);
    ctx->pc = 0x3354ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3354E8u;
    // 0x3354ec: 0x24090158  addiu       $t1, $zero, 0x158 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 344));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32FF70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32FF70u, 0x3354E8u, 0x3354F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3354F0u;
label_3354f0:
    // 0x3354f0: 0x3c0401de  lui         $a0, 0x1DE
    ctx->pc = 0x3354f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)478 << 16));
    // 0x3354f4: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x3354f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x3354f8: 0x8c84e7c8  lw          $a0, -0x1838($a0)
    ctx->pc = 0x3354f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294961096)));
    // 0x3354fc: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3354fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x335500: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x335500u;
    {
        const bool branch_taken_0x335500 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x335504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335500u;
        // 0x335504: 0xac64e7c8  sw          $a0, -0x1838($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294961096), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x335500) {
            ctx->pc = 0x3355BCu;
            goto label_3355bc;
        }
    }
    ctx->pc = 0x335508u;
label_335508:
    // 0x335508: 0x24e2ffff  addiu       $v0, $a3, -0x1
    ctx->pc = 0x335508u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x33550c: 0x7363c  dsll32      $a2, $a3, 24
    ctx->pc = 0x33550cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) << (32 + 24));
    // 0x335510: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x335510u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x335514: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x335514u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
    // 0x335518: 0x6363f  dsra32      $a2, $a2, 24
    ctx->pc = 0x335518u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 24));
    // 0x33551c: 0x248456c0  addiu       $a0, $a0, 0x56C0
    ctx->pc = 0x33551cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22208));
    // 0x335520: 0x24480050  addiu       $t0, $v0, 0x50
    ctx->pc = 0x335520u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x335524: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x335524u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x335528: 0x2407fee0  addiu       $a3, $zero, -0x120
    ctx->pc = 0x335528u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967008));
    // 0x33552c: 0xc0cbfdc  jal         func_32FF70
    ctx->pc = 0x33552Cu;
    SET_GPR_U32(ctx, 31, 0x335534u);
    ctx->pc = 0x335530u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33552Cu;
    // 0x335530: 0x24090028  addiu       $t1, $zero, 0x28 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32FF70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32FF70u, 0x33552Cu, 0x335534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x335534u;
label_335534:
    // 0x335534: 0x3c0401de  lui         $a0, 0x1DE
    ctx->pc = 0x335534u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)478 << 16));
    // 0x335538: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x335538u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x33553c: 0x8c84e7c8  lw          $a0, -0x1838($a0)
    ctx->pc = 0x33553cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294961096)));
    // 0x335540: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x335540u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x335544: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x335544u;
    {
        const bool branch_taken_0x335544 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x335548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335544u;
        // 0x335548: 0xac64e7c8  sw          $a0, -0x1838($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294961096), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x335544) {
            ctx->pc = 0x3355BCu;
            goto label_3355bc;
        }
    }
    ctx->pc = 0x33554Cu;
label_33554c:
    // 0x33554c: 0x24e2fffa  addiu       $v0, $a3, -0x6
    ctx->pc = 0x33554cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967290));
    // 0x335550: 0x7363c  dsll32      $a2, $a3, 24
    ctx->pc = 0x335550u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) << (32 + 24));
    // 0x335554: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x335554u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x335558: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x335558u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
    // 0x33555c: 0x6363f  dsra32      $a2, $a2, 24
    ctx->pc = 0x33555cu;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 24));
    // 0x335560: 0x248456c0  addiu       $a0, $a0, 0x56C0
    ctx->pc = 0x335560u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22208));
    // 0x335564: 0x24480050  addiu       $t0, $v0, 0x50
    ctx->pc = 0x335564u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x335568: 0x24070280  addiu       $a3, $zero, 0x280
    ctx->pc = 0x335568u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
    // 0x33556c: 0xc0cbfdc  jal         func_32FF70
    ctx->pc = 0x33556Cu;
    SET_GPR_U32(ctx, 31, 0x335574u);
    ctx->pc = 0x335570u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33556Cu;
    // 0x335570: 0x24090140  addiu       $t1, $zero, 0x140 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32FF70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32FF70u, 0x33556Cu, 0x335574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x335574u;
label_335574:
    // 0x335574: 0x3c0401de  lui         $a0, 0x1DE
    ctx->pc = 0x335574u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)478 << 16));
    // 0x335578: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x335578u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x33557c: 0x8c84e7c8  lw          $a0, -0x1838($a0)
    ctx->pc = 0x33557cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294961096)));
    // 0x335580: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x335580u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x335584: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x335584u;
    {
        const bool branch_taken_0x335584 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x335588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335584u;
        // 0x335588: 0xac64e7c8  sw          $a0, -0x1838($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294961096), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x335584) {
            ctx->pc = 0x3355BCu;
            goto label_3355bc;
        }
    }
    ctx->pc = 0x33558Cu;
label_33558c:
    // 0x33558c: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x33558cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
    // 0x335590: 0x2406000b  addiu       $a2, $zero, 0xB
    ctx->pc = 0x335590u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x335594: 0x248456c0  addiu       $a0, $a0, 0x56C0
    ctx->pc = 0x335594u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22208));
    // 0x335598: 0x24070280  addiu       $a3, $zero, 0x280
    ctx->pc = 0x335598u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
    // 0x33559c: 0x24080190  addiu       $t0, $zero, 0x190
    ctx->pc = 0x33559cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 400));
    // 0x3355a0: 0xc0cc004  jal         func_330010
    ctx->pc = 0x3355A0u;
    SET_GPR_U32(ctx, 31, 0x3355A8u);
    ctx->pc = 0x3355A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3355A0u;
    // 0x3355a4: 0x240901e0  addiu       $t1, $zero, 0x1E0 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 480));
    ctx->in_delay_slot = false;
    ctx->pc = 0x330010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x330010u, 0x3355A0u, 0x3355A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3355A8u;
label_3355a8:
    // 0x3355a8: 0x3c0401de  lui         $a0, 0x1DE
    ctx->pc = 0x3355a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)478 << 16));
    // 0x3355ac: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x3355acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x3355b0: 0x8c84e7c8  lw          $a0, -0x1838($a0)
    ctx->pc = 0x3355b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294961096)));
    // 0x3355b4: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3355b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3355b8: 0xac64e7c8  sw          $a0, -0x1838($v1)
    ctx->pc = 0x3355b8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294961096), GPR_U32(ctx, 4));
label_3355bc:
    // 0x3355bc: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x3355bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x3355c0: 0x9064e810  lbu         $a0, -0x17F0($v1)
    ctx->pc = 0x3355c0u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294961168)));
    // 0x3355c4: 0x30830001  andi        $v1, $a0, 0x1
    ctx->pc = 0x3355c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x3355c8: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x3355C8u;
    {
        const bool branch_taken_0x3355c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3355c8) {
            ctx->pc = 0x3355F0u;
            goto label_3355f0;
        }
    }
    ctx->pc = 0x3355D0u;
    // 0x3355d0: 0x30830002  andi        $v1, $a0, 0x2
    ctx->pc = 0x3355d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2);
    // 0x3355d4: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x3355D4u;
    {
        const bool branch_taken_0x3355d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3355d4) {
            ctx->pc = 0x3355F0u;
            goto label_3355f0;
        }
    }
    ctx->pc = 0x3355DCu;
    // 0x3355dc: 0x3c0401de  lui         $a0, 0x1DE
    ctx->pc = 0x3355dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)478 << 16));
    // 0x3355e0: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x3355e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x3355e4: 0x9084e818  lbu         $a0, -0x17E8($a0)
    ctx->pc = 0x3355e4u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4294961176)));
    // 0x3355e8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3355e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3355ec: 0xa064e818  sb          $a0, -0x17E8($v1)
    ctx->pc = 0x3355ecu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294961176), (uint8_t)GPR_U32(ctx, 4));
label_3355f0:
    // 0x3355f0: 0x3c0401de  lui         $a0, 0x1DE
    ctx->pc = 0x3355f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)478 << 16));
    // 0x3355f4: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x3355f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x3355f8: 0x8c84e7d0  lw          $a0, -0x1830($a0)
    ctx->pc = 0x3355f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294961104)));
    // 0x3355fc: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3355fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x335600: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x335600u;
    {
        const bool branch_taken_0x335600 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x335604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335600u;
        // 0x335604: 0xac64e7d0  sw          $a0, -0x1830($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294961104), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x335600) {
            ctx->pc = 0x3356A8u;
            goto label_3356a8;
        }
    }
    ctx->pc = 0x335608u;
label_335608:
    // 0x335608: 0xc0cdabc  jal         func_336AF0
    ctx->pc = 0x335608u;
    SET_GPR_U32(ctx, 31, 0x335610u);
    ctx->pc = 0x33560Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x335608u;
    // 0x33560c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336AF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336AF0u, 0x335608u, 0x335610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x335610u;
label_335610:
    // 0x335610: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x335610u;
    {
        const bool branch_taken_0x335610 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x335610) {
            ctx->pc = 0x335614u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x335610u;
            // 0x335614: 0x24044000  addiu       $a0, $zero, 0x4000 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
            ctx->in_delay_slot = false;
            ctx->pc = 0x335630u;
            goto label_335630;
        }
    }
    ctx->pc = 0x335618u;
    // 0x335618: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x335618u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x33561c: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x33561cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x335620: 0xa064e818  sb          $a0, -0x17E8($v1)
    ctx->pc = 0x335620u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294961176), (uint8_t)GPR_U32(ctx, 4));
    // 0x335624: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x335624u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x335628: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x335628u;
    {
        const bool branch_taken_0x335628 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33562Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335628u;
        // 0x33562c: 0xa060e810  sb          $zero, -0x17F0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 4294961168), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x335628) {
            ctx->pc = 0x3356A8u;
            goto label_3356a8;
        }
    }
    ctx->pc = 0x335630u;
label_335630:
    // 0x335630: 0xc0cdabc  jal         func_336AF0
    ctx->pc = 0x335630u;
    SET_GPR_U32(ctx, 31, 0x335638u);
    ctx->pc = 0x335634u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x335630u;
    // 0x335634: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336AF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336AF0u, 0x335630u, 0x335638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x335638u;
label_335638:
    // 0x335638: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x335638u;
    {
        const bool branch_taken_0x335638 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x335638) {
            ctx->pc = 0x3356A8u;
            goto label_3356a8;
        }
    }
    ctx->pc = 0x335640u;
    // 0x335640: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x335640u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x335644: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x335644u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x335648: 0xa064e818  sb          $a0, -0x17E8($v1)
    ctx->pc = 0x335648u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294961176), (uint8_t)GPR_U32(ctx, 4));
    // 0x33564c: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x33564cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x335650: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x335650u;
    {
        const bool branch_taken_0x335650 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x335654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335650u;
        // 0x335654: 0xa060e810  sb          $zero, -0x17F0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 4294961168), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x335650) {
            ctx->pc = 0x3356A8u;
            goto label_3356a8;
        }
    }
    ctx->pc = 0x335658u;
label_335658:
    // 0x335658: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x335658u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x33565c: 0x9064e810  lbu         $a0, -0x17F0($v1)
    ctx->pc = 0x33565cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294961168)));
    // 0x335660: 0x30830001  andi        $v1, $a0, 0x1
    ctx->pc = 0x335660u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x335664: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x335664u;
    {
        const bool branch_taken_0x335664 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x335664) {
            ctx->pc = 0x3356A8u;
            goto label_3356a8;
        }
    }
    ctx->pc = 0x33566Cu;
    // 0x33566c: 0x30830002  andi        $v1, $a0, 0x2
    ctx->pc = 0x33566cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2);
    // 0x335670: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x335670u;
    {
        const bool branch_taken_0x335670 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x335670) {
            ctx->pc = 0x3356A8u;
            goto label_3356a8;
        }
    }
    ctx->pc = 0x335678u;
    // 0x335678: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x335678u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
    // 0x33567c: 0xc0558e0  jal         func_156380
    ctx->pc = 0x33567Cu;
    SET_GPR_U32(ctx, 31, 0x335684u);
    ctx->pc = 0x335680u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33567Cu;
    // 0x335680: 0x24844f60  addiu       $a0, $a0, 0x4F60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20320));
    ctx->in_delay_slot = false;
    ctx->pc = 0x156380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156380u, 0x33567Cu, 0x335684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x335684u;
label_335684:
    // 0x335684: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x335684u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x335688: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x335688u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x33568c: 0xa064e820  sb          $a0, -0x17E0($v1)
    ctx->pc = 0x33568cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294961184), (uint8_t)GPR_U32(ctx, 4));
    // 0x335690: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x335690u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x335694: 0x3c0401de  lui         $a0, 0x1DE
    ctx->pc = 0x335694u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)478 << 16));
    // 0x335698: 0x8c65e808  lw          $a1, -0x17F8($v1)
    ctx->pc = 0x335698u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961160)));
    // 0x33569c: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x33569cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x3356a0: 0xac85e800  sw          $a1, -0x1800($a0)
    ctx->pc = 0x3356a0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294961152), GPR_U32(ctx, 5));
    // 0x3356a4: 0xa060e818  sb          $zero, -0x17E8($v1)
    ctx->pc = 0x3356a4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294961176), (uint8_t)GPR_U32(ctx, 0));
label_3356a8:
    // 0x3356a8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3356a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3356ac:
    // 0x3356ac: 0x3e00008  jr          $ra
    ctx->pc = 0x3356ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3356B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3356ACu;
        // 0x3356b0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3356ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3356B4u;
    // 0x3356b4: 0x0  nop
    ctx->pc = 0x3356b4u;
    // NOP
    // 0x3356b8: 0x0  nop
    ctx->pc = 0x3356b8u;
    // NOP
    // 0x3356bc: 0x0  nop
    ctx->pc = 0x3356bcu;
    // NOP
    // 0x3356c0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x3356c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x3356c4: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x3356c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x3356c8: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x3356c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x3356cc: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x3356ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x3356d0: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x3356d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x3356d4: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x3356d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x3356d8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x3356d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x3356dc: 0xc0cc088  jal         func_330220
    ctx->pc = 0x3356DCu;
    SET_GPR_U32(ctx, 31, 0x3356E4u);
    ctx->pc = 0x3356E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3356DCu;
    // 0x3356e0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x330220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x330220u, 0x3356DCu, 0x3356E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3356E4u;
label_3356e4:
    // 0x3356e4: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x3356e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x3356e8: 0x3c11003d  lui         $s1, 0x3D
    ctx->pc = 0x3356e8u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)61 << 16));
    // 0x3356ec: 0x80650000  lb          $a1, 0x0($v1)
    ctx->pc = 0x3356ecu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3356f0: 0x84740002  lh          $s4, 0x2($v1)
    ctx->pc = 0x3356f0u;
    SET_GPR_S32(ctx, 20, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x3356f4: 0x84730004  lh          $s3, 0x4($v1)
    ctx->pc = 0x3356f4u;
    SET_GPR_S32(ctx, 19, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x3356f8: 0x2ca1000c  sltiu       $at, $a1, 0xC
    ctx->pc = 0x3356f8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)12) ? 1 : 0);
    // 0x3356fc: 0x102000ff  beqz        $at, . + 4 + (0xFF << 2)
    ctx->pc = 0x3356FCu;
    {
        const bool branch_taken_0x3356fc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x335700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3356FCu;
        // 0x335700: 0x26312290  addiu       $s1, $s1, 0x2290 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8848));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3356fc) {
            ctx->pc = 0x335AFCu;
            goto label_335afc;
        }
    }
    ctx->pc = 0x335704u;
    // 0x335704: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x335704u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x335708: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x335708u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x33570c: 0x24844980  addiu       $a0, $a0, 0x4980
    ctx->pc = 0x33570cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18816));
    // 0x335710: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x335710u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x335714: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x335714u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x335718: 0x600008  jr          $v1
    ctx->pc = 0x335718u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x335720u: goto label_335720;
            case 0x335790u: goto label_335790;
            case 0x335A74u: goto label_335a74;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x335718u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x335720u;
label_335720:
    // 0x335720: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x335720u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x335724: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x335724u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x335728: 0x9042e820  lbu         $v0, -0x17E0($v0)
    ctx->pc = 0x335728u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294961184)));
    // 0x33572c: 0x5443000b  bnel        $v0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x33572Cu;
    {
        const bool branch_taken_0x33572c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x33572c) {
            ctx->pc = 0x335730u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33572Cu;
            // 0x335730: 0x2443fff8  addiu       $v1, $v0, -0x8 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967288));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33575Cu;
            goto label_33575c;
        }
    }
    ctx->pc = 0x335734u;
    // 0x335734: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x335734u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x335738: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x335738u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33573c: 0xc0c0ab8  jal         func_302AE0
    ctx->pc = 0x33573Cu;
    SET_GPR_U32(ctx, 31, 0x335744u);
    ctx->pc = 0x335740u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33573Cu;
    // 0x335740: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302AE0u, 0x33573Cu, 0x335744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x335744u;
label_335744:
    // 0x335744: 0x26850088  addiu       $a1, $s4, 0x88
    ctx->pc = 0x335744u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 136));
    // 0x335748: 0x26240018  addiu       $a0, $s1, 0x18
    ctx->pc = 0x335748u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
    // 0x33574c: 0xc0c0ab8  jal         func_302AE0
    ctx->pc = 0x33574Cu;
    SET_GPR_U32(ctx, 31, 0x335754u);
    ctx->pc = 0x335750u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33574Cu;
    // 0x335750: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302AE0u, 0x33574Cu, 0x335754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x335754u;
label_335754:
    // 0x335754: 0x100000ea  b           . + 4 + (0xEA << 2)
    ctx->pc = 0x335754u;
    {
        const bool branch_taken_0x335754 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x335758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335754u;
        // 0x335758: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x335754) {
            ctx->pc = 0x335B00u;
            goto label_335b00;
        }
    }
    ctx->pc = 0x33575Cu;
label_33575c:
    // 0x33575c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x33575cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x335760: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x335760u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x335764: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x335764u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x335768: 0x24422630  addiu       $v0, $v0, 0x2630
    ctx->pc = 0x335768u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9776));
    // 0x33576c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x33576cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x335770: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x335770u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x335774: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x335774u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x335778: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x335778u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x33577c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x33577cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x335780: 0xc0c0ab8  jal         func_302AE0
    ctx->pc = 0x335780u;
    SET_GPR_U32(ctx, 31, 0x335788u);
    ctx->pc = 0x335784u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x335780u;
    // 0x335784: 0x2222021  addu        $a0, $s1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302AE0u, 0x335780u, 0x335788u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x335788u;
label_335788:
    // 0x335788: 0x100000dc  b           . + 4 + (0xDC << 2)
    ctx->pc = 0x335788u;
    {
        const bool branch_taken_0x335788 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x335788) {
            ctx->pc = 0x335AFCu;
            goto label_335afc;
        }
    }
    ctx->pc = 0x335790u;
label_335790:
    // 0x335790: 0x24b0ffff  addiu       $s0, $a1, -0x1
    ctx->pc = 0x335790u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x335794: 0x2a010005  slti        $at, $s0, 0x5
    ctx->pc = 0x335794u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x335798: 0x50200011  beql        $at, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x335798u;
    {
        const bool branch_taken_0x335798 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x335798) {
            ctx->pc = 0x33579Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x335798u;
            // 0x33579c: 0x2624009c  addiu       $a0, $s1, 0x9C (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 156));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3357E0u;
            goto label_3357e0;
        }
    }
    ctx->pc = 0x3357A0u;
    // 0x3357a0: 0x262400a8  addiu       $a0, $s1, 0xA8
    ctx->pc = 0x3357a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 168));
    // 0x3357a4: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x3357a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3357a8: 0xc0c0ab8  jal         func_302AE0
    ctx->pc = 0x3357A8u;
    SET_GPR_U32(ctx, 31, 0x3357B0u);
    ctx->pc = 0x3357ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3357A8u;
    // 0x3357ac: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302AE0u, 0x3357A8u, 0x3357B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3357B0u;
label_3357b0:
    // 0x3357b0: 0x26850020  addiu       $a1, $s4, 0x20
    ctx->pc = 0x3357b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
    // 0x3357b4: 0x262400a8  addiu       $a0, $s1, 0xA8
    ctx->pc = 0x3357b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 168));
    // 0x3357b8: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x3357b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3357bc: 0x240700e0  addiu       $a3, $zero, 0xE0
    ctx->pc = 0x3357bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    // 0x3357c0: 0xc0c0b80  jal         func_302E00
    ctx->pc = 0x3357C0u;
    SET_GPR_U32(ctx, 31, 0x3357C8u);
    ctx->pc = 0x3357C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3357C0u;
    // 0x3357c4: 0x24080040  addiu       $t0, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302E00u, 0x3357C0u, 0x3357C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3357C8u;
label_3357c8:
    // 0x3357c8: 0x26850100  addiu       $a1, $s4, 0x100
    ctx->pc = 0x3357c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 256));
    // 0x3357cc: 0x262400b4  addiu       $a0, $s1, 0xB4
    ctx->pc = 0x3357ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 180));
    // 0x3357d0: 0xc0c0ab8  jal         func_302AE0
    ctx->pc = 0x3357D0u;
    SET_GPR_U32(ctx, 31, 0x3357D8u);
    ctx->pc = 0x3357D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3357D0u;
    // 0x3357d4: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302AE0u, 0x3357D0u, 0x3357D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3357D8u;
label_3357d8:
    // 0x3357d8: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x3357D8u;
    {
        const bool branch_taken_0x3357d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3357DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3357D8u;
        // 0x3357dc: 0x26030041  addiu       $v1, $s0, 0x41 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 65));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3357d8) {
            ctx->pc = 0x335818u;
            goto label_335818;
        }
    }
    ctx->pc = 0x3357E0u;
label_3357e0:
    // 0x3357e0: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x3357e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3357e4: 0xc0c0ab8  jal         func_302AE0
    ctx->pc = 0x3357E4u;
    SET_GPR_U32(ctx, 31, 0x3357ECu);
    ctx->pc = 0x3357E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3357E4u;
    // 0x3357e8: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302AE0u, 0x3357E4u, 0x3357ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3357ECu;
label_3357ec:
    // 0x3357ec: 0x26850020  addiu       $a1, $s4, 0x20
    ctx->pc = 0x3357ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
    // 0x3357f0: 0x262400a8  addiu       $a0, $s1, 0xA8
    ctx->pc = 0x3357f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 168));
    // 0x3357f4: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x3357f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3357f8: 0x240700e0  addiu       $a3, $zero, 0xE0
    ctx->pc = 0x3357f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    // 0x3357fc: 0xc0c0b80  jal         func_302E00
    ctx->pc = 0x3357FCu;
    SET_GPR_U32(ctx, 31, 0x335804u);
    ctx->pc = 0x335800u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3357FCu;
    // 0x335800: 0x24080040  addiu       $t0, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302E00u, 0x3357FCu, 0x335804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x335804u;
label_335804:
    // 0x335804: 0x26850100  addiu       $a1, $s4, 0x100
    ctx->pc = 0x335804u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 256));
    // 0x335808: 0x262400a8  addiu       $a0, $s1, 0xA8
    ctx->pc = 0x335808u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 168));
    // 0x33580c: 0xc0c0ab8  jal         func_302AE0
    ctx->pc = 0x33580Cu;
    SET_GPR_U32(ctx, 31, 0x335814u);
    ctx->pc = 0x335810u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33580Cu;
    // 0x335810: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302AE0u, 0x33580Cu, 0x335814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x335814u;
label_335814:
    // 0x335814: 0x26030041  addiu       $v1, $s0, 0x41
    ctx->pc = 0x335814u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 65));
label_335818:
    // 0x335818: 0x26920088  addiu       $s2, $s4, 0x88
    ctx->pc = 0x335818u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), 136));
    // 0x33581c: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x33581cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x335820: 0x26660010  addiu       $a2, $s3, 0x10
    ctx->pc = 0x335820u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    // 0x335824: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x335824u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x335828: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x335828u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33582c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x33582cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x335830: 0xc0c0ab8  jal         func_302AE0
    ctx->pc = 0x335830u;
    SET_GPR_U32(ctx, 31, 0x335838u);
    ctx->pc = 0x335834u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x335830u;
    // 0x335834: 0x2222021  addu        $a0, $s1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302AE0u, 0x335830u, 0x335838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x335838u;
label_335838:
    // 0x335838: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x335838u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x33583c: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x33583cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x335840: 0x9065e820  lbu         $a1, -0x17E0($v1)
    ctx->pc = 0x335840u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294961184)));
    // 0x335844: 0x50a40074  beql        $a1, $a0, . + 4 + (0x74 << 2)
    ctx->pc = 0x335844u;
    {
        const bool branch_taken_0x335844 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x335844) {
            ctx->pc = 0x335848u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x335844u;
            // 0x335848: 0x101840  sll         $v1, $s0, 1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x335A18u;
            goto label_335a18;
        }
    }
    ctx->pc = 0x33584Cu;
    // 0x33584c: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x33584cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x335850: 0x10a3005f  beq         $a1, $v1, . + 4 + (0x5F << 2)
    ctx->pc = 0x335850u;
    {
        const bool branch_taken_0x335850 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x335850) {
            ctx->pc = 0x3359D0u;
            goto label_3359d0;
        }
    }
    ctx->pc = 0x335858u;
    // 0x335858: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x335858u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x33585c: 0x50a3003d  beql        $a1, $v1, . + 4 + (0x3D << 2)
    ctx->pc = 0x33585Cu;
    {
        const bool branch_taken_0x33585c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x33585c) {
            ctx->pc = 0x335860u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33585Cu;
            // 0x335860: 0x101840  sll         $v1, $s0, 1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x335954u;
            goto label_335954;
        }
    }
    ctx->pc = 0x335864u;
    // 0x335864: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x335864u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x335868: 0x10a30020  beq         $a1, $v1, . + 4 + (0x20 << 2)
    ctx->pc = 0x335868u;
    {
        const bool branch_taken_0x335868 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x335868) {
            ctx->pc = 0x3358ECu;
            goto label_3358ec;
        }
    }
    ctx->pc = 0x335870u;
    // 0x335870: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x335870u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x335874: 0x10a30003  beq         $a1, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x335874u;
    {
        const bool branch_taken_0x335874 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x335874) {
            ctx->pc = 0x335884u;
            goto label_335884;
        }
    }
    ctx->pc = 0x33587Cu;
    // 0x33587c: 0x1000009f  b           . + 4 + (0x9F << 2)
    ctx->pc = 0x33587Cu;
    {
        const bool branch_taken_0x33587c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33587c) {
            ctx->pc = 0x335AFCu;
            goto label_335afc;
        }
    }
    ctx->pc = 0x335884u;
label_335884:
    // 0x335884: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x335884u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x335888: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x335888u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x33588c: 0x2442ee90  addiu       $v0, $v0, -0x1170
    ctx->pc = 0x33588cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962832));
    // 0x335890: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x335890u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x335894: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x335894u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x335898: 0x96060000  lhu         $a2, 0x0($s0)
    ctx->pc = 0x335898u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x33589c: 0xc0cd750  jal         func_335D40
    ctx->pc = 0x33589Cu;
    SET_GPR_U32(ctx, 31, 0x3358A4u);
    ctx->pc = 0x3358A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33589Cu;
    // 0x3358a0: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335D40u, 0x33589Cu, 0x3358A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3358A4u;
label_3358a4:
    // 0x3358a4: 0x96060002  lhu         $a2, 0x2($s0)
    ctx->pc = 0x3358a4u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x3358a8: 0x26840028  addiu       $a0, $s4, 0x28
    ctx->pc = 0x3358a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 40));
    // 0x3358ac: 0xc0cd750  jal         func_335D40
    ctx->pc = 0x3358ACu;
    SET_GPR_U32(ctx, 31, 0x3358B4u);
    ctx->pc = 0x3358B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3358ACu;
    // 0x3358b0: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335D40u, 0x3358ACu, 0x3358B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3358B4u;
label_3358b4:
    // 0x3358b4: 0x96060004  lhu         $a2, 0x4($s0)
    ctx->pc = 0x3358b4u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x3358b8: 0x26840050  addiu       $a0, $s4, 0x50
    ctx->pc = 0x3358b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 80));
    // 0x3358bc: 0xc0cd750  jal         func_335D40
    ctx->pc = 0x3358BCu;
    SET_GPR_U32(ctx, 31, 0x3358C4u);
    ctx->pc = 0x3358C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3358BCu;
    // 0x3358c0: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335D40u, 0x3358BCu, 0x3358C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3358C4u;
label_3358c4:
    // 0x3358c4: 0x268400d8  addiu       $a0, $s4, 0xD8
    ctx->pc = 0x3358c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 216));
    // 0x3358c8: 0x26650010  addiu       $a1, $s3, 0x10
    ctx->pc = 0x3358c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    // 0x3358cc: 0xc0cd6c8  jal         func_335B20
    ctx->pc = 0x3358CCu;
    SET_GPR_U32(ctx, 31, 0x3358D4u);
    ctx->pc = 0x3358D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3358CCu;
    // 0x3358d0: 0x26060006  addiu       $a2, $s0, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335B20u, 0x3358CCu, 0x3358D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3358D4u;
label_3358d4:
    // 0x3358d4: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x3358d4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x3358d8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3358d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3358dc: 0xc0cd6fc  jal         func_335BF0
    ctx->pc = 0x3358DCu;
    SET_GPR_U32(ctx, 31, 0x3358E4u);
    ctx->pc = 0x3358E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3358DCu;
    // 0x3358e0: 0x26650020  addiu       $a1, $s3, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335BF0u, 0x3358DCu, 0x3358E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3358E4u;
label_3358e4:
    // 0x3358e4: 0x10000085  b           . + 4 + (0x85 << 2)
    ctx->pc = 0x3358E4u;
    {
        const bool branch_taken_0x3358e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3358e4) {
            ctx->pc = 0x335AFCu;
            goto label_335afc;
        }
    }
    ctx->pc = 0x3358ECu;
label_3358ec:
    // 0x3358ec: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x3358ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x3358f0: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x3358f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x3358f4: 0x2442edf0  addiu       $v0, $v0, -0x1210
    ctx->pc = 0x3358f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962672));
    // 0x3358f8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3358f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3358fc: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x3358fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x335900: 0x96060000  lhu         $a2, 0x0($s0)
    ctx->pc = 0x335900u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x335904: 0xc0cd750  jal         func_335D40
    ctx->pc = 0x335904u;
    SET_GPR_U32(ctx, 31, 0x33590Cu);
    ctx->pc = 0x335908u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x335904u;
    // 0x335908: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335D40u, 0x335904u, 0x33590Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33590Cu;
label_33590c:
    // 0x33590c: 0x96060002  lhu         $a2, 0x2($s0)
    ctx->pc = 0x33590cu;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x335910: 0x26840028  addiu       $a0, $s4, 0x28
    ctx->pc = 0x335910u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 40));
    // 0x335914: 0xc0cd750  jal         func_335D40
    ctx->pc = 0x335914u;
    SET_GPR_U32(ctx, 31, 0x33591Cu);
    ctx->pc = 0x335918u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x335914u;
    // 0x335918: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335D40u, 0x335914u, 0x33591Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33591Cu;
label_33591c:
    // 0x33591c: 0x96060004  lhu         $a2, 0x4($s0)
    ctx->pc = 0x33591cu;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x335920: 0x26840050  addiu       $a0, $s4, 0x50
    ctx->pc = 0x335920u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 80));
    // 0x335924: 0xc0cd750  jal         func_335D40
    ctx->pc = 0x335924u;
    SET_GPR_U32(ctx, 31, 0x33592Cu);
    ctx->pc = 0x335928u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x335924u;
    // 0x335928: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335D40u, 0x335924u, 0x33592Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33592Cu;
label_33592c:
    // 0x33592c: 0x268400d8  addiu       $a0, $s4, 0xD8
    ctx->pc = 0x33592cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 216));
    // 0x335930: 0x26650010  addiu       $a1, $s3, 0x10
    ctx->pc = 0x335930u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    // 0x335934: 0xc0cd6c8  jal         func_335B20
    ctx->pc = 0x335934u;
    SET_GPR_U32(ctx, 31, 0x33593Cu);
    ctx->pc = 0x335938u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x335934u;
    // 0x335938: 0x26060006  addiu       $a2, $s0, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335B20u, 0x335934u, 0x33593Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33593Cu;
label_33593c:
    // 0x33593c: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x33593cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x335940: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x335940u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x335944: 0xc0cd6fc  jal         func_335BF0
    ctx->pc = 0x335944u;
    SET_GPR_U32(ctx, 31, 0x33594Cu);
    ctx->pc = 0x335948u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x335944u;
    // 0x335948: 0x26650020  addiu       $a1, $s3, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335BF0u, 0x335944u, 0x33594Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33594Cu;
label_33594c:
    // 0x33594c: 0x1000006b  b           . + 4 + (0x6B << 2)
    ctx->pc = 0x33594Cu;
    {
        const bool branch_taken_0x33594c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33594c) {
            ctx->pc = 0x335AFCu;
            goto label_335afc;
        }
    }
    ctx->pc = 0x335954u;
label_335954:
    // 0x335954: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x335954u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x335958: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x335958u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x33595c: 0x2442ecd0  addiu       $v0, $v0, -0x1330
    ctx->pc = 0x33595cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962384));
    // 0x335960: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x335960u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x335964: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x335964u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x335968: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x335968u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x33596c: 0x96060000  lhu         $a2, 0x0($s0)
    ctx->pc = 0x33596cu;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x335970: 0xc0cd750  jal         func_335D40
    ctx->pc = 0x335970u;
    SET_GPR_U32(ctx, 31, 0x335978u);
    ctx->pc = 0x335974u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x335970u;
    // 0x335974: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335D40u, 0x335970u, 0x335978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x335978u;
label_335978:
    // 0x335978: 0x96060002  lhu         $a2, 0x2($s0)
    ctx->pc = 0x335978u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x33597c: 0x26840028  addiu       $a0, $s4, 0x28
    ctx->pc = 0x33597cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 40));
    // 0x335980: 0xc0cd750  jal         func_335D40
    ctx->pc = 0x335980u;
    SET_GPR_U32(ctx, 31, 0x335988u);
    ctx->pc = 0x335984u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x335980u;
    // 0x335984: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335D40u, 0x335980u, 0x335988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x335988u;
label_335988:
    // 0x335988: 0x96060004  lhu         $a2, 0x4($s0)
    ctx->pc = 0x335988u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x33598c: 0x26840050  addiu       $a0, $s4, 0x50
    ctx->pc = 0x33598cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 80));
    // 0x335990: 0xc0cd750  jal         func_335D40
    ctx->pc = 0x335990u;
    SET_GPR_U32(ctx, 31, 0x335998u);
    ctx->pc = 0x335994u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x335990u;
    // 0x335994: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335D40u, 0x335990u, 0x335998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x335998u;
label_335998:
    // 0x335998: 0x268400d8  addiu       $a0, $s4, 0xD8
    ctx->pc = 0x335998u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 216));
    // 0x33599c: 0x26650010  addiu       $a1, $s3, 0x10
    ctx->pc = 0x33599cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    // 0x3359a0: 0xc0cd6c8  jal         func_335B20
    ctx->pc = 0x3359A0u;
    SET_GPR_U32(ctx, 31, 0x3359A8u);
    ctx->pc = 0x3359A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3359A0u;
    // 0x3359a4: 0x26060006  addiu       $a2, $s0, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335B20u, 0x3359A0u, 0x3359A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3359A8u;
label_3359a8:
    // 0x3359a8: 0x26240384  addiu       $a0, $s1, 0x384
    ctx->pc = 0x3359a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 900));
    // 0x3359ac: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3359acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3359b0: 0xc0c0ab8  jal         func_302AE0
    ctx->pc = 0x3359B0u;
    SET_GPR_U32(ctx, 31, 0x3359B8u);
    ctx->pc = 0x3359B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3359B0u;
    // 0x3359b4: 0x26660022  addiu       $a2, $s3, 0x22 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 34));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302AE0u, 0x3359B0u, 0x3359B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3359B8u;
label_3359b8:
    // 0x3359b8: 0x9606000a  lhu         $a2, 0xA($s0)
    ctx->pc = 0x3359b8u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 10)));
    // 0x3359bc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3359bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3359c0: 0xc0cd6fc  jal         func_335BF0
    ctx->pc = 0x3359C0u;
    SET_GPR_U32(ctx, 31, 0x3359C8u);
    ctx->pc = 0x3359C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3359C0u;
    // 0x3359c4: 0x26650020  addiu       $a1, $s3, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335BF0u, 0x3359C0u, 0x3359C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3359C8u;
label_3359c8:
    // 0x3359c8: 0x1000004c  b           . + 4 + (0x4C << 2)
    ctx->pc = 0x3359C8u;
    {
        const bool branch_taken_0x3359c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3359c8) {
            ctx->pc = 0x335AFCu;
            goto label_335afc;
        }
    }
    ctx->pc = 0x3359D0u;
label_3359d0:
    // 0x3359d0: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x3359d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x3359d4: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x3359d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x3359d8: 0x2442ed50  addiu       $v0, $v0, -0x12B0
    ctx->pc = 0x3359d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962512));
    // 0x3359dc: 0x26840050  addiu       $a0, $s4, 0x50
    ctx->pc = 0x3359dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 80));
    // 0x3359e0: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x3359e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3359e4: 0x96060000  lhu         $a2, 0x0($s0)
    ctx->pc = 0x3359e4u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3359e8: 0xc0cd750  jal         func_335D40
    ctx->pc = 0x3359E8u;
    SET_GPR_U32(ctx, 31, 0x3359F0u);
    ctx->pc = 0x3359ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3359E8u;
    // 0x3359ec: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335D40u, 0x3359E8u, 0x3359F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3359F0u;
label_3359f0:
    // 0x3359f0: 0x268400d8  addiu       $a0, $s4, 0xD8
    ctx->pc = 0x3359f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 216));
    // 0x3359f4: 0x26650010  addiu       $a1, $s3, 0x10
    ctx->pc = 0x3359f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    // 0x3359f8: 0xc0cd6c8  jal         func_335B20
    ctx->pc = 0x3359F8u;
    SET_GPR_U32(ctx, 31, 0x335A00u);
    ctx->pc = 0x3359FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3359F8u;
    // 0x3359fc: 0x26060006  addiu       $a2, $s0, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335B20u, 0x3359F8u, 0x335A00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x335A00u;
label_335a00:
    // 0x335a00: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x335a00u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x335a04: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x335a04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x335a08: 0xc0cd6fc  jal         func_335BF0
    ctx->pc = 0x335A08u;
    SET_GPR_U32(ctx, 31, 0x335A10u);
    ctx->pc = 0x335A0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x335A08u;
    // 0x335a0c: 0x26650020  addiu       $a1, $s3, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335BF0u, 0x335A08u, 0x335A10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x335A10u;
label_335a10:
    // 0x335a10: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x335A10u;
    {
        const bool branch_taken_0x335a10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x335a10) {
            ctx->pc = 0x335AFCu;
            goto label_335afc;
        }
    }
    ctx->pc = 0x335A18u;
label_335a18:
    // 0x335a18: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x335a18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x335a1c: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x335a1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x335a20: 0x2442ec50  addiu       $v0, $v0, -0x13B0
    ctx->pc = 0x335a20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962256));
    // 0x335a24: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x335a24u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x335a28: 0x26840050  addiu       $a0, $s4, 0x50
    ctx->pc = 0x335a28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 80));
    // 0x335a2c: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x335a2cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x335a30: 0x96060000  lhu         $a2, 0x0($s0)
    ctx->pc = 0x335a30u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x335a34: 0xc0cd750  jal         func_335D40
    ctx->pc = 0x335A34u;
    SET_GPR_U32(ctx, 31, 0x335A3Cu);
    ctx->pc = 0x335A38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x335A34u;
    // 0x335a38: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335D40u, 0x335A34u, 0x335A3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x335A3Cu;
label_335a3c:
    // 0x335a3c: 0x268400d8  addiu       $a0, $s4, 0xD8
    ctx->pc = 0x335a3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 216));
    // 0x335a40: 0x26650010  addiu       $a1, $s3, 0x10
    ctx->pc = 0x335a40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    // 0x335a44: 0xc0cd6c8  jal         func_335B20
    ctx->pc = 0x335A44u;
    SET_GPR_U32(ctx, 31, 0x335A4Cu);
    ctx->pc = 0x335A48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x335A44u;
    // 0x335a48: 0x26060006  addiu       $a2, $s0, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335B20u, 0x335A44u, 0x335A4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x335A4Cu;
label_335a4c:
    // 0x335a4c: 0x26240384  addiu       $a0, $s1, 0x384
    ctx->pc = 0x335a4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 900));
    // 0x335a50: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x335a50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x335a54: 0xc0c0ab8  jal         func_302AE0
    ctx->pc = 0x335A54u;
    SET_GPR_U32(ctx, 31, 0x335A5Cu);
    ctx->pc = 0x335A58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x335A54u;
    // 0x335a58: 0x26660022  addiu       $a2, $s3, 0x22 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 34));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302AE0u, 0x335A54u, 0x335A5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x335A5Cu;
label_335a5c:
    // 0x335a5c: 0x9606000a  lhu         $a2, 0xA($s0)
    ctx->pc = 0x335a5cu;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 10)));
    // 0x335a60: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x335a60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x335a64: 0xc0cd6fc  jal         func_335BF0
    ctx->pc = 0x335A64u;
    SET_GPR_U32(ctx, 31, 0x335A6Cu);
    ctx->pc = 0x335A68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x335A64u;
    // 0x335a68: 0x26650020  addiu       $a1, $s3, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335BF0u, 0x335A64u, 0x335A6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x335A6Cu;
label_335a6c:
    // 0x335a6c: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x335A6Cu;
    {
        const bool branch_taken_0x335a6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x335a6c) {
            ctx->pc = 0x335AFCu;
            goto label_335afc;
        }
    }
    ctx->pc = 0x335A74u;
label_335a74:
    // 0x335a74: 0x262400c0  addiu       $a0, $s1, 0xC0
    ctx->pc = 0x335a74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 192));
    // 0x335a78: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x335a78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x335a7c: 0xc0c0ab8  jal         func_302AE0
    ctx->pc = 0x335A7Cu;
    SET_GPR_U32(ctx, 31, 0x335A84u);
    ctx->pc = 0x335A80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x335A7Cu;
    // 0x335a80: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302AE0u, 0x335A7Cu, 0x335A84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x335A84u;
label_335a84:
    // 0x335a84: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x335a84u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x335a88: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x335a88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x335a8c: 0x248422e4  addiu       $a0, $a0, 0x22E4
    ctx->pc = 0x335a8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8932));
    // 0x335a90: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x335a90u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x335a94: 0xc0c0b14  jal         func_302C50
    ctx->pc = 0x335A94u;
    SET_GPR_U32(ctx, 31, 0x335A9Cu);
    ctx->pc = 0x335A98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x335A94u;
    // 0x335a98: 0x2407a829  addiu       $a3, $zero, -0x57D7 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294944809));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302C50u, 0x335A94u, 0x335A9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x335A9Cu;
label_335a9c:
    // 0x335a9c: 0x3c0b003d  lui         $t3, 0x3D
    ctx->pc = 0x335a9cu;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)61 << 16));
    // 0x335aa0: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x335aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x335aa4: 0x256b22f0  addiu       $t3, $t3, 0x22F0
    ctx->pc = 0x335aa4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 8944));
    // 0x335aa8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x335aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x335aac: 0x95680006  lhu         $t0, 0x6($t3)
    ctx->pc = 0x335aacu;
    SET_GPR_U32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 6)));
    // 0x335ab0: 0x26840020  addiu       $a0, $s4, 0x20
    ctx->pc = 0x335ab0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
    // 0x335ab4: 0x2665fff0  addiu       $a1, $s3, -0x10
    ctx->pc = 0x335ab4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967280));
    // 0x335ab8: 0x2406a829  addiu       $a2, $zero, -0x57D7
    ctx->pc = 0x335ab8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294944809));
    // 0x335abc: 0x24070040  addiu       $a3, $zero, 0x40
    ctx->pc = 0x335abcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x335ac0: 0xffa80000  sd          $t0, 0x0($sp)
    ctx->pc = 0x335ac0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 8));
    // 0x335ac4: 0xffa30008  sd          $v1, 0x8($sp)
    ctx->pc = 0x335ac4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 3));
    // 0x335ac8: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x335ac8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
    // 0x335acc: 0xffa20018  sd          $v0, 0x18($sp)
    ctx->pc = 0x335accu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
    // 0x335ad0: 0x95690000  lhu         $t1, 0x0($t3)
    ctx->pc = 0x335ad0u;
    SET_GPR_U32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x335ad4: 0x956a0002  lhu         $t2, 0x2($t3)
    ctx->pc = 0x335ad4u;
    SET_GPR_U32(ctx, 10, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 2)));
    // 0x335ad8: 0x956b0004  lhu         $t3, 0x4($t3)
    ctx->pc = 0x335ad8u;
    SET_GPR_U32(ctx, 11, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 4)));
    // 0x335adc: 0xc0c0ba8  jal         func_302EA0
    ctx->pc = 0x335ADCu;
    SET_GPR_U32(ctx, 31, 0x335AE4u);
    ctx->pc = 0x335AE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x335ADCu;
    // 0x335ae0: 0x24080020  addiu       $t0, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302EA0u, 0x335ADCu, 0x335AE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x335AE4u;
label_335ae4:
    // 0x335ae4: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x335ae4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x335ae8: 0x26850060  addiu       $a1, $s4, 0x60
    ctx->pc = 0x335ae8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 96));
    // 0x335aec: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x335aecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x335af0: 0x248422fc  addiu       $a0, $a0, 0x22FC
    ctx->pc = 0x335af0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8956));
    // 0x335af4: 0xc0c0b14  jal         func_302C50
    ctx->pc = 0x335AF4u;
    SET_GPR_U32(ctx, 31, 0x335AFCu);
    ctx->pc = 0x335AF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x335AF4u;
    // 0x335af8: 0x2407a829  addiu       $a3, $zero, -0x57D7 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294944809));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302C50u, 0x335AF4u, 0x335AFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x335AFCu;
label_335afc:
    // 0x335afc: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x335afcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_335b00:
    // 0x335b00: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x335b00u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x335b04: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x335b04u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x335b08: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x335b08u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x335b0c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x335b0cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x335b10: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x335b10u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x335b14: 0x3e00008  jr          $ra
    ctx->pc = 0x335B14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x335B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335B14u;
        // 0x335b18: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x335B14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x335B1Cu;
    // 0x335b1c: 0x0  nop
    ctx->pc = 0x335b1cu;
    // NOP
    if (ctx->pc == 0x335b1cu) { ctx->pc = 0x335b20u; }
}
