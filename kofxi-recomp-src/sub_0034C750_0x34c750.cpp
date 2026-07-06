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

// Function: sub_0034C750
// Address: 0x34c750 - 0x34d2a0
void sub_0034C750_0x34c750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0034C750_0x34c750");
#endif

    switch (ctx->pc) {
        case 0x34c774u: goto label_34c774;
        case 0x34c784u: goto label_34c784;
        case 0x34c794u: goto label_34c794;
        case 0x34c7b0u: goto label_34c7b0;
        case 0x34c7c0u: goto label_34c7c0;
        case 0x34c7d8u: goto label_34c7d8;
        case 0x34c7f0u: goto label_34c7f0;
        case 0x34c820u: goto label_34c820;
        case 0x34c83cu: goto label_34c83c;
        case 0x34c858u: goto label_34c858;
        case 0x34c890u: goto label_34c890;
        case 0x34c898u: goto label_34c898;
        case 0x34c8acu: goto label_34c8ac;
        case 0x34c8d0u: goto label_34c8d0;
        case 0x34c91cu: goto label_34c91c;
        case 0x34c928u: goto label_34c928;
        case 0x34c95cu: goto label_34c95c;
        case 0x34c968u: goto label_34c968;
        case 0x34c9c8u: goto label_34c9c8;
        case 0x34c9d4u: goto label_34c9d4;
        case 0x34ca0cu: goto label_34ca0c;
        case 0x34ca18u: goto label_34ca18;
        case 0x34ca34u: goto label_34ca34;
        case 0x34ca74u: goto label_34ca74;
        case 0x34ca90u: goto label_34ca90;
        case 0x34ca9cu: goto label_34ca9c;
        case 0x34cac0u: goto label_34cac0;
        case 0x34cae4u: goto label_34cae4;
        case 0x34cb00u: goto label_34cb00;
        case 0x34cb20u: goto label_34cb20;
        case 0x34cb40u: goto label_34cb40;
        case 0x34cb78u: goto label_34cb78;
        case 0x34cb84u: goto label_34cb84;
        case 0x34cbb0u: goto label_34cbb0;
        case 0x34cbe8u: goto label_34cbe8;
        case 0x34cbf4u: goto label_34cbf4;
        case 0x34cc20u: goto label_34cc20;
        case 0x34cc58u: goto label_34cc58;
        case 0x34cc64u: goto label_34cc64;
        case 0x34cc90u: goto label_34cc90;
        case 0x34cca0u: goto label_34cca0;
        case 0x34ccacu: goto label_34ccac;
        case 0x34ccd8u: goto label_34ccd8;
        case 0x34ccf4u: goto label_34ccf4;
        case 0x34cd00u: goto label_34cd00;
        case 0x34cd28u: goto label_34cd28;
        case 0x34cd50u: goto label_34cd50;
        case 0x34cd7cu: goto label_34cd7c;
        case 0x34cd88u: goto label_34cd88;
        case 0x34cdc4u: goto label_34cdc4;
        case 0x34cddcu: goto label_34cddc;
        case 0x34ce58u: goto label_34ce58;
        case 0x34ce78u: goto label_34ce78;
        case 0x34ce88u: goto label_34ce88;
        case 0x34cea0u: goto label_34cea0;
        case 0x34ceacu: goto label_34ceac;
        case 0x34ced0u: goto label_34ced0;
        case 0x34cee0u: goto label_34cee0;
        case 0x34cefcu: goto label_34cefc;
        case 0x34cf20u: goto label_34cf20;
        case 0x34cf30u: goto label_34cf30;
        case 0x34cf70u: goto label_34cf70;
        case 0x34cf7cu: goto label_34cf7c;
        case 0x34cfc8u: goto label_34cfc8;
        case 0x34d028u: goto label_34d028;
        case 0x34d054u: goto label_34d054;
        case 0x34d07cu: goto label_34d07c;
        case 0x34d094u: goto label_34d094;
        case 0x34d0c0u: goto label_34d0c0;
        case 0x34d100u: goto label_34d100;
        case 0x34d10cu: goto label_34d10c;
        case 0x34d168u: goto label_34d168;
        case 0x34d1e4u: goto label_34d1e4;
        case 0x34d210u: goto label_34d210;
        case 0x34d238u: goto label_34d238;
        case 0x34d250u: goto label_34d250;
        case 0x34d274u: goto label_34d274;
        case 0x34d27cu: goto label_34d27c;
        default: break;
    }

    ctx->pc = 0x34c750u;

label_34c750:
    // 0x34c750: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x34c750u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x34c754: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x34c754u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x34c758: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x34c758u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x34c75c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x34c75cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x34c760: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x34c760u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x34c764: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x34c764u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x34c768: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x34c768u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x34c76c: 0x8ca60000  lw          $a2, 0x0($a1)
    ctx->pc = 0x34c76cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x34c770: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x34c770u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
label_34c774:
    // 0x34c774: 0x480c0  sll         $s0, $a0, 3
    ctx->pc = 0x34c774u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x34c778: 0x8c424080  lw          $v0, 0x4080($v0)
    ctx->pc = 0x34c778u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16512)));
    // 0x34c77c: 0x24a30044  addiu       $v1, $a1, 0x44
    ctx->pc = 0x34c77cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 68));
    // 0x34c780: 0x27a4002c  addiu       $a0, $sp, 0x2C
    ctx->pc = 0x34c780u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
label_34c784:
    // 0x34c784: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x34c784u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x34c788: 0xac460004  sw          $a2, 0x4($v0)
    ctx->pc = 0x34c788u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 6));
    // 0x34c78c: 0xc0d2ea8  jal         func_34BAA0
    ctx->pc = 0x34C78Cu;
    SET_GPR_U32(ctx, 31, 0x34C794u);
    ctx->pc = 0x34C790u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34C78Cu;
    // 0x34c790: 0xafa3002c  sw          $v1, 0x2C($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34BAA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34BAA0u, 0x34C78Cu, 0x34C794u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34C794u;
label_34c794:
    // 0x34c794: 0x2444ffff  addiu       $a0, $v0, -0x1
    ctx->pc = 0x34c794u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x34c798: 0x27a5002c  addiu       $a1, $sp, 0x2C
    ctx->pc = 0x34c798u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x34c79c: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x34c79cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x34c7a0: 0x8c434080  lw          $v1, 0x4080($v0)
    ctx->pc = 0x34c7a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16512)));
    // 0x34c7a4: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x34c7a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x34c7a8: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x34c7a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x34c7ac: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x34c7acu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
label_34c7b0:
    // 0x34c7b0: 0x8c424080  lw          $v0, 0x4080($v0)
    ctx->pc = 0x34c7b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16512)));
    // 0x34c7b4: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x34c7b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x34c7b8: 0xc0d2ed4  jal         func_34BB50
    ctx->pc = 0x34C7B8u;
    SET_GPR_U32(ctx, 31, 0x34C7C0u);
    ctx->pc = 0x34C7BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34C7B8u;
    // 0x34c7bc: 0x24440008  addiu       $a0, $v0, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34BB50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34BB50u, 0x34C7B8u, 0x34C7C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34C7C0u;
label_34c7c0:
    // 0x34c7c0: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x34c7c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x34c7c4: 0x27a5002c  addiu       $a1, $sp, 0x2C
    ctx->pc = 0x34c7c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x34c7c8: 0x8c424080  lw          $v0, 0x4080($v0)
    ctx->pc = 0x34c7c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16512)));
    // 0x34c7cc: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x34c7ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x34c7d0: 0xc0d2ed4  jal         func_34BB50
    ctx->pc = 0x34C7D0u;
    SET_GPR_U32(ctx, 31, 0x34C7D8u);
    ctx->pc = 0x34C7D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34C7D0u;
    // 0x34c7d4: 0x24440028  addiu       $a0, $v0, 0x28 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34BB50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34BB50u, 0x34C7D0u, 0x34C7D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34C7D8u;
label_34c7d8:
    // 0x34c7d8: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x34c7d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x34c7dc: 0x8c424080  lw          $v0, 0x4080($v0)
    ctx->pc = 0x34c7dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16512)));
    // 0x34c7e0: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x34c7e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x34c7e4: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x34c7e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x34c7e8: 0xc083614  jal         func_20D850
    ctx->pc = 0x34C7E8u;
    SET_GPR_U32(ctx, 31, 0x34C7F0u);
    ctx->pc = 0x34C7ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34C7E8u;
    // 0x34c7ec: 0x24440048  addiu       $a0, $v0, 0x48 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 72));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20D850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20D850u, 0x34C7E8u, 0x34C7F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34C7F0u;
label_34c7f0:
    // 0x34c7f0: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x34c7f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x34c7f4: 0x3c03003e  lui         $v1, 0x3E
    ctx->pc = 0x34c7f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)62 << 16));
    // 0x34c7f8: 0x8c424080  lw          $v0, 0x4080($v0)
    ctx->pc = 0x34c7f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16512)));
    // 0x34c7fc: 0x24638a70  addiu       $v1, $v1, -0x7590
    ctx->pc = 0x34c7fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294937200));
    // 0x34c800: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x34c800u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x34c804: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x34c804u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x34c808: 0x24440068  addiu       $a0, $v0, 0x68
    ctx->pc = 0x34c808u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 104));
    // 0x34c80c: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x34c80cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x34c810: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x34c810u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x34c814: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x34c814u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x34c818: 0xc0835cc  jal         func_20D730
    ctx->pc = 0x34C818u;
    SET_GPR_U32(ctx, 31, 0x34C820u);
    ctx->pc = 0x34C81Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34C818u;
    // 0x34c81c: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20D730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20D730u, 0x34C818u, 0x34C820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34C820u;
label_34c820:
    // 0x34c820: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x34c820u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x34c824: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x34c824u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x34c828: 0x8c424080  lw          $v0, 0x4080($v0)
    ctx->pc = 0x34c828u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16512)));
    // 0x34c82c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x34c82cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x34c830: 0x24450088  addiu       $a1, $v0, 0x88
    ctx->pc = 0x34c830u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 136));
    // 0x34c834: 0xc0835e4  jal         func_20D790
    ctx->pc = 0x34C834u;
    SET_GPR_U32(ctx, 31, 0x34C83Cu);
    ctx->pc = 0x34C838u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34C834u;
    // 0x34c838: 0x24460008  addiu       $a2, $v0, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20D790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20D790u, 0x34C834u, 0x34C83Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34C83Cu;
label_34c83c:
    // 0x34c83c: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x34c83cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x34c840: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x34c840u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x34c844: 0x8c424080  lw          $v0, 0x4080($v0)
    ctx->pc = 0x34c844u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16512)));
    // 0x34c848: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x34c848u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x34c84c: 0x244500a8  addiu       $a1, $v0, 0xA8
    ctx->pc = 0x34c84cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 168));
    // 0x34c850: 0xc0835e4  jal         func_20D790
    ctx->pc = 0x34C850u;
    SET_GPR_U32(ctx, 31, 0x34C858u);
    ctx->pc = 0x34C854u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34C850u;
    // 0x34c854: 0x24460028  addiu       $a2, $v0, 0x28 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20D790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20D790u, 0x34C850u, 0x34C858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34C858u;
label_34c858:
    // 0x34c858: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x34c858u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x34c85c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x34c85cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34c860: 0x3e00008  jr          $ra
    ctx->pc = 0x34C860u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34C864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34C860u;
        // 0x34c864: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34C860u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34C868u;
    // 0x34c868: 0x0  nop
    ctx->pc = 0x34c868u;
    // NOP
    // 0x34c86c: 0x0  nop
    ctx->pc = 0x34c86cu;
    // NOP
    // 0x34c870: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x34c870u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x34c874: 0x3c040035  lui         $a0, 0x35
    ctx->pc = 0x34c874u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
    // 0x34c878: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x34c878u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x34c87c: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x34c87cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x34c880: 0xa440be92  sh          $zero, -0x416E($v0)
    ctx->pc = 0x34c880u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294950546), (uint16_t)GPR_U32(ctx, 0));
    // 0x34c884: 0x2484c5d0  addiu       $a0, $a0, -0x3A30
    ctx->pc = 0x34c884u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952400));
    // 0x34c888: 0xc082678  jal         func_2099E0
    ctx->pc = 0x34C888u;
    SET_GPR_U32(ctx, 31, 0x34C890u);
    ctx->pc = 0x34C88Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34C888u;
    // 0x34c88c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2099E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2099E0u, 0x34C888u, 0x34C890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34C890u;
label_34c890:
    // 0x34c890: 0xc0d0c20  jal         func_343080
    ctx->pc = 0x34C890u;
    SET_GPR_U32(ctx, 31, 0x34C898u);
    ctx->pc = 0x343080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x343080u, 0x34C890u, 0x34C898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34C898u;
label_34c898:
    // 0x34c898: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x34c898u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x34c89c: 0x3c040035  lui         $a0, 0x35
    ctx->pc = 0x34c89cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
    // 0x34c8a0: 0x2484c8c0  addiu       $a0, $a0, -0x3740
    ctx->pc = 0x34c8a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953152));
    // 0x34c8a4: 0xc0d0d18  jal         func_343460
    ctx->pc = 0x34C8A4u;
    SET_GPR_U32(ctx, 31, 0x34C8ACu);
    ctx->pc = 0x34C8A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34C8A4u;
    // 0x34c8a8: 0xa440be9a  sh          $zero, -0x4166($v0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294950554), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x343460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x343460u, 0x34C8A4u, 0x34C8ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34C8ACu;
label_34c8ac:
    // 0x34c8ac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x34c8acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34c8b0: 0x3e00008  jr          $ra
    ctx->pc = 0x34C8B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34C8B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34C8B0u;
        // 0x34c8b4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34C8B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34C8B8u;
    // 0x34c8b8: 0x0  nop
    ctx->pc = 0x34c8b8u;
    // NOP
    // 0x34c8bc: 0x0  nop
    ctx->pc = 0x34c8bcu;
    // NOP
    // 0x34c8c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x34c8c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x34c8c4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x34c8c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x34c8c8: 0xc0d0c20  jal         func_343080
    ctx->pc = 0x34C8C8u;
    SET_GPR_U32(ctx, 31, 0x34C8D0u);
    ctx->pc = 0x343080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x343080u, 0x34C8C8u, 0x34C8D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34C8D0u;
label_34c8d0:
    // 0x34c8d0: 0x3c0201df  lui         $v0, 0x1DF
    ctx->pc = 0x34c8d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)479 << 16));
    // 0x34c8d4: 0x240300c8  addiu       $v1, $zero, 0xC8
    ctx->pc = 0x34c8d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
    // 0x34c8d8: 0x8c44dd80  lw          $a0, -0x2280($v0)
    ctx->pc = 0x34c8d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294958464)));
    // 0x34c8dc: 0x24053530  addiu       $a1, $zero, 0x3530
    ctx->pc = 0x34c8dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13616));
    // 0x34c8e0: 0xafa30014  sw          $v1, 0x14($sp)
    ctx->pc = 0x34c8e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
    // 0x34c8e4: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x34c8e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x34c8e8: 0x3c0301e0  lui         $v1, 0x1E0
    ctx->pc = 0x34c8e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)480 << 16));
    // 0x34c8ec: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x34c8ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x34c8f0: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x34c8f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x34c8f4: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x34c8f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x34c8f8: 0xafa2001c  sw          $v0, 0x1C($sp)
    ctx->pc = 0x34c8f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 2));
    // 0x34c8fc: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x34c8fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x34c900: 0x9463be92  lhu         $v1, -0x416E($v1)
    ctx->pc = 0x34c900u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294950546)));
    // 0x34c904: 0x8c44eab8  lw          $a0, -0x1548($v0)
    ctx->pc = 0x34c904u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961848)));
    // 0x34c908: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x34c908u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x34c90c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x34c90cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x34c910: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x34c910u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x34c914: 0xc083f96  jal         func_20FE58
    ctx->pc = 0x34C914u;
    SET_GPR_U32(ctx, 31, 0x34C91Cu);
    ctx->pc = 0x34C918u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34C914u;
    // 0x34c918: 0xafa20018  sw          $v0, 0x18($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20FE58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20FE58u, 0x34C914u, 0x34C91Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34C91Cu;
label_34c91c:
    // 0x34c91c: 0x3c040035  lui         $a0, 0x35
    ctx->pc = 0x34c91cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
    // 0x34c920: 0xc0d1c98  jal         func_347260
    ctx->pc = 0x34C920u;
    SET_GPR_U32(ctx, 31, 0x34C928u);
    ctx->pc = 0x34C924u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34C920u;
    // 0x34c924: 0x2484c940  addiu       $a0, $a0, -0x36C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x347260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x347260u, 0x34C920u, 0x34C928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34C928u;
label_34c928:
    // 0x34c928: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x34c928u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34c92c: 0x3e00008  jr          $ra
    ctx->pc = 0x34C92Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34C930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34C92Cu;
        // 0x34c930: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34C92Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34C934u;
    // 0x34c934: 0x0  nop
    ctx->pc = 0x34c934u;
    // NOP
    // 0x34c938: 0x0  nop
    ctx->pc = 0x34c938u;
    // NOP
    // 0x34c93c: 0x0  nop
    ctx->pc = 0x34c93cu;
    // NOP
    // 0x34c940: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x34c940u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x34c944: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x34c944u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x34c948: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x34c948u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x34c94c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x34c94cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x34c950: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x34c950u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34c954: 0x3c1001df  lui         $s0, 0x1DF
    ctx->pc = 0x34c954u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)479 << 16));
    // 0x34c958: 0x2610ddc0  addiu       $s0, $s0, -0x2240
    ctx->pc = 0x34c958u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294958528));
label_34c95c:
    // 0x34c95c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x34c95cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34c960: 0xc0d31d4  jal         func_34C750
    ctx->pc = 0x34C960u;
    SET_GPR_U32(ctx, 31, 0x34C968u);
    ctx->pc = 0x34C964u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34C960u;
    // 0x34c964: 0x26050010  addiu       $a1, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34C750u;
    goto label_34c750;
    ctx->pc = 0x34C968u;
label_34c968:
    // 0x34c968: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x34c968u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x34c96c: 0x2a22000a  slti        $v0, $s1, 0xA
    ctx->pc = 0x34c96cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x34c970: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x34C970u;
    {
        const bool branch_taken_0x34c970 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x34C974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34C970u;
        // 0x34c974: 0x26100074  addiu       $s0, $s0, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 116));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34c970) {
            ctx->pc = 0x34C95Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_34c95c;
        }
    }
    ctx->pc = 0x34C978u;
    // 0x34c978: 0x3c0201df  lui         $v0, 0x1DF
    ctx->pc = 0x34c978u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)479 << 16));
    // 0x34c97c: 0x240300c8  addiu       $v1, $zero, 0xC8
    ctx->pc = 0x34c97cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
    // 0x34c980: 0x8c44dd80  lw          $a0, -0x2280($v0)
    ctx->pc = 0x34c980u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294958464)));
    // 0x34c984: 0x24053530  addiu       $a1, $zero, 0x3530
    ctx->pc = 0x34c984u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13616));
    // 0x34c988: 0xafa30034  sw          $v1, 0x34($sp)
    ctx->pc = 0x34c988u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 3));
    // 0x34c98c: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x34c98cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x34c990: 0x3c0301e0  lui         $v1, 0x1E0
    ctx->pc = 0x34c990u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)480 << 16));
    // 0x34c994: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x34c994u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x34c998: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x34c998u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x34c99c: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x34c99cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x34c9a0: 0xafa2003c  sw          $v0, 0x3C($sp)
    ctx->pc = 0x34c9a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 2));
    // 0x34c9a4: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x34c9a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x34c9a8: 0x9463be92  lhu         $v1, -0x416E($v1)
    ctx->pc = 0x34c9a8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294950546)));
    // 0x34c9ac: 0x8c44eab8  lw          $a0, -0x1548($v0)
    ctx->pc = 0x34c9acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961848)));
    // 0x34c9b0: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x34c9b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x34c9b4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x34c9b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x34c9b8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x34c9b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x34c9bc: 0x2442000a  addiu       $v0, $v0, 0xA
    ctx->pc = 0x34c9bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10));
    // 0x34c9c0: 0xc083f96  jal         func_20FE58
    ctx->pc = 0x34C9C0u;
    SET_GPR_U32(ctx, 31, 0x34C9C8u);
    ctx->pc = 0x34C9C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34C9C0u;
    // 0x34c9c4: 0xafa20038  sw          $v0, 0x38($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20FE58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20FE58u, 0x34C9C0u, 0x34C9C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34C9C8u;
label_34c9c8:
    // 0x34c9c8: 0x3c040035  lui         $a0, 0x35
    ctx->pc = 0x34c9c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
    // 0x34c9cc: 0xc0d1c98  jal         func_347260
    ctx->pc = 0x34C9CCu;
    SET_GPR_U32(ctx, 31, 0x34C9D4u);
    ctx->pc = 0x34C9D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34C9CCu;
    // 0x34c9d0: 0x2484c9f0  addiu       $a0, $a0, -0x3610 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953456));
    ctx->in_delay_slot = false;
    ctx->pc = 0x347260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x347260u, 0x34C9CCu, 0x34C9D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34C9D4u;
label_34c9d4:
    // 0x34c9d4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x34c9d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x34c9d8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x34c9d8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x34c9dc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x34c9dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34c9e0: 0x3e00008  jr          $ra
    ctx->pc = 0x34C9E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34C9E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34C9E0u;
        // 0x34c9e4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34C9E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34C9E8u;
    // 0x34c9e8: 0x0  nop
    ctx->pc = 0x34c9e8u;
    // NOP
    // 0x34c9ec: 0x0  nop
    ctx->pc = 0x34c9ecu;
    // NOP
    // 0x34c9f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x34c9f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x34c9f4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x34c9f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x34c9f8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x34c9f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x34c9fc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x34c9fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x34ca00: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x34ca00u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34ca04: 0x3c1001df  lui         $s0, 0x1DF
    ctx->pc = 0x34ca04u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)479 << 16));
    // 0x34ca08: 0x2610ddc0  addiu       $s0, $s0, -0x2240
    ctx->pc = 0x34ca08u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294958528));
label_34ca0c:
    // 0x34ca0c: 0x2624000a  addiu       $a0, $s1, 0xA
    ctx->pc = 0x34ca0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 10));
    // 0x34ca10: 0xc0d31d4  jal         func_34C750
    ctx->pc = 0x34CA10u;
    SET_GPR_U32(ctx, 31, 0x34CA18u);
    ctx->pc = 0x34CA14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34CA10u;
    // 0x34ca14: 0x26050010  addiu       $a1, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34C750u;
    goto label_34c750;
    ctx->pc = 0x34CA18u;
label_34ca18:
    // 0x34ca18: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x34ca18u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x34ca1c: 0x2a22000a  slti        $v0, $s1, 0xA
    ctx->pc = 0x34ca1cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x34ca20: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x34CA20u;
    {
        const bool branch_taken_0x34ca20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x34CA24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34CA20u;
        // 0x34ca24: 0x26100074  addiu       $s0, $s0, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 116));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34ca20) {
            ctx->pc = 0x34CA0Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_34ca0c;
        }
    }
    ctx->pc = 0x34CA28u;
    // 0x34ca28: 0x3c040035  lui         $a0, 0x35
    ctx->pc = 0x34ca28u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
    // 0x34ca2c: 0xc082674  jal         func_2099D0
    ctx->pc = 0x34CA2Cu;
    SET_GPR_U32(ctx, 31, 0x34CA34u);
    ctx->pc = 0x34CA30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34CA2Cu;
    // 0x34ca30: 0x2484ca50  addiu       $a0, $a0, -0x35B0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2099D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2099D0u, 0x34CA2Cu, 0x34CA34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34CA34u;
label_34ca34:
    // 0x34ca34: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x34ca34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x34ca38: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x34ca38u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x34ca3c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x34ca3cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34ca40: 0x3e00008  jr          $ra
    ctx->pc = 0x34CA40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34CA44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34CA40u;
        // 0x34ca44: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34CA40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34CA48u;
    // 0x34ca48: 0x0  nop
    ctx->pc = 0x34ca48u;
    // NOP
    // 0x34ca4c: 0x0  nop
    ctx->pc = 0x34ca4cu;
    // NOP
    // 0x34ca50: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x34ca50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x34ca54: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x34ca54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x34ca58: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x34ca58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x34ca5c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x34ca5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x34ca60: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x34ca60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x34ca64: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x34ca64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x34ca68: 0x9450be92  lhu         $s0, -0x416E($v0)
    ctx->pc = 0x34ca68u;
    SET_GPR_U32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294950546)));
    // 0x34ca6c: 0xc068d08  jal         func_1A3420
    ctx->pc = 0x34CA6Cu;
    SET_GPR_U32(ctx, 31, 0x34CA74u);
    ctx->pc = 0x34CA70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34CA6Cu;
    // 0x34ca70: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A3420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A3420u, 0x34CA6Cu, 0x34CA74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34CA74u;
label_34ca74:
    // 0x34ca74: 0x3044ffff  andi        $a0, $v0, 0xFFFF
    ctx->pc = 0x34ca74u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x34ca78: 0x30834000  andi        $v1, $a0, 0x4000
    ctx->pc = 0x34ca78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)16384);
    // 0x34ca7c: 0x5060000b  beql        $v1, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x34CA7Cu;
    {
        const bool branch_taken_0x34ca7c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x34ca7c) {
            ctx->pc = 0x34CA80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x34CA7Cu;
            // 0x34ca80: 0x30830200  andi        $v1, $a0, 0x200 (Delay Slot)
            SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)512);
            ctx->in_delay_slot = false;
            ctx->pc = 0x34CAACu;
            goto label_34caac;
        }
    }
    ctx->pc = 0x34CA84u;
    // 0x34ca84: 0x2404013e  addiu       $a0, $zero, 0x13E
    ctx->pc = 0x34ca84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 318));
    // 0x34ca88: 0xc0538fc  jal         func_14E3F0
    ctx->pc = 0x34CA88u;
    SET_GPR_U32(ctx, 31, 0x34CA90u);
    ctx->pc = 0x34CA8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34CA88u;
    // 0x34ca8c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E3F0u, 0x34CA88u, 0x34CA90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34CA90u;
label_34ca90:
    // 0x34ca90: 0x3c040035  lui         $a0, 0x35
    ctx->pc = 0x34ca90u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
    // 0x34ca94: 0xc0d0d60  jal         func_343580
    ctx->pc = 0x34CA94u;
    SET_GPR_U32(ctx, 31, 0x34CA9Cu);
    ctx->pc = 0x34CA98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34CA94u;
    // 0x34ca98: 0x2484b3a0  addiu       $a0, $a0, -0x4C60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294947744));
    ctx->in_delay_slot = false;
    ctx->pc = 0x343580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x343580u, 0x34CA94u, 0x34CA9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34CA9Cu;
label_34ca9c:
    // 0x34ca9c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x34ca9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34caa0: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x34caa0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x34caa4: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x34CAA4u;
    {
        const bool branch_taken_0x34caa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34CAA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34CAA4u;
        // 0x34caa8: 0xac644378  sw          $a0, 0x4378($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 17272), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34caa4) {
            ctx->pc = 0x34CB20u;
            goto label_34cb20;
        }
    }
    ctx->pc = 0x34CAACu;
label_34caac:
    // 0x34caac: 0x5060000f  beql        $v1, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x34CAACu;
    {
        const bool branch_taken_0x34caac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x34caac) {
            ctx->pc = 0x34CAB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x34CAACu;
            // 0x34cab0: 0x30830100  andi        $v1, $a0, 0x100 (Delay Slot)
            SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)256);
            ctx->in_delay_slot = false;
            ctx->pc = 0x34CAECu;
            goto label_34caec;
        }
    }
    ctx->pc = 0x34CAB4u;
    // 0x34cab4: 0x24040125  addiu       $a0, $zero, 0x125
    ctx->pc = 0x34cab4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 293));
    // 0x34cab8: 0xc0538fc  jal         func_14E3F0
    ctx->pc = 0x34CAB8u;
    SET_GPR_U32(ctx, 31, 0x34CAC0u);
    ctx->pc = 0x34CABCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34CAB8u;
    // 0x34cabc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E3F0u, 0x34CAB8u, 0x34CAC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34CAC0u;
label_34cac0:
    // 0x34cac0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x34cac0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x34cac4: 0x56020002  bnel        $s0, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x34CAC4u;
    {
        const bool branch_taken_0x34cac4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x34cac4) {
            ctx->pc = 0x34CAC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x34CAC4u;
            // 0x34cac8: 0x26030001  addiu       $v1, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x34CAD0u;
            goto label_34cad0;
        }
    }
    ctx->pc = 0x34CACCu;
    // 0x34cacc: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x34caccu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_34cad0:
    // 0x34cad0: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x34cad0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x34cad4: 0x3c040035  lui         $a0, 0x35
    ctx->pc = 0x34cad4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
    // 0x34cad8: 0x2484c8c0  addiu       $a0, $a0, -0x3740
    ctx->pc = 0x34cad8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953152));
    // 0x34cadc: 0xc082674  jal         func_2099D0
    ctx->pc = 0x34CADCu;
    SET_GPR_U32(ctx, 31, 0x34CAE4u);
    ctx->pc = 0x34CAE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34CADCu;
    // 0x34cae0: 0xa443be92  sh          $v1, -0x416E($v0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294950546), (uint16_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2099D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2099D0u, 0x34CADCu, 0x34CAE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34CAE4u;
label_34cae4:
    // 0x34cae4: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x34CAE4u;
    {
        const bool branch_taken_0x34cae4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34CAE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34CAE4u;
        // 0x34cae8: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34cae4) {
            ctx->pc = 0x34CB24u;
            goto label_34cb24;
        }
    }
    ctx->pc = 0x34CAECu;
label_34caec:
    // 0x34caec: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x34CAECu;
    {
        const bool branch_taken_0x34caec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x34caec) {
            ctx->pc = 0x34CB20u;
            goto label_34cb20;
        }
    }
    ctx->pc = 0x34CAF4u;
    // 0x34caf4: 0x24040125  addiu       $a0, $zero, 0x125
    ctx->pc = 0x34caf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 293));
    // 0x34caf8: 0xc0538fc  jal         func_14E3F0
    ctx->pc = 0x34CAF8u;
    SET_GPR_U32(ctx, 31, 0x34CB00u);
    ctx->pc = 0x34CAFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34CAF8u;
    // 0x34cafc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E3F0u, 0x34CAF8u, 0x34CB00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34CB00u;
label_34cb00:
    // 0x34cb00: 0x56000002  bnel        $s0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x34CB00u;
    {
        const bool branch_taken_0x34cb00 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x34cb00) {
            ctx->pc = 0x34CB04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x34CB00u;
            // 0x34cb04: 0x2603ffff  addiu       $v1, $s0, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x34CB0Cu;
            goto label_34cb0c;
        }
    }
    ctx->pc = 0x34CB08u;
    // 0x34cb08: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x34cb08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_34cb0c:
    // 0x34cb0c: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x34cb0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x34cb10: 0x3c040035  lui         $a0, 0x35
    ctx->pc = 0x34cb10u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
    // 0x34cb14: 0x2484c8c0  addiu       $a0, $a0, -0x3740
    ctx->pc = 0x34cb14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953152));
    // 0x34cb18: 0xc082674  jal         func_2099D0
    ctx->pc = 0x34CB18u;
    SET_GPR_U32(ctx, 31, 0x34CB20u);
    ctx->pc = 0x34CB1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34CB18u;
    // 0x34cb1c: 0xa443be92  sh          $v1, -0x416E($v0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294950546), (uint16_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2099D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2099D0u, 0x34CB18u, 0x34CB20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34CB20u;
label_34cb20:
    // 0x34cb20: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x34cb20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_34cb24:
    // 0x34cb24: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x34cb24u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34cb28: 0x3e00008  jr          $ra
    ctx->pc = 0x34CB28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34CB2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34CB28u;
        // 0x34cb2c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34CB28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34CB30u;
    // 0x34cb30: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x34cb30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x34cb34: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x34cb34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x34cb38: 0xc0d0c20  jal         func_343080
    ctx->pc = 0x34CB38u;
    SET_GPR_U32(ctx, 31, 0x34CB40u);
    ctx->pc = 0x343080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x343080u, 0x34CB38u, 0x34CB40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34CB40u;
label_34cb40:
    // 0x34cb40: 0x3c0201df  lui         $v0, 0x1DF
    ctx->pc = 0x34cb40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)479 << 16));
    // 0x34cb44: 0x24053530  addiu       $a1, $zero, 0x3530
    ctx->pc = 0x34cb44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13616));
    // 0x34cb48: 0x8c43dd80  lw          $v1, -0x2280($v0)
    ctx->pc = 0x34cb48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294958464)));
    // 0x34cb4c: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x34cb4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x34cb50: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x34cb50u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x34cb54: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x34cb54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x34cb58: 0x24020064  addiu       $v0, $zero, 0x64
    ctx->pc = 0x34cb58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x34cb5c: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x34cb5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x34cb60: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x34cb60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34cb64: 0xafa2001c  sw          $v0, 0x1C($sp)
    ctx->pc = 0x34cb64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 2));
    // 0x34cb68: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x34cb68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x34cb6c: 0x8c44eab8  lw          $a0, -0x1548($v0)
    ctx->pc = 0x34cb6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961848)));
    // 0x34cb70: 0xc083f96  jal         func_20FE58
    ctx->pc = 0x34CB70u;
    SET_GPR_U32(ctx, 31, 0x34CB78u);
    ctx->pc = 0x34CB74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34CB70u;
    // 0x34cb74: 0xafa30010  sw          $v1, 0x10($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20FE58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20FE58u, 0x34CB70u, 0x34CB78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34CB78u;
label_34cb78:
    // 0x34cb78: 0x3c040035  lui         $a0, 0x35
    ctx->pc = 0x34cb78u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
    // 0x34cb7c: 0xc0d1c98  jal         func_347260
    ctx->pc = 0x34CB7Cu;
    SET_GPR_U32(ctx, 31, 0x34CB84u);
    ctx->pc = 0x34CB80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34CB7Cu;
    // 0x34cb80: 0x2484cb90  addiu       $a0, $a0, -0x3470 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953872));
    ctx->in_delay_slot = false;
    ctx->pc = 0x347260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x347260u, 0x34CB7Cu, 0x34CB84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34CB84u;
label_34cb84:
    // 0x34cb84: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x34cb84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34cb88: 0x3e00008  jr          $ra
    ctx->pc = 0x34CB88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34CB8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34CB88u;
        // 0x34cb8c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34CB88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34CB90u;
    // 0x34cb90: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x34cb90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x34cb94: 0x3c0201df  lui         $v0, 0x1DF
    ctx->pc = 0x34cb94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)479 << 16));
    // 0x34cb98: 0x2442ddc0  addiu       $v0, $v0, -0x2240
    ctx->pc = 0x34cb98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958528));
    // 0x34cb9c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x34cb9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x34cba0: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x34cba0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x34cba4: 0x24460010  addiu       $a2, $v0, 0x10
    ctx->pc = 0x34cba4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x34cba8: 0xc0d2fe8  jal         func_34BFA0
    ctx->pc = 0x34CBA8u;
    SET_GPR_U32(ctx, 31, 0x34CBB0u);
    ctx->pc = 0x34CBACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34CBA8u;
    // 0x34cbac: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34BFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34BFA0u, 0x34CBA8u, 0x34CBB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34CBB0u;
label_34cbb0:
    // 0x34cbb0: 0x3c0201df  lui         $v0, 0x1DF
    ctx->pc = 0x34cbb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)479 << 16));
    // 0x34cbb4: 0x24053530  addiu       $a1, $zero, 0x3530
    ctx->pc = 0x34cbb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13616));
    // 0x34cbb8: 0x8c43dd80  lw          $v1, -0x2280($v0)
    ctx->pc = 0x34cbb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294958464)));
    // 0x34cbbc: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x34cbbcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x34cbc0: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x34cbc0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x34cbc4: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x34cbc4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x34cbc8: 0x2402006e  addiu       $v0, $zero, 0x6E
    ctx->pc = 0x34cbc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
    // 0x34cbcc: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x34cbccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x34cbd0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x34cbd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34cbd4: 0xafa2001c  sw          $v0, 0x1C($sp)
    ctx->pc = 0x34cbd4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 2));
    // 0x34cbd8: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x34cbd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x34cbdc: 0x8c44eab8  lw          $a0, -0x1548($v0)
    ctx->pc = 0x34cbdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961848)));
    // 0x34cbe0: 0xc083f96  jal         func_20FE58
    ctx->pc = 0x34CBE0u;
    SET_GPR_U32(ctx, 31, 0x34CBE8u);
    ctx->pc = 0x34CBE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34CBE0u;
    // 0x34cbe4: 0xafa30010  sw          $v1, 0x10($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20FE58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20FE58u, 0x34CBE0u, 0x34CBE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34CBE8u;
label_34cbe8:
    // 0x34cbe8: 0x3c040035  lui         $a0, 0x35
    ctx->pc = 0x34cbe8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
    // 0x34cbec: 0xc0d1c98  jal         func_347260
    ctx->pc = 0x34CBECu;
    SET_GPR_U32(ctx, 31, 0x34CBF4u);
    ctx->pc = 0x34CBF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34CBECu;
    // 0x34cbf0: 0x2484cc00  addiu       $a0, $a0, -0x3400 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953984));
    ctx->in_delay_slot = false;
    ctx->pc = 0x347260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x347260u, 0x34CBECu, 0x34CBF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34CBF4u;
label_34cbf4:
    // 0x34cbf4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x34cbf4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34cbf8: 0x3e00008  jr          $ra
    ctx->pc = 0x34CBF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34CBFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34CBF8u;
        // 0x34cbfc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34CBF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34CC00u;
    // 0x34cc00: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x34cc00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x34cc04: 0x3c0201df  lui         $v0, 0x1DF
    ctx->pc = 0x34cc04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)479 << 16));
    // 0x34cc08: 0x2442ddc0  addiu       $v0, $v0, -0x2240
    ctx->pc = 0x34cc08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958528));
    // 0x34cc0c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x34cc0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x34cc10: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x34cc10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x34cc14: 0x24460010  addiu       $a2, $v0, 0x10
    ctx->pc = 0x34cc14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x34cc18: 0xc0d2fe8  jal         func_34BFA0
    ctx->pc = 0x34CC18u;
    SET_GPR_U32(ctx, 31, 0x34CC20u);
    ctx->pc = 0x34CC1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34CC18u;
    // 0x34cc1c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34BFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34BFA0u, 0x34CC18u, 0x34CC20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34CC20u;
label_34cc20:
    // 0x34cc20: 0x3c0201df  lui         $v0, 0x1DF
    ctx->pc = 0x34cc20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)479 << 16));
    // 0x34cc24: 0x24053530  addiu       $a1, $zero, 0x3530
    ctx->pc = 0x34cc24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13616));
    // 0x34cc28: 0x8c43dd80  lw          $v1, -0x2280($v0)
    ctx->pc = 0x34cc28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294958464)));
    // 0x34cc2c: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x34cc2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x34cc30: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x34cc30u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x34cc34: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x34cc34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x34cc38: 0x24020078  addiu       $v0, $zero, 0x78
    ctx->pc = 0x34cc38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x34cc3c: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x34cc3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x34cc40: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x34cc40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34cc44: 0xafa2001c  sw          $v0, 0x1C($sp)
    ctx->pc = 0x34cc44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 2));
    // 0x34cc48: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x34cc48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x34cc4c: 0x8c44eab8  lw          $a0, -0x1548($v0)
    ctx->pc = 0x34cc4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961848)));
    // 0x34cc50: 0xc083f96  jal         func_20FE58
    ctx->pc = 0x34CC50u;
    SET_GPR_U32(ctx, 31, 0x34CC58u);
    ctx->pc = 0x34CC54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34CC50u;
    // 0x34cc54: 0xafa30010  sw          $v1, 0x10($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20FE58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20FE58u, 0x34CC50u, 0x34CC58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34CC58u;
label_34cc58:
    // 0x34cc58: 0x3c040035  lui         $a0, 0x35
    ctx->pc = 0x34cc58u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
    // 0x34cc5c: 0xc0d1c98  jal         func_347260
    ctx->pc = 0x34CC5Cu;
    SET_GPR_U32(ctx, 31, 0x34CC64u);
    ctx->pc = 0x34CC60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34CC5Cu;
    // 0x34cc60: 0x2484cc70  addiu       $a0, $a0, -0x3390 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954096));
    ctx->in_delay_slot = false;
    ctx->pc = 0x347260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x347260u, 0x34CC5Cu, 0x34CC64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34CC64u;
label_34cc64:
    // 0x34cc64: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x34cc64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34cc68: 0x3e00008  jr          $ra
    ctx->pc = 0x34CC68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34CC6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34CC68u;
        // 0x34cc6c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34CC68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34CC70u;
    // 0x34cc70: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x34cc70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x34cc74: 0x3c0201df  lui         $v0, 0x1DF
    ctx->pc = 0x34cc74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)479 << 16));
    // 0x34cc78: 0x2442ddc0  addiu       $v0, $v0, -0x2240
    ctx->pc = 0x34cc78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958528));
    // 0x34cc7c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x34cc7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x34cc80: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x34cc80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x34cc84: 0x24460010  addiu       $a2, $v0, 0x10
    ctx->pc = 0x34cc84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x34cc88: 0xc0d2fe8  jal         func_34BFA0
    ctx->pc = 0x34CC88u;
    SET_GPR_U32(ctx, 31, 0x34CC90u);
    ctx->pc = 0x34CC8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34CC88u;
    // 0x34cc8c: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34BFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34BFA0u, 0x34CC88u, 0x34CC90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34CC90u;
label_34cc90:
    // 0x34cc90: 0x3c040035  lui         $a0, 0x35
    ctx->pc = 0x34cc90u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
    // 0x34cc94: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x34cc94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34cc98: 0xc082678  jal         func_2099E0
    ctx->pc = 0x34CC98u;
    SET_GPR_U32(ctx, 31, 0x34CCA0u);
    ctx->pc = 0x34CC9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34CC98u;
    // 0x34cc9c: 0x2484b870  addiu       $a0, $a0, -0x4790 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948976));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2099E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2099E0u, 0x34CC98u, 0x34CCA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34CCA0u;
label_34cca0:
    // 0x34cca0: 0x3c040035  lui         $a0, 0x35
    ctx->pc = 0x34cca0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
    // 0x34cca4: 0xc0d0d18  jal         func_343460
    ctx->pc = 0x34CCA4u;
    SET_GPR_U32(ctx, 31, 0x34CCACu);
    ctx->pc = 0x34CCA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34CCA4u;
    // 0x34cca8: 0x2484ccc0  addiu       $a0, $a0, -0x3340 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x343460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x343460u, 0x34CCA4u, 0x34CCACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34CCACu;
label_34ccac:
    // 0x34ccac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x34ccacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34ccb0: 0x3e00008  jr          $ra
    ctx->pc = 0x34CCB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34CCB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34CCB0u;
        // 0x34ccb4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34CCB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34CCB8u;
    // 0x34ccb8: 0x0  nop
    ctx->pc = 0x34ccb8u;
    // NOP
    // 0x34ccbc: 0x0  nop
    ctx->pc = 0x34ccbcu;
    // NOP
    // 0x34ccc0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x34ccc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x34ccc4: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x34ccc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x34ccc8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x34ccc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x34cccc: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x34ccccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x34ccd0: 0xc068d08  jal         func_1A3420
    ctx->pc = 0x34CCD0u;
    SET_GPR_U32(ctx, 31, 0x34CCD8u);
    ctx->pc = 0x34CCD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34CCD0u;
    // 0x34ccd4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A3420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A3420u, 0x34CCD0u, 0x34CCD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34CCD8u;
label_34ccd8:
    // 0x34ccd8: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x34ccd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x34ccdc: 0x30634000  andi        $v1, $v1, 0x4000
    ctx->pc = 0x34ccdcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16384);
    // 0x34cce0: 0x50600008  beql        $v1, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x34CCE0u;
    {
        const bool branch_taken_0x34cce0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x34cce0) {
            ctx->pc = 0x34CCE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x34CCE0u;
            // 0x34cce4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x34CD04u;
            goto label_34cd04;
        }
    }
    ctx->pc = 0x34CCE8u;
    // 0x34cce8: 0x2404013e  addiu       $a0, $zero, 0x13E
    ctx->pc = 0x34cce8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 318));
    // 0x34ccec: 0xc0538fc  jal         func_14E3F0
    ctx->pc = 0x34CCECu;
    SET_GPR_U32(ctx, 31, 0x34CCF4u);
    ctx->pc = 0x34CCF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34CCECu;
    // 0x34ccf0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E3F0u, 0x34CCECu, 0x34CCF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34CCF4u;
label_34ccf4:
    // 0x34ccf4: 0x3c040035  lui         $a0, 0x35
    ctx->pc = 0x34ccf4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
    // 0x34ccf8: 0xc0d0d60  jal         func_343580
    ctx->pc = 0x34CCF8u;
    SET_GPR_U32(ctx, 31, 0x34CD00u);
    ctx->pc = 0x34CCFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34CCF8u;
    // 0x34ccfc: 0x2484b3a0  addiu       $a0, $a0, -0x4C60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294947744));
    ctx->in_delay_slot = false;
    ctx->pc = 0x343580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x343580u, 0x34CCF8u, 0x34CD00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34CD00u;
label_34cd00:
    // 0x34cd00: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x34cd00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_34cd04:
    // 0x34cd04: 0x3e00008  jr          $ra
    ctx->pc = 0x34CD04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34CD08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34CD04u;
        // 0x34cd08: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34CD04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34CD0Cu;
    // 0x34cd0c: 0x0  nop
    ctx->pc = 0x34cd0cu;
    // NOP
    // 0x34cd10: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x34cd10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x34cd14: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x34cd14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34cd18: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x34cd18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x34cd1c: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x34cd1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x34cd20: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x34CD20u;
    SET_GPR_U32(ctx, 31, 0x34CD28u);
    ctx->pc = 0x34CD24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34CD20u;
    // 0x34cd24: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1272D8u, 0x34CD20u, 0x34CD28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34CD28u;
label_34cd28:
    // 0x34cd28: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x34cd28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x34cd2c: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x34cd2cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x34cd30: 0x8c424068  lw          $v0, 0x4068($v0)
    ctx->pc = 0x34cd30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16488)));
    // 0x34cd34: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x34cd34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x34cd38: 0x27a40018  addiu       $a0, $sp, 0x18
    ctx->pc = 0x34cd38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
    // 0x34cd3c: 0x24a550c0  addiu       $a1, $a1, 0x50C0
    ctx->pc = 0x34cd3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20672));
    // 0x34cd40: 0x8c4200a4  lw          $v0, 0xA4($v0)
    ctx->pc = 0x34cd40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 164)));
    // 0x34cd44: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x34cd44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x34cd48: 0xc04a7dc  jal         func_129F70
    ctx->pc = 0x34CD48u;
    SET_GPR_U32(ctx, 31, 0x34CD50u);
    ctx->pc = 0x34CD4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34CD48u;
    // 0x34cd4c: 0xafa30014  sw          $v1, 0x14($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x129F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129F70u, 0x34CD48u, 0x34CD50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34CD50u;
label_34cd50:
    // 0x34cd50: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x34cd50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x34cd54: 0x3c0301df  lui         $v1, 0x1DF
    ctx->pc = 0x34cd54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)479 << 16));
    // 0x34cd58: 0x8c484068  lw          $t0, 0x4068($v0)
    ctx->pc = 0x34cd58u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16488)));
    // 0x34cd5c: 0x24053130  addiu       $a1, $zero, 0x3130
    ctx->pc = 0x34cd5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12592));
    // 0x34cd60: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x34cd60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x34cd64: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x34cd64u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x34cd68: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x34cd68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x34cd6c: 0x8c44eab8  lw          $a0, -0x1548($v0)
    ctx->pc = 0x34cd6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961848)));
    // 0x34cd70: 0x8d0200a4  lw          $v0, 0xA4($t0)
    ctx->pc = 0x34cd70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 164)));
    // 0x34cd74: 0xc083f96  jal         func_20FE58
    ctx->pc = 0x34CD74u;
    SET_GPR_U32(ctx, 31, 0x34CD7Cu);
    ctx->pc = 0x34CD78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34CD74u;
    // 0x34cd78: 0xac62dd80  sw          $v0, -0x2280($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294958464), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20FE58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20FE58u, 0x34CD74u, 0x34CD7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34CD7Cu;
label_34cd7c:
    // 0x34cd7c: 0x3c040035  lui         $a0, 0x35
    ctx->pc = 0x34cd7cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
    // 0x34cd80: 0xc0d1c98  jal         func_347260
    ctx->pc = 0x34CD80u;
    SET_GPR_U32(ctx, 31, 0x34CD88u);
    ctx->pc = 0x34CD84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34CD80u;
    // 0x34cd84: 0x2484cda0  addiu       $a0, $a0, -0x3260 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954400));
    ctx->in_delay_slot = false;
    ctx->pc = 0x347260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x347260u, 0x34CD80u, 0x34CD88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34CD88u;
label_34cd88:
    // 0x34cd88: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x34cd88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34cd8c: 0x3e00008  jr          $ra
    ctx->pc = 0x34CD8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34CD90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34CD8Cu;
        // 0x34cd90: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34CD8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34CD94u;
    // 0x34cd94: 0x0  nop
    ctx->pc = 0x34cd94u;
    // NOP
    // 0x34cd98: 0x0  nop
    ctx->pc = 0x34cd98u;
    // NOP
    // 0x34cd9c: 0x0  nop
    ctx->pc = 0x34cd9cu;
    // NOP
    // 0x34cda0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x34cda0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x34cda4: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x34cda4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x34cda8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x34cda8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x34cdac: 0x24844420  addiu       $a0, $a0, 0x4420
    ctx->pc = 0x34cdacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17440));
    // 0x34cdb0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x34cdb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x34cdb4: 0x3c1001df  lui         $s0, 0x1DF
    ctx->pc = 0x34cdb4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)479 << 16));
    // 0x34cdb8: 0x2610ddc0  addiu       $s0, $s0, -0x2240
    ctx->pc = 0x34cdb8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294958528));
    // 0x34cdbc: 0xc04a7dc  jal         func_129F70
    ctx->pc = 0x34CDBCu;
    SET_GPR_U32(ctx, 31, 0x34CDC4u);
    ctx->pc = 0x34CDC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34CDBCu;
    // 0x34cdc0: 0x2605000c  addiu       $a1, $s0, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x129F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129F70u, 0x34CDBCu, 0x34CDC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34CDC4u;
label_34cdc4:
    // 0x34cdc4: 0x8e03004c  lw          $v1, 0x4C($s0)
    ctx->pc = 0x34cdc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x34cdc8: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x34cdc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x34cdcc: 0x3c040035  lui         $a0, 0x35
    ctx->pc = 0x34cdccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
    // 0x34cdd0: 0x2484cdf0  addiu       $a0, $a0, -0x3210
    ctx->pc = 0x34cdd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954480));
    // 0x34cdd4: 0xc082674  jal         func_2099D0
    ctx->pc = 0x34CDD4u;
    SET_GPR_U32(ctx, 31, 0x34CDDCu);
    ctx->pc = 0x34CDD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34CDD4u;
    // 0x34cdd8: 0xac434520  sw          $v1, 0x4520($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 17696), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2099D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2099D0u, 0x34CDD4u, 0x34CDDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34CDDCu;
label_34cddc:
    // 0x34cddc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x34cddcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x34cde0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x34cde0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34cde4: 0x3e00008  jr          $ra
    ctx->pc = 0x34CDE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34CDE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34CDE4u;
        // 0x34cde8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34CDE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34CDECu;
    // 0x34cdec: 0x0  nop
    ctx->pc = 0x34cdecu;
    // NOP
    // 0x34cdf0: 0x24040100  addiu       $a0, $zero, 0x100
    ctx->pc = 0x34cdf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x34cdf4: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x34cdf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x34cdf8: 0xac449478  sw          $a0, -0x6B88($v0)
    ctx->pc = 0x34cdf8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294939768), GPR_U32(ctx, 4));
    // 0x34cdfc: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x34cdfcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x34ce00: 0x2463ff88  addiu       $v1, $v1, -0x78
    ctx->pc = 0x34ce00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967176));
    // 0x34ce04: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x34ce04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x34ce08: 0xac43eab8  sw          $v1, -0x1548($v0)
    ctx->pc = 0x34ce08u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294961848), GPR_U32(ctx, 3));
    // 0x34ce0c: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x34ce0cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x34ce10: 0x24844420  addiu       $a0, $a0, 0x4420
    ctx->pc = 0x34ce10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17440));
    // 0x34ce14: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x34ce14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x34ce18: 0xac44ead0  sw          $a0, -0x1530($v0)
    ctx->pc = 0x34ce18u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294961872), GPR_U32(ctx, 4));
    // 0x34ce1c: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x34ce1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x34ce20: 0x3c040034  lui         $a0, 0x34
    ctx->pc = 0x34ce20u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52 << 16));
    // 0x34ce24: 0x3c050035  lui         $a1, 0x35
    ctx->pc = 0x34ce24u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)53 << 16));
    // 0x34ce28: 0x246321d0  addiu       $v1, $v1, 0x21D0
    ctx->pc = 0x34ce28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8656));
    // 0x34ce2c: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x34ce2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x34ce30: 0xac4340a0  sw          $v1, 0x40A0($v0)
    ctx->pc = 0x34ce30u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16544), GPR_U32(ctx, 3));
    // 0x34ce34: 0x24846f30  addiu       $a0, $a0, 0x6F30
    ctx->pc = 0x34ce34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 28464));
    // 0x34ce38: 0x80558d4  j           func_156350
    ctx->pc = 0x34CE38u;
    ctx->pc = 0x34CE3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34CE38u;
    // 0x34ce3c: 0x24a5ce40  addiu       $a1, $a1, -0x31C0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954560));
    ctx->in_delay_slot = false;
    ctx->pc = 0x156350u;
    sub_00156350_0x156350(rdram, ctx, runtime); return;
    ctx->pc = 0x34CE40u;
    // 0x34ce40: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x34ce40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x34ce44: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x34ce44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34ce48: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x34ce48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x34ce4c: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x34ce4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x34ce50: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x34CE50u;
    SET_GPR_U32(ctx, 31, 0x34CE58u);
    ctx->pc = 0x34CE54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34CE50u;
    // 0x34ce54: 0x2406002c  addiu       $a2, $zero, 0x2C (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1272D8u, 0x34CE50u, 0x34CE58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34CE58u;
label_34ce58:
    // 0x34ce58: 0x3c0201df  lui         $v0, 0x1DF
    ctx->pc = 0x34ce58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)479 << 16));
    // 0x34ce5c: 0x3c0501df  lui         $a1, 0x1DF
    ctx->pc = 0x34ce5cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)479 << 16));
    // 0x34ce60: 0x8c42dd80  lw          $v0, -0x2280($v0)
    ctx->pc = 0x34ce60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294958464)));
    // 0x34ce64: 0x27a40014  addiu       $a0, $sp, 0x14
    ctx->pc = 0x34ce64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
    // 0x34ce68: 0x24a5dda0  addiu       $a1, $a1, -0x2260
    ctx->pc = 0x34ce68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958496));
    // 0x34ce6c: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x34ce6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x34ce70: 0xc049c48  jal         func_127120
    ctx->pc = 0x34CE70u;
    SET_GPR_U32(ctx, 31, 0x34CE78u);
    ctx->pc = 0x34CE74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34CE70u;
    // 0x34ce74: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127120u, 0x34CE70u, 0x34CE78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34CE78u;
label_34ce78:
    // 0x34ce78: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x34ce78u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x34ce7c: 0x27a40034  addiu       $a0, $sp, 0x34
    ctx->pc = 0x34ce7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 52));
    // 0x34ce80: 0xc04a7dc  jal         func_129F70
    ctx->pc = 0x34CE80u;
    SET_GPR_U32(ctx, 31, 0x34CE88u);
    ctx->pc = 0x34CE84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34CE80u;
    // 0x34ce84: 0x24a55200  addiu       $a1, $a1, 0x5200 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20992));
    ctx->in_delay_slot = false;
    ctx->pc = 0x129F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129F70u, 0x34CE80u, 0x34CE88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34CE88u;
label_34ce88:
    // 0x34ce88: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x34ce88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x34ce8c: 0x24051010  addiu       $a1, $zero, 0x1010
    ctx->pc = 0x34ce8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4112));
    // 0x34ce90: 0x8c44eab8  lw          $a0, -0x1548($v0)
    ctx->pc = 0x34ce90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961848)));
    // 0x34ce94: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x34ce94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x34ce98: 0xc083f96  jal         func_20FE58
    ctx->pc = 0x34CE98u;
    SET_GPR_U32(ctx, 31, 0x34CEA0u);
    ctx->pc = 0x34CE9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34CE98u;
    // 0x34ce9c: 0x2407002c  addiu       $a3, $zero, 0x2C (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20FE58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20FE58u, 0x34CE98u, 0x34CEA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34CEA0u;
label_34cea0:
    // 0x34cea0: 0x3c040035  lui         $a0, 0x35
    ctx->pc = 0x34cea0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
    // 0x34cea4: 0xc0d1c98  jal         func_347260
    ctx->pc = 0x34CEA4u;
    SET_GPR_U32(ctx, 31, 0x34CEACu);
    ctx->pc = 0x34CEA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34CEA4u;
    // 0x34cea8: 0x2484cec0  addiu       $a0, $a0, -0x3140 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x347260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x347260u, 0x34CEA4u, 0x34CEACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34CEACu;
label_34ceac:
    // 0x34ceac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x34ceacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34ceb0: 0x3e00008  jr          $ra
    ctx->pc = 0x34CEB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34CEB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34CEB0u;
        // 0x34ceb4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34CEB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34CEB8u;
    // 0x34ceb8: 0x0  nop
    ctx->pc = 0x34ceb8u;
    // NOP
    // 0x34cebc: 0x0  nop
    ctx->pc = 0x34cebcu;
    // NOP
    // 0x34cec0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x34cec0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x34cec4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x34cec4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x34cec8: 0xc0d0c20  jal         func_343080
    ctx->pc = 0x34CEC8u;
    SET_GPR_U32(ctx, 31, 0x34CED0u);
    ctx->pc = 0x343080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x343080u, 0x34CEC8u, 0x34CED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34CED0u;
label_34ced0:
    // 0x34ced0: 0x3c040035  lui         $a0, 0x35
    ctx->pc = 0x34ced0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
    // 0x34ced4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x34ced4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34ced8: 0xc082678  jal         func_2099E0
    ctx->pc = 0x34CED8u;
    SET_GPR_U32(ctx, 31, 0x34CEE0u);
    ctx->pc = 0x34CEDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34CED8u;
    // 0x34cedc: 0x2484d390  addiu       $a0, $a0, -0x2C70 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955920));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2099E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2099E0u, 0x34CED8u, 0x34CEE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34CEE0u;
label_34cee0:
    // 0x34cee0: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x34cee0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x34cee4: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x34cee4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x34cee8: 0x3c040035  lui         $a0, 0x35
    ctx->pc = 0x34cee8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
    // 0x34ceec: 0xac604370  sw          $zero, 0x4370($v1)
    ctx->pc = 0x34ceecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 17264), GPR_U32(ctx, 0));
    // 0x34cef0: 0x2484cf10  addiu       $a0, $a0, -0x30F0
    ctx->pc = 0x34cef0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954768));
    // 0x34cef4: 0xc0d0d18  jal         func_343460
    ctx->pc = 0x34CEF4u;
    SET_GPR_U32(ctx, 31, 0x34CEFCu);
    ctx->pc = 0x34CEF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34CEF4u;
    // 0x34cef8: 0xac404378  sw          $zero, 0x4378($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 17272), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x343460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x343460u, 0x34CEF4u, 0x34CEFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34CEFCu;
label_34cefc:
    // 0x34cefc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x34cefcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34cf00: 0x3e00008  jr          $ra
    ctx->pc = 0x34CF00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34CF04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34CF00u;
        // 0x34cf04: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34CF00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34CF08u;
    // 0x34cf08: 0x0  nop
    ctx->pc = 0x34cf08u;
    // NOP
    // 0x34cf0c: 0x0  nop
    ctx->pc = 0x34cf0cu;
    // NOP
    // 0x34cf10: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x34cf10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x34cf14: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x34cf14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x34cf18: 0xc0d0c20  jal         func_343080
    ctx->pc = 0x34CF18u;
    SET_GPR_U32(ctx, 31, 0x34CF20u);
    ctx->pc = 0x343080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x343080u, 0x34CF18u, 0x34CF20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34CF20u;
label_34cf20:
    // 0x34cf20: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x34cf20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x34cf24: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x34cf24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34cf28: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x34CF28u;
    SET_GPR_U32(ctx, 31, 0x34CF30u);
    ctx->pc = 0x34CF2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34CF28u;
    // 0x34cf2c: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1272D8u, 0x34CF28u, 0x34CF30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34CF30u;
label_34cf30:
    // 0x34cf30: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x34cf30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x34cf34: 0x24051410  addiu       $a1, $zero, 0x1410
    ctx->pc = 0x34cf34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5136));
    // 0x34cf38: 0x8c434370  lw          $v1, 0x4370($v0)
    ctx->pc = 0x34cf38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17264)));
    // 0x34cf3c: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x34cf3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x34cf40: 0x2407000c  addiu       $a3, $zero, 0xC
    ctx->pc = 0x34cf40u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x34cf44: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x34cf44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x34cf48: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x34cf48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x34cf4c: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x34cf4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x34cf50: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x34cf50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x34cf54: 0x8c44eab8  lw          $a0, -0x1548($v0)
    ctx->pc = 0x34cf54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961848)));
    // 0x34cf58: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x34cf58u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x34cf5c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x34cf5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x34cf60: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x34cf60u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x34cf64: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x34cf64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x34cf68: 0xc083f96  jal         func_20FE58
    ctx->pc = 0x34CF68u;
    SET_GPR_U32(ctx, 31, 0x34CF70u);
    ctx->pc = 0x34CF6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34CF68u;
    // 0x34cf6c: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20FE58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20FE58u, 0x34CF68u, 0x34CF70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34CF70u;
label_34cf70:
    // 0x34cf70: 0x3c040035  lui         $a0, 0x35
    ctx->pc = 0x34cf70u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
    // 0x34cf74: 0xc0d1c98  jal         func_347260
    ctx->pc = 0x34CF74u;
    SET_GPR_U32(ctx, 31, 0x34CF7Cu);
    ctx->pc = 0x34CF78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34CF74u;
    // 0x34cf78: 0x2484cf90  addiu       $a0, $a0, -0x3070 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954896));
    ctx->in_delay_slot = false;
    ctx->pc = 0x347260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x347260u, 0x34CF74u, 0x34CF7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34CF7Cu;
label_34cf7c:
    // 0x34cf7c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x34cf7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34cf80: 0x3e00008  jr          $ra
    ctx->pc = 0x34CF80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34CF84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34CF80u;
        // 0x34cf84: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34CF80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34CF88u;
    // 0x34cf88: 0x0  nop
    ctx->pc = 0x34cf88u;
    // NOP
    // 0x34cf8c: 0x0  nop
    ctx->pc = 0x34cf8cu;
    // NOP
    // 0x34cf90: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x34cf90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x34cf94: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x34cf94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x34cf98: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x34cf98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x34cf9c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x34cf9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x34cfa0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x34cfa0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x34cfa4: 0x3c1201df  lui         $s2, 0x1DF
    ctx->pc = 0x34cfa4u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)479 << 16));
    // 0x34cfa8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x34cfa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x34cfac: 0x2652ddc0  addiu       $s2, $s2, -0x2240
    ctx->pc = 0x34cfacu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294958528));
    // 0x34cfb0: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x34cfb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x34cfb4: 0x1040003e  beqz        $v0, . + 4 + (0x3E << 2)
    ctx->pc = 0x34CFB4u;
    {
        const bool branch_taken_0x34cfb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x34cfb4) {
            ctx->pc = 0x34D0B0u;
            goto label_34d0b0;
        }
    }
    ctx->pc = 0x34CFBCu;
    // 0x34cfbc: 0x1840003c  blez        $v0, . + 4 + (0x3C << 2)
    ctx->pc = 0x34CFBCu;
    {
        const bool branch_taken_0x34cfbc = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x34CFC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34CFBCu;
        // 0x34cfc0: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34cfbc) {
            ctx->pc = 0x34D0B0u;
            goto label_34d0b0;
        }
    }
    ctx->pc = 0x34CFC4u;
    // 0x34cfc4: 0x3267ffff  andi        $a3, $s3, 0xFFFF
    ctx->pc = 0x34cfc4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)65535);
label_34cfc8:
    // 0x34cfc8: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x34cfc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x34cfcc: 0x71880  sll         $v1, $a3, 2
    ctx->pc = 0x34cfccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x34cfd0: 0x8c444090  lw          $a0, 0x4090($v0)
    ctx->pc = 0x34cfd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16528)));
    // 0x34cfd4: 0x673021  addu        $a2, $v1, $a3
    ctx->pc = 0x34cfd4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x34cfd8: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x34cfd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x34cfdc: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x34cfdcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x34cfe0: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x34cfe0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x34cfe4: 0x710c0  sll         $v0, $a3, 3
    ctx->pc = 0x34cfe4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x34cfe8: 0x471821  addu        $v1, $v0, $a3
    ctx->pc = 0x34cfe8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x34cfec: 0x688c0  sll         $s1, $a2, 3
    ctx->pc = 0x34cfecu;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x34cff0: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x34cff0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x34cff4: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x34cff4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x34cff8: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x34cff8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x34cffc: 0x911821  addu        $v1, $a0, $s1
    ctx->pc = 0x34cffcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x34d000: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x34d000u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x34d004: 0xa0650000  sb          $a1, 0x0($v1)
    ctx->pc = 0x34d004u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x34d008: 0x2421821  addu        $v1, $s2, $v0
    ctx->pc = 0x34d008u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x34d00c: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x34d00cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x34d010: 0x247000a0  addiu       $s0, $v1, 0xA0
    ctx->pc = 0x34d010u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 160));
    // 0x34d014: 0x8c424090  lw          $v0, 0x4090($v0)
    ctx->pc = 0x34d014u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16528)));
    // 0x34d018: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x34d018u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34d01c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x34d01cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x34d020: 0xc049c48  jal         func_127120
    ctx->pc = 0x34D020u;
    SET_GPR_U32(ctx, 31, 0x34D028u);
    ctx->pc = 0x34D024u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34D020u;
    // 0x34d024: 0x24440001  addiu       $a0, $v0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127120u, 0x34D020u, 0x34D028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34D028u;
label_34d028:
    // 0x34d028: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x34d028u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x34d02c: 0x2605001a  addiu       $a1, $s0, 0x1A
    ctx->pc = 0x34d02cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 26));
    // 0x34d030: 0x8c434090  lw          $v1, 0x4090($v0)
    ctx->pc = 0x34d030u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16528)));
    // 0x34d034: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x34d034u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x34d038: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x34d038u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x34d03c: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x34d03cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x34d040: 0xa0600010  sb          $zero, 0x10($v1)
    ctx->pc = 0x34d040u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 16), (uint8_t)GPR_U32(ctx, 0));
    // 0x34d044: 0x8c424090  lw          $v0, 0x4090($v0)
    ctx->pc = 0x34d044u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16528)));
    // 0x34d048: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x34d048u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x34d04c: 0xc049c48  jal         func_127120
    ctx->pc = 0x34D04Cu;
    SET_GPR_U32(ctx, 31, 0x34D054u);
    ctx->pc = 0x34D050u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34D04Cu;
    // 0x34d050: 0x24440022  addiu       $a0, $v0, 0x22 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 34));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127120u, 0x34D04Cu, 0x34D054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34D054u;
label_34d054:
    // 0x34d054: 0x3c03003d  lui         $v1, 0x3D
    ctx->pc = 0x34d054u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)61 << 16));
    // 0x34d058: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x34d058u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x34d05c: 0x8c634090  lw          $v1, 0x4090($v1)
    ctx->pc = 0x34d05cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16528)));
    // 0x34d060: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x34d060u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x34d064: 0xa0600031  sb          $zero, 0x31($v1)
    ctx->pc = 0x34d064u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 49), (uint8_t)GPR_U32(ctx, 0));
    // 0x34d068: 0x8c424090  lw          $v0, 0x4090($v0)
    ctx->pc = 0x34d068u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16528)));
    // 0x34d06c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x34d06cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x34d070: 0x24440044  addiu       $a0, $v0, 0x44
    ctx->pc = 0x34d070u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 68));
    // 0x34d074: 0xc0835cc  jal         func_20D730
    ctx->pc = 0x34D074u;
    SET_GPR_U32(ctx, 31, 0x34D07Cu);
    ctx->pc = 0x34D078u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34D074u;
    // 0x34d078: 0x24450001  addiu       $a1, $v0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20D730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20D730u, 0x34D074u, 0x34D07Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34D07Cu;
label_34d07c:
    // 0x34d07c: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x34d07cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x34d080: 0x8c424090  lw          $v0, 0x4090($v0)
    ctx->pc = 0x34d080u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16528)));
    // 0x34d084: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x34d084u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x34d088: 0x24440086  addiu       $a0, $v0, 0x86
    ctx->pc = 0x34d088u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 134));
    // 0x34d08c: 0xc0835cc  jal         func_20D730
    ctx->pc = 0x34D08Cu;
    SET_GPR_U32(ctx, 31, 0x34D094u);
    ctx->pc = 0x34D090u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34D08Cu;
    // 0x34d090: 0x24450022  addiu       $a1, $v0, 0x22 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 34));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20D730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20D730u, 0x34D08Cu, 0x34D094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34D094u;
label_34d094:
    // 0x34d094: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x34d094u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x34d098: 0x26630001  addiu       $v1, $s3, 0x1
    ctx->pc = 0x34d098u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x34d09c: 0x3073ffff  andi        $s3, $v1, 0xFFFF
    ctx->pc = 0x34d09cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x34d0a0: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x34d0a0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x34d0a4: 0x5440ffc8  bnel        $v0, $zero, . + 4 + (-0x38 << 2)
    ctx->pc = 0x34D0A4u;
    {
        const bool branch_taken_0x34d0a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x34d0a4) {
            ctx->pc = 0x34D0A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x34D0A4u;
            // 0x34d0a8: 0x3267ffff  andi        $a3, $s3, 0xFFFF (Delay Slot)
            SET_GPR_U64(ctx, 7, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)65535);
            ctx->in_delay_slot = false;
            ctx->pc = 0x34CFC8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_34cfc8;
        }
    }
    ctx->pc = 0x34D0ACu;
    // 0x34d0ac: 0x0  nop
    ctx->pc = 0x34d0acu;
    // NOP
label_34d0b0:
    // 0x34d0b0: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x34d0b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x34d0b4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x34d0b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34d0b8: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x34D0B8u;
    SET_GPR_U32(ctx, 31, 0x34D0C0u);
    ctx->pc = 0x34D0BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34D0B8u;
    // 0x34d0bc: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1272D8u, 0x34D0B8u, 0x34D0C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34D0C0u;
label_34d0c0:
    // 0x34d0c0: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x34d0c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x34d0c4: 0x24051410  addiu       $a1, $zero, 0x1410
    ctx->pc = 0x34d0c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5136));
    // 0x34d0c8: 0x8c434370  lw          $v1, 0x4370($v0)
    ctx->pc = 0x34d0c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17264)));
    // 0x34d0cc: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x34d0ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x34d0d0: 0x2407000c  addiu       $a3, $zero, 0xC
    ctx->pc = 0x34d0d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x34d0d4: 0xafa00050  sw          $zero, 0x50($sp)
    ctx->pc = 0x34d0d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
    // 0x34d0d8: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x34d0d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x34d0dc: 0xafa20058  sw          $v0, 0x58($sp)
    ctx->pc = 0x34d0dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 2));
    // 0x34d0e0: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x34d0e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x34d0e4: 0x8c44eab8  lw          $a0, -0x1548($v0)
    ctx->pc = 0x34d0e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961848)));
    // 0x34d0e8: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x34d0e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x34d0ec: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x34d0ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x34d0f0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x34d0f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x34d0f4: 0x2442000b  addiu       $v0, $v0, 0xB
    ctx->pc = 0x34d0f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11));
    // 0x34d0f8: 0xc083f96  jal         func_20FE58
    ctx->pc = 0x34D0F8u;
    SET_GPR_U32(ctx, 31, 0x34D100u);
    ctx->pc = 0x34D0FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34D0F8u;
    // 0x34d0fc: 0xafa20054  sw          $v0, 0x54($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20FE58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20FE58u, 0x34D0F8u, 0x34D100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34D100u;
label_34d100:
    // 0x34d100: 0x3c040035  lui         $a0, 0x35
    ctx->pc = 0x34d100u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
    // 0x34d104: 0xc0d1c98  jal         func_347260
    ctx->pc = 0x34D104u;
    SET_GPR_U32(ctx, 31, 0x34D10Cu);
    ctx->pc = 0x34D108u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34D104u;
    // 0x34d108: 0x2484d130  addiu       $a0, $a0, -0x2ED0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955312));
    ctx->in_delay_slot = false;
    ctx->pc = 0x347260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x347260u, 0x34D104u, 0x34D10Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34D10Cu;
label_34d10c:
    // 0x34d10c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x34d10cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x34d110: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x34d110u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x34d114: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x34d114u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x34d118: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x34d118u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x34d11c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x34d11cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34d120: 0x3e00008  jr          $ra
    ctx->pc = 0x34D120u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34D124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34D120u;
        // 0x34d124: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34D120u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34D128u;
    // 0x34d128: 0x0  nop
    ctx->pc = 0x34d128u;
    // NOP
    // 0x34d12c: 0x0  nop
    ctx->pc = 0x34d12cu;
    // NOP
    // 0x34d130: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x34d130u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x34d134: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x34d134u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x34d138: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x34d138u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x34d13c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x34d13cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x34d140: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x34d140u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x34d144: 0x3c1301df  lui         $s3, 0x1DF
    ctx->pc = 0x34d144u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)479 << 16));
    // 0x34d148: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x34d148u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x34d14c: 0x2673ddc0  addiu       $s3, $s3, -0x2240
    ctx->pc = 0x34d14cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294958528));
    // 0x34d150: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x34d150u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x34d154: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x34d154u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x34d158: 0x10400043  beqz        $v0, . + 4 + (0x43 << 2)
    ctx->pc = 0x34D158u;
    {
        const bool branch_taken_0x34d158 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x34d158) {
            ctx->pc = 0x34D268u;
            goto label_34d268;
        }
    }
    ctx->pc = 0x34D160u;
    // 0x34d160: 0x18400041  blez        $v0, . + 4 + (0x41 << 2)
    ctx->pc = 0x34D160u;
    {
        const bool branch_taken_0x34d160 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x34D164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34D160u;
        // 0x34d164: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34d160) {
            ctx->pc = 0x34D268u;
            goto label_34d268;
        }
    }
    ctx->pc = 0x34D168u;
label_34d168:
    // 0x34d168: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x34d168u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x34d16c: 0x3285ffff  andi        $a1, $s4, 0xFFFF
    ctx->pc = 0x34d16cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)65535);
    // 0x34d170: 0x8c444090  lw          $a0, 0x4090($v0)
    ctx->pc = 0x34d170u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16528)));
    // 0x34d174: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x34d174u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x34d178: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x34d178u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x34d17c: 0x240600ff  addiu       $a2, $zero, 0xFF
    ctx->pc = 0x34d17cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x34d180: 0x24a5000a  addiu       $a1, $a1, 0xA
    ctx->pc = 0x34d180u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10));
    // 0x34d184: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x34d184u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x34d188: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x34d188u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x34d18c: 0x390c0  sll         $s2, $v1, 3
    ctx->pc = 0x34d18cu;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x34d190: 0x510c0  sll         $v0, $a1, 3
    ctx->pc = 0x34d190u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x34d194: 0x451821  addu        $v1, $v0, $a1
    ctx->pc = 0x34d194u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x34d198: 0x922021  addu        $a0, $a0, $s2
    ctx->pc = 0x34d198u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
    // 0x34d19c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x34d19cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x34d1a0: 0xa08607d0  sb          $a2, 0x7D0($a0)
    ctx->pc = 0x34d1a0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2000), (uint8_t)GPR_U32(ctx, 6));
    // 0x34d1a4: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x34d1a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x34d1a8: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x34d1a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x34d1ac: 0x220c0  sll         $a0, $v0, 3
    ctx->pc = 0x34d1acu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x34d1b0: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x34d1b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x34d1b4: 0x451821  addu        $v1, $v0, $a1
    ctx->pc = 0x34d1b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x34d1b8: 0x2641021  addu        $v0, $s3, $a0
    ctx->pc = 0x34d1b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
    // 0x34d1bc: 0x245100a0  addiu       $s1, $v0, 0xA0
    ctx->pc = 0x34d1bcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
    // 0x34d1c0: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x34d1c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x34d1c4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x34d1c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34d1c8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x34d1c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x34d1cc: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x34d1ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x34d1d0: 0x380c0  sll         $s0, $v1, 3
    ctx->pc = 0x34d1d0u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x34d1d4: 0x8c424090  lw          $v0, 0x4090($v0)
    ctx->pc = 0x34d1d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16528)));
    // 0x34d1d8: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x34d1d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x34d1dc: 0xc049c48  jal         func_127120
    ctx->pc = 0x34D1DCu;
    SET_GPR_U32(ctx, 31, 0x34D1E4u);
    ctx->pc = 0x34D1E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34D1DCu;
    // 0x34d1e0: 0x24440001  addiu       $a0, $v0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127120u, 0x34D1DCu, 0x34D1E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34D1E4u;
label_34d1e4:
    // 0x34d1e4: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x34d1e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x34d1e8: 0x2625001a  addiu       $a1, $s1, 0x1A
    ctx->pc = 0x34d1e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 26));
    // 0x34d1ec: 0x8c434090  lw          $v1, 0x4090($v0)
    ctx->pc = 0x34d1ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16528)));
    // 0x34d1f0: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x34d1f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x34d1f4: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x34d1f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x34d1f8: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x34d1f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x34d1fc: 0xa06007e0  sb          $zero, 0x7E0($v1)
    ctx->pc = 0x34d1fcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2016), (uint8_t)GPR_U32(ctx, 0));
    // 0x34d200: 0x8c424090  lw          $v0, 0x4090($v0)
    ctx->pc = 0x34d200u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16528)));
    // 0x34d204: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x34d204u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x34d208: 0xc049c48  jal         func_127120
    ctx->pc = 0x34D208u;
    SET_GPR_U32(ctx, 31, 0x34D210u);
    ctx->pc = 0x34D20Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34D208u;
    // 0x34d20c: 0x24440022  addiu       $a0, $v0, 0x22 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 34));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127120u, 0x34D208u, 0x34D210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34D210u;
label_34d210:
    // 0x34d210: 0x3c03003d  lui         $v1, 0x3D
    ctx->pc = 0x34d210u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)61 << 16));
    // 0x34d214: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x34d214u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x34d218: 0x8c634090  lw          $v1, 0x4090($v1)
    ctx->pc = 0x34d218u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16528)));
    // 0x34d21c: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x34d21cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x34d220: 0xa0600801  sb          $zero, 0x801($v1)
    ctx->pc = 0x34d220u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2049), (uint8_t)GPR_U32(ctx, 0));
    // 0x34d224: 0x8c424090  lw          $v0, 0x4090($v0)
    ctx->pc = 0x34d224u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16528)));
    // 0x34d228: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x34d228u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x34d22c: 0x24440044  addiu       $a0, $v0, 0x44
    ctx->pc = 0x34d22cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 68));
    // 0x34d230: 0xc0835cc  jal         func_20D730
    ctx->pc = 0x34D230u;
    SET_GPR_U32(ctx, 31, 0x34D238u);
    ctx->pc = 0x34D234u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34D230u;
    // 0x34d234: 0x24450001  addiu       $a1, $v0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20D730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20D730u, 0x34D230u, 0x34D238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34D238u;
label_34d238:
    // 0x34d238: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x34d238u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x34d23c: 0x8c424090  lw          $v0, 0x4090($v0)
    ctx->pc = 0x34d23cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16528)));
    // 0x34d240: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x34d240u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x34d244: 0x24440086  addiu       $a0, $v0, 0x86
    ctx->pc = 0x34d244u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 134));
    // 0x34d248: 0xc0835cc  jal         func_20D730
    ctx->pc = 0x34D248u;
    SET_GPR_U32(ctx, 31, 0x34D250u);
    ctx->pc = 0x34D24Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34D248u;
    // 0x34d24c: 0x24450022  addiu       $a1, $v0, 0x22 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 34));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20D730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20D730u, 0x34D248u, 0x34D250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34D250u;
label_34d250:
    // 0x34d250: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x34d250u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x34d254: 0x26830001  addiu       $v1, $s4, 0x1
    ctx->pc = 0x34d254u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x34d258: 0x3074ffff  andi        $s4, $v1, 0xFFFF
    ctx->pc = 0x34d258u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x34d25c: 0x282102a  slt         $v0, $s4, $v0
    ctx->pc = 0x34d25cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x34d260: 0x1440ffc1  bnez        $v0, . + 4 + (-0x3F << 2)
    ctx->pc = 0x34D260u;
    {
        const bool branch_taken_0x34d260 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x34d260) {
            ctx->pc = 0x34D168u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_34d168;
        }
    }
    ctx->pc = 0x34D268u;
label_34d268:
    // 0x34d268: 0x3c040035  lui         $a0, 0x35
    ctx->pc = 0x34d268u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
    // 0x34d26c: 0xc082674  jal         func_2099D0
    ctx->pc = 0x34D26Cu;
    SET_GPR_U32(ctx, 31, 0x34D274u);
    ctx->pc = 0x34D270u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34D26Cu;
    // 0x34d270: 0x2484d130  addiu       $a0, $a0, -0x2ED0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955312));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2099D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2099D0u, 0x34D26Cu, 0x34D274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34D274u;
label_34d274:
    // 0x34d274: 0xc0d34a8  jal         func_34D2A0
    ctx->pc = 0x34D274u;
    SET_GPR_U32(ctx, 31, 0x34D27Cu);
    ctx->pc = 0x34D2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34D2A0u, 0x34D274u, 0x34D27Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34D27Cu;
label_34d27c:
    // 0x34d27c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x34d27cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x34d280: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x34d280u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x34d284: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x34d284u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x34d288: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x34d288u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x34d28c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x34d28cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x34d290: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x34d290u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34d294: 0x3e00008  jr          $ra
    ctx->pc = 0x34D294u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34D298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34D294u;
        // 0x34d298: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34D294u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34D29Cu;
    // 0x34d29c: 0x0  nop
    ctx->pc = 0x34d29cu;
    // NOP
}
